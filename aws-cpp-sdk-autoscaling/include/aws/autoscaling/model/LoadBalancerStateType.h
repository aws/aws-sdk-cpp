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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_AUTOSCALING_API LoadBalancerStateType
  {
  public:
    LoadBalancerStateType();
    LoadBalancerStateType(const Aws::Utils::Xml::XmlNode& xmlNode);
    LoadBalancerStateType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }
    
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    
    inline LoadBalancerStateType&  WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    
    inline LoadBalancerStateType& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}

    
    inline const Aws::String& GetState() const{ return m_state; }
    
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    
    inline LoadBalancerStateType&  WithState(const Aws::String& value) { SetState(value); return *this;}

    
    inline LoadBalancerStateType& WithState(const char* value) { SetState(value); return *this;}

  private:
    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;
    Aws::String m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
