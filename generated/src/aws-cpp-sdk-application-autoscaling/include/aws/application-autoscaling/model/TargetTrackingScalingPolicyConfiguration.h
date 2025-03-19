/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/model/PredefinedMetricSpecification.h>
#include <aws/application-autoscaling/model/CustomizedMetricSpecification.h>
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
   * <p>Represents a target tracking scaling policy configuration to use with
   * Application Auto Scaling.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">Target
   * tracking scaling policies</a> in the <i>Application Auto Scaling User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/TargetTrackingScalingPolicyConfiguration">AWS
   * API Reference</a></p>
   */
  class TargetTrackingScalingPolicyConfiguration
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API TargetTrackingScalingPolicyConfiguration() = default;
    AWS_APPLICATIONAUTOSCALING_API TargetTrackingScalingPolicyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API TargetTrackingScalingPolicyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target value for the metric. Although this property accepts numbers of
     * type Double, it won't accept values that are either too small or too large.
     * Values must be in the range of -2^360 to 2^360. The value must be a valid number
     * based on the choice of metric. For example, if the metric is CPU utilization,
     * then the target value is a percent value that represents how much of the CPU can
     * be used before scaling out. </p>  <p>If the scaling policy specifies the
     * <code>ALBRequestCountPerTarget</code> predefined metric, specify the target
     * utilization as the optimal average request count per target during any
     * one-minute interval.</p> 
     */
    inline double GetTargetValue() const { return m_targetValue; }
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }
    inline TargetTrackingScalingPolicyConfiguration& WithTargetValue(double value) { SetTargetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline const PredefinedMetricSpecification& GetPredefinedMetricSpecification() const { return m_predefinedMetricSpecification; }
    inline bool PredefinedMetricSpecificationHasBeenSet() const { return m_predefinedMetricSpecificationHasBeenSet; }
    template<typename PredefinedMetricSpecificationT = PredefinedMetricSpecification>
    void SetPredefinedMetricSpecification(PredefinedMetricSpecificationT&& value) { m_predefinedMetricSpecificationHasBeenSet = true; m_predefinedMetricSpecification = std::forward<PredefinedMetricSpecificationT>(value); }
    template<typename PredefinedMetricSpecificationT = PredefinedMetricSpecification>
    TargetTrackingScalingPolicyConfiguration& WithPredefinedMetricSpecification(PredefinedMetricSpecificationT&& value) { SetPredefinedMetricSpecification(std::forward<PredefinedMetricSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline const CustomizedMetricSpecification& GetCustomizedMetricSpecification() const { return m_customizedMetricSpecification; }
    inline bool CustomizedMetricSpecificationHasBeenSet() const { return m_customizedMetricSpecificationHasBeenSet; }
    template<typename CustomizedMetricSpecificationT = CustomizedMetricSpecification>
    void SetCustomizedMetricSpecification(CustomizedMetricSpecificationT&& value) { m_customizedMetricSpecificationHasBeenSet = true; m_customizedMetricSpecification = std::forward<CustomizedMetricSpecificationT>(value); }
    template<typename CustomizedMetricSpecificationT = CustomizedMetricSpecification>
    TargetTrackingScalingPolicyConfiguration& WithCustomizedMetricSpecification(CustomizedMetricSpecificationT&& value) { SetCustomizedMetricSpecification(std::forward<CustomizedMetricSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, to wait for a previous scale-out activity to
     * take effect. For more information and for default values, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/target-tracking-scaling-policy-overview.html#target-tracking-cooldown">Define
     * cooldown periods</a> in the <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline int GetScaleOutCooldown() const { return m_scaleOutCooldown; }
    inline bool ScaleOutCooldownHasBeenSet() const { return m_scaleOutCooldownHasBeenSet; }
    inline void SetScaleOutCooldown(int value) { m_scaleOutCooldownHasBeenSet = true; m_scaleOutCooldown = value; }
    inline TargetTrackingScalingPolicyConfiguration& WithScaleOutCooldown(int value) { SetScaleOutCooldown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, after a scale-in activity completes before
     * another scale-in activity can start. For more information and for default
     * values, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/target-tracking-scaling-policy-overview.html#target-tracking-cooldown">Define
     * cooldown periods</a> in the <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline int GetScaleInCooldown() const { return m_scaleInCooldown; }
    inline bool ScaleInCooldownHasBeenSet() const { return m_scaleInCooldownHasBeenSet; }
    inline void SetScaleInCooldown(int value) { m_scaleInCooldownHasBeenSet = true; m_scaleInCooldown = value; }
    inline TargetTrackingScalingPolicyConfiguration& WithScaleInCooldown(int value) { SetScaleInCooldown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether scale in by the target tracking scaling policy is disabled.
     * If the value is <code>true</code>, scale in is disabled and the target tracking
     * scaling policy won't remove capacity from the scalable target. Otherwise, scale
     * in is enabled and the target tracking scaling policy can remove capacity from
     * the scalable target. The default value is <code>false</code>.</p>
     */
    inline bool GetDisableScaleIn() const { return m_disableScaleIn; }
    inline bool DisableScaleInHasBeenSet() const { return m_disableScaleInHasBeenSet; }
    inline void SetDisableScaleIn(bool value) { m_disableScaleInHasBeenSet = true; m_disableScaleIn = value; }
    inline TargetTrackingScalingPolicyConfiguration& WithDisableScaleIn(bool value) { SetDisableScaleIn(value); return *this;}
    ///@}
  private:

    double m_targetValue{0.0};
    bool m_targetValueHasBeenSet = false;

    PredefinedMetricSpecification m_predefinedMetricSpecification;
    bool m_predefinedMetricSpecificationHasBeenSet = false;

    CustomizedMetricSpecification m_customizedMetricSpecification;
    bool m_customizedMetricSpecificationHasBeenSet = false;

    int m_scaleOutCooldown{0};
    bool m_scaleOutCooldownHasBeenSet = false;

    int m_scaleInCooldown{0};
    bool m_scaleInCooldownHasBeenSet = false;

    bool m_disableScaleIn{false};
    bool m_disableScaleInHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
