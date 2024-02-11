/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/model/AdjustmentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-autoscaling/model/MetricAggregationType.h>
#include <aws/application-autoscaling/model/StepAdjustment.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p>Represents a step scaling policy configuration to use with Application Auto
   * Scaling.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">Step
   * scaling policies</a> in the <i>Application Auto Scaling User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/StepScalingPolicyConfiguration">AWS
   * API Reference</a></p>
   */
  class StepScalingPolicyConfiguration
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API StepScalingPolicyConfiguration();
    AWS_APPLICATIONAUTOSCALING_API StepScalingPolicyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API StepScalingPolicyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies how the <code>ScalingAdjustment</code> value in a <a
     * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_StepAdjustment.html">StepAdjustment</a>
     * is interpreted (for example, an absolute number or a percentage). The valid
     * values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>. </p> <p> <code>AdjustmentType</code> is
     * required if you are adding a new step scaling policy configuration.</p>
     */
    inline const AdjustmentType& GetAdjustmentType() const{ return m_adjustmentType; }

    /**
     * <p>Specifies how the <code>ScalingAdjustment</code> value in a <a
     * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_StepAdjustment.html">StepAdjustment</a>
     * is interpreted (for example, an absolute number or a percentage). The valid
     * values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>. </p> <p> <code>AdjustmentType</code> is
     * required if you are adding a new step scaling policy configuration.</p>
     */
    inline bool AdjustmentTypeHasBeenSet() const { return m_adjustmentTypeHasBeenSet; }

    /**
     * <p>Specifies how the <code>ScalingAdjustment</code> value in a <a
     * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_StepAdjustment.html">StepAdjustment</a>
     * is interpreted (for example, an absolute number or a percentage). The valid
     * values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>. </p> <p> <code>AdjustmentType</code> is
     * required if you are adding a new step scaling policy configuration.</p>
     */
    inline void SetAdjustmentType(const AdjustmentType& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = value; }

    /**
     * <p>Specifies how the <code>ScalingAdjustment</code> value in a <a
     * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_StepAdjustment.html">StepAdjustment</a>
     * is interpreted (for example, an absolute number or a percentage). The valid
     * values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>. </p> <p> <code>AdjustmentType</code> is
     * required if you are adding a new step scaling policy configuration.</p>
     */
    inline void SetAdjustmentType(AdjustmentType&& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = std::move(value); }

    /**
     * <p>Specifies how the <code>ScalingAdjustment</code> value in a <a
     * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_StepAdjustment.html">StepAdjustment</a>
     * is interpreted (for example, an absolute number or a percentage). The valid
     * values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>. </p> <p> <code>AdjustmentType</code> is
     * required if you are adding a new step scaling policy configuration.</p>
     */
    inline StepScalingPolicyConfiguration& WithAdjustmentType(const AdjustmentType& value) { SetAdjustmentType(value); return *this;}

    /**
     * <p>Specifies how the <code>ScalingAdjustment</code> value in a <a
     * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_StepAdjustment.html">StepAdjustment</a>
     * is interpreted (for example, an absolute number or a percentage). The valid
     * values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>. </p> <p> <code>AdjustmentType</code> is
     * required if you are adding a new step scaling policy configuration.</p>
     */
    inline StepScalingPolicyConfiguration& WithAdjustmentType(AdjustmentType&& value) { SetAdjustmentType(std::move(value)); return *this;}


    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>At least one step adjustment is required if you are adding a new
     * step scaling policy configuration.</p>
     */
    inline const Aws::Vector<StepAdjustment>& GetStepAdjustments() const{ return m_stepAdjustments; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>At least one step adjustment is required if you are adding a new
     * step scaling policy configuration.</p>
     */
    inline bool StepAdjustmentsHasBeenSet() const { return m_stepAdjustmentsHasBeenSet; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>At least one step adjustment is required if you are adding a new
     * step scaling policy configuration.</p>
     */
    inline void SetStepAdjustments(const Aws::Vector<StepAdjustment>& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = value; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>At least one step adjustment is required if you are adding a new
     * step scaling policy configuration.</p>
     */
    inline void SetStepAdjustments(Aws::Vector<StepAdjustment>&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = std::move(value); }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>At least one step adjustment is required if you are adding a new
     * step scaling policy configuration.</p>
     */
    inline StepScalingPolicyConfiguration& WithStepAdjustments(const Aws::Vector<StepAdjustment>& value) { SetStepAdjustments(value); return *this;}

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>At least one step adjustment is required if you are adding a new
     * step scaling policy configuration.</p>
     */
    inline StepScalingPolicyConfiguration& WithStepAdjustments(Aws::Vector<StepAdjustment>&& value) { SetStepAdjustments(std::move(value)); return *this;}

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>At least one step adjustment is required if you are adding a new
     * step scaling policy configuration.</p>
     */
    inline StepScalingPolicyConfiguration& AddStepAdjustments(const StepAdjustment& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(value); return *this; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>At least one step adjustment is required if you are adding a new
     * step scaling policy configuration.</p>
     */
    inline StepScalingPolicyConfiguration& AddStepAdjustments(StepAdjustment&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(std::move(value)); return *this; }


    /**
     * <p>The minimum value to scale by when the adjustment type is
     * <code>PercentChangeInCapacity</code>. For example, suppose that you create a
     * step scaling policy to scale out an Amazon ECS service by 25 percent and you
     * specify a <code>MinAdjustmentMagnitude</code> of 2. If the service has 4 tasks
     * and the scaling policy is performed, 25 percent of 4 is 1. However, because you
     * specified a <code>MinAdjustmentMagnitude</code> of 2, Application Auto Scaling
     * scales out the service by 2 tasks.</p>
     */
    inline int GetMinAdjustmentMagnitude() const{ return m_minAdjustmentMagnitude; }

    /**
     * <p>The minimum value to scale by when the adjustment type is
     * <code>PercentChangeInCapacity</code>. For example, suppose that you create a
     * step scaling policy to scale out an Amazon ECS service by 25 percent and you
     * specify a <code>MinAdjustmentMagnitude</code> of 2. If the service has 4 tasks
     * and the scaling policy is performed, 25 percent of 4 is 1. However, because you
     * specified a <code>MinAdjustmentMagnitude</code> of 2, Application Auto Scaling
     * scales out the service by 2 tasks.</p>
     */
    inline bool MinAdjustmentMagnitudeHasBeenSet() const { return m_minAdjustmentMagnitudeHasBeenSet; }

    /**
     * <p>The minimum value to scale by when the adjustment type is
     * <code>PercentChangeInCapacity</code>. For example, suppose that you create a
     * step scaling policy to scale out an Amazon ECS service by 25 percent and you
     * specify a <code>MinAdjustmentMagnitude</code> of 2. If the service has 4 tasks
     * and the scaling policy is performed, 25 percent of 4 is 1. However, because you
     * specified a <code>MinAdjustmentMagnitude</code> of 2, Application Auto Scaling
     * scales out the service by 2 tasks.</p>
     */
    inline void SetMinAdjustmentMagnitude(int value) { m_minAdjustmentMagnitudeHasBeenSet = true; m_minAdjustmentMagnitude = value; }

    /**
     * <p>The minimum value to scale by when the adjustment type is
     * <code>PercentChangeInCapacity</code>. For example, suppose that you create a
     * step scaling policy to scale out an Amazon ECS service by 25 percent and you
     * specify a <code>MinAdjustmentMagnitude</code> of 2. If the service has 4 tasks
     * and the scaling policy is performed, 25 percent of 4 is 1. However, because you
     * specified a <code>MinAdjustmentMagnitude</code> of 2, Application Auto Scaling
     * scales out the service by 2 tasks.</p>
     */
    inline StepScalingPolicyConfiguration& WithMinAdjustmentMagnitude(int value) { SetMinAdjustmentMagnitude(value); return *this;}


    /**
     * <p>The amount of time, in seconds, to wait for a previous scaling activity to
     * take effect. If not specified, the default value is 300. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/step-scaling-policy-overview.html#step-scaling-cooldown">Cooldown
     * period</a> in the <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline int GetCooldown() const{ return m_cooldown; }

    /**
     * <p>The amount of time, in seconds, to wait for a previous scaling activity to
     * take effect. If not specified, the default value is 300. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/step-scaling-policy-overview.html#step-scaling-cooldown">Cooldown
     * period</a> in the <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline bool CooldownHasBeenSet() const { return m_cooldownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, to wait for a previous scaling activity to
     * take effect. If not specified, the default value is 300. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/step-scaling-policy-overview.html#step-scaling-cooldown">Cooldown
     * period</a> in the <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline void SetCooldown(int value) { m_cooldownHasBeenSet = true; m_cooldown = value; }

    /**
     * <p>The amount of time, in seconds, to wait for a previous scaling activity to
     * take effect. If not specified, the default value is 300. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/step-scaling-policy-overview.html#step-scaling-cooldown">Cooldown
     * period</a> in the <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline StepScalingPolicyConfiguration& WithCooldown(int value) { SetCooldown(value); return *this;}


    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     */
    inline const MetricAggregationType& GetMetricAggregationType() const{ return m_metricAggregationType; }

    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     */
    inline bool MetricAggregationTypeHasBeenSet() const { return m_metricAggregationTypeHasBeenSet; }

    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     */
    inline void SetMetricAggregationType(const MetricAggregationType& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = value; }

    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     */
    inline void SetMetricAggregationType(MetricAggregationType&& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = std::move(value); }

    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     */
    inline StepScalingPolicyConfiguration& WithMetricAggregationType(const MetricAggregationType& value) { SetMetricAggregationType(value); return *this;}

    /**
     * <p>The aggregation type for the CloudWatch metrics. Valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     */
    inline StepScalingPolicyConfiguration& WithMetricAggregationType(MetricAggregationType&& value) { SetMetricAggregationType(std::move(value)); return *this;}

  private:

    AdjustmentType m_adjustmentType;
    bool m_adjustmentTypeHasBeenSet = false;

    Aws::Vector<StepAdjustment> m_stepAdjustments;
    bool m_stepAdjustmentsHasBeenSet = false;

    int m_minAdjustmentMagnitude;
    bool m_minAdjustmentMagnitudeHasBeenSet = false;

    int m_cooldown;
    bool m_cooldownHasBeenSet = false;

    MetricAggregationType m_metricAggregationType;
    bool m_metricAggregationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
