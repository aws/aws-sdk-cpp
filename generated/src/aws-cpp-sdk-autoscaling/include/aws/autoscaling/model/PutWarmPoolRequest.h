/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/WarmPoolState.h>
#include <aws/autoscaling/model/InstanceReusePolicy.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class PutWarmPoolRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API PutWarmPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutWarmPool"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutWarmPoolRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutWarmPoolRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutWarmPoolRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>Specifies the maximum number of instances that are allowed to be in the warm
     * pool or in any state except <code>Terminated</code> for the Auto Scaling group.
     * This is an optional property. Specify it only if you do not want the warm pool
     * size to be determined by the difference between the group's maximum capacity and
     * its desired capacity. </p>  <p>If a value for
     * <code>MaxGroupPreparedCapacity</code> is not specified, Amazon EC2 Auto Scaling
     * launches and maintains the difference between the group's maximum capacity and
     * its desired capacity. If you specify a value for
     * <code>MaxGroupPreparedCapacity</code>, Amazon EC2 Auto Scaling uses the
     * difference between the <code>MaxGroupPreparedCapacity</code> and the desired
     * capacity instead. </p> <p>The size of the warm pool is dynamic. Only when
     * <code>MaxGroupPreparedCapacity</code> and <code>MinSize</code> are set to the
     * same value does the warm pool have an absolute size.</p>  <p>If the
     * desired capacity of the Auto Scaling group is higher than the
     * <code>MaxGroupPreparedCapacity</code>, the capacity of the warm pool is 0,
     * unless you specify a value for <code>MinSize</code>. To remove a value that you
     * previously set, include the property but specify -1 for the value. </p>
     */
    inline int GetMaxGroupPreparedCapacity() const{ return m_maxGroupPreparedCapacity; }

    /**
     * <p>Specifies the maximum number of instances that are allowed to be in the warm
     * pool or in any state except <code>Terminated</code> for the Auto Scaling group.
     * This is an optional property. Specify it only if you do not want the warm pool
     * size to be determined by the difference between the group's maximum capacity and
     * its desired capacity. </p>  <p>If a value for
     * <code>MaxGroupPreparedCapacity</code> is not specified, Amazon EC2 Auto Scaling
     * launches and maintains the difference between the group's maximum capacity and
     * its desired capacity. If you specify a value for
     * <code>MaxGroupPreparedCapacity</code>, Amazon EC2 Auto Scaling uses the
     * difference between the <code>MaxGroupPreparedCapacity</code> and the desired
     * capacity instead. </p> <p>The size of the warm pool is dynamic. Only when
     * <code>MaxGroupPreparedCapacity</code> and <code>MinSize</code> are set to the
     * same value does the warm pool have an absolute size.</p>  <p>If the
     * desired capacity of the Auto Scaling group is higher than the
     * <code>MaxGroupPreparedCapacity</code>, the capacity of the warm pool is 0,
     * unless you specify a value for <code>MinSize</code>. To remove a value that you
     * previously set, include the property but specify -1 for the value. </p>
     */
    inline bool MaxGroupPreparedCapacityHasBeenSet() const { return m_maxGroupPreparedCapacityHasBeenSet; }

    /**
     * <p>Specifies the maximum number of instances that are allowed to be in the warm
     * pool or in any state except <code>Terminated</code> for the Auto Scaling group.
     * This is an optional property. Specify it only if you do not want the warm pool
     * size to be determined by the difference between the group's maximum capacity and
     * its desired capacity. </p>  <p>If a value for
     * <code>MaxGroupPreparedCapacity</code> is not specified, Amazon EC2 Auto Scaling
     * launches and maintains the difference between the group's maximum capacity and
     * its desired capacity. If you specify a value for
     * <code>MaxGroupPreparedCapacity</code>, Amazon EC2 Auto Scaling uses the
     * difference between the <code>MaxGroupPreparedCapacity</code> and the desired
     * capacity instead. </p> <p>The size of the warm pool is dynamic. Only when
     * <code>MaxGroupPreparedCapacity</code> and <code>MinSize</code> are set to the
     * same value does the warm pool have an absolute size.</p>  <p>If the
     * desired capacity of the Auto Scaling group is higher than the
     * <code>MaxGroupPreparedCapacity</code>, the capacity of the warm pool is 0,
     * unless you specify a value for <code>MinSize</code>. To remove a value that you
     * previously set, include the property but specify -1 for the value. </p>
     */
    inline void SetMaxGroupPreparedCapacity(int value) { m_maxGroupPreparedCapacityHasBeenSet = true; m_maxGroupPreparedCapacity = value; }

    /**
     * <p>Specifies the maximum number of instances that are allowed to be in the warm
     * pool or in any state except <code>Terminated</code> for the Auto Scaling group.
     * This is an optional property. Specify it only if you do not want the warm pool
     * size to be determined by the difference between the group's maximum capacity and
     * its desired capacity. </p>  <p>If a value for
     * <code>MaxGroupPreparedCapacity</code> is not specified, Amazon EC2 Auto Scaling
     * launches and maintains the difference between the group's maximum capacity and
     * its desired capacity. If you specify a value for
     * <code>MaxGroupPreparedCapacity</code>, Amazon EC2 Auto Scaling uses the
     * difference between the <code>MaxGroupPreparedCapacity</code> and the desired
     * capacity instead. </p> <p>The size of the warm pool is dynamic. Only when
     * <code>MaxGroupPreparedCapacity</code> and <code>MinSize</code> are set to the
     * same value does the warm pool have an absolute size.</p>  <p>If the
     * desired capacity of the Auto Scaling group is higher than the
     * <code>MaxGroupPreparedCapacity</code>, the capacity of the warm pool is 0,
     * unless you specify a value for <code>MinSize</code>. To remove a value that you
     * previously set, include the property but specify -1 for the value. </p>
     */
    inline PutWarmPoolRequest& WithMaxGroupPreparedCapacity(int value) { SetMaxGroupPreparedCapacity(value); return *this;}


    /**
     * <p>Specifies the minimum number of instances to maintain in the warm pool. This
     * helps you to ensure that there is always a certain number of warmed instances
     * available to handle traffic spikes. Defaults to 0 if not specified.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>Specifies the minimum number of instances to maintain in the warm pool. This
     * helps you to ensure that there is always a certain number of warmed instances
     * available to handle traffic spikes. Defaults to 0 if not specified.</p>
     */
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }

    /**
     * <p>Specifies the minimum number of instances to maintain in the warm pool. This
     * helps you to ensure that there is always a certain number of warmed instances
     * available to handle traffic spikes. Defaults to 0 if not specified.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>Specifies the minimum number of instances to maintain in the warm pool. This
     * helps you to ensure that there is always a certain number of warmed instances
     * available to handle traffic spikes. Defaults to 0 if not specified.</p>
     */
    inline PutWarmPoolRequest& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>Sets the instance state to transition to after the lifecycle actions are
     * complete. Default is <code>Stopped</code>.</p>
     */
    inline const WarmPoolState& GetPoolState() const{ return m_poolState; }

    /**
     * <p>Sets the instance state to transition to after the lifecycle actions are
     * complete. Default is <code>Stopped</code>.</p>
     */
    inline bool PoolStateHasBeenSet() const { return m_poolStateHasBeenSet; }

    /**
     * <p>Sets the instance state to transition to after the lifecycle actions are
     * complete. Default is <code>Stopped</code>.</p>
     */
    inline void SetPoolState(const WarmPoolState& value) { m_poolStateHasBeenSet = true; m_poolState = value; }

    /**
     * <p>Sets the instance state to transition to after the lifecycle actions are
     * complete. Default is <code>Stopped</code>.</p>
     */
    inline void SetPoolState(WarmPoolState&& value) { m_poolStateHasBeenSet = true; m_poolState = std::move(value); }

    /**
     * <p>Sets the instance state to transition to after the lifecycle actions are
     * complete. Default is <code>Stopped</code>.</p>
     */
    inline PutWarmPoolRequest& WithPoolState(const WarmPoolState& value) { SetPoolState(value); return *this;}

    /**
     * <p>Sets the instance state to transition to after the lifecycle actions are
     * complete. Default is <code>Stopped</code>.</p>
     */
    inline PutWarmPoolRequest& WithPoolState(WarmPoolState&& value) { SetPoolState(std::move(value)); return *this;}


    /**
     * <p>Indicates whether instances in the Auto Scaling group can be returned to the
     * warm pool on scale in. The default is to terminate instances in the Auto Scaling
     * group when the group scales in.</p>
     */
    inline const InstanceReusePolicy& GetInstanceReusePolicy() const{ return m_instanceReusePolicy; }

    /**
     * <p>Indicates whether instances in the Auto Scaling group can be returned to the
     * warm pool on scale in. The default is to terminate instances in the Auto Scaling
     * group when the group scales in.</p>
     */
    inline bool InstanceReusePolicyHasBeenSet() const { return m_instanceReusePolicyHasBeenSet; }

    /**
     * <p>Indicates whether instances in the Auto Scaling group can be returned to the
     * warm pool on scale in. The default is to terminate instances in the Auto Scaling
     * group when the group scales in.</p>
     */
    inline void SetInstanceReusePolicy(const InstanceReusePolicy& value) { m_instanceReusePolicyHasBeenSet = true; m_instanceReusePolicy = value; }

    /**
     * <p>Indicates whether instances in the Auto Scaling group can be returned to the
     * warm pool on scale in. The default is to terminate instances in the Auto Scaling
     * group when the group scales in.</p>
     */
    inline void SetInstanceReusePolicy(InstanceReusePolicy&& value) { m_instanceReusePolicyHasBeenSet = true; m_instanceReusePolicy = std::move(value); }

    /**
     * <p>Indicates whether instances in the Auto Scaling group can be returned to the
     * warm pool on scale in. The default is to terminate instances in the Auto Scaling
     * group when the group scales in.</p>
     */
    inline PutWarmPoolRequest& WithInstanceReusePolicy(const InstanceReusePolicy& value) { SetInstanceReusePolicy(value); return *this;}

    /**
     * <p>Indicates whether instances in the Auto Scaling group can be returned to the
     * warm pool on scale in. The default is to terminate instances in the Auto Scaling
     * group when the group scales in.</p>
     */
    inline PutWarmPoolRequest& WithInstanceReusePolicy(InstanceReusePolicy&& value) { SetInstanceReusePolicy(std::move(value)); return *this;}

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    int m_maxGroupPreparedCapacity;
    bool m_maxGroupPreparedCapacityHasBeenSet = false;

    int m_minSize;
    bool m_minSizeHasBeenSet = false;

    WarmPoolState m_poolState;
    bool m_poolStateHasBeenSet = false;

    InstanceReusePolicy m_instanceReusePolicy;
    bool m_instanceReusePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
