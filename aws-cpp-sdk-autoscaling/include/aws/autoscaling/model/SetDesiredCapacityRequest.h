/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for SetDesiredCapacity.</p>
   */
  class AWS_AUTOSCALING_API SetDesiredCapacityRequest : public AutoScalingRequest
  {
  public:
    SetDesiredCapacityRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline SetDesiredCapacityRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline SetDesiredCapacityRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline SetDesiredCapacityRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The number of EC2 instances that should be running in the Auto Scaling
     * group.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }

    /**
     * <p>The number of EC2 instances that should be running in the Auto Scaling
     * group.</p>
     */
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /**
     * <p>The number of EC2 instances that should be running in the Auto Scaling
     * group.</p>
     */
    inline SetDesiredCapacityRequest& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}

    /**
     * <p>By default, <code>SetDesiredCapacity</code> overrides any cooldown period
     * associated with the Auto Scaling group. Specify <code>True</code> to make Auto
     * Scaling to wait for the cool-down period associated with the Auto Scaling group
     * to complete before initiating a scaling activity to set your Auto Scaling group
     * to its new capacity.</p>
     */
    inline bool GetHonorCooldown() const{ return m_honorCooldown; }

    /**
     * <p>By default, <code>SetDesiredCapacity</code> overrides any cooldown period
     * associated with the Auto Scaling group. Specify <code>True</code> to make Auto
     * Scaling to wait for the cool-down period associated with the Auto Scaling group
     * to complete before initiating a scaling activity to set your Auto Scaling group
     * to its new capacity.</p>
     */
    inline void SetHonorCooldown(bool value) { m_honorCooldownHasBeenSet = true; m_honorCooldown = value; }

    /**
     * <p>By default, <code>SetDesiredCapacity</code> overrides any cooldown period
     * associated with the Auto Scaling group. Specify <code>True</code> to make Auto
     * Scaling to wait for the cool-down period associated with the Auto Scaling group
     * to complete before initiating a scaling activity to set your Auto Scaling group
     * to its new capacity.</p>
     */
    inline SetDesiredCapacityRequest& WithHonorCooldown(bool value) { SetHonorCooldown(value); return *this;}

  private:
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    int m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet;
    bool m_honorCooldown;
    bool m_honorCooldownHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
