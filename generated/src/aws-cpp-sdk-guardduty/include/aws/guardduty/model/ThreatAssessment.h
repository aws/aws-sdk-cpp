/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AttackPhase.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains an assessment of the threat that a <code>FINDING</code>
 * investigation identified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ThreatAssessment">AWS
 * API Reference</a></p>
 */
class ThreatAssessment {
 public:
  AWS_GUARDDUTY_API ThreatAssessment() = default;
  AWS_GUARDDUTY_API ThreatAssessment(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ThreatAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The phases of the attack, in terms of MITRE ATT&amp;CK tactics.</p>
   */
  inline const Aws::Vector<AttackPhase>& GetAttackProgression() const { return m_attackProgression; }
  inline bool AttackProgressionHasBeenSet() const { return m_attackProgressionHasBeenSet; }
  template <typename AttackProgressionT = Aws::Vector<AttackPhase>>
  void SetAttackProgression(AttackProgressionT&& value) {
    m_attackProgressionHasBeenSet = true;
    m_attackProgression = std::forward<AttackProgressionT>(value);
  }
  template <typename AttackProgressionT = Aws::Vector<AttackPhase>>
  ThreatAssessment& WithAttackProgression(AttackProgressionT&& value) {
    SetAttackProgression(std::forward<AttackProgressionT>(value));
    return *this;
  }
  template <typename AttackProgressionT = AttackPhase>
  ThreatAssessment& AddAttackProgression(AttackProgressionT&& value) {
    m_attackProgressionHasBeenSet = true;
    m_attackProgression.emplace_back(std::forward<AttackProgressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the likely threat actor.</p>
   */
  inline const Aws::String& GetThreatActorProfile() const { return m_threatActorProfile; }
  inline bool ThreatActorProfileHasBeenSet() const { return m_threatActorProfileHasBeenSet; }
  template <typename ThreatActorProfileT = Aws::String>
  void SetThreatActorProfile(ThreatActorProfileT&& value) {
    m_threatActorProfileHasBeenSet = true;
    m_threatActorProfile = std::forward<ThreatActorProfileT>(value);
  }
  template <typename ThreatActorProfileT = Aws::String>
  ThreatAssessment& WithThreatActorProfile(ThreatActorProfileT&& value) {
    SetThreatActorProfile(std::forward<ThreatActorProfileT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AttackPhase> m_attackProgression;

  Aws::String m_threatActorProfile;
  bool m_attackProgressionHasBeenSet = false;
  bool m_threatActorProfileHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
