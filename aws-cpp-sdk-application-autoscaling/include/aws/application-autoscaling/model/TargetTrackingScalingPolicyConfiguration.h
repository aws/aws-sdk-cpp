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
   * Application Auto Scaling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/TargetTrackingScalingPolicyConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONAUTOSCALING_API TargetTrackingScalingPolicyConfiguration
  {
  public:
    TargetTrackingScalingPolicyConfiguration();
    TargetTrackingScalingPolicyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    TargetTrackingScalingPolicyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target value for the metric. The range is 8.515920e-109 to 1.174271e+108
     * (Base 10) or 2e-360 to 2e360 (Base 2).</p>
     */
    inline double GetTargetValue() const{ return m_targetValue; }

    /**
     * <p>The target value for the metric. The range is 8.515920e-109 to 1.174271e+108
     * (Base 10) or 2e-360 to 2e360 (Base 2).</p>
     */
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }

    /**
     * <p>The target value for the metric. The range is 8.515920e-109 to 1.174271e+108
     * (Base 10) or 2e-360 to 2e360 (Base 2).</p>
     */
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }

    /**
     * <p>The target value for the metric. The range is 8.515920e-109 to 1.174271e+108
     * (Base 10) or 2e-360 to 2e360 (Base 2).</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithTargetValue(double value) { SetTargetValue(value); return *this;}


    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline const PredefinedMetricSpecification& GetPredefinedMetricSpecification() const{ return m_predefinedMetricSpecification; }

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline bool PredefinedMetricSpecificationHasBeenSet() const { return m_predefinedMetricSpecificationHasBeenSet; }

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetPredefinedMetricSpecification(const PredefinedMetricSpecification& value) { m_predefinedMetricSpecificationHasBeenSet = true; m_predefinedMetricSpecification = value; }

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetPredefinedMetricSpecification(PredefinedMetricSpecification&& value) { m_predefinedMetricSpecificationHasBeenSet = true; m_predefinedMetricSpecification = std::move(value); }

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithPredefinedMetricSpecification(const PredefinedMetricSpecification& value) { SetPredefinedMetricSpecification(value); return *this;}

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithPredefinedMetricSpecification(PredefinedMetricSpecification&& value) { SetPredefinedMetricSpecification(std::move(value)); return *this;}


    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline const CustomizedMetricSpecification& GetCustomizedMetricSpecification() const{ return m_customizedMetricSpecification; }

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline bool CustomizedMetricSpecificationHasBeenSet() const { return m_customizedMetricSpecificationHasBeenSet; }

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetCustomizedMetricSpecification(const CustomizedMetricSpecification& value) { m_customizedMetricSpecificationHasBeenSet = true; m_customizedMetricSpecification = value; }

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetCustomizedMetricSpecification(CustomizedMetricSpecification&& value) { m_customizedMetricSpecificationHasBeenSet = true; m_customizedMetricSpecification = std::move(value); }

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithCustomizedMetricSpecification(const CustomizedMetricSpecification& value) { SetCustomizedMetricSpecification(value); return *this;}

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithCustomizedMetricSpecification(CustomizedMetricSpecification&& value) { SetCustomizedMetricSpecification(std::move(value)); return *this;}


    /**
     * <p>The amount of time, in seconds, after a scale-out activity completes before
     * another scale-out activity can start.</p> <p>While the cooldown period is in
     * effect, the capacity that has been added by the previous scale-out event that
     * initiated the cooldown is calculated as part of the desired capacity for the
     * next scale out. The intention is to continuously (but not excessively) scale
     * out.</p>
     */
    inline int GetScaleOutCooldown() const{ return m_scaleOutCooldown; }

    /**
     * <p>The amount of time, in seconds, after a scale-out activity completes before
     * another scale-out activity can start.</p> <p>While the cooldown period is in
     * effect, the capacity that has been added by the previous scale-out event that
     * initiated the cooldown is calculated as part of the desired capacity for the
     * next scale out. The intention is to continuously (but not excessively) scale
     * out.</p>
     */
    inline bool ScaleOutCooldownHasBeenSet() const { return m_scaleOutCooldownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after a scale-out activity completes before
     * another scale-out activity can start.</p> <p>While the cooldown period is in
     * effect, the capacity that has been added by the previous scale-out event that
     * initiated the cooldown is calculated as part of the desired capacity for the
     * next scale out. The intention is to continuously (but not excessively) scale
     * out.</p>
     */
    inline void SetScaleOutCooldown(int value) { m_scaleOutCooldownHasBeenSet = true; m_scaleOutCooldown = value; }

    /**
     * <p>The amount of time, in seconds, after a scale-out activity completes before
     * another scale-out activity can start.</p> <p>While the cooldown period is in
     * effect, the capacity that has been added by the previous scale-out event that
     * initiated the cooldown is calculated as part of the desired capacity for the
     * next scale out. The intention is to continuously (but not excessively) scale
     * out.</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithScaleOutCooldown(int value) { SetScaleOutCooldown(value); return *this;}


    /**
     * <p>The amount of time, in seconds, after a scale-in activity completes before
     * another scale in activity can start.</p> <p>The cooldown period is used to block
     * subsequent scale-in requests until it has expired. The intention is to scale in
     * conservatively to protect your application's availability. However, if another
     * alarm triggers a scale-out policy during the cooldown period after a scale-in,
     * Application Auto Scaling scales out your scalable target immediately.</p>
     */
    inline int GetScaleInCooldown() const{ return m_scaleInCooldown; }

    /**
     * <p>The amount of time, in seconds, after a scale-in activity completes before
     * another scale in activity can start.</p> <p>The cooldown period is used to block
     * subsequent scale-in requests until it has expired. The intention is to scale in
     * conservatively to protect your application's availability. However, if another
     * alarm triggers a scale-out policy during the cooldown period after a scale-in,
     * Application Auto Scaling scales out your scalable target immediately.</p>
     */
    inline bool ScaleInCooldownHasBeenSet() const { return m_scaleInCooldownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after a scale-in activity completes before
     * another scale in activity can start.</p> <p>The cooldown period is used to block
     * subsequent scale-in requests until it has expired. The intention is to scale in
     * conservatively to protect your application's availability. However, if another
     * alarm triggers a scale-out policy during the cooldown period after a scale-in,
     * Application Auto Scaling scales out your scalable target immediately.</p>
     */
    inline void SetScaleInCooldown(int value) { m_scaleInCooldownHasBeenSet = true; m_scaleInCooldown = value; }

    /**
     * <p>The amount of time, in seconds, after a scale-in activity completes before
     * another scale in activity can start.</p> <p>The cooldown period is used to block
     * subsequent scale-in requests until it has expired. The intention is to scale in
     * conservatively to protect your application's availability. However, if another
     * alarm triggers a scale-out policy during the cooldown period after a scale-in,
     * Application Auto Scaling scales out your scalable target immediately.</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithScaleInCooldown(int value) { SetScaleInCooldown(value); return *this;}


    /**
     * <p>Indicates whether scale in by the target tracking scaling policy is disabled.
     * If the value is <code>true</code>, scale in is disabled and the target tracking
     * scaling policy won't remove capacity from the scalable resource. Otherwise,
     * scale in is enabled and the target tracking scaling policy can remove capacity
     * from the scalable resource. The default value is <code>false</code>.</p>
     */
    inline bool GetDisableScaleIn() const{ return m_disableScaleIn; }

    /**
     * <p>Indicates whether scale in by the target tracking scaling policy is disabled.
     * If the value is <code>true</code>, scale in is disabled and the target tracking
     * scaling policy won't remove capacity from the scalable resource. Otherwise,
     * scale in is enabled and the target tracking scaling policy can remove capacity
     * from the scalable resource. The default value is <code>false</code>.</p>
     */
    inline bool DisableScaleInHasBeenSet() const { return m_disableScaleInHasBeenSet; }

    /**
     * <p>Indicates whether scale in by the target tracking scaling policy is disabled.
     * If the value is <code>true</code>, scale in is disabled and the target tracking
     * scaling policy won't remove capacity from the scalable resource. Otherwise,
     * scale in is enabled and the target tracking scaling policy can remove capacity
     * from the scalable resource. The default value is <code>false</code>.</p>
     */
    inline void SetDisableScaleIn(bool value) { m_disableScaleInHasBeenSet = true; m_disableScaleIn = value; }

    /**
     * <p>Indicates whether scale in by the target tracking scaling policy is disabled.
     * If the value is <code>true</code>, scale in is disabled and the target tracking
     * scaling policy won't remove capacity from the scalable resource. Otherwise,
     * scale in is enabled and the target tracking scaling policy can remove capacity
     * from the scalable resource. The default value is <code>false</code>.</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithDisableScaleIn(bool value) { SetDisableScaleIn(value); return *this;}

  private:

    double m_targetValue;
    bool m_targetValueHasBeenSet;

    PredefinedMetricSpecification m_predefinedMetricSpecification;
    bool m_predefinedMetricSpecificationHasBeenSet;

    CustomizedMetricSpecification m_customizedMetricSpecification;
    bool m_customizedMetricSpecificationHasBeenSet;

    int m_scaleOutCooldown;
    bool m_scaleOutCooldownHasBeenSet;

    int m_scaleInCooldown;
    bool m_scaleInCooldownHasBeenSet;

    bool m_disableScaleIn;
    bool m_disableScaleInHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
