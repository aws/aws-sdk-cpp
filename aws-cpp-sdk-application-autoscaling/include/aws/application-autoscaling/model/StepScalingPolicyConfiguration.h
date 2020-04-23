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
     * <p>Specifies whether the <code>ScalingAdjustment</code> value in a <a
     * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_StepAdjustment.html">StepAdjustment</a>
     * is an absolute number or a percentage of the current capacity. </p> <p>
     * <code>AdjustmentType</code> is required if you are adding a new step scaling
     * policy configuration.</p>
     */
    inline const AdjustmentType& GetAdjustmentType() const{ return m_adjustmentType; }

    /**
     * <p>Specifies whether the <code>ScalingAdjustment</code> value in a <a
     * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_StepAdjustment.html">StepAdjustment</a>
     * is an absolute number or a percentage of the current capacity. </p> <p>
     * <code>AdjustmentType</code> is required if you are adding a new step scaling
     * policy configuration.</p>
     */
    inline bool AdjustmentTypeHasBeenSet() const { return m_adjustmentTypeHasBeenSet; }

    /**
     * <p>Specifies whether the <code>ScalingAdjustment</code> value in a <a
     * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_StepAdjustment.html">StepAdjustment</a>
     * is an absolute number or a percentage of the current capacity. </p> <p>
     * <code>AdjustmentType</code> is required if you are adding a new step scaling
     * policy configuration.</p>
     */
    inline void SetAdjustmentType(const AdjustmentType& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = value; }

    /**
     * <p>Specifies whether the <code>ScalingAdjustment</code> value in a <a
     * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_StepAdjustment.html">StepAdjustment</a>
     * is an absolute number or a percentage of the current capacity. </p> <p>
     * <code>AdjustmentType</code> is required if you are adding a new step scaling
     * policy configuration.</p>
     */
    inline void SetAdjustmentType(AdjustmentType&& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = std::move(value); }

    /**
     * <p>Specifies whether the <code>ScalingAdjustment</code> value in a <a
     * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_StepAdjustment.html">StepAdjustment</a>
     * is an absolute number or a percentage of the current capacity. </p> <p>
     * <code>AdjustmentType</code> is required if you are adding a new step scaling
     * policy configuration.</p>
     */
    inline StepScalingPolicyConfiguration& WithAdjustmentType(const AdjustmentType& value) { SetAdjustmentType(value); return *this;}

    /**
     * <p>Specifies whether the <code>ScalingAdjustment</code> value in a <a
     * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_StepAdjustment.html">StepAdjustment</a>
     * is an absolute number or a percentage of the current capacity. </p> <p>
     * <code>AdjustmentType</code> is required if you are adding a new step scaling
     * policy configuration.</p>
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
     * <p>The minimum value to scale by when scaling by percentages. For example,
     * suppose that you create a step scaling policy to scale out an Amazon ECS service
     * by 25 percent and you specify a <code>MinAdjustmentMagnitude</code> of 2. If the
     * service has 4 tasks and the scaling policy is performed, 25 percent of 4 is 1.
     * However, because you specified a <code>MinAdjustmentMagnitude</code> of 2,
     * Application Auto Scaling scales out the service by 2 tasks.</p> <p>Valid only if
     * the adjustment type is <code>PercentChangeInCapacity</code>. </p>
     */
    inline int GetMinAdjustmentMagnitude() const{ return m_minAdjustmentMagnitude; }

    /**
     * <p>The minimum value to scale by when scaling by percentages. For example,
     * suppose that you create a step scaling policy to scale out an Amazon ECS service
     * by 25 percent and you specify a <code>MinAdjustmentMagnitude</code> of 2. If the
     * service has 4 tasks and the scaling policy is performed, 25 percent of 4 is 1.
     * However, because you specified a <code>MinAdjustmentMagnitude</code> of 2,
     * Application Auto Scaling scales out the service by 2 tasks.</p> <p>Valid only if
     * the adjustment type is <code>PercentChangeInCapacity</code>. </p>
     */
    inline bool MinAdjustmentMagnitudeHasBeenSet() const { return m_minAdjustmentMagnitudeHasBeenSet; }

    /**
     * <p>The minimum value to scale by when scaling by percentages. For example,
     * suppose that you create a step scaling policy to scale out an Amazon ECS service
     * by 25 percent and you specify a <code>MinAdjustmentMagnitude</code> of 2. If the
     * service has 4 tasks and the scaling policy is performed, 25 percent of 4 is 1.
     * However, because you specified a <code>MinAdjustmentMagnitude</code> of 2,
     * Application Auto Scaling scales out the service by 2 tasks.</p> <p>Valid only if
     * the adjustment type is <code>PercentChangeInCapacity</code>. </p>
     */
    inline void SetMinAdjustmentMagnitude(int value) { m_minAdjustmentMagnitudeHasBeenSet = true; m_minAdjustmentMagnitude = value; }

    /**
     * <p>The minimum value to scale by when scaling by percentages. For example,
     * suppose that you create a step scaling policy to scale out an Amazon ECS service
     * by 25 percent and you specify a <code>MinAdjustmentMagnitude</code> of 2. If the
     * service has 4 tasks and the scaling policy is performed, 25 percent of 4 is 1.
     * However, because you specified a <code>MinAdjustmentMagnitude</code> of 2,
     * Application Auto Scaling scales out the service by 2 tasks.</p> <p>Valid only if
     * the adjustment type is <code>PercentChangeInCapacity</code>. </p>
     */
    inline StepScalingPolicyConfiguration& WithMinAdjustmentMagnitude(int value) { SetMinAdjustmentMagnitude(value); return *this;}


    /**
     * <p>The amount of time, in seconds, after a scaling activity completes where
     * previous trigger-related scaling activities can influence future scaling
     * events.</p> <p>For scale-out policies, while the cooldown period is in effect,
     * the capacity that has been added by the previous scale-out action that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. The intention is to continuously (but not excessively) scale out. For
     * example, an alarm triggers a step scaling policy to scale out an Amazon ECS
     * service by 2 tasks, the scaling activity completes successfully, and a cooldown
     * period of 5 minutes starts. During the cooldown period, if the alarm triggers
     * the same policy again but at a more aggressive step adjustment to scale out the
     * service by 3 tasks, the 2 tasks that were added in the previous scale-out action
     * are considered part of that capacity and only 1 additional task is added to the
     * desired count.</p> <p>For scale-in policies, the cooldown period is used to
     * block subsequent scale-in requests until it has expired. The intention is to
     * scale in conservatively to protect your application's availability. However, if
     * another alarm triggers a scale-out policy during the cooldown period after a
     * scale-in, Application Auto Scaling scales out your scalable target
     * immediately.</p> <p>Application Auto Scaling provides a default value of 300 for
     * the following scalable targets:</p> <ul> <li> <p>ECS services</p> </li> <li>
     * <p>Spot Fleet requests</p> </li> <li> <p>EMR clusters</p> </li> <li>
     * <p>AppStream 2.0 fleets</p> </li> <li> <p>Aurora DB clusters</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants</p> </li> <li> <p>Custom resources</p>
     * </li> </ul> <p>For all other scalable targets, the default value is 0:</p> <ul>
     * <li> <p>DynamoDB tables</p> </li> <li> <p>DynamoDB global secondary indexes</p>
     * </li> <li> <p>Amazon Comprehend document classification endpoints</p> </li> <li>
     * <p>Lambda provisioned concurrency</p> </li> <li> <p>Amazon Keyspaces tables</p>
     * </li> </ul>
     */
    inline int GetCooldown() const{ return m_cooldown; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes where
     * previous trigger-related scaling activities can influence future scaling
     * events.</p> <p>For scale-out policies, while the cooldown period is in effect,
     * the capacity that has been added by the previous scale-out action that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. The intention is to continuously (but not excessively) scale out. For
     * example, an alarm triggers a step scaling policy to scale out an Amazon ECS
     * service by 2 tasks, the scaling activity completes successfully, and a cooldown
     * period of 5 minutes starts. During the cooldown period, if the alarm triggers
     * the same policy again but at a more aggressive step adjustment to scale out the
     * service by 3 tasks, the 2 tasks that were added in the previous scale-out action
     * are considered part of that capacity and only 1 additional task is added to the
     * desired count.</p> <p>For scale-in policies, the cooldown period is used to
     * block subsequent scale-in requests until it has expired. The intention is to
     * scale in conservatively to protect your application's availability. However, if
     * another alarm triggers a scale-out policy during the cooldown period after a
     * scale-in, Application Auto Scaling scales out your scalable target
     * immediately.</p> <p>Application Auto Scaling provides a default value of 300 for
     * the following scalable targets:</p> <ul> <li> <p>ECS services</p> </li> <li>
     * <p>Spot Fleet requests</p> </li> <li> <p>EMR clusters</p> </li> <li>
     * <p>AppStream 2.0 fleets</p> </li> <li> <p>Aurora DB clusters</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants</p> </li> <li> <p>Custom resources</p>
     * </li> </ul> <p>For all other scalable targets, the default value is 0:</p> <ul>
     * <li> <p>DynamoDB tables</p> </li> <li> <p>DynamoDB global secondary indexes</p>
     * </li> <li> <p>Amazon Comprehend document classification endpoints</p> </li> <li>
     * <p>Lambda provisioned concurrency</p> </li> <li> <p>Amazon Keyspaces tables</p>
     * </li> </ul>
     */
    inline bool CooldownHasBeenSet() const { return m_cooldownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes where
     * previous trigger-related scaling activities can influence future scaling
     * events.</p> <p>For scale-out policies, while the cooldown period is in effect,
     * the capacity that has been added by the previous scale-out action that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. The intention is to continuously (but not excessively) scale out. For
     * example, an alarm triggers a step scaling policy to scale out an Amazon ECS
     * service by 2 tasks, the scaling activity completes successfully, and a cooldown
     * period of 5 minutes starts. During the cooldown period, if the alarm triggers
     * the same policy again but at a more aggressive step adjustment to scale out the
     * service by 3 tasks, the 2 tasks that were added in the previous scale-out action
     * are considered part of that capacity and only 1 additional task is added to the
     * desired count.</p> <p>For scale-in policies, the cooldown period is used to
     * block subsequent scale-in requests until it has expired. The intention is to
     * scale in conservatively to protect your application's availability. However, if
     * another alarm triggers a scale-out policy during the cooldown period after a
     * scale-in, Application Auto Scaling scales out your scalable target
     * immediately.</p> <p>Application Auto Scaling provides a default value of 300 for
     * the following scalable targets:</p> <ul> <li> <p>ECS services</p> </li> <li>
     * <p>Spot Fleet requests</p> </li> <li> <p>EMR clusters</p> </li> <li>
     * <p>AppStream 2.0 fleets</p> </li> <li> <p>Aurora DB clusters</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants</p> </li> <li> <p>Custom resources</p>
     * </li> </ul> <p>For all other scalable targets, the default value is 0:</p> <ul>
     * <li> <p>DynamoDB tables</p> </li> <li> <p>DynamoDB global secondary indexes</p>
     * </li> <li> <p>Amazon Comprehend document classification endpoints</p> </li> <li>
     * <p>Lambda provisioned concurrency</p> </li> <li> <p>Amazon Keyspaces tables</p>
     * </li> </ul>
     */
    inline void SetCooldown(int value) { m_cooldownHasBeenSet = true; m_cooldown = value; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes where
     * previous trigger-related scaling activities can influence future scaling
     * events.</p> <p>For scale-out policies, while the cooldown period is in effect,
     * the capacity that has been added by the previous scale-out action that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. The intention is to continuously (but not excessively) scale out. For
     * example, an alarm triggers a step scaling policy to scale out an Amazon ECS
     * service by 2 tasks, the scaling activity completes successfully, and a cooldown
     * period of 5 minutes starts. During the cooldown period, if the alarm triggers
     * the same policy again but at a more aggressive step adjustment to scale out the
     * service by 3 tasks, the 2 tasks that were added in the previous scale-out action
     * are considered part of that capacity and only 1 additional task is added to the
     * desired count.</p> <p>For scale-in policies, the cooldown period is used to
     * block subsequent scale-in requests until it has expired. The intention is to
     * scale in conservatively to protect your application's availability. However, if
     * another alarm triggers a scale-out policy during the cooldown period after a
     * scale-in, Application Auto Scaling scales out your scalable target
     * immediately.</p> <p>Application Auto Scaling provides a default value of 300 for
     * the following scalable targets:</p> <ul> <li> <p>ECS services</p> </li> <li>
     * <p>Spot Fleet requests</p> </li> <li> <p>EMR clusters</p> </li> <li>
     * <p>AppStream 2.0 fleets</p> </li> <li> <p>Aurora DB clusters</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants</p> </li> <li> <p>Custom resources</p>
     * </li> </ul> <p>For all other scalable targets, the default value is 0:</p> <ul>
     * <li> <p>DynamoDB tables</p> </li> <li> <p>DynamoDB global secondary indexes</p>
     * </li> <li> <p>Amazon Comprehend document classification endpoints</p> </li> <li>
     * <p>Lambda provisioned concurrency</p> </li> <li> <p>Amazon Keyspaces tables</p>
     * </li> </ul>
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
