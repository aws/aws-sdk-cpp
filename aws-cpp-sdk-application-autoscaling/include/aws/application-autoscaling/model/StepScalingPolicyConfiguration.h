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
   * Scaling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/StepScalingPolicyConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONAUTOSCALING_API StepScalingPolicyConfiguration
  {
  public:
    StepScalingPolicyConfiguration();
    StepScalingPolicyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    StepScalingPolicyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The adjustment type, which specifies how the <code>ScalingAdjustment</code>
     * parameter in a <a>StepAdjustment</a> is interpreted.</p>
     */
    inline const AdjustmentType& GetAdjustmentType() const{ return m_adjustmentType; }

    /**
     * <p>The adjustment type, which specifies how the <code>ScalingAdjustment</code>
     * parameter in a <a>StepAdjustment</a> is interpreted.</p>
     */
    inline bool AdjustmentTypeHasBeenSet() const { return m_adjustmentTypeHasBeenSet; }

    /**
     * <p>The adjustment type, which specifies how the <code>ScalingAdjustment</code>
     * parameter in a <a>StepAdjustment</a> is interpreted.</p>
     */
    inline void SetAdjustmentType(const AdjustmentType& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = value; }

    /**
     * <p>The adjustment type, which specifies how the <code>ScalingAdjustment</code>
     * parameter in a <a>StepAdjustment</a> is interpreted.</p>
     */
    inline void SetAdjustmentType(AdjustmentType&& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = std::move(value); }

    /**
     * <p>The adjustment type, which specifies how the <code>ScalingAdjustment</code>
     * parameter in a <a>StepAdjustment</a> is interpreted.</p>
     */
    inline StepScalingPolicyConfiguration& WithAdjustmentType(const AdjustmentType& value) { SetAdjustmentType(value); return *this;}

    /**
     * <p>The adjustment type, which specifies how the <code>ScalingAdjustment</code>
     * parameter in a <a>StepAdjustment</a> is interpreted.</p>
     */
    inline StepScalingPolicyConfiguration& WithAdjustmentType(AdjustmentType&& value) { SetAdjustmentType(std::move(value)); return *this;}


    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline const Aws::Vector<StepAdjustment>& GetStepAdjustments() const{ return m_stepAdjustments; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline bool StepAdjustmentsHasBeenSet() const { return m_stepAdjustmentsHasBeenSet; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline void SetStepAdjustments(const Aws::Vector<StepAdjustment>& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = value; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline void SetStepAdjustments(Aws::Vector<StepAdjustment>&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = std::move(value); }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline StepScalingPolicyConfiguration& WithStepAdjustments(const Aws::Vector<StepAdjustment>& value) { SetStepAdjustments(value); return *this;}

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline StepScalingPolicyConfiguration& WithStepAdjustments(Aws::Vector<StepAdjustment>&& value) { SetStepAdjustments(std::move(value)); return *this;}

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline StepScalingPolicyConfiguration& AddStepAdjustments(const StepAdjustment& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(value); return *this; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline StepScalingPolicyConfiguration& AddStepAdjustments(StepAdjustment&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(std::move(value)); return *this; }


    /**
     * <p>The minimum number to adjust your scalable dimension as a result of a scaling
     * activity. If the adjustment type is <code>PercentChangeInCapacity</code>, the
     * scaling policy changes the scalable dimension of the scalable target by this
     * amount.</p> <p>For example, suppose that you create a step scaling policy to
     * scale out an Amazon ECS service by 25 percent and you specify a
     * <code>MinAdjustmentMagnitude</code> of 2. If the service has 4 tasks and the
     * scaling policy is performed, 25 percent of 4 is 1. However, because you
     * specified a <code>MinAdjustmentMagnitude</code> of 2, Application Auto Scaling
     * scales out the service by 2 tasks.</p>
     */
    inline int GetMinAdjustmentMagnitude() const{ return m_minAdjustmentMagnitude; }

    /**
     * <p>The minimum number to adjust your scalable dimension as a result of a scaling
     * activity. If the adjustment type is <code>PercentChangeInCapacity</code>, the
     * scaling policy changes the scalable dimension of the scalable target by this
     * amount.</p> <p>For example, suppose that you create a step scaling policy to
     * scale out an Amazon ECS service by 25 percent and you specify a
     * <code>MinAdjustmentMagnitude</code> of 2. If the service has 4 tasks and the
     * scaling policy is performed, 25 percent of 4 is 1. However, because you
     * specified a <code>MinAdjustmentMagnitude</code> of 2, Application Auto Scaling
     * scales out the service by 2 tasks.</p>
     */
    inline bool MinAdjustmentMagnitudeHasBeenSet() const { return m_minAdjustmentMagnitudeHasBeenSet; }

    /**
     * <p>The minimum number to adjust your scalable dimension as a result of a scaling
     * activity. If the adjustment type is <code>PercentChangeInCapacity</code>, the
     * scaling policy changes the scalable dimension of the scalable target by this
     * amount.</p> <p>For example, suppose that you create a step scaling policy to
     * scale out an Amazon ECS service by 25 percent and you specify a
     * <code>MinAdjustmentMagnitude</code> of 2. If the service has 4 tasks and the
     * scaling policy is performed, 25 percent of 4 is 1. However, because you
     * specified a <code>MinAdjustmentMagnitude</code> of 2, Application Auto Scaling
     * scales out the service by 2 tasks.</p>
     */
    inline void SetMinAdjustmentMagnitude(int value) { m_minAdjustmentMagnitudeHasBeenSet = true; m_minAdjustmentMagnitude = value; }

    /**
     * <p>The minimum number to adjust your scalable dimension as a result of a scaling
     * activity. If the adjustment type is <code>PercentChangeInCapacity</code>, the
     * scaling policy changes the scalable dimension of the scalable target by this
     * amount.</p> <p>For example, suppose that you create a step scaling policy to
     * scale out an Amazon ECS service by 25 percent and you specify a
     * <code>MinAdjustmentMagnitude</code> of 2. If the service has 4 tasks and the
     * scaling policy is performed, 25 percent of 4 is 1. However, because you
     * specified a <code>MinAdjustmentMagnitude</code> of 2, Application Auto Scaling
     * scales out the service by 2 tasks.</p>
     */
    inline StepScalingPolicyConfiguration& WithMinAdjustmentMagnitude(int value) { SetMinAdjustmentMagnitude(value); return *this;}


    /**
     * <p>The amount of time, in seconds, after a scaling activity completes where
     * previous trigger-related scaling activities can influence future scaling
     * events.</p> <p>For scale-out policies, while the cooldown period is in effect,
     * the capacity that has been added by the previous scale-out event that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. The intention is to continuously (but not excessively) scale out. For
     * example, an alarm triggers a step scaling policy to scale out an Amazon ECS
     * service by 2 tasks, the scaling activity completes successfully, and a cooldown
     * period of 5 minutes starts. During the cooldown period, if the alarm triggers
     * the same policy again but at a more aggressive step adjustment to scale out the
     * service by 3 tasks, the 2 tasks that were added in the previous scale-out event
     * are considered part of that capacity and only 1 additional task is added to the
     * desired count.</p> <p>For scale-in policies, the cooldown period is used to
     * block subsequent scale-in requests until it has expired. The intention is to
     * scale in conservatively to protect your application's availability. However, if
     * another alarm triggers a scale-out policy during the cooldown period after a
     * scale-in, Application Auto Scaling scales out your scalable target
     * immediately.</p>
     */
    inline int GetCooldown() const{ return m_cooldown; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes where
     * previous trigger-related scaling activities can influence future scaling
     * events.</p> <p>For scale-out policies, while the cooldown period is in effect,
     * the capacity that has been added by the previous scale-out event that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. The intention is to continuously (but not excessively) scale out. For
     * example, an alarm triggers a step scaling policy to scale out an Amazon ECS
     * service by 2 tasks, the scaling activity completes successfully, and a cooldown
     * period of 5 minutes starts. During the cooldown period, if the alarm triggers
     * the same policy again but at a more aggressive step adjustment to scale out the
     * service by 3 tasks, the 2 tasks that were added in the previous scale-out event
     * are considered part of that capacity and only 1 additional task is added to the
     * desired count.</p> <p>For scale-in policies, the cooldown period is used to
     * block subsequent scale-in requests until it has expired. The intention is to
     * scale in conservatively to protect your application's availability. However, if
     * another alarm triggers a scale-out policy during the cooldown period after a
     * scale-in, Application Auto Scaling scales out your scalable target
     * immediately.</p>
     */
    inline bool CooldownHasBeenSet() const { return m_cooldownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes where
     * previous trigger-related scaling activities can influence future scaling
     * events.</p> <p>For scale-out policies, while the cooldown period is in effect,
     * the capacity that has been added by the previous scale-out event that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. The intention is to continuously (but not excessively) scale out. For
     * example, an alarm triggers a step scaling policy to scale out an Amazon ECS
     * service by 2 tasks, the scaling activity completes successfully, and a cooldown
     * period of 5 minutes starts. During the cooldown period, if the alarm triggers
     * the same policy again but at a more aggressive step adjustment to scale out the
     * service by 3 tasks, the 2 tasks that were added in the previous scale-out event
     * are considered part of that capacity and only 1 additional task is added to the
     * desired count.</p> <p>For scale-in policies, the cooldown period is used to
     * block subsequent scale-in requests until it has expired. The intention is to
     * scale in conservatively to protect your application's availability. However, if
     * another alarm triggers a scale-out policy during the cooldown period after a
     * scale-in, Application Auto Scaling scales out your scalable target
     * immediately.</p>
     */
    inline void SetCooldown(int value) { m_cooldownHasBeenSet = true; m_cooldown = value; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes where
     * previous trigger-related scaling activities can influence future scaling
     * events.</p> <p>For scale-out policies, while the cooldown period is in effect,
     * the capacity that has been added by the previous scale-out event that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. The intention is to continuously (but not excessively) scale out. For
     * example, an alarm triggers a step scaling policy to scale out an Amazon ECS
     * service by 2 tasks, the scaling activity completes successfully, and a cooldown
     * period of 5 minutes starts. During the cooldown period, if the alarm triggers
     * the same policy again but at a more aggressive step adjustment to scale out the
     * service by 3 tasks, the 2 tasks that were added in the previous scale-out event
     * are considered part of that capacity and only 1 additional task is added to the
     * desired count.</p> <p>For scale-in policies, the cooldown period is used to
     * block subsequent scale-in requests until it has expired. The intention is to
     * scale in conservatively to protect your application's availability. However, if
     * another alarm triggers a scale-out policy during the cooldown period after a
     * scale-in, Application Auto Scaling scales out your scalable target
     * immediately.</p>
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
    bool m_adjustmentTypeHasBeenSet;

    Aws::Vector<StepAdjustment> m_stepAdjustments;
    bool m_stepAdjustmentsHasBeenSet;

    int m_minAdjustmentMagnitude;
    bool m_minAdjustmentMagnitudeHasBeenSet;

    int m_cooldown;
    bool m_cooldownHasBeenSet;

    MetricAggregationType m_metricAggregationType;
    bool m_metricAggregationTypeHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
