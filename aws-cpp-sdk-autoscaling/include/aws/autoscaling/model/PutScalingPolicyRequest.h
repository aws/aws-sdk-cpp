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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/StepAdjustment.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for PutScalingPolicy.</p>
   */
  class AWS_AUTOSCALING_API PutScalingPolicyRequest : public AutoScalingRequest
  {
  public:
    PutScalingPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name or ARN of the group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name or ARN of the group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name or ARN of the group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name or ARN of the group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name or ARN of the group.</p>
     */
    inline PutScalingPolicyRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name or ARN of the group.</p>
     */
    inline PutScalingPolicyRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name or ARN of the group.</p>
     */
    inline PutScalingPolicyRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy type. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>. If the policy type is null, the value is treated as
     * <code>SimpleScaling</code>.</p>
     */
    inline const Aws::String& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The policy type. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>. If the policy type is null, the value is treated as
     * <code>SimpleScaling</code>.</p>
     */
    inline void SetPolicyType(const Aws::String& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The policy type. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>. If the policy type is null, the value is treated as
     * <code>SimpleScaling</code>.</p>
     */
    inline void SetPolicyType(Aws::String&& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The policy type. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>. If the policy type is null, the value is treated as
     * <code>SimpleScaling</code>.</p>
     */
    inline void SetPolicyType(const char* value) { m_policyTypeHasBeenSet = true; m_policyType.assign(value); }

    /**
     * <p>The policy type. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>. If the policy type is null, the value is treated as
     * <code>SimpleScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyType(const Aws::String& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The policy type. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>. If the policy type is null, the value is treated as
     * <code>SimpleScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyType(Aws::String&& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The policy type. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>. If the policy type is null, the value is treated as
     * <code>SimpleScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyType(const char* value) { SetPolicyType(value); return *this;}

    /**
     * <p>The adjustment type. Valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetAdjustmentType() const{ return m_adjustmentType; }

    /**
     * <p>The adjustment type. Valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetAdjustmentType(const Aws::String& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = value; }

    /**
     * <p>The adjustment type. Valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetAdjustmentType(Aws::String&& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = value; }

    /**
     * <p>The adjustment type. Valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetAdjustmentType(const char* value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType.assign(value); }

    /**
     * <p>The adjustment type. Valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline PutScalingPolicyRequest& WithAdjustmentType(const Aws::String& value) { SetAdjustmentType(value); return *this;}

    /**
     * <p>The adjustment type. Valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline PutScalingPolicyRequest& WithAdjustmentType(Aws::String&& value) { SetAdjustmentType(value); return *this;}

    /**
     * <p>The adjustment type. Valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline PutScalingPolicyRequest& WithAdjustmentType(const char* value) { SetAdjustmentType(value); return *this;}

    /**
     * <p>Available for backward compatibility. Use <code>MinAdjustmentMagnitude</code>
     * instead.</p>
     */
    inline int GetMinAdjustmentStep() const{ return m_minAdjustmentStep; }

    /**
     * <p>Available for backward compatibility. Use <code>MinAdjustmentMagnitude</code>
     * instead.</p>
     */
    inline void SetMinAdjustmentStep(int value) { m_minAdjustmentStepHasBeenSet = true; m_minAdjustmentStep = value; }

    /**
     * <p>Available for backward compatibility. Use <code>MinAdjustmentMagnitude</code>
     * instead.</p>
     */
    inline PutScalingPolicyRequest& WithMinAdjustmentStep(int value) { SetMinAdjustmentStep(value); return *this;}

    /**
     * <p>The minimum number of instances to scale. If the value of
     * <code>AdjustmentType</code> is <code>PercentChangeInCapacity</code>, the scaling
     * policy changes the <code>DesiredCapacity</code> of the Auto Scaling group by at
     * least this many instances. Otherwise, the error is
     * <code>ValidationError</code>.</p>
     */
    inline int GetMinAdjustmentMagnitude() const{ return m_minAdjustmentMagnitude; }

    /**
     * <p>The minimum number of instances to scale. If the value of
     * <code>AdjustmentType</code> is <code>PercentChangeInCapacity</code>, the scaling
     * policy changes the <code>DesiredCapacity</code> of the Auto Scaling group by at
     * least this many instances. Otherwise, the error is
     * <code>ValidationError</code>.</p>
     */
    inline void SetMinAdjustmentMagnitude(int value) { m_minAdjustmentMagnitudeHasBeenSet = true; m_minAdjustmentMagnitude = value; }

    /**
     * <p>The minimum number of instances to scale. If the value of
     * <code>AdjustmentType</code> is <code>PercentChangeInCapacity</code>, the scaling
     * policy changes the <code>DesiredCapacity</code> of the Auto Scaling group by at
     * least this many instances. Otherwise, the error is
     * <code>ValidationError</code>.</p>
     */
    inline PutScalingPolicyRequest& WithMinAdjustmentMagnitude(int value) { SetMinAdjustmentMagnitude(value); return *this;}

    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p> <p>This parameter is required if the policy type is
     * <code>SimpleScaling</code> and not supported otherwise.</p>
     */
    inline int GetScalingAdjustment() const{ return m_scalingAdjustment; }

    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p> <p>This parameter is required if the policy type is
     * <code>SimpleScaling</code> and not supported otherwise.</p>
     */
    inline void SetScalingAdjustment(int value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }

    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p> <p>This parameter is required if the policy type is
     * <code>SimpleScaling</code> and not supported otherwise.</p>
     */
    inline PutScalingPolicyRequest& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes and before
     * the next scaling activity can start. If this parameter is not specified, the
     * default cooldown period for the group applies.</p> <p>This parameter is not
     * supported unless the policy type is <code>SimpleScaling</code>.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/Cooldown.html">Auto
     * Scaling Cooldowns</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline int GetCooldown() const{ return m_cooldown; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes and before
     * the next scaling activity can start. If this parameter is not specified, the
     * default cooldown period for the group applies.</p> <p>This parameter is not
     * supported unless the policy type is <code>SimpleScaling</code>.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/Cooldown.html">Auto
     * Scaling Cooldowns</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetCooldown(int value) { m_cooldownHasBeenSet = true; m_cooldown = value; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes and before
     * the next scaling activity can start. If this parameter is not specified, the
     * default cooldown period for the group applies.</p> <p>This parameter is not
     * supported unless the policy type is <code>SimpleScaling</code>.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/Cooldown.html">Auto
     * Scaling Cooldowns</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline PutScalingPolicyRequest& WithCooldown(int value) { SetCooldown(value); return *this;}

    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is not supported if the policy type is
     * <code>SimpleScaling</code>.</p>
     */
    inline const Aws::String& GetMetricAggregationType() const{ return m_metricAggregationType; }

    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is not supported if the policy type is
     * <code>SimpleScaling</code>.</p>
     */
    inline void SetMetricAggregationType(const Aws::String& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = value; }

    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is not supported if the policy type is
     * <code>SimpleScaling</code>.</p>
     */
    inline void SetMetricAggregationType(Aws::String&& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = value; }

    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is not supported if the policy type is
     * <code>SimpleScaling</code>.</p>
     */
    inline void SetMetricAggregationType(const char* value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType.assign(value); }

    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is not supported if the policy type is
     * <code>SimpleScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithMetricAggregationType(const Aws::String& value) { SetMetricAggregationType(value); return *this;}

    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is not supported if the policy type is
     * <code>SimpleScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithMetricAggregationType(Aws::String&& value) { SetMetricAggregationType(value); return *this;}

    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is not supported if the policy type is
     * <code>SimpleScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithMetricAggregationType(const char* value) { SetMetricAggregationType(value); return *this;}

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline const Aws::Vector<StepAdjustment>& GetStepAdjustments() const{ return m_stepAdjustments; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline void SetStepAdjustments(const Aws::Vector<StepAdjustment>& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = value; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline void SetStepAdjustments(Aws::Vector<StepAdjustment>&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = value; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline PutScalingPolicyRequest& WithStepAdjustments(const Aws::Vector<StepAdjustment>& value) { SetStepAdjustments(value); return *this;}

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline PutScalingPolicyRequest& WithStepAdjustments(Aws::Vector<StepAdjustment>&& value) { SetStepAdjustments(value); return *this;}

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline PutScalingPolicyRequest& AddStepAdjustments(const StepAdjustment& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(value); return *this; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline PutScalingPolicyRequest& AddStepAdjustments(StepAdjustment&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(value); return *this; }

    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics. The default is to use the value specified
     * for the default cooldown period for the group.</p> <p>This parameter is not
     * supported if the policy type is <code>SimpleScaling</code>.</p>
     */
    inline int GetEstimatedInstanceWarmup() const{ return m_estimatedInstanceWarmup; }

    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics. The default is to use the value specified
     * for the default cooldown period for the group.</p> <p>This parameter is not
     * supported if the policy type is <code>SimpleScaling</code>.</p>
     */
    inline void SetEstimatedInstanceWarmup(int value) { m_estimatedInstanceWarmupHasBeenSet = true; m_estimatedInstanceWarmup = value; }

    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics. The default is to use the value specified
     * for the default cooldown period for the group.</p> <p>This parameter is not
     * supported if the policy type is <code>SimpleScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithEstimatedInstanceWarmup(int value) { SetEstimatedInstanceWarmup(value); return *this;}

  private:
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    Aws::String m_policyType;
    bool m_policyTypeHasBeenSet;
    Aws::String m_adjustmentType;
    bool m_adjustmentTypeHasBeenSet;
    int m_minAdjustmentStep;
    bool m_minAdjustmentStepHasBeenSet;
    int m_minAdjustmentMagnitude;
    bool m_minAdjustmentMagnitudeHasBeenSet;
    int m_scalingAdjustment;
    bool m_scalingAdjustmentHasBeenSet;
    int m_cooldown;
    bool m_cooldownHasBeenSet;
    Aws::String m_metricAggregationType;
    bool m_metricAggregationTypeHasBeenSet;
    Aws::Vector<StepAdjustment> m_stepAdjustments;
    bool m_stepAdjustmentsHasBeenSet;
    int m_estimatedInstanceWarmup;
    bool m_estimatedInstanceWarmupHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
