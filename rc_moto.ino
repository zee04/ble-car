#include <AFMotor.h>
AF_DCMotor m1(1);
AF_DCMotor m2(2);
AF_DCMotor m3(3);
AF_DCMotor m4(4);
char bt;
void setup()
{
 
  Serial.begin(9600);
}

void loop() {
   if (Serial.available())
   {
  
    bt = Serial.read();
    
  }
  switch (bt)
  {
    case 'F':
         m1.setSpeed(255); 
  m1.run(FORWARD); 
  m2.setSpeed(255);
  m2.run(FORWARD);
  m3.setSpeed(255);
 m3.run(FORWARD);
 m4.setSpeed(255);
 m4.run(FORWARD);
      break;
    
    case 'B':
      m1.setSpeed(155);
  m1.run(BACKWARD); 
  m2.setSpeed(155);
  m2.run(BACKWARD);
  m3.setSpeed(155);
  m3.run(BACKWARD); 
  m4.setSpeed(155);
  m4.run(BACKWARD);
      break;
    
    case 'L':
       m1.setSpeed(155);
  m1.run(BACKWARD); 
  m2.setSpeed(155); 
  m2.run(BACKWARD);
m3.setSpeed(155);
  m3.run(FORWARD);
  m4.setSpeed(155); 
  m4.run(FORWARD);
      break;
    
    case 'R':
      m3.setSpeed(155);
  m3.run(BACKWARD); 
  m4.setSpeed(155); 
  m4.run(BACKWARD);
m1.setSpeed(155);
  m1.run(FORWARD); 
  m2.setSpeed(155); 
  m2.run(FORWARD);
      break;
    
    case 'G':
       m1.setSpeed(0);
  m1.run(RELEASE); 
  m2.setSpeed(30); 
  m2.run(FORWARD);
m3.setSpeed(150);
  m3.run(FORWARD); 
  m4.setSpeed(100); 
  m4.run(FORWARD);
      break;
    
    case 'I':
      m1.setSpeed(100);
  m1.run(FORWARD); 
  m2.setSpeed(150); 
  m2.run(FORWARD);
m3.setSpeed(30);
  m3.run(FORWARD); 
  m4.setSpeed(0); 
  m4.run(RELEASE);
      break;
    
    case 'H':
         m1.setSpeed(30);
 m1.run(BACKWARD); 
  m2.setSpeed(0); 
  m2.run(RELEASE);
m3.setSpeed(100);
  m3.run(BACKWARD); 
  m4.setSpeed(150); 
  m4.run(BACKWARD);
      break;
    
    case 'J':
      m1.setSpeed(150);
  m1.run(BACKWARD); 
  m2.setSpeed(100); 
  m2.run(BACKWARD);
m3.setSpeed(0);
  m3.run(RELEASE);
  m4.setSpeed(30);
  m4.run(BACKWARD); 
  
      break;
    
    case 'S':
         m1.setSpeed(0);
   m1.run(RELEASE);
  m2.setSpeed(0); 
  m2.run(RELEASE);
m3.setSpeed(0);
 m3.run(RELEASE);
  m4.setSpeed(0); 
  m4.run(RELEASE);
      break;
    
    default:
         m1.setSpeed(0);
   m1.run(RELEASE);
  m2.setSpeed(0); 
  m2.run(RELEASE);
m3.setSpeed(0);
 m3.run(RELEASE);
  m4.setSpeed(0); 
  m4.run(RELEASE);
  }
}





  
