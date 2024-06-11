﻿/**
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
  class ExecutePolicyRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API ExecutePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecutePolicy"; }

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
    inline ExecutePolicyRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline ExecutePolicyRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline ExecutePolicyRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline ExecutePolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline ExecutePolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline ExecutePolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon EC2 Auto Scaling waits for the cooldown period to
     * complete before executing the policy.</p> <p>Valid only if the policy type is
     * <code>SimpleScaling</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling
     * cooldowns for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline bool GetHonorCooldown() const{ return m_honorCooldown; }
    inline bool HonorCooldownHasBeenSet() const { return m_honorCooldownHasBeenSet; }
    inline void SetHonorCooldown(bool value) { m_honorCooldownHasBeenSet = true; m_honorCooldown = value; }
    inline ExecutePolicyRequest& WithHonorCooldown(bool value) { SetHonorCooldown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric value to compare to <code>BreachThreshold</code>. This enables you
     * to execute a policy of type <code>StepScaling</code> and determine which step
     * adjustment to use. For example, if the breach threshold is 50 and you want to
     * use a step adjustment with a lower bound of 0 and an upper bound of 10, you can
     * set the metric value to 59.</p> <p>If you specify a metric value that doesn't
     * correspond to a step adjustment for the policy, the call returns an error.</p>
     * <p>Required if the policy type is <code>StepScaling</code> and not supported
     * otherwise.</p>
     */
    inline double GetMetricValue() const{ return m_metricValue; }
    inline bool MetricValueHasBeenSet() const { return m_metricValueHasBeenSet; }
    inline void SetMetricValue(double value) { m_metricValueHasBeenSet = true; m_metricValue = value; }
    inline ExecutePolicyRequest& WithMetricValue(double value) { SetMetricValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The breach threshold for the alarm.</p> <p>Required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline double GetBreachThreshold() const{ return m_breachThreshold; }
    inline bool BreachThresholdHasBeenSet() const { return m_breachThresholdHasBeenSet; }
    inline void SetBreachThreshold(double value) { m_breachThresholdHasBeenSet = true; m_breachThreshold = value; }
    inline ExecutePolicyRequest& WithBreachThreshold(double value) { SetBreachThreshold(value); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    bool m_honorCooldown;
    bool m_honorCooldownHasBeenSet = false;

    double m_metricValue;
    bool m_metricValueHasBeenSet = false;

    double m_breachThreshold;
    bool m_breachThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
