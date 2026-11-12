/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AttackPhaseName.h>
#include <aws/guardduty/model/TechniqueCoverage.h>

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
 * <p>Contains information about the findings associated with a MITRE ATT&amp;CK
 * tactic.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/TacticCoverage">AWS
 * API Reference</a></p>
 */
class TacticCoverage {
 public:
  AWS_GUARDDUTY_API TacticCoverage() = default;
  AWS_GUARDDUTY_API TacticCoverage(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API TacticCoverage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the tactic. Possible values are <code>Reconnaissance</code>,
   * <code>Resource Development</code>, <code>Initial Access</code>,
   * <code>Execution</code>, <code>Persistence</code>, <code>Privilege
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
  inline TacticCoverage& WithPhase(AttackPhaseName value) {
    SetPhase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings associated with the tactic.</p>
   */
  inline int GetFindingCount() const { return m_findingCount; }
  inline bool FindingCountHasBeenSet() const { return m_findingCountHasBeenSet; }
  inline void SetFindingCount(int value) {
    m_findingCountHasBeenSet = true;
    m_findingCount = value;
  }
  inline TacticCoverage& WithFindingCount(int value) {
    SetFindingCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The finding types associated with the tactic.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFindingTypes() const { return m_findingTypes; }
  inline bool FindingTypesHasBeenSet() const { return m_findingTypesHasBeenSet; }
  template <typename FindingTypesT = Aws::Vector<Aws::String>>
  void SetFindingTypes(FindingTypesT&& value) {
    m_findingTypesHasBeenSet = true;
    m_findingTypes = std::forward<FindingTypesT>(value);
  }
  template <typename FindingTypesT = Aws::Vector<Aws::String>>
  TacticCoverage& WithFindingTypes(FindingTypesT&& value) {
    SetFindingTypes(std::forward<FindingTypesT>(value));
    return *this;
  }
  template <typename FindingTypesT = Aws::String>
  TacticCoverage& AddFindingTypes(FindingTypesT&& value) {
    m_findingTypesHasBeenSet = true;
    m_findingTypes.emplace_back(std::forward<FindingTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MITRE ATT&amp;CK techniques within the tactic that are associated with
   * findings.</p>
   */
  inline const Aws::Vector<TechniqueCoverage>& GetTechniques() const { return m_techniques; }
  inline bool TechniquesHasBeenSet() const { return m_techniquesHasBeenSet; }
  template <typename TechniquesT = Aws::Vector<TechniqueCoverage>>
  void SetTechniques(TechniquesT&& value) {
    m_techniquesHasBeenSet = true;
    m_techniques = std::forward<TechniquesT>(value);
  }
  template <typename TechniquesT = Aws::Vector<TechniqueCoverage>>
  TacticCoverage& WithTechniques(TechniquesT&& value) {
    SetTechniques(std::forward<TechniquesT>(value));
    return *this;
  }
  template <typename TechniquesT = TechniqueCoverage>
  TacticCoverage& AddTechniques(TechniquesT&& value) {
    m_techniquesHasBeenSet = true;
    m_techniques.emplace_back(std::forward<TechniquesT>(value));
    return *this;
  }
  ///@}
 private:
  AttackPhaseName m_phase{AttackPhaseName::NOT_SET};

  int m_findingCount{0};

  Aws::Vector<Aws::String> m_findingTypes;

  Aws::Vector<TechniqueCoverage> m_techniques;
  bool m_phaseHasBeenSet = false;
  bool m_findingCountHasBeenSet = false;
  bool m_findingTypesHasBeenSet = false;
  bool m_techniquesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
