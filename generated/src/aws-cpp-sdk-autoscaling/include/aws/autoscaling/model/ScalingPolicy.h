/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/TargetTrackingConfiguration.h>
#include <aws/autoscaling/model/PredictiveScalingConfiguration.h>
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
  class ScalingPolicy
  {
  public:
    AWS_AUTOSCALING_API ScalingPolicy();
    AWS_AUTOSCALING_API ScalingPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API ScalingPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }
    inline ScalingPolicy& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline ScalingPolicy& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline ScalingPolicy& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline ScalingPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline ScalingPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline ScalingPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline const Aws::String& GetPolicyARN() const{ return m_policyARN; }
    inline bool PolicyARNHasBeenSet() const { return m_policyARNHasBeenSet; }
    inline void SetPolicyARN(const Aws::String& value) { m_policyARNHasBeenSet = true; m_policyARN = value; }
    inline void SetPolicyARN(Aws::String&& value) { m_policyARNHasBeenSet = true; m_policyARN = std::move(value); }
    inline void SetPolicyARN(const char* value) { m_policyARNHasBeenSet = true; m_policyARN.assign(value); }
    inline ScalingPolicy& WithPolicyARN(const Aws::String& value) { SetPolicyARN(value); return *this;}
    inline ScalingPolicy& WithPolicyARN(Aws::String&& value) { SetPolicyARN(std::move(value)); return *this;}
    inline ScalingPolicy& WithPolicyARN(const char* value) { SetPolicyARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of the following policy types: </p> <ul> <li> <p>
     * <code>TargetTrackingScaling</code> </p> </li> <li> <p> <code>StepScaling</code>
     * </p> </li> <li> <p> <code>SimpleScaling</code> (default)</p> </li> <li> <p>
     * <code>PredictiveScaling</code> </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-target-tracking.html">Target
     * tracking scaling policies</a> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-simple-step.html">Step
     * and simple scaling policies</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPolicyType() const{ return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(const Aws::String& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline void SetPolicyType(Aws::String&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }
    inline void SetPolicyType(const char* value) { m_policyTypeHasBeenSet = true; m_policyType.assign(value); }
    inline ScalingPolicy& WithPolicyType(const Aws::String& value) { SetPolicyType(value); return *this;}
    inline ScalingPolicy& WithPolicyType(Aws::String&& value) { SetPolicyType(std::move(value)); return *this;}
    inline ScalingPolicy& WithPolicyType(const char* value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the scaling adjustment is interpreted (for example, an absolute
     * number or a percentage). The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     */
    inline const Aws::String& GetAdjustmentType() const{ return m_adjustmentType; }
    inline bool AdjustmentTypeHasBeenSet() const { return m_adjustmentTypeHasBeenSet; }
    inline void SetAdjustmentType(const Aws::String& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = value; }
    inline void SetAdjustmentType(Aws::String&& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = std::move(value); }
    inline void SetAdjustmentType(const char* value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType.assign(value); }
    inline ScalingPolicy& WithAdjustmentType(const Aws::String& value) { SetAdjustmentType(value); return *this;}
    inline ScalingPolicy& WithAdjustmentType(Aws::String&& value) { SetAdjustmentType(std::move(value)); return *this;}
    inline ScalingPolicy& WithAdjustmentType(const char* value) { SetAdjustmentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available for backward compatibility. Use <code>MinAdjustmentMagnitude</code>
     * instead.</p>
     */
    inline int GetMinAdjustmentStep() const{ return m_minAdjustmentStep; }
    inline bool MinAdjustmentStepHasBeenSet() const { return m_minAdjustmentStepHasBeenSet; }
    inline void SetMinAdjustmentStep(int value) { m_minAdjustmentStepHasBeenSet = true; m_minAdjustmentStep = value; }
    inline ScalingPolicy& WithMinAdjustmentStep(int value) { SetMinAdjustmentStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value to scale by when the adjustment type is
     * <code>PercentChangeInCapacity</code>. </p>
     */
    inline int GetMinAdjustmentMagnitude() const{ return m_minAdjustmentMagnitude; }
    inline bool MinAdjustmentMagnitudeHasBeenSet() const { return m_minAdjustmentMagnitudeHasBeenSet; }
    inline void SetMinAdjustmentMagnitude(int value) { m_minAdjustmentMagnitudeHasBeenSet = true; m_minAdjustmentMagnitude = value; }
    inline ScalingPolicy& WithMinAdjustmentMagnitude(int value) { SetMinAdjustmentMagnitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p>
     */
    inline int GetScalingAdjustment() const{ return m_scalingAdjustment; }
    inline bool ScalingAdjustmentHasBeenSet() const { return m_scalingAdjustmentHasBeenSet; }
    inline void SetScalingAdjustment(int value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }
    inline ScalingPolicy& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the policy's cooldown period, in seconds.</p>
     */
    inline int GetCooldown() const{ return m_cooldown; }
    inline bool CooldownHasBeenSet() const { return m_cooldownHasBeenSet; }
    inline void SetCooldown(int value) { m_cooldownHasBeenSet = true; m_cooldown = value; }
    inline ScalingPolicy& WithCooldown(int value) { SetCooldown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline const Aws::Vector<StepAdjustment>& GetStepAdjustments() const{ return m_stepAdjustments; }
    inline bool StepAdjustmentsHasBeenSet() const { return m_stepAdjustmentsHasBeenSet; }
    inline void SetStepAdjustments(const Aws::Vector<StepAdjustment>& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = value; }
    inline void SetStepAdjustments(Aws::Vector<StepAdjustment>&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = std::move(value); }
    inline ScalingPolicy& WithStepAdjustments(const Aws::Vector<StepAdjustment>& value) { SetStepAdjustments(value); return *this;}
    inline ScalingPolicy& WithStepAdjustments(Aws::Vector<StepAdjustment>&& value) { SetStepAdjustments(std::move(value)); return *this;}
    inline ScalingPolicy& AddStepAdjustments(const StepAdjustment& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(value); return *this; }
    inline ScalingPolicy& AddStepAdjustments(StepAdjustment&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>.</p>
     */
    inline const Aws::String& GetMetricAggregationType() const{ return m_metricAggregationType; }
    inline bool MetricAggregationTypeHasBeenSet() const { return m_metricAggregationTypeHasBeenSet; }
    inline void SetMetricAggregationType(const Aws::String& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = value; }
    inline void SetMetricAggregationType(Aws::String&& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = std::move(value); }
    inline void SetMetricAggregationType(const char* value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType.assign(value); }
    inline ScalingPolicy& WithMetricAggregationType(const Aws::String& value) { SetMetricAggregationType(value); return *this;}
    inline ScalingPolicy& WithMetricAggregationType(Aws::String&& value) { SetMetricAggregationType(std::move(value)); return *this;}
    inline ScalingPolicy& WithMetricAggregationType(const char* value) { SetMetricAggregationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics.</p>
     */
    inline int GetEstimatedInstanceWarmup() const{ return m_estimatedInstanceWarmup; }
    inline bool EstimatedInstanceWarmupHasBeenSet() const { return m_estimatedInstanceWarmupHasBeenSet; }
    inline void SetEstimatedInstanceWarmup(int value) { m_estimatedInstanceWarmupHasBeenSet = true; m_estimatedInstanceWarmup = value; }
    inline ScalingPolicy& WithEstimatedInstanceWarmup(int value) { SetEstimatedInstanceWarmup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarms related to the policy.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const{ return m_alarms; }
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }
    inline void SetAlarms(const Aws::Vector<Alarm>& value) { m_alarmsHasBeenSet = true; m_alarms = value; }
    inline void SetAlarms(Aws::Vector<Alarm>&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }
    inline ScalingPolicy& WithAlarms(const Aws::Vector<Alarm>& value) { SetAlarms(value); return *this;}
    inline ScalingPolicy& WithAlarms(Aws::Vector<Alarm>&& value) { SetAlarms(std::move(value)); return *this;}
    inline ScalingPolicy& AddAlarms(const Alarm& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }
    inline ScalingPolicy& AddAlarms(Alarm&& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A target tracking scaling policy.</p>
     */
    inline const TargetTrackingConfiguration& GetTargetTrackingConfiguration() const{ return m_targetTrackingConfiguration; }
    inline bool TargetTrackingConfigurationHasBeenSet() const { return m_targetTrackingConfigurationHasBeenSet; }
    inline void SetTargetTrackingConfiguration(const TargetTrackingConfiguration& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = value; }
    inline void SetTargetTrackingConfiguration(TargetTrackingConfiguration&& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = std::move(value); }
    inline ScalingPolicy& WithTargetTrackingConfiguration(const TargetTrackingConfiguration& value) { SetTargetTrackingConfiguration(value); return *this;}
    inline ScalingPolicy& WithTargetTrackingConfiguration(TargetTrackingConfiguration&& value) { SetTargetTrackingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the policy is enabled (<code>true</code>) or disabled
     * (<code>false</code>).</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ScalingPolicy& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A predictive scaling policy.</p>
     */
    inline const PredictiveScalingConfiguration& GetPredictiveScalingConfiguration() const{ return m_predictiveScalingConfiguration; }
    inline bool PredictiveScalingConfigurationHasBeenSet() const { return m_predictiveScalingConfigurationHasBeenSet; }
    inline void SetPredictiveScalingConfiguration(const PredictiveScalingConfiguration& value) { m_predictiveScalingConfigurationHasBeenSet = true; m_predictiveScalingConfiguration = value; }
    inline void SetPredictiveScalingConfiguration(PredictiveScalingConfiguration&& value) { m_predictiveScalingConfigurationHasBeenSet = true; m_predictiveScalingConfiguration = std::move(value); }
    inline ScalingPolicy& WithPredictiveScalingConfiguration(const PredictiveScalingConfiguration& value) { SetPredictiveScalingConfiguration(value); return *this;}
    inline ScalingPolicy& WithPredictiveScalingConfiguration(PredictiveScalingConfiguration&& value) { SetPredictiveScalingConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyARN;
    bool m_policyARNHasBeenSet = false;

    Aws::String m_policyType;
    bool m_policyTypeHasBeenSet = false;

    Aws::String m_adjustmentType;
    bool m_adjustmentTypeHasBeenSet = false;

    int m_minAdjustmentStep;
    bool m_minAdjustmentStepHasBeenSet = false;

    int m_minAdjustmentMagnitude;
    bool m_minAdjustmentMagnitudeHasBeenSet = false;

    int m_scalingAdjustment;
    bool m_scalingAdjustmentHasBeenSet = false;

    int m_cooldown;
    bool m_cooldownHasBeenSet = false;

    Aws::Vector<StepAdjustment> m_stepAdjustments;
    bool m_stepAdjustmentsHasBeenSet = false;

    Aws::String m_metricAggregationType;
    bool m_metricAggregationTypeHasBeenSet = false;

    int m_estimatedInstanceWarmup;
    bool m_estimatedInstanceWarmupHasBeenSet = false;

    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet = false;

    TargetTrackingConfiguration m_targetTrackingConfiguration;
    bool m_targetTrackingConfigurationHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    PredictiveScalingConfiguration m_predictiveScalingConfiguration;
    bool m_predictiveScalingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
