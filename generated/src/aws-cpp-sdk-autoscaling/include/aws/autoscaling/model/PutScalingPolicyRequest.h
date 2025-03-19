/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/TargetTrackingConfiguration.h>
#include <aws/autoscaling/model/PredictiveScalingConfiguration.h>
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
  class PutScalingPolicyRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API PutScalingPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutScalingPolicy"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    PutScalingPolicyRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    PutScalingPolicyRequest& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of the following policy types: </p> <ul> <li> <p>
     * <code>TargetTrackingScaling</code> </p> </li> <li> <p> <code>StepScaling</code>
     * </p> </li> <li> <p> <code>SimpleScaling</code> (default)</p> </li> <li> <p>
     * <code>PredictiveScaling</code> </p> </li> </ul>
     */
    inline const Aws::String& GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    template<typename PolicyTypeT = Aws::String>
    void SetPolicyType(PolicyTypeT&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::forward<PolicyTypeT>(value); }
    template<typename PolicyTypeT = Aws::String>
    PutScalingPolicyRequest& WithPolicyType(PolicyTypeT&& value) { SetPolicyType(std::forward<PolicyTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the scaling adjustment is interpreted (for example, an absolute
     * number or a percentage). The valid values are <code>ChangeInCapacity</code>,
     * <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
     * <p>Required if the policy type is <code>StepScaling</code> or
     * <code>SimpleScaling</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-simple-step.html#as-scaling-adjustment">Scaling
     * adjustment types</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetAdjustmentType() const { return m_adjustmentType; }
    inline bool AdjustmentTypeHasBeenSet() const { return m_adjustmentTypeHasBeenSet; }
    template<typename AdjustmentTypeT = Aws::String>
    void SetAdjustmentType(AdjustmentTypeT&& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = std::forward<AdjustmentTypeT>(value); }
    template<typename AdjustmentTypeT = Aws::String>
    PutScalingPolicyRequest& WithAdjustmentType(AdjustmentTypeT&& value) { SetAdjustmentType(std::forward<AdjustmentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available for backward compatibility. Use <code>MinAdjustmentMagnitude</code>
     * instead.</p>
     */
    inline int GetMinAdjustmentStep() const { return m_minAdjustmentStep; }
    inline bool MinAdjustmentStepHasBeenSet() const { return m_minAdjustmentStepHasBeenSet; }
    inline void SetMinAdjustmentStep(int value) { m_minAdjustmentStepHasBeenSet = true; m_minAdjustmentStep = value; }
    inline PutScalingPolicyRequest& WithMinAdjustmentStep(int value) { SetMinAdjustmentStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value to scale by when the adjustment type is
     * <code>PercentChangeInCapacity</code>. For example, suppose that you create a
     * step scaling policy to scale out an Auto Scaling group by 25 percent and you
     * specify a <code>MinAdjustmentMagnitude</code> of 2. If the group has 4 instances
     * and the scaling policy is performed, 25 percent of 4 is 1. However, because you
     * specified a <code>MinAdjustmentMagnitude</code> of 2, Amazon EC2 Auto Scaling
     * scales out the group by 2 instances.</p> <p>Valid only if the policy type is
     * <code>StepScaling</code> or <code>SimpleScaling</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-simple-step.html#as-scaling-adjustment">Scaling
     * adjustment types</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     *  <p>Some Auto Scaling groups use instance weights. In this case, set the
     * <code>MinAdjustmentMagnitude</code> to a value that is at least as large as your
     * largest instance weight.</p> 
     */
    inline int GetMinAdjustmentMagnitude() const { return m_minAdjustmentMagnitude; }
    inline bool MinAdjustmentMagnitudeHasBeenSet() const { return m_minAdjustmentMagnitudeHasBeenSet; }
    inline void SetMinAdjustmentMagnitude(int value) { m_minAdjustmentMagnitudeHasBeenSet = true; m_minAdjustmentMagnitude = value; }
    inline PutScalingPolicyRequest& WithMinAdjustmentMagnitude(int value) { SetMinAdjustmentMagnitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity. For exact capacity, you must specify a non-negative
     * value.</p> <p>Required if the policy type is <code>SimpleScaling</code>. (Not
     * used with any other policy type.) </p>
     */
    inline int GetScalingAdjustment() const { return m_scalingAdjustment; }
    inline bool ScalingAdjustmentHasBeenSet() const { return m_scalingAdjustmentHasBeenSet; }
    inline void SetScalingAdjustment(int value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }
    inline PutScalingPolicyRequest& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cooldown period, in seconds, that applies to a specific simple scaling
     * policy. When a cooldown period is specified here, it overrides the default
     * cooldown.</p> <p>Valid only if the policy type is <code>SimpleScaling</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-scaling-cooldowns.html">Scaling
     * cooldowns for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>Default: None</p>
     */
    inline int GetCooldown() const { return m_cooldown; }
    inline bool CooldownHasBeenSet() const { return m_cooldownHasBeenSet; }
    inline void SetCooldown(int value) { m_cooldownHasBeenSet = true; m_cooldown = value; }
    inline PutScalingPolicyRequest& WithCooldown(int value) { SetCooldown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation type for the CloudWatch metrics. The valid values are
     * <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the
     * aggregation type is null, the value is treated as <code>Average</code>.</p>
     * <p>Valid only if the policy type is <code>StepScaling</code>.</p>
     */
    inline const Aws::String& GetMetricAggregationType() const { return m_metricAggregationType; }
    inline bool MetricAggregationTypeHasBeenSet() const { return m_metricAggregationTypeHasBeenSet; }
    template<typename MetricAggregationTypeT = Aws::String>
    void SetMetricAggregationType(MetricAggregationTypeT&& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = std::forward<MetricAggregationTypeT>(value); }
    template<typename MetricAggregationTypeT = Aws::String>
    PutScalingPolicyRequest& WithMetricAggregationType(MetricAggregationTypeT&& value) { SetMetricAggregationType(std::forward<MetricAggregationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of adjustments that enable you to scale based on the size of the alarm
     * breach.</p> <p>Required if the policy type is <code>StepScaling</code>. (Not
     * used with any other policy type.) </p>
     */
    inline const Aws::Vector<StepAdjustment>& GetStepAdjustments() const { return m_stepAdjustments; }
    inline bool StepAdjustmentsHasBeenSet() const { return m_stepAdjustmentsHasBeenSet; }
    template<typename StepAdjustmentsT = Aws::Vector<StepAdjustment>>
    void SetStepAdjustments(StepAdjustmentsT&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = std::forward<StepAdjustmentsT>(value); }
    template<typename StepAdjustmentsT = Aws::Vector<StepAdjustment>>
    PutScalingPolicyRequest& WithStepAdjustments(StepAdjustmentsT&& value) { SetStepAdjustments(std::forward<StepAdjustmentsT>(value)); return *this;}
    template<typename StepAdjustmentsT = StepAdjustment>
    PutScalingPolicyRequest& AddStepAdjustments(StepAdjustmentsT&& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.emplace_back(std::forward<StepAdjustmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <i>Not needed if the default instance warmup is defined for the group.</i>
     * </p> <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics. This warm-up period applies to instances
     * launched due to a specific target tracking or step scaling policy. When a
     * warm-up period is specified here, it overrides the default instance warmup.</p>
     * <p>Valid only if the policy type is <code>TargetTrackingScaling</code> or
     * <code>StepScaling</code>.</p>  <p>The default is to use the value for the
     * default instance warmup defined for the group. If default instance warmup is
     * null, then <code>EstimatedInstanceWarmup</code> falls back to the value of
     * default cooldown.</p> 
     */
    inline int GetEstimatedInstanceWarmup() const { return m_estimatedInstanceWarmup; }
    inline bool EstimatedInstanceWarmupHasBeenSet() const { return m_estimatedInstanceWarmupHasBeenSet; }
    inline void SetEstimatedInstanceWarmup(int value) { m_estimatedInstanceWarmupHasBeenSet = true; m_estimatedInstanceWarmup = value; }
    inline PutScalingPolicyRequest& WithEstimatedInstanceWarmup(int value) { SetEstimatedInstanceWarmup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A target tracking scaling policy. Provides support for predefined or custom
     * metrics.</p> <p>The following predefined metrics are available:</p> <ul> <li>
     * <p> <code>ASGAverageCPUUtilization</code> </p> </li> <li> <p>
     * <code>ASGAverageNetworkIn</code> </p> </li> <li> <p>
     * <code>ASGAverageNetworkOut</code> </p> </li> <li> <p>
     * <code>ALBRequestCountPerTarget</code> </p> </li> </ul> <p>If you specify
     * <code>ALBRequestCountPerTarget</code> for the metric, you must specify the
     * <code>ResourceLabel</code> property with the
     * <code>PredefinedMetricSpecification</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_TargetTrackingConfiguration.html">TargetTrackingConfiguration</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p> <p>Required if the
     * policy type is <code>TargetTrackingScaling</code>.</p>
     */
    inline const TargetTrackingConfiguration& GetTargetTrackingConfiguration() const { return m_targetTrackingConfiguration; }
    inline bool TargetTrackingConfigurationHasBeenSet() const { return m_targetTrackingConfigurationHasBeenSet; }
    template<typename TargetTrackingConfigurationT = TargetTrackingConfiguration>
    void SetTargetTrackingConfiguration(TargetTrackingConfigurationT&& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = std::forward<TargetTrackingConfigurationT>(value); }
    template<typename TargetTrackingConfigurationT = TargetTrackingConfiguration>
    PutScalingPolicyRequest& WithTargetTrackingConfiguration(TargetTrackingConfigurationT&& value) { SetTargetTrackingConfiguration(std::forward<TargetTrackingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the scaling policy is enabled or disabled. The default is
     * enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enable-disable-scaling-policy.html">Disable
     * a scaling policy for an Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline PutScalingPolicyRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A predictive scaling policy. Provides support for predefined and custom
     * metrics.</p> <p>Predefined metrics include CPU utilization, network in/out, and
     * the Application Load Balancer request count.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_PredictiveScalingConfiguration.html">PredictiveScalingConfiguration</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p> <p>Required if the
     * policy type is <code>PredictiveScaling</code>.</p>
     */
    inline const PredictiveScalingConfiguration& GetPredictiveScalingConfiguration() const { return m_predictiveScalingConfiguration; }
    inline bool PredictiveScalingConfigurationHasBeenSet() const { return m_predictiveScalingConfigurationHasBeenSet; }
    template<typename PredictiveScalingConfigurationT = PredictiveScalingConfiguration>
    void SetPredictiveScalingConfiguration(PredictiveScalingConfigurationT&& value) { m_predictiveScalingConfigurationHasBeenSet = true; m_predictiveScalingConfiguration = std::forward<PredictiveScalingConfigurationT>(value); }
    template<typename PredictiveScalingConfigurationT = PredictiveScalingConfiguration>
    PutScalingPolicyRequest& WithPredictiveScalingConfiguration(PredictiveScalingConfigurationT&& value) { SetPredictiveScalingConfiguration(std::forward<PredictiveScalingConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

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

    Aws::String m_metricAggregationType;
    bool m_metricAggregationTypeHasBeenSet = false;

    Aws::Vector<StepAdjustment> m_stepAdjustments;
    bool m_stepAdjustmentsHasBeenSet = false;

    int m_estimatedInstanceWarmup{0};
    bool m_estimatedInstanceWarmupHasBeenSet = false;

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
