/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class SetDesiredCapacityRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API SetDesiredCapacityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetDesiredCapacity"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }
    inline SetDesiredCapacityRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline SetDesiredCapacityRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline SetDesiredCapacityRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired capacity is the initial capacity of the Auto Scaling group after
     * this operation completes and the capacity it attempts to maintain.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }
    inline SetDesiredCapacityRequest& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon EC2 Auto Scaling waits for the cooldown period to
     * complete before initiating a scaling activity to set your Auto Scaling group to
     * its new capacity. By default, Amazon EC2 Auto Scaling does not honor the
     * cooldown period during manual scaling activities.</p>
     */
    inline bool GetHonorCooldown() const{ return m_honorCooldown; }
    inline bool HonorCooldownHasBeenSet() const { return m_honorCooldownHasBeenSet; }
    inline void SetHonorCooldown(bool value) { m_honorCooldownHasBeenSet = true; m_honorCooldown = value; }
    inline SetDesiredCapacityRequest& WithHonorCooldown(bool value) { SetHonorCooldown(value); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    int m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet = false;

    bool m_honorCooldown;
    bool m_honorCooldownHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
