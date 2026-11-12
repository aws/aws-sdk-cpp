/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FindingReference.h>
#include <aws/guardduty/model/ThreatReference.h>

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
 * <p>Contains a MITRE ATT&amp;CK tactic and technique observed during an attack,
 * with the findings that are associated with them.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Attack">AWS
 * API Reference</a></p>
 */
class Attack {
 public:
  AWS_GUARDDUTY_API Attack() = default;
  AWS_GUARDDUTY_API Attack(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Attack& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The MITRE ATT&amp;CK tactic.</p>
   */
  inline const ThreatReference& GetTactic() const { return m_tactic; }
  inline bool TacticHasBeenSet() const { return m_tacticHasBeenSet; }
  template <typename TacticT = ThreatReference>
  void SetTactic(TacticT&& value) {
    m_tacticHasBeenSet = true;
    m_tactic = std::forward<TacticT>(value);
  }
  template <typename TacticT = ThreatReference>
  Attack& WithTactic(TacticT&& value) {
    SetTactic(std::forward<TacticT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MITRE ATT&amp;CK technique.</p>
   */
  inline const ThreatReference& GetTechnique() const { return m_technique; }
  inline bool TechniqueHasBeenSet() const { return m_techniqueHasBeenSet; }
  template <typename TechniqueT = ThreatReference>
  void SetTechnique(TechniqueT&& value) {
    m_techniqueHasBeenSet = true;
    m_technique = std::forward<TechniqueT>(value);
  }
  template <typename TechniqueT = ThreatReference>
  Attack& WithTechnique(TechniqueT&& value) {
    SetTechnique(std::forward<TechniqueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The findings associated with the tactic and technique.</p>
   */
  inline const Aws::Vector<FindingReference>& GetFindings() const { return m_findings; }
  inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
  template <typename FindingsT = Aws::Vector<FindingReference>>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = Aws::Vector<FindingReference>>
  Attack& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
    return *this;
  }
  template <typename FindingsT = FindingReference>
  Attack& AddFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings.emplace_back(std::forward<FindingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the attack framework that the tactic and technique
   * classification uses.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  Attack& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}
 private:
  ThreatReference m_tactic;

  ThreatReference m_technique;

  Aws::Vector<FindingReference> m_findings;

  Aws::String m_version;
  bool m_tacticHasBeenSet = false;
  bool m_techniqueHasBeenSet = false;
  bool m_findingsHasBeenSet = false;
  bool m_versionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
