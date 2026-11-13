/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
 * <p>Contains information about the findings associated with a MITRE ATT&amp;CK
 * technique.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/TechniqueCoverage">AWS
 * API Reference</a></p>
 */
class TechniqueCoverage {
 public:
  AWS_GUARDDUTY_API TechniqueCoverage() = default;
  AWS_GUARDDUTY_API TechniqueCoverage(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API TechniqueCoverage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The technique.</p>
   */
  inline const ThreatReference& GetTechnique() const { return m_technique; }
  inline bool TechniqueHasBeenSet() const { return m_techniqueHasBeenSet; }
  template <typename TechniqueT = ThreatReference>
  void SetTechnique(TechniqueT&& value) {
    m_techniqueHasBeenSet = true;
    m_technique = std::forward<TechniqueT>(value);
  }
  template <typename TechniqueT = ThreatReference>
  TechniqueCoverage& WithTechnique(TechniqueT&& value) {
    SetTechnique(std::forward<TechniqueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings associated with the technique.</p>
   */
  inline int GetFindingCount() const { return m_findingCount; }
  inline bool FindingCountHasBeenSet() const { return m_findingCountHasBeenSet; }
  inline void SetFindingCount(int value) {
    m_findingCountHasBeenSet = true;
    m_findingCount = value;
  }
  inline TechniqueCoverage& WithFindingCount(int value) {
    SetFindingCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The finding types associated with the technique.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFindingTypes() const { return m_findingTypes; }
  inline bool FindingTypesHasBeenSet() const { return m_findingTypesHasBeenSet; }
  template <typename FindingTypesT = Aws::Vector<Aws::String>>
  void SetFindingTypes(FindingTypesT&& value) {
    m_findingTypesHasBeenSet = true;
    m_findingTypes = std::forward<FindingTypesT>(value);
  }
  template <typename FindingTypesT = Aws::Vector<Aws::String>>
  TechniqueCoverage& WithFindingTypes(FindingTypesT&& value) {
    SetFindingTypes(std::forward<FindingTypesT>(value));
    return *this;
  }
  template <typename FindingTypesT = Aws::String>
  TechniqueCoverage& AddFindingTypes(FindingTypesT&& value) {
    m_findingTypesHasBeenSet = true;
    m_findingTypes.emplace_back(std::forward<FindingTypesT>(value));
    return *this;
  }
  ///@}
 private:
  ThreatReference m_technique;

  int m_findingCount{0};

  Aws::Vector<Aws::String> m_findingTypes;
  bool m_techniqueHasBeenSet = false;
  bool m_findingCountHasBeenSet = false;
  bool m_findingTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
