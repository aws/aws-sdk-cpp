/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/autoscaling/model/TargetTrackingConfiguration.h>
#include <aws/autoscaling/model/StepAdjustment.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class AWS_AUTOSCALING_API PutScalingPolicyRequest : public AutoScalingRequest
  {
  public:
    PutScalingPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutScalingPolicy"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline PutScalingPolicyRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutScalingPolicyRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutScalingPolicyRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

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
    inline PutScalingPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, and <code>TargetTrackingScaling</code>. If the policy
     * type is null, the value is treated as <code>SimpleScaling</code>.</p>
     */
    inline const Aws::String& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, and <code>TargetTrackingScaling</code>. If the policy
     * type is null, the value is treated as <code>SimpleScaling</code>.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, and <code>TargetTrackingScaling</code>. If the policy
     * type is null, the value is treated as <code>SimpleScaling</code>.</p>
     */
    inline void SetPolicyType(const Aws::String& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, and <code>TargetTrackingScaling</code>. If the policy
     * type is null, the value is treated as <code>SimpleScaling</code>.</p>
     */
    inline void SetPolicyType(Aws::String&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, and <code>TargetTrackingScaling</code>. If the policy
     * type is null, the value is treated as <code>SimpleScaling</code>.</p>
     */
    inline void SetPolicyType(const char* value) { m_policyTypeHasBeenSet = true; m_policyType.assign(value); }

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, and <code>TargetTrackingScaling</code>. If the policy
     * type is null, the value is treated as <code>SimpleScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyType(const Aws::String& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, and <code>TargetTrackingScaling</code>. If the policy
     * type is null, the value is treated as <code>SimpleScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyType(Aws::String&& value) { SetPolicyType(std::move(value)); return *this;}

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, and <code>TargetTrackingScaling</code>. If the policy
     * type is null, the value is treated as <code>SimpleScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyType(const char* value) { SetPolicyType(value); return *this;}


    /**
     * <p>The adjustment type. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     * <p>This parameter is supported if the policy type is <code>SimpleScaling</code>
     * or <code>StepScaling</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetAdjustmentType() const{ return m_adjustmentType; }

    /**
     * <p>The adjustment type. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     * <p>This parameter is supported if the policy type is <code>SimpleScaling</code>
     * or <code>StepScaling</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline bool AdjustmentTypeHasBeenSet() const { return m_adjustmentTypeHasBeenSet; }

    /**
     * <p>The adjustment type. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     * <p>This parameter is supported if the policy type is <code>SimpleScaling</code>
     * or <code>StepScaling</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetAdjustmentType(const Aws::String& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = value; }

    /**
     * <p>The adjustment type. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     * <p>This parameter is supported if the policy type is <code>SimpleScaling</code>
     * or <code>StepScaling</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetAdjustmentType(Aws::String&& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = std::move(value); }

    /**
     * <p>The adjustment type. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     * <p>This parameter is supported if the policy type is <code>SimpleScaling</code>
     * or <code>StepScaling</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetAdjustmentType(const char* value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType.assign(value); }

    /**
     * <p>The adjustment type. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     * <p>This parameter is supported if the policy type is <code>SimpleScaling</code>
     * or <code>StepScaling</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline PutScalingPolicyRequest& WithAdjustmentType(const Aws::String& value) { SetAdjustmentType(value); return *this;}

    /**
     * <p>The adjustment type. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     * <p>This parameter is supported if the policy type is <code>SimpleScaling</code>
     * or <code>StepScaling</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline PutScalingPolicyRequest& WithAdjustmentType(Aws::String&& value) { SetAdjustmentType(std::move(value)); return *this;}

    /**
     * <p>The adjustment type. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     * <p>This parameter is supported if the policy type is <code>SimpleScaling</code>
     * or <code>StepScaling</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scale-based-on-demand.html">Dynamic
     * Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
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
    inline bool MinAdjustmentStepHasBeenSet() const { return m_minAdjustmentStepHasBeenSet; }

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
     * <code>ValidationError</code>.</p> <p>This parameter is supported if the policy
     * type is <code>SimpleScaling</code> or <code>StepScaling</code>.</p>
     */
    inline int GetMinAdjustmentMagnitude() const{ return m_minAdjustmentMagnitude; }

    /**
     * <p>The minimum number of instances to scale. If the value of
     * <code>AdjustmentType</code> is <code>PercentChangeInCapacity</code>, the scaling
     * policy changes the <code>DesiredCapacity</code> of the Auto Scaling group by at
     * least this many instances. Otherwise, the error is
     * <code>ValidationError</code>.</p> <p>This parameter is supported if the policy
     * type is <code>SimpleScaling</code> or <code>StepScaling</code>.</p>
     */
    inline bool MinAdjustmentMagnitudeHasBeenSet() const { return m_minAdjustmentMagnitudeHasBeenSet; }

    /**
     * <p>The minimum number of instances to scale. If the value of
     * <code>AdjustmentType</code> is <code>PercentChangeInCapacity</code>, the scaling
     * policy changes the <code>DesiredCapacity</code> of the Auto Scaling group by at
     * least this many instances. Otherwise, the error is
     * <code>ValidationError</code>.</p> <p>This parameter is supported if the policy
     * type is <code>SimpleScaling</code> or <code>StepScaling</code>.</p>
     */
    inline void SetMinAdjustmentMagnitude(int value) { m_minAdjustmentMagnitudeHasBeenSet = true; m_minAdjustmentMagnitude = value; }

    /**
     * <p>The minimum number of instances to scale. If the value of
     * <code>AdjustmentType</code> is <code>PercentChangeInCapacity</code>, the scaling
     * policy changes the <code>DesiredCapacity</code> of the Auto Scaling group by at
     * least this many instances. Otherwise, the error is
     * <code>ValidationError</code>.</p> <p>This parameter is supported if the policy
     * type is <code>SimpleScaling</code> or <code>StepScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithMinAdjustmentMagnitude(int value) { SetMinAdjustmentMagnitude(value); return *this;}


    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p> <p>Conditional: This parameter is required if the
     * policy type is <code>SimpleScaling</code> and not supported otherwise.</p>
     */
    inline int GetScalingAdjustment() const{ return m_scalingAdjustment; }

    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p> <p>Conditional: This parameter is required if the
     * policy type is <code>SimpleScaling</code> and not supported otherwise.</p>
     */
    inline bool ScalingAdjustmentHasBeenSet() const { return m_scalingAdjustmentHasBeenSet; }

    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p> <p>Conditional: This parameter is required if the
     * policy type is <code>SimpleScaling</code> and not supported otherwise.</p>
     */
    inline void SetScalingAdjustment(int value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }

    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p> <p>Conditional: This parameter is required if the
     * policy type is <code>SimpleScaling</code> and not supported otherwise.</p>
     */
    inline PutScalingPolicyRequest& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}


    /**
     * <p>The amount of time, in seconds, after a scaling activity completes and before
     * the next scaling activity can start. If this parameter is not specified, the
     * default cooldown period for the group applies.</p> <p>This parameter is
     * supported if the policy type is <code>SimpleScaling</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling
     * Cooldowns</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline int GetCooldown() const{ return m_cooldown; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes and before
     * the next scaling activity can start. If this parameter is not specified, the
     * default cooldown period for the group applies.</p> <p>This parameter is
     * supported if the policy type is <code>SimpleScaling</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling
     * Cooldowns</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline bool CooldownHasBeenSet() const { return m_cooldownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes and before
     * the next scaling activity can start. If this parameter is not specified, the
     * default cooldown period for the group applies.</p> <p>This parameter is
     * supported if the policy type is <code>SimpleScaling</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling
     * Cooldowns</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetCooldown(int value) { m_cooldownHasBeenSet = true; m_cooldown = value; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes and before
     * the next scaling activity can start. If this parameter is not specified, the
     * default cooldown period for the group applies.</p> <p>This parameter is
     * supported if the policy type is <code>SimpleScaling</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling
     * Cooldowns</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline PutScalingPolicyRequest& WithCooldown(int value) { SetCooldown(value); return *this;}


    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is supported if the policy type is
     * <code>StepScaling</code>.</p>
     */
    inline const Aws::String& GetMetricAggregationType() const{ return m_metricAggregationType; }

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is supported if the policy type is
     * <code>StepScaling</code>.</p>
     */
    inline bool MetricAggregationTypeHasBeenSet() const { return m_metricAggregationTypeHasBeenSet; }

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is supported if the policy type is
     * <code>StepScaling</code>.</p>
     */
    inline void SetMetricAggregationType(const Aws::String& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = value; }

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is supported if the policy type is
     * <code>StepScaling</code>.</p>
     */
    inline void SetMetricAggregationType(Aws::String&& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = std::move(value); }

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is supported if the policy type is
     * <code>StepScaling</code>.</p>
     */
    inline void SetMetricAggregationType(const char* value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType.assign(value); }

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is supported if the policy type is
     * <code>StepScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithMetricAggregationType(const Aws::String& value) { SetMetricAggregationType(value); return *this;}

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is supported if the policy type is
     * <code>StepScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithMetricAggregationType(Aws::String&& value) { SetMetricAggregationType(std::move(value)); return *this;}

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>This parameter is supported if the policy type is
     * <code>StepScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithMetricAggregationType(const char* value) { SetMetricAggregationType(value); return *this;}


    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>Conditional: This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline const Aws::Vector<StepAdjustment>& GetStepAdjustments() const{ return m_stepAdjustments; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>Conditional: This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline bool StepAdjustmentsHasBeenSet() const { return m_stepAdjustmentsHasBeenSet; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>Conditional: This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline void SetStepAdjustments(const Aws::Vector<StepAdjustment>& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = value; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>Conditional: This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline void SetStepAdjustments(Aws::Vector<StepAdjustment>&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = std::move(value); }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>Conditional: This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline PutScalingPolicyRequest& WithStepAdjustments(const Aws::Vector<StepAdjustment>& value) { SetStepAdjustments(value); return *this;}

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>Conditional: This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline PutScalingPolicyRequest& WithStepAdjustments(Aws::Vector<StepAdjustment>&& value) { SetStepAdjustments(std::move(value)); return *this;}

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>Conditional: This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline PutScalingPolicyRequest& AddStepAdjustments(const StepAdjustment& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(value); return *this; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>Conditional: This parameter is required if the policy type is
     * <code>StepScaling</code> and not supported otherwise.</p>
     */
    inline PutScalingPolicyRequest& AddStepAdjustments(StepAdjustment&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(std::move(value)); return *this; }


    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics. The default is to use the value specified
     * for the default cooldown period for the group.</p> <p>This parameter is
     * supported if the policy type is <code>StepScaling</code> or
     * <code>TargetTrackingScaling</code>.</p>
     */
    inline int GetEstimatedInstanceWarmup() const{ return m_estimatedInstanceWarmup; }

    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics. The default is to use the value specified
     * for the default cooldown period for the group.</p> <p>This parameter is
     * supported if the policy type is <code>StepScaling</code> or
     * <code>TargetTrackingScaling</code>.</p>
     */
    inline bool EstimatedInstanceWarmupHasBeenSet() const { return m_estimatedInstanceWarmupHasBeenSet; }

    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics. The default is to use the value specified
     * for the default cooldown period for the group.</p> <p>This parameter is
     * supported if the policy type is <code>StepScaling</code> or
     * <code>TargetTrackingScaling</code>.</p>
     */
    inline void SetEstimatedInstanceWarmup(int value) { m_estimatedInstanceWarmupHasBeenSet = true; m_estimatedInstanceWarmup = value; }

    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics. The default is to use the value specified
     * for the default cooldown period for the group.</p> <p>This parameter is
     * supported if the policy type is <code>StepScaling</code> or
     * <code>TargetTrackingScaling</code>.</p>
     */
    inline PutScalingPolicyRequest& WithEstimatedInstanceWarmup(int value) { SetEstimatedInstanceWarmup(value); return *this;}


    /**
     * <p>A target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p> <p>Conditional: This parameter is required if the policy
     * type is <code>TargetTrackingScaling</code> and not supported otherwise.</p>
     */
    inline const TargetTrackingConfiguration& GetTargetTrackingConfiguration() const{ return m_targetTrackingConfiguration; }

    /**
     * <p>A target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p> <p>Conditional: This parameter is required if the policy
     * type is <code>TargetTrackingScaling</code> and not supported otherwise.</p>
     */
    inline bool TargetTrackingConfigurationHasBeenSet() const { return m_targetTrackingConfigurationHasBeenSet; }

    /**
     * <p>A target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p> <p>Conditional: This parameter is required if the policy
     * type is <code>TargetTrackingScaling</code> and not supported otherwise.</p>
     */
    inline void SetTargetTrackingConfiguration(const TargetTrackingConfiguration& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = value; }

    /**
     * <p>A target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p> <p>Conditional: This parameter is required if the policy
     * type is <code>TargetTrackingScaling</code> and not supported otherwise.</p>
     */
    inline void SetTargetTrackingConfiguration(TargetTrackingConfiguration&& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = std::move(value); }

    /**
     * <p>A target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p> <p>Conditional: This parameter is required if the policy
     * type is <code>TargetTrackingScaling</code> and not supported otherwise.</p>
     */
    inline PutScalingPolicyRequest& WithTargetTrackingConfiguration(const TargetTrackingConfiguration& value) { SetTargetTrackingConfiguration(value); return *this;}

    /**
     * <p>A target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p> <p>Conditional: This parameter is required if the policy
     * type is <code>TargetTrackingScaling</code> and not supported otherwise.</p>
     */
    inline PutScalingPolicyRequest& WithTargetTrackingConfiguration(TargetTrackingConfiguration&& value) { SetTargetTrackingConfiguration(std::move(value)); return *this;}

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

    TargetTrackingConfiguration m_targetTrackingConfiguration;
    bool m_targetTrackingConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
