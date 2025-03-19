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
    AWS_AUTOSCALING_API ScalingPolicy() = default;
    AWS_AUTOSCALING_API ScalingPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API ScalingPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    ScalingPolicy& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    ScalingPolicy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline const Aws::String& GetPolicyARN() const { return m_policyARN; }
    inline bool PolicyARNHasBeenSet() const { return m_policyARNHasBeenSet; }
    template<typename PolicyARNT = Aws::String>
    void SetPolicyARN(PolicyARNT&& value) { m_policyARNHasBeenSet = true; m_policyARN = std::forward<PolicyARNT>(value); }
    template<typename PolicyARNT = Aws::String>
    ScalingPolicy& WithPolicyARN(PolicyARNT&& value) { SetPolicyARN(std::forward<PolicyARNT>(value)); return *this;}
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
    inline const Aws::String& GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    template<typename PolicyTypeT = Aws::String>
    void SetPolicyType(PolicyTypeT&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::forward<PolicyTypeT>(value); }
    template<typename PolicyTypeT = Aws::String>
    ScalingPolicy& WithPolicyType(PolicyTypeT&& value) { SetPolicyType(std::forward<PolicyTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the scaling adjustment is interpreted (for example, an absolute
     * number or a percentage). The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     */
    inline const Aws::String& GetAdjustmentType() const { return m_adjustmentType; }
    inline bool AdjustmentTypeHasBeenSet() const { return m_adjustmentTypeHasBeenSet; }
    template<typename AdjustmentTypeT = Aws::String>
    void SetAdjustmentType(AdjustmentTypeT&& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = std::forward<AdjustmentTypeT>(value); }
    template<typename AdjustmentTypeT = Aws::String>
    ScalingPolicy& WithAdjustmentType(AdjustmentTypeT&& value) { SetAdjustmentType(std::forward<AdjustmentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available for backward compatibility. Use <code>MinAdjustmentMagnitude</code>
     * instead.</p>
     */
    inline int GetMinAdjustmentStep() const { return m_minAdjustmentStep; }
    inline bool MinAdjustmentStepHasBeenSet() const { return m_minAdjustmentStepHasBeenSet; }
    inline void SetMinAdjustmentStep(int value) { m_minAdjustmentStepHasBeenSet = true; m_minAdjustmentStep = value; }
    inline ScalingPolicy& WithMinAdjustmentStep(int value) { SetMinAdjustmentStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value to scale by when the adjustment type is
     * <code>PercentChangeInCapacity</code>. </p>
     */
    inline int GetMinAdjustmentMagnitude() const { return m_minAdjustmentMagnitude; }
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
    inline int GetScalingAdjustment() const { return m_scalingAdjustment; }
    inline bool ScalingAdjustmentHasBeenSet() const { return m_scalingAdjustmentHasBeenSet; }
    inline void SetScalingAdjustment(int value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }
    inline ScalingPolicy& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the policy's cooldown period, in seconds.</p>
     */
    inline int GetCooldown() const { return m_cooldown; }
    inline bool CooldownHasBeenSet() const { return m_cooldownHasBeenSet; }
    inline void SetCooldown(int value) { m_cooldownHasBeenSet = true; m_cooldown = value; }
    inline ScalingPolicy& WithCooldown(int value) { SetCooldown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p>
     */
    inline const Aws::Vector<StepAdjustment>& GetStepAdjustments() const { return m_stepAdjustments; }
    inline bool StepAdjustmentsHasBeenSet() const { return m_stepAdjustmentsHasBeenSet; }
    template<typename StepAdjustmentsT = Aws::Vector<StepAdjustment>>
    void SetStepAdjustments(StepAdjustmentsT&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = std::forward<StepAdjustmentsT>(value); }
    template<typename StepAdjustmentsT = Aws::Vector<StepAdjustment>>
    ScalingPolicy& WithStepAdjustments(StepAdjustmentsT&& value) { SetStepAdjustments(std::forward<StepAdjustmentsT>(value)); return *this;}
    template<typename StepAdjustmentsT = StepAdjustment>
    ScalingPolicy& AddStepAdjustments(StepAdjustmentsT&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.emplace_back(std::forward<StepAdjustmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>.</p>
     */
    inline const Aws::String& GetMetricAggregationType() const { return m_metricAggregationType; }
    inline bool MetricAggregationTypeHasBeenSet() const { return m_metricAggregationTypeHasBeenSet; }
    template<typename MetricAggregationTypeT = Aws::String>
    void SetMetricAggregationType(MetricAggregationTypeT&& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = std::forward<MetricAggregationTypeT>(value); }
    template<typename MetricAggregationTypeT = Aws::String>
    ScalingPolicy& WithMetricAggregationType(MetricAggregationTypeT&& value) { SetMetricAggregationType(std::forward<MetricAggregationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics.</p>
     */
    inline int GetEstimatedInstanceWarmup() const { return m_estimatedInstanceWarmup; }
    inline bool EstimatedInstanceWarmupHasBeenSet() const { return m_estimatedInstanceWarmupHasBeenSet; }
    inline void SetEstimatedInstanceWarmup(int value) { m_estimatedInstanceWarmupHasBeenSet = true; m_estimatedInstanceWarmup = value; }
    inline ScalingPolicy& WithEstimatedInstanceWarmup(int value) { SetEstimatedInstanceWarmup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarms related to the policy.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const { return m_alarms; }
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }
    template<typename AlarmsT = Aws::Vector<Alarm>>
    void SetAlarms(AlarmsT&& value) { m_alarmsHasBeenSet = true; m_alarms = std::forward<AlarmsT>(value); }
    template<typename AlarmsT = Aws::Vector<Alarm>>
    ScalingPolicy& WithAlarms(AlarmsT&& value) { SetAlarms(std::forward<AlarmsT>(value)); return *this;}
    template<typename AlarmsT = Alarm>
    ScalingPolicy& AddAlarms(AlarmsT&& value) { m_alarmsHasBeenSet = true; m_alarms.emplace_back(std::forward<AlarmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A target tracking scaling policy.</p>
     */
    inline const TargetTrackingConfiguration& GetTargetTrackingConfiguration() const { return m_targetTrackingConfiguration; }
    inline bool TargetTrackingConfigurationHasBeenSet() const { return m_targetTrackingConfigurationHasBeenSet; }
    template<typename TargetTrackingConfigurationT = TargetTrackingConfiguration>
    void SetTargetTrackingConfiguration(TargetTrackingConfigurationT&& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = std::forward<TargetTrackingConfigurationT>(value); }
    template<typename TargetTrackingConfigurationT = TargetTrackingConfiguration>
    ScalingPolicy& WithTargetTrackingConfiguration(TargetTrackingConfigurationT&& value) { SetTargetTrackingConfiguration(std::forward<TargetTrackingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the policy is enabled (<code>true</code>) or disabled
     * (<code>false</code>).</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ScalingPolicy& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A predictive scaling policy.</p>
     */
    inline const PredictiveScalingConfiguration& GetPredictiveScalingConfiguration() const { return m_predictiveScalingConfiguration; }
    inline bool PredictiveScalingConfigurationHasBeenSet() const { return m_predictiveScalingConfigurationHasBeenSet; }
    template<typename PredictiveScalingConfigurationT = PredictiveScalingConfiguration>
    void SetPredictiveScalingConfiguration(PredictiveScalingConfigurationT&& value) { m_predictiveScalingConfigurationHasBeenSet = true; m_predictiveScalingConfiguration = std::forward<PredictiveScalingConfigurationT>(value); }
    template<typename PredictiveScalingConfigurationT = PredictiveScalingConfiguration>
    ScalingPolicy& WithPredictiveScalingConfiguration(PredictiveScalingConfigurationT&& value) { SetPredictiveScalingConfiguration(std::forward<PredictiveScalingConfigurationT>(value)); return *this;}
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

    int m_minAdjustmentStep{0};
    bool m_minAdjustmentStepHasBeenSet = false;

    int m_minAdjustmentMagnitude{0};
    bool m_minAdjustmentMagnitudeHasBeenSet = false;

    int m_scalingAdjustment{0};
    bool m_scalingAdjustmentHasBeenSet = false;

    int m_cooldown{0};
    bool m_cooldownHasBeenSet = false;

    Aws::Vector<StepAdjustment> m_stepAdjustments;
    bool m_stepAdjustmentsHasBeenSet = false;

    Aws::String m_metricAggregationType;
    bool m_metricAggregationTypeHasBeenSet = false;

    int m_estimatedInstanceWarmup{0};
    bool m_estimatedInstanceWarmupHasBeenSet = false;

    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet = false;

    TargetTrackingConfiguration m_targetTrackingConfiguration;
    bool m_targetTrackingConfigurationHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    PredictiveScalingConfiguration m_predictiveScalingConfiguration;
    bool m_predictiveScalingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
