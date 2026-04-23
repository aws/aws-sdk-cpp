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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/TargetTrackingConfiguration.h>
#include <aws/autoscaling/model/StepAdjustment.h>
#include <aws/autoscaling/model/Alarm.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a scaling policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ScalingPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API ScalingPolicy
  {
  public:
    ScalingPolicy();
    ScalingPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScalingPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline ScalingPolicy& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline ScalingPolicy& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline ScalingPolicy& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The name of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline const Aws::String& GetPolicyARN() const{ return m_policyARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline bool PolicyARNHasBeenSet() const { return m_policyARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline void SetPolicyARN(const Aws::String& value) { m_policyARNHasBeenSet = true; m_policyARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline void SetPolicyARN(Aws::String&& value) { m_policyARNHasBeenSet = true; m_policyARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline void SetPolicyARN(const char* value) { m_policyARNHasBeenSet = true; m_policyARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline ScalingPolicy& WithPolicyARN(const Aws::String& value) { SetPolicyARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline ScalingPolicy& WithPolicyARN(Aws::String&& value) { SetPolicyARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline ScalingPolicy& WithPolicyARN(const char* value) { SetPolicyARN(value); return *this;}


    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline const Aws::String& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline void SetPolicyType(const Aws::String& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline void SetPolicyType(Aws::String&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline void SetPolicyType(const char* value) { m_policyTypeHasBeenSet = true; m_policyType.assign(value); }

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline ScalingPolicy& WithPolicyType(const Aws::String& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline ScalingPolicy& WithPolicyType(Aws::String&& value) { SetPolicyType(std::move(value)); return *this;}

    /**
     * <p>The policy type. The valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline ScalingPolicy& WithPolicyType(const char* value) { SetPolicyType(value); return *this;}


    /**
     * <p>The adjustment type, which specifies how <code>ScalingAdjustment</code> is
     * interpreted. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     */
    inline const Aws::String& GetAdjustmentType() const{ return m_adjustmentType; }

    /**
     * <p>The adjustment type, which specifies how <code>ScalingAdjustment</code> is
     * interpreted. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     */
    inline bool AdjustmentTypeHasBeenSet() const { return m_adjustmentTypeHasBeenSet; }

    /**
     * <p>The adjustment type, which specifies how <code>ScalingAdjustment</code> is
     * interpreted. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     */
    inline void SetAdjustmentType(const Aws::String& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = value; }

    /**
     * <p>The adjustment type, which specifies how <code>ScalingAdjustment</code> is
     * interpreted. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     */
    inline void SetAdjustmentType(Aws::String&& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = std::move(value); }

    /**
     * <p>The adjustment type, which specifies how <code>ScalingAdjustment</code> is
     * interpreted. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     */
    inline void SetAdjustmentType(const char* value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType.assign(value); }

    /**
     * <p>The adjustment type, which specifies how <code>ScalingAdjustment</code> is
     * interpreted. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     */
    inline ScalingPolicy& WithAdjustmentType(const Aws::String& value) { SetAdjustmentType(value); return *this;}

    /**
     * <p>The adjustment type, which specifies how <code>ScalingAdjustment</code> is
     * interpreted. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     */
    inline ScalingPolicy& WithAdjustmentType(Aws::String&& value) { SetAdjustmentType(std::move(value)); return *this;}

    /**
     * <p>The adjustment type, which specifies how <code>ScalingAdjustment</code> is
     * interpreted. The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     */
    inline ScalingPolicy& WithAdjustmentType(const char* value) { SetAdjustmentType(value); return *this;}


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
    inline ScalingPolicy& WithMinAdjustmentStep(int value) { SetMinAdjustmentStep(value); return *this;}


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
    inline bool MinAdjustmentMagnitudeHasBeenSet() const { return m_minAdjustmentMagnitudeHasBeenSet; }

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
    inline ScalingPolicy& WithMinAdjustmentMagnitude(int value) { SetMinAdjustmentMagnitude(value); return *this;}


    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p>
     */
    inline int GetScalingAdjustment() const{ return m_scalingAdjustment; }

    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p>
     */
    inline bool ScalingAdjustmentHasBeenSet() const { return m_scalingAdjustmentHasBeenSet; }

    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p>
     */
    inline void SetScalingAdjustment(int value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }

    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p>
     */
    inline ScalingPolicy& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}


    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before any
     * further dynamic scaling activities can start.</p>
     */
    inline int GetCooldown() const{ return m_cooldown; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before any
     * further dynamic scaling activities can start.</p>
     */
    inline bool CooldownHasBeenSet() const { return m_cooldownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before any
     * further dynamic scaling activities can start.</p>
     */
    inline void SetCooldown(int value) { m_cooldownHasBeenSet = true; m_cooldown = value; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before any
     * further dynamic scaling activities can start.</p>
     */
    inline ScalingPolicy& WithCooldown(int value) { SetCooldown(value); return *this;}


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
    inline ScalingPolicy& WithStepAdjustments(const Aws::Vector<StepAdjustment>& value) { SetStepAdjustments(value); return *this;}

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline ScalingPolicy& WithStepAdjustments(Aws::Vector<StepAdjustment>&& value) { SetStepAdjustments(std::move(value)); return *this;}

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline ScalingPolicy& AddStepAdjustments(const StepAdjustment& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(value); return *this; }

    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline ScalingPolicy& AddStepAdjustments(StepAdjustment&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(std::move(value)); return *this; }


    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>.</p>
     */
    inline const Aws::String& GetMetricAggregationType() const{ return m_metricAggregationType; }

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>.</p>
     */
    inline bool MetricAggregationTypeHasBeenSet() const { return m_metricAggregationTypeHasBeenSet; }

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>.</p>
     */
    inline void SetMetricAggregationType(const Aws::String& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = value; }

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>.</p>
     */
    inline void SetMetricAggregationType(Aws::String&& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = std::move(value); }

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>.</p>
     */
    inline void SetMetricAggregationType(const char* value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType.assign(value); }

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>.</p>
     */
    inline ScalingPolicy& WithMetricAggregationType(const Aws::String& value) { SetMetricAggregationType(value); return *this;}

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>.</p>
     */
    inline ScalingPolicy& WithMetricAggregationType(Aws::String&& value) { SetMetricAggregationType(std::move(value)); return *this;}

    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>.</p>
     */
    inline ScalingPolicy& WithMetricAggregationType(const char* value) { SetMetricAggregationType(value); return *this;}


    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics.</p>
     */
    inline int GetEstimatedInstanceWarmup() const{ return m_estimatedInstanceWarmup; }

    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics.</p>
     */
    inline bool EstimatedInstanceWarmupHasBeenSet() const { return m_estimatedInstanceWarmupHasBeenSet; }

    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics.</p>
     */
    inline void SetEstimatedInstanceWarmup(int value) { m_estimatedInstanceWarmupHasBeenSet = true; m_estimatedInstanceWarmup = value; }

    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics.</p>
     */
    inline ScalingPolicy& WithEstimatedInstanceWarmup(int value) { SetEstimatedInstanceWarmup(value); return *this;}


    /**
     * <p>The CloudWatch alarms related to the policy.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const{ return m_alarms; }

    /**
     * <p>The CloudWatch alarms related to the policy.</p>
     */
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }

    /**
     * <p>The CloudWatch alarms related to the policy.</p>
     */
    inline void SetAlarms(const Aws::Vector<Alarm>& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /**
     * <p>The CloudWatch alarms related to the policy.</p>
     */
    inline void SetAlarms(Aws::Vector<Alarm>&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }

    /**
     * <p>The CloudWatch alarms related to the policy.</p>
     */
    inline ScalingPolicy& WithAlarms(const Aws::Vector<Alarm>& value) { SetAlarms(value); return *this;}

    /**
     * <p>The CloudWatch alarms related to the policy.</p>
     */
    inline ScalingPolicy& WithAlarms(Aws::Vector<Alarm>&& value) { SetAlarms(std::move(value)); return *this;}

    /**
     * <p>The CloudWatch alarms related to the policy.</p>
     */
    inline ScalingPolicy& AddAlarms(const Alarm& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

    /**
     * <p>The CloudWatch alarms related to the policy.</p>
     */
    inline ScalingPolicy& AddAlarms(Alarm&& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(std::move(value)); return *this; }


    /**
     * <p>A target tracking scaling policy.</p>
     */
    inline const TargetTrackingConfiguration& GetTargetTrackingConfiguration() const{ return m_targetTrackingConfiguration; }

    /**
     * <p>A target tracking scaling policy.</p>
     */
    inline bool TargetTrackingConfigurationHasBeenSet() const { return m_targetTrackingConfigurationHasBeenSet; }

    /**
     * <p>A target tracking scaling policy.</p>
     */
    inline void SetTargetTrackingConfiguration(const TargetTrackingConfiguration& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = value; }

    /**
     * <p>A target tracking scaling policy.</p>
     */
    inline void SetTargetTrackingConfiguration(TargetTrackingConfiguration&& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = std::move(value); }

    /**
     * <p>A target tracking scaling policy.</p>
     */
    inline ScalingPolicy& WithTargetTrackingConfiguration(const TargetTrackingConfiguration& value) { SetTargetTrackingConfiguration(value); return *this;}

    /**
     * <p>A target tracking scaling policy.</p>
     */
    inline ScalingPolicy& WithTargetTrackingConfiguration(TargetTrackingConfiguration&& value) { SetTargetTrackingConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_policyARN;
    bool m_policyARNHasBeenSet;

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

    Aws::Vector<StepAdjustment> m_stepAdjustments;
    bool m_stepAdjustmentsHasBeenSet;

    Aws::String m_metricAggregationType;
    bool m_metricAggregationTypeHasBeenSet;

    int m_estimatedInstanceWarmup;
    bool m_estimatedInstanceWarmupHasBeenSet;

    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet;

    TargetTrackingConfiguration m_targetTrackingConfiguration;
    bool m_targetTrackingConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
