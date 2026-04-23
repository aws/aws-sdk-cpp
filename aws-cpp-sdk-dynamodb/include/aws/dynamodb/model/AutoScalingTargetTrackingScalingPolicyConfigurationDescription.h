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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the properties of a target tracking scaling policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/AutoScalingTargetTrackingScalingPolicyConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API AutoScalingTargetTrackingScalingPolicyConfigurationDescription
  {
  public:
    AutoScalingTargetTrackingScalingPolicyConfigurationDescription();
    AutoScalingTargetTrackingScalingPolicyConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AutoScalingTargetTrackingScalingPolicyConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether scale in by the target tracking policy is disabled. If the
     * value is true, scale in is disabled and the target tracking policy won't remove
     * capacity from the scalable resource. Otherwise, scale in is enabled and the
     * target tracking policy can remove capacity from the scalable resource. The
     * default value is false.</p>
     */
    inline bool GetDisableScaleIn() const{ return m_disableScaleIn; }

    /**
     * <p>Indicates whether scale in by the target tracking policy is disabled. If the
     * value is true, scale in is disabled and the target tracking policy won't remove
     * capacity from the scalable resource. Otherwise, scale in is enabled and the
     * target tracking policy can remove capacity from the scalable resource. The
     * default value is false.</p>
     */
    inline bool DisableScaleInHasBeenSet() const { return m_disableScaleInHasBeenSet; }

    /**
     * <p>Indicates whether scale in by the target tracking policy is disabled. If the
     * value is true, scale in is disabled and the target tracking policy won't remove
     * capacity from the scalable resource. Otherwise, scale in is enabled and the
     * target tracking policy can remove capacity from the scalable resource. The
     * default value is false.</p>
     */
    inline void SetDisableScaleIn(bool value) { m_disableScaleInHasBeenSet = true; m_disableScaleIn = value; }

    /**
     * <p>Indicates whether scale in by the target tracking policy is disabled. If the
     * value is true, scale in is disabled and the target tracking policy won't remove
     * capacity from the scalable resource. Otherwise, scale in is enabled and the
     * target tracking policy can remove capacity from the scalable resource. The
     * default value is false.</p>
     */
    inline AutoScalingTargetTrackingScalingPolicyConfigurationDescription& WithDisableScaleIn(bool value) { SetDisableScaleIn(value); return *this;}


    /**
     * <p>The amount of time, in seconds, after a scale in activity completes before
     * another scale in activity can start. The cooldown period is used to block
     * subsequent scale in requests until it has expired. You should scale in
     * conservatively to protect your application's availability. However, if another
     * alarm triggers a scale out policy during the cooldown period after a scale-in,
     * application autoscaling scales out your scalable target immediately. </p>
     */
    inline int GetScaleInCooldown() const{ return m_scaleInCooldown; }

    /**
     * <p>The amount of time, in seconds, after a scale in activity completes before
     * another scale in activity can start. The cooldown period is used to block
     * subsequent scale in requests until it has expired. You should scale in
     * conservatively to protect your application's availability. However, if another
     * alarm triggers a scale out policy during the cooldown period after a scale-in,
     * application autoscaling scales out your scalable target immediately. </p>
     */
    inline bool ScaleInCooldownHasBeenSet() const { return m_scaleInCooldownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after a scale in activity completes before
     * another scale in activity can start. The cooldown period is used to block
     * subsequent scale in requests until it has expired. You should scale in
     * conservatively to protect your application's availability. However, if another
     * alarm triggers a scale out policy during the cooldown period after a scale-in,
     * application autoscaling scales out your scalable target immediately. </p>
     */
    inline void SetScaleInCooldown(int value) { m_scaleInCooldownHasBeenSet = true; m_scaleInCooldown = value; }

    /**
     * <p>The amount of time, in seconds, after a scale in activity completes before
     * another scale in activity can start. The cooldown period is used to block
     * subsequent scale in requests until it has expired. You should scale in
     * conservatively to protect your application's availability. However, if another
     * alarm triggers a scale out policy during the cooldown period after a scale-in,
     * application autoscaling scales out your scalable target immediately. </p>
     */
    inline AutoScalingTargetTrackingScalingPolicyConfigurationDescription& WithScaleInCooldown(int value) { SetScaleInCooldown(value); return *this;}


    /**
     * <p>The amount of time, in seconds, after a scale out activity completes before
     * another scale out activity can start. While the cooldown period is in effect,
     * the capacity that has been added by the previous scale out event that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. You should continuously (but not excessively) scale out.</p>
     */
    inline int GetScaleOutCooldown() const{ return m_scaleOutCooldown; }

    /**
     * <p>The amount of time, in seconds, after a scale out activity completes before
     * another scale out activity can start. While the cooldown period is in effect,
     * the capacity that has been added by the previous scale out event that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. You should continuously (but not excessively) scale out.</p>
     */
    inline bool ScaleOutCooldownHasBeenSet() const { return m_scaleOutCooldownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after a scale out activity completes before
     * another scale out activity can start. While the cooldown period is in effect,
     * the capacity that has been added by the previous scale out event that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. You should continuously (but not excessively) scale out.</p>
     */
    inline void SetScaleOutCooldown(int value) { m_scaleOutCooldownHasBeenSet = true; m_scaleOutCooldown = value; }

    /**
     * <p>The amount of time, in seconds, after a scale out activity completes before
     * another scale out activity can start. While the cooldown period is in effect,
     * the capacity that has been added by the previous scale out event that initiated
     * the cooldown is calculated as part of the desired capacity for the next scale
     * out. You should continuously (but not excessively) scale out.</p>
     */
    inline AutoScalingTargetTrackingScalingPolicyConfigurationDescription& WithScaleOutCooldown(int value) { SetScaleOutCooldown(value); return *this;}


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
    inline AutoScalingTargetTrackingScalingPolicyConfigurationDescription& WithTargetValue(double value) { SetTargetValue(value); return *this;}

  private:

    bool m_disableScaleIn;
    bool m_disableScaleInHasBeenSet;

    int m_scaleInCooldown;
    bool m_scaleInCooldownHasBeenSet;

    int m_scaleOutCooldown;
    bool m_scaleOutCooldownHasBeenSet;

    double m_targetValue;
    bool m_targetValueHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
