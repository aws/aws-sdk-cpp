/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Attack.h>
#include <aws/guardduty/model/AttackPhaseName.h>

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
 * <p>Contains information about one phase of an attack.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AttackPhase">AWS
 * API Reference</a></p>
 */
class AttackPhase {
 public:
  AWS_GUARDDUTY_API AttackPhase() = default;
  AWS_GUARDDUTY_API AttackPhase(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API AttackPhase& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The MITRE ATT&amp;CK tactic of the phase. Possible values are
   * <code>Reconnaissance</code>, <code>Resource Development</code>, <code>Initial
   * Access</code>, <code>Execution</code>, <code>Persistence</code>, <code>Privilege
   * Escalation</code>, <code>Defense Evasion</code>, <code>Credential Access</code>,
   * <code>Discovery</code>, <code>Lateral Movement</code>, <code>Collection</code>,
   * <code>Command and Control</code>, <code>Exfiltration</code>, and
   * <code>Impact</code>.</p>
   */
  inline AttackPhaseName GetPhase() const { return m_phase; }
  inline bool PhaseHasBeenSet() const { return m_phaseHasBeenSet; }
  inline void SetPhase(AttackPhaseName value) {
    m_phaseHasBeenSet = true;
    m_phase = value;
  }
  inline AttackPhase& WithPhase(AttackPhaseName value) {
    SetPhase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the activity in this phase.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AttackPhase& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MITRE ATT&amp;CK tactics and techniques observed in this phase, with the
   * findings that are associated with them.</p>
   */
  inline const Aws::Vector<Attack>& GetAttacks() const { return m_attacks; }
  inline bool AttacksHasBeenSet() const { return m_attacksHasBeenSet; }
  template <typename AttacksT = Aws::Vector<Attack>>
  void SetAttacks(AttacksT&& value) {
    m_attacksHasBeenSet = true;
    m_attacks = std::forward<AttacksT>(value);
  }
  template <typename AttacksT = Aws::Vector<Attack>>
  AttackPhase& WithAttacks(AttacksT&& value) {
    SetAttacks(std::forward<AttacksT>(value));
    return *this;
  }
  template <typename AttacksT = Attack>
  AttackPhase& AddAttacks(AttacksT&& value) {
    m_attacksHasBeenSet = true;
    m_attacks.emplace_back(std::forward<AttacksT>(value));
    return *this;
  }
  ///@}
 private:
  AttackPhaseName m_phase{AttackPhaseName::NOT_SET};

  Aws::String m_description;

  Aws::Vector<Attack> m_attacks;
  bool m_phaseHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_attacksHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
