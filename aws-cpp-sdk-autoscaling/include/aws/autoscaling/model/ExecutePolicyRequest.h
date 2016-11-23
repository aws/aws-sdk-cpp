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
   * <p>Contains the parameters for ExecutePolicy.</p>
   */
  class AWS_AUTOSCALING_API ExecutePolicyRequest : public AutoScalingRequest
  {
  public:
    ExecutePolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline ExecutePolicyRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline ExecutePolicyRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline ExecutePolicyRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name or ARN of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name or ARN of the policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name or ARN of the policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name or ARN of the policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name or ARN of the policy.</p>
     */
    inline ExecutePolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name or ARN of the policy.</p>
     */
    inline ExecutePolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name or ARN of the policy.</p>
     */
    inline ExecutePolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>If this parameter is true, Auto Scaling waits for the cooldown period to
     * complete before executing the policy. Otherwise, Auto Scaling executes the
     * policy without waiting for the cooldown period to complete.</p> <p>This
     * parameter is not supported if the policy type is <code>StepScaling</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/Cooldown.html">Auto
     * Scaling Cooldowns</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline bool GetHonorCooldown() const{ return m_honorCooldown; }

    /**
     * <p>If this parameter is true, Auto Scaling waits for the cooldown period to
     * complete before executing the policy. Otherwise, Auto Scaling executes the
     * policy without waiting for the cooldown period to complete.</p> <p>This
     * parameter is not supported if the policy type is <code>StepScaling</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/Cooldown.html">Auto
     * Scaling Cooldowns</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetHonorCooldown(bool value) { m_honorCooldownHasBeenSet = true; m_honorCooldown = value; }

    /**
     * <p>If this parameter is true, Auto Scaling waits for the cooldown period to
     * complete before executing the policy. Otherwise, Auto Scaling executes the
     * policy without waiting for the cooldown period to complete.</p> <p>This
     * parameter is not supported if the policy type is <code>StepScaling</code>.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/Cooldown.html">Auto
     * Scaling Cooldowns</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline ExecutePolicyRequest& WithHonorCooldown(bool value) { SetHonorCooldown(value); return *this;}

    /**
     * <p>The metric value to compare to <code>BreachThreshold</code>. This enables you
     * to execute a policy of type <code>StepScaling</code> and determine which step
     * adjustment to use. For example, if the breach threshold is 50 and you want to
     * use a step adjustment with a lower bound of 0 and an upper bound of 10, you can
     * set the metric value to 59.</p> <p>If you specify a metric value that doesn't
     * correspond to a step adjustment for the policy, the call returns an error.</p>
     * <p>This parameter is required if the policy type is <code>StepScaling</code> and
     * not supported otherwise.</p>
     */
    inline double GetMetricValue() const{ return m_metricValue; }

    /**
     * <p>The metric value to compare to <code>BreachThreshold</code>. This enables you
     * to execute a policy of type <code>StepScaling</code> and determine which step
     * adjustment to use. For example, if the breach threshold is 50 and you want to
     * use a step adjustment with a lower bound of 0 and an upper bound of 10, you can
     * set the metric value to 59.</p> <p>If you specify a metric value that doesn't
     * correspond to a step adjustment for the policy, the call returns an error.</p>
     * <p>This parameter is required if the policy type is <code>StepScaling</code> and
     * not supported otherwise.</p>
     */
    inline void SetMetricValue(double value) { m_metricValueHasBeenSet = true; m_metricValue = value; }

    /**
     * <p>The metric value to compare to <code>BreachThreshold</code>. This enables you
     * to execute a policy of type <code>StepScaling</code> and determine which step
     * adjustment to use. For example, if the breach threshold is 50 and you want to
     * use a step adjustment with a lower bound of 0 and an upper bound of 10, you can
     * set the metric value to 59.</p> <p>If you specify a metric value that doesn't
     * correspond to a step adjustment for the policy, the call returns an error.</p>
     * <p>This parameter is required if the policy type is <code>StepScaling</code> and
     * not supported otherwise.</p>
     */
    inline ExecutePolicyRequest& WithMetricValue(double value) { SetMetricValue(value); return *this;}

    /**
     * <p>The breach threshold for the alarm.</p> <p>This parameter is required if the
     * policy type is <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline double GetBreachThreshold() const{ return m_breachThreshold; }

    /**
     * <p>The breach threshold for the alarm.</p> <p>This parameter is required if the
     * policy type is <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline void SetBreachThreshold(double value) { m_breachThresholdHasBeenSet = true; m_breachThreshold = value; }

    /**
     * <p>The breach threshold for the alarm.</p> <p>This parameter is required if the
     * policy type is <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline ExecutePolicyRequest& WithBreachThreshold(double value) { SetBreachThreshold(value); return *this;}

  private:
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    bool m_honorCooldown;
    bool m_honorCooldownHasBeenSet;
    double m_metricValue;
    bool m_metricValueHasBeenSet;
    double m_breachThreshold;
    bool m_breachThresholdHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
