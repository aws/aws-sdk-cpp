/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/autoscaling-plans/model/PredefinedScalingMetricSpecification.h>
#include <aws/autoscaling-plans/model/CustomizedScalingMetricSpecification.h>
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
namespace AutoScalingPlans
{
namespace Model
{

  /**
   * <p>Describes a target tracking configuration to use with AWS Auto Scaling. Used
   * with <a>ScalingInstruction</a> and <a>ScalingPolicy</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/TargetTrackingConfiguration">AWS
   * API Reference</a></p>
   */
  class TargetTrackingConfiguration
  {
  public:
    AWS_AUTOSCALINGPLANS_API TargetTrackingConfiguration();
    AWS_AUTOSCALINGPLANS_API TargetTrackingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API TargetTrackingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline const PredefinedScalingMetricSpecification& GetPredefinedScalingMetricSpecification() const{ return m_predefinedScalingMetricSpecification; }

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline bool PredefinedScalingMetricSpecificationHasBeenSet() const { return m_predefinedScalingMetricSpecificationHasBeenSet; }

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetPredefinedScalingMetricSpecification(const PredefinedScalingMetricSpecification& value) { m_predefinedScalingMetricSpecificationHasBeenSet = true; m_predefinedScalingMetricSpecification = value; }

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetPredefinedScalingMetricSpecification(PredefinedScalingMetricSpecification&& value) { m_predefinedScalingMetricSpecificationHasBeenSet = true; m_predefinedScalingMetricSpecification = std::move(value); }

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingConfiguration& WithPredefinedScalingMetricSpecification(const PredefinedScalingMetricSpecification& value) { SetPredefinedScalingMetricSpecification(value); return *this;}

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingConfiguration& WithPredefinedScalingMetricSpecification(PredefinedScalingMetricSpecification&& value) { SetPredefinedScalingMetricSpecification(std::move(value)); return *this;}


    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric. </p>
     */
    inline const CustomizedScalingMetricSpecification& GetCustomizedScalingMetricSpecification() const{ return m_customizedScalingMetricSpecification; }

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric. </p>
     */
    inline bool CustomizedScalingMetricSpecificationHasBeenSet() const { return m_customizedScalingMetricSpecificationHasBeenSet; }

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric. </p>
     */
    inline void SetCustomizedScalingMetricSpecification(const CustomizedScalingMetricSpecification& value) { m_customizedScalingMetricSpecificationHasBeenSet = true; m_customizedScalingMetricSpecification = value; }

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric. </p>
     */
    inline void SetCustomizedScalingMetricSpecification(CustomizedScalingMetricSpecification&& value) { m_customizedScalingMetricSpecificationHasBeenSet = true; m_customizedScalingMetricSpecification = std::move(value); }

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric. </p>
     */
    inline TargetTrackingConfiguration& WithCustomizedScalingMetricSpecification(const CustomizedScalingMetricSpecification& value) { SetCustomizedScalingMetricSpecification(value); return *this;}

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric. </p>
     */
    inline TargetTrackingConfiguration& WithCustomizedScalingMetricSpecification(CustomizedScalingMetricSpecification&& value) { SetCustomizedScalingMetricSpecification(std::move(value)); return *this;}


    /**
     * <p>The target value for the metric. Although this property accepts numbers of
     * type Double, it won't accept values that are either too small or too large.
     * Values must be in the range of -2^360 to 2^360.</p>
     */
    inline double GetTargetValue() const{ return m_targetValue; }

    /**
     * <p>The target value for the metric. Although this property accepts numbers of
     * type Double, it won't accept values that are either too small or too large.
     * Values must be in the range of -2^360 to 2^360.</p>
     */
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }

    /**
     * <p>The target value for the metric. Although this property accepts numbers of
     * type Double, it won't accept values that are either too small or too large.
     * Values must be in the range of -2^360 to 2^360.</p>
     */
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }

    /**
     * <p>The target value for the metric. Although this property accepts numbers of
     * type Double, it won't accept values that are either too small or too large.
     * Values must be in the range of -2^360 to 2^360.</p>
     */
    inline TargetTrackingConfiguration& WithTargetValue(double value) { SetTargetValue(value); return *this;}


