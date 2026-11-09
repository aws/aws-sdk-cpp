/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/SignalAttackerGainsDimension.h>
#include <aws/continuum/model/SignalBlastRadiusDimension.h>
#include <aws/continuum/model/SignalTargetValueDimension.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>The three impact dimensions an impact signal assessed. The computed impact
 * band is derived from attackerGains and blastRadius, then shifted by
 * targetValue.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/SignalImpactDimensions">AWS
 * API Reference</a></p>
 */
class SignalImpactDimensions {
 public:
  AWS_CONTINUUM_API SignalImpactDimensions() = default;
  AWS_CONTINUUM_API SignalImpactDimensions(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API SignalImpactDimensions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>What the attacker gains from exploitation.</p>
   */
  inline const SignalAttackerGainsDimension& GetAttackerGains() const { return m_attackerGains; }
  inline bool AttackerGainsHasBeenSet() const { return m_attackerGainsHasBeenSet; }
  template <typename AttackerGainsT = SignalAttackerGainsDimension>
  void SetAttackerGains(AttackerGainsT&& value) {
    m_attackerGainsHasBeenSet = true;
    m_attackerGains = std::forward<AttackerGainsT>(value);
  }
  template <typename AttackerGainsT = SignalAttackerGainsDimension>
  SignalImpactDimensions& WithAttackerGains(AttackerGainsT&& value) {
    SetAttackerGains(std::forward<AttackerGainsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How far the consequences reach.</p>
   */
  inline const SignalBlastRadiusDimension& GetBlastRadius() const { return m_blastRadius; }
  inline bool BlastRadiusHasBeenSet() const { return m_blastRadiusHasBeenSet; }
  template <typename BlastRadiusT = SignalBlastRadiusDimension>
  void SetBlastRadius(BlastRadiusT&& value) {
    m_blastRadiusHasBeenSet = true;
    m_blastRadius = std::forward<BlastRadiusT>(value);
  }
  template <typename BlastRadiusT = SignalBlastRadiusDimension>
  SignalImpactDimensions& WithBlastRadius(BlastRadiusT&& value) {
    SetBlastRadius(std::forward<BlastRadiusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How valuable the target is, which can shift the band off its base value.</p>
   */
  inline const SignalTargetValueDimension& GetTargetValue() const { return m_targetValue; }
  inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }
  template <typename TargetValueT = SignalTargetValueDimension>
  void SetTargetValue(TargetValueT&& value) {
    m_targetValueHasBeenSet = true;
    m_targetValue = std::forward<TargetValueT>(value);
  }
  template <typename TargetValueT = SignalTargetValueDimension>
  SignalImpactDimensions& WithTargetValue(TargetValueT&& value) {
    SetTargetValue(std::forward<TargetValueT>(value));
    return *this;
  }
  ///@}
 private:
  SignalAttackerGainsDimension m_attackerGains;

  SignalBlastRadiusDimension m_blastRadius;

  SignalTargetValueDimension m_targetValue;
  bool m_attackerGainsHasBeenSet = false;
  bool m_blastRadiusHasBeenSet = false;
  bool m_targetValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
