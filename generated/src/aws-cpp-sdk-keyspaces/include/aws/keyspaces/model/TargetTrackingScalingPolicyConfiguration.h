/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>

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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>The auto scaling policy that scales a table based on the ratio of consumed to
   * provisioned capacity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/TargetTrackingScalingPolicyConfiguration">AWS
   * API Reference</a></p>
   */
  class TargetTrackingScalingPolicyConfiguration
  {
  public:
    AWS_KEYSPACES_API TargetTrackingScalingPolicyConfiguration();
    AWS_KEYSPACES_API TargetTrackingScalingPolicyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API TargetTrackingScalingPolicyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies if <code>scale-in</code> is enabled.</p> <p>When auto scaling
     * automatically decreases capacity for a table, the table <i>scales in</i>. When
     * scaling policies are set, they can't scale in the table lower than its minimum
     * capacity.</p>
     */
    inline bool GetDisableScaleIn() const{ return m_disableScaleIn; }

    /**
     * <p>Specifies if <code>scale-in</code> is enabled.</p> <p>When auto scaling
     * automatically decreases capacity for a table, the table <i>scales in</i>. When
     * scaling policies are set, they can't scale in the table lower than its minimum
     * capacity.</p>
     */
    inline bool DisableScaleInHasBeenSet() const { return m_disableScaleInHasBeenSet; }

    /**
     * <p>Specifies if <code>scale-in</code> is enabled.</p> <p>When auto scaling
     * automatically decreases capacity for a table, the table <i>scales in</i>. When
     * scaling policies are set, they can't scale in the table lower than its minimum
     * capacity.</p>
     */
    inline void SetDisableScaleIn(bool value) { m_disableScaleInHasBeenSet = true; m_disableScaleIn = value; }

    /**
     * <p>Specifies if <code>scale-in</code> is enabled.</p> <p>When auto scaling
     * automatically decreases capacity for a table, the table <i>scales in</i>. When
     * scaling policies are set, they can't scale in the table lower than its minimum
     * capacity.</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithDisableScaleIn(bool value) { SetDisableScaleIn(value); return *this;}


    /**
     * <p>Specifies a <code>scale-in</code> cool down period.</p> <p>A cooldown period
     * in seconds between scaling activities that lets the table stabilize before
     * another scaling activity starts. </p>
     */
    inline int GetScaleInCooldown() const{ return m_scaleInCooldown; }

    /**
     * <p>Specifies a <code>scale-in</code> cool down period.</p> <p>A cooldown period
     * in seconds between scaling activities that lets the table stabilize before
     * another scaling activity starts. </p>
     */
    inline bool ScaleInCooldownHasBeenSet() const { return m_scaleInCooldownHasBeenSet; }

    /**
     * <p>Specifies a <code>scale-in</code> cool down period.</p> <p>A cooldown period
     * in seconds between scaling activities that lets the table stabilize before
     * another scaling activity starts. </p>
     */
    inline void SetScaleInCooldown(int value) { m_scaleInCooldownHasBeenSet = true; m_scaleInCooldown = value; }

    /**
     * <p>Specifies a <code>scale-in</code> cool down period.</p> <p>A cooldown period
     * in seconds between scaling activities that lets the table stabilize before
     * another scaling activity starts. </p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithScaleInCooldown(int value) { SetScaleInCooldown(value); return *this;}


    /**
     * <p>Specifies a scale out cool down period.</p> <p>A cooldown period in seconds
     * between scaling activities that lets the table stabilize before another scaling
     * activity starts. </p>
     */
    inline int GetScaleOutCooldown() const{ return m_scaleOutCooldown; }

    /**
     * <p>Specifies a scale out cool down period.</p> <p>A cooldown period in seconds
     * between scaling activities that lets the table stabilize before another scaling
     * activity starts. </p>
     */
    inline bool ScaleOutCooldownHasBeenSet() const { return m_scaleOutCooldownHasBeenSet; }

    /**
     * <p>Specifies a scale out cool down period.</p> <p>A cooldown period in seconds
     * between scaling activities that lets the table stabilize before another scaling
     * activity starts. </p>
     */
    inline void SetScaleOutCooldown(int value) { m_scaleOutCooldownHasBeenSet = true; m_scaleOutCooldown = value; }

    /**
     * <p>Specifies a scale out cool down period.</p> <p>A cooldown period in seconds
     * between scaling activities that lets the table stabilize before another scaling
     * activity starts. </p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithScaleOutCooldown(int value) { SetScaleOutCooldown(value); return *this;}


    /**
     * <p>Specifies the target value for the target tracking auto scaling policy.</p>
     * <p>Amazon Keyspaces auto scaling scales up capacity automatically when traffic
     * exceeds this target utilization rate, and then back down when it falls below the
     * target. This ensures that the ratio of consumed capacity to provisioned capacity
     * stays at or near this value. You define <code>targetValue</code> as a
     * percentage. A <code>double</code> between 20 and 90.</p>
     */
    inline double GetTargetValue() const{ return m_targetValue; }

    /**
     * <p>Specifies the target value for the target tracking auto scaling policy.</p>
     * <p>Amazon Keyspaces auto scaling scales up capacity automatically when traffic
     * exceeds this target utilization rate, and then back down when it falls below the
     * target. This ensures that the ratio of consumed capacity to provisioned capacity
     * stays at or near this value. You define <code>targetValue</code> as a
     * percentage. A <code>double</code> between 20 and 90.</p>
     */
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }

    /**
     * <p>Specifies the target value for the target tracking auto scaling policy.</p>
     * <p>Amazon Keyspaces auto scaling scales up capacity automatically when traffic
     * exceeds this target utilization rate, and then back down when it falls below the
     * target. This ensures that the ratio of consumed capacity to provisioned capacity
     * stays at or near this value. You define <code>targetValue</code> as a
     * percentage. A <code>double</code> between 20 and 90.</p>
     */
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }

    /**
     * <p>Specifies the target value for the target tracking auto scaling policy.</p>
     * <p>Amazon Keyspaces auto scaling scales up capacity automatically when traffic
     * exceeds this target utilization rate, and then back down when it falls below the
     * target. This ensures that the ratio of consumed capacity to provisioned capacity
     * stays at or near this value. You define <code>targetValue</code> as a
     * percentage. A <code>double</code> between 20 and 90.</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithTargetValue(double value) { SetTargetValue(value); return *this;}

  private:

    bool m_disableScaleIn;
    bool m_disableScaleInHasBeenSet = false;

    int m_scaleInCooldown;
    bool m_scaleInCooldownHasBeenSet = false;

    int m_scaleOutCooldown;
    bool m_scaleOutCooldownHasBeenSet = false;

    double m_targetValue;
    bool m_targetValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