    /**
     * <p>Indicates whether scale in by the target tracking scaling policy is disabled.
     * If the value is <code>true</code>, scale in is disabled and the target tracking
     * scaling policy doesn't remove capacity from the scalable resource. Otherwise,
     * scale in is enabled and the target tracking scaling policy can remove capacity
     * from the scalable resource. </p> <p>The default value is <code>false</code>.</p>
     */
    inline bool GetDisableScaleIn() const{ return m_disableScaleIn; }

    /**
     * <p>Indicates whether scale in by the target tracking scaling policy is disabled.
     * If the value is <code>true</code>, scale in is disabled and the target tracking
     * scaling policy doesn't remove capacity from the scalable resource. Otherwise,
     * scale in is enabled and the target tracking scaling policy can remove capacity
     * from the scalable resource. </p> <p>The default value is <code>false</code>.</p>
     */
    inline bool DisableScaleInHasBeenSet() const { return m_disableScaleInHasBeenSet; }

    /**
     * <p>Indicates whether scale in by the target tracking scaling policy is disabled.
     * If the value is <code>true</code>, scale in is disabled and the target tracking
     * scaling policy doesn't remove capacity from the scalable resource. Otherwise,
     * scale in is enabled and the target tracking scaling policy can remove capacity
     * from the scalable resource. </p> <p>The default value is <code>false</code>.</p>
     */
    inline void SetDisableScaleIn(bool value) { m_disableScaleInHasBeenSet = true; m_disableScaleIn = value; }

    /**
     * <p>Indicates whether scale in by the target tracking scaling policy is disabled.
     * If the value is <code>true</code>, scale in is disabled and the target tracking
     * scaling policy doesn't remove capacity from the scalable resource. Otherwise,
     * scale in is enabled and the target tracking scaling policy can remove capacity
     * from the scalable resource. </p> <p>The default value is <code>false</code>.</p>
     */
    inline TargetTrackingConfiguration& WithDisableScaleIn(bool value) { SetDisableScaleIn(value); return *this;}


    /**
     * <p>The amount of time, in seconds, to wait for a previous scale-out activity to
     * take effect. This property is not used if the scalable resource is an Auto
     * Scaling group.</p> <p>With the <i>scale-out cooldown period</i>, the intention
     * is to continuously (but not excessively) scale out. After Auto Scaling
     * successfully scales out using a target tracking scaling policy, it starts to
     * calculate the cooldown time. The scaling policy won't increase the desired
     * capacity again unless either a larger scale out is triggered or the cooldown
     * period ends.</p>
     */
    inline int GetScaleOutCooldown() const{ return m_scaleOutCooldown; }

