/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_ELASTICBEANSTALK_API CPUUtilization
  {
  public:
    CPUUtilization();
    CPUUtilization(const Aws::Utils::Xml::XmlNode& xmlNode);
    CPUUtilization& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline double GetUser() const{ return m_user; }
    
    inline void SetUser(double value) { m_userHasBeenSet = true; m_user = value; }

    
    inline CPUUtilization&  WithUser(double value) { SetUser(value); return *this;}

    
    inline double GetNice() const{ return m_nice; }
    
    inline void SetNice(double value) { m_niceHasBeenSet = true; m_nice = value; }

    
    inline CPUUtilization&  WithNice(double value) { SetNice(value); return *this;}

    
    inline double GetSystem() const{ return m_system; }
    
    inline void SetSystem(double value) { m_systemHasBeenSet = true; m_system = value; }

    
    inline CPUUtilization&  WithSystem(double value) { SetSystem(value); return *this;}

    
    inline double GetIdle() const{ return m_idle; }
    
    inline void SetIdle(double value) { m_idleHasBeenSet = true; m_idle = value; }

    
    inline CPUUtilization&  WithIdle(double value) { SetIdle(value); return *this;}

    
    inline double GetIOWait() const{ return m_iOWait; }
    
    inline void SetIOWait(double value) { m_iOWaitHasBeenSet = true; m_iOWait = value; }

    
    inline CPUUtilization&  WithIOWait(double value) { SetIOWait(value); return *this;}

    
    inline double GetIRQ() const{ return m_iRQ; }
    
    inline void SetIRQ(double value) { m_iRQHasBeenSet = true; m_iRQ = value; }

    
    inline CPUUtilization&  WithIRQ(double value) { SetIRQ(value); return *this;}

    
    inline double GetSoftIRQ() const{ return m_softIRQ; }
    
    inline void SetSoftIRQ(double value) { m_softIRQHasBeenSet = true; m_softIRQ = value; }

    
    inline CPUUtilization&  WithSoftIRQ(double value) { SetSoftIRQ(value); return *this;}

  private:
    double m_user;
    bool m_userHasBeenSet;
    double m_nice;
    bool m_niceHasBeenSet;
    double m_system;
    bool m_systemHasBeenSet;
    double m_idle;
    bool m_idleHasBeenSet;
    double m_iOWait;
    bool m_iOWaitHasBeenSet;
    double m_iRQ;
    bool m_iRQHasBeenSet;
    double m_softIRQ;
    bool m_softIRQHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
