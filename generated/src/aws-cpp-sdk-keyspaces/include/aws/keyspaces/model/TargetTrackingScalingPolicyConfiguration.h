/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/keyspaces/Keyspaces_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Keyspaces {
namespace Model {

/**
 * <p>The auto scaling policy that scales a table based on the ratio of consumed to
 * provisioned capacity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/TargetTrackingScalingPolicyConfiguration">AWS
 * API Reference</a></p>
 */
class TargetTrackingScalingPolicyConfiguration {
 public:
  AWS_KEYSPACES_API TargetTrackingScalingPolicyConfiguration() = default;
  AWS_KEYSPACES_API TargetTrackingScalingPolicyConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_KEYSPACES_API TargetTrackingScalingPolicyConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_KEYSPACES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Specifies if <code>scale-in</code> is enabled.</p> <p>When auto scaling
   * automatically decreases capacity for a table, the table <i>scales in</i>. When
   * scaling policies are set, they can't scale in the table lower than its minimum
   * capacity.</p>
   */
  inline bool GetDisableScaleIn() const { return m_disableScaleIn; }
  inline bool DisableScaleInHasBeenSet() const { return m_disableScaleInHasBeenSet; }
  inline void SetDisableScaleIn(bool value) {
    m_disableScaleInHasBeenSet = true;
    m_disableScaleIn = value;
  }
  inline TargetTrackingScalingPolicyConfiguration& WithDisableScaleIn(bool value) {
    SetDisableScaleIn(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies a <code>scale-in</code> cool down period.</p> <p>A cooldown period
   * in seconds between scaling activities that lets the table stabilize before
   * another scaling activity starts. </p>
   */
  inline int64_t GetScaleInCooldown() const { return m_scaleInCooldown; }
  inline bool ScaleInCooldownHasBeenSet() const { return m_scaleInCooldownHasBeenSet; }
  inline void SetScaleInCooldown(int64_t value) {
    m_scaleInCooldownHasBeenSet = true;
    m_scaleInCooldown = value;
  }
  inline TargetTrackingScalingPolicyConfiguration& WithScaleInCooldown(int64_t value) {
    SetScaleInCooldown(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies a scale out cool down period.</p> <p>A cooldown period in seconds
   * between scaling activities that lets the table stabilize before another scaling
   * activity starts. </p>
   */
  inline int64_t GetScaleOutCooldown() const { return m_scaleOutCooldown; }
  inline bool ScaleOutCooldownHasBeenSet() const { return m_scaleOutCooldownHasBeenSet; }
  inline void SetScaleOutCooldown(int64_t value) {
    m_scaleOutCooldownHasBeenSet = true;
    m_scaleOutCooldown = value;
  }
  inline TargetTrackingScalingPolicyConfiguration& WithScaleOutCooldown(int64_t value) {
    SetScaleOutCooldown(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the target value for the target tracking auto scaling policy.</p>
   * <p>Amazon Keyspaces auto scaling scales up capacity automatically when traffic
   * exceeds this target utilization rate, and then back down when it falls below the
   * target. This ensures that the ratio of consumed capacity to provisioned capacity
   * stays at or near this value. You define <code>targetValue</code> as a
   * percentage. A <code>double</code> between 20 and 90.</p>
   */
  inline double GetTargetValue() const { return m_targetValue; }
  inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }
  inline void SetTargetValue(double value) {
    m_targetValueHasBeenSet = true;
    m_targetValue = value;
  }
  inline TargetTrackingScalingPolicyConfiguration& WithTargetValue(double value) {
    SetTargetValue(value);
    return *this;
  }
  ///@}
 private:
  bool m_disableScaleIn{false};

  int64_t m_scaleInCooldown{0};

  int64_t m_scaleOutCooldown{0};

  double m_targetValue{0.0};
  bool m_disableScaleInHasBeenSet = false;
  bool m_scaleInCooldownHasBeenSet = false;
  bool m_scaleOutCooldownHasBeenSet = false;
  bool m_targetValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Keyspaces
}  // namespace Aws