    /**
     * <p>The amount of time, in seconds, to wait for a previous scale-out activity to
     * take effect. This property is not used if the scalable resource is an Auto
     * Scaling group.</p> <p>With the <i>scale-out cooldown period</i>, the intention
     * is to continuously (but not excessively) scale out. After Auto Scaling
     * successfully scales out using a target tracking scaling policy, it starts to
     * calculate the cooldown time. The scaling policy won't increase the desired
     * capacity again unless either a larger scale out is triggered or the cooldown
     * period ends.</p>
     */
    inline bool ScaleOutCooldownHasBeenSet() const { return m_scaleOutCooldownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, to wait for a previous scale-out activity to
     * take effect. This property is not used if the scalable resource is an Auto
     * Scaling group.</p> <p>With the <i>scale-out cooldown period</i>, the intention
     * is to continuously (but not excessively) scale out. After Auto Scaling
     * successfully scales out using a target tracking scaling policy, it starts to
     * calculate the cooldown time. The scaling policy won't increase the desired
     * capacity again unless either a larger scale out is triggered or the cooldown
     * period ends.</p>
     */
    inline void SetScaleOutCooldown(int value) { m_scaleOutCooldownHasBeenSet = true; m_scaleOutCooldown = value; }

    /**
     * <p>The amount of time, in seconds, to wait for a previous scale-out activity to
     * take effect. This property is not used if the scalable resource is an Auto
     * Scaling group.</p> <p>With the <i>scale-out cooldown period</i>, the intention
     * is to continuously (but not excessively) scale out. After Auto Scaling
     * successfully scales out using a target tracking scaling policy, it starts to
     * calculate the cooldown time. The scaling policy won't increase the desired
     * capacity again unless either a larger scale out is triggered or the cooldown
     * period ends.</p>
     */
    inline TargetTrackingConfiguration& WithScaleOutCooldown(int value) { SetScaleOutCooldown(value); return *this;}


    /**
     * <p>The amount of time, in seconds, after a scale-in activity completes before
     * another scale-in activity can start. This property is not used if the scalable
     * resource is an Auto Scaling group.</p> <p>With the <i>scale-in cooldown
     * period</i>, the intention is to scale in conservatively to protect your
     * application’s availability, so scale-in activities are blocked until the
     * cooldown period has expired. However, if another alarm triggers a scale-out
     * activity during the scale-in cooldown period, Auto Scaling scales out the target
     * immediately. In this case, the scale-in cooldown period stops and doesn't
     * complete.</p>
     */
    inline int GetScaleInCooldown() const{ return m_scaleInCooldown; }

    /**
     * <p>The amount of time, in seconds, after a scale-in activity completes before
     * another scale-in activity can start. This property is not used if the scalable
     * resource is an Auto Scaling group.</p> <p>With the <i>scale-in cooldown
     * period</i>, the intention is to scale in conservatively to protect your
     * application’s availability, so scale-in activities are blocked until the
     * cooldown period has expired. However, if another alarm triggers a scale-out
     * activity during the scale-in cooldown period, Auto Scaling scales out the target
     * immediately. In this case, the scale-in cooldown period stops and doesn't
     * complete.</p>
     */
    inline bool ScaleInCooldownHasBeenSet() const { return m_scaleInCooldownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after a scale-in activity completes before
     * another scale-in activity can start. This property is not used if the scalable
     * resource is an Auto Scaling group.</p> <p>With the <i>scale-in cooldown
     * period</i>, the intention is to scale in conservatively to protect your
     * application’s availability, so scale-in activities are blocked until the
     * cooldown period has expired. However, if another alarm triggers a scale-out
     * activity during the scale-in cooldown period, Auto Scaling scales out the target
     * immediately. In this case, the scale-in cooldown period stops and doesn't
     * complete.</p>
     */
    inline void SetScaleInCooldown(int value) { m_scaleInCooldownHasBeenSet = true; m_scaleInCooldown = value; }

    /**
     * <p>The amount of time, in seconds, after a scale-in activity completes before
     * another scale-in activity can start. This property is not used if the scalable
     * resource is an Auto Scaling group.</p> <p>With the <i>scale-in cooldown
     * period</i>, the intention is to scale in conservatively to protect your
     * application’s availability, so scale-in activities are blocked until the
     * cooldown period has expired. However, if another alarm triggers a scale-out
     * activity during the scale-in cooldown period, Auto Scaling scales out the target
     * immediately. In this case, the scale-in cooldown period stops and doesn't
     * complete.</p>
     */
    inline TargetTrackingConfiguration& WithScaleInCooldown(int value) { SetScaleInCooldown(value); return *this;}


    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics. This value is used only if the resource is
     * an Auto Scaling group.</p>
     */
    inline int GetEstimatedInstanceWarmup() const{ return m_estimatedInstanceWarmup; }

    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics. This value is used only if the resource is
     * an Auto Scaling group.</p>
     */
    inline bool EstimatedInstanceWarmupHasBeenSet() const { return m_estimatedInstanceWarmupHasBeenSet; }

    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics. This value is used only if the resource is
     * an Auto Scaling group.</p>
     */
    inline void SetEstimatedInstanceWarmup(int value) { m_estimatedInstanceWarmupHasBeenSet = true; m_estimatedInstanceWarmup = value; }

    /**
     * <p>The estimated time, in seconds, until a newly launched instance can
     * contribute to the CloudWatch metrics. This value is used only if the resource is
     * an Auto Scaling group.</p>
     */
    inline TargetTrackingConfiguration& WithEstimatedInstanceWarmup(int value) { SetEstimatedInstanceWarmup(value); return *this;}

  private:

    PredefinedScalingMetricSpecification m_predefinedScalingMetricSpecification;
    bool m_predefinedScalingMetricSpecificationHasBeenSet = false;

    CustomizedScalingMetricSpecification m_customizedScalingMetricSpecification;
    bool m_customizedScalingMetricSpecificationHasBeenSet = false;

    double m_targetValue;
    bool m_targetValueHasBeenSet = false;

    bool m_disableScaleIn;
    bool m_disableScaleInHasBeenSet = false;

    int m_scaleOutCooldown;
    bool m_scaleOutCooldownHasBeenSet = false;

    int m_scaleInCooldown;
    bool m_scaleInCooldownHasBeenSet = false;

    int m_estimatedInstanceWarmup;
    bool m_estimatedInstanceWarmupHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
