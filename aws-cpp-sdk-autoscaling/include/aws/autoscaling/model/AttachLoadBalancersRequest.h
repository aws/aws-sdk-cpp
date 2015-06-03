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
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /*
  */
  class AWS_AUTOSCALING_API AttachLoadBalancersRequest : public AutoScalingRequest
  {
  public:
    AttachLoadBalancersRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    
    inline AttachLoadBalancersRequest&  WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    
    inline AttachLoadBalancersRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetLoadBalancerNames() const{ return m_loadBalancerNames; }
    
    inline void SetLoadBalancerNames(const Aws::Vector<Aws::String>& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = value; }

    
    inline AttachLoadBalancersRequest&  WithLoadBalancerNames(const Aws::Vector<Aws::String>& value) { SetLoadBalancerNames(value); return *this;}

    
    inline AttachLoadBalancersRequest& AddLoadBalancerNames(const Aws::String& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }

    
    inline AttachLoadBalancersRequest& AddLoadBalancerNames(const char* value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }

  private:
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::Vector<Aws::String> m_loadBalancerNames;
    bool m_loadBalancerNamesHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
