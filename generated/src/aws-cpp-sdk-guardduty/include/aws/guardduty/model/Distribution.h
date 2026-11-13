/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ArchiveDistribution.h>
#include <aws/guardduty/model/DistributionDimension.h>
#include <aws/guardduty/model/FindingTypeCount.h>
#include <aws/guardduty/model/ResourceDistribution.h>
#include <aws/guardduty/model/SeverityBreakdown.h>
#include <aws/guardduty/model/TacticCoverage.h>
#include <aws/guardduty/model/TypeDistribution.h>

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
 * <p>Contains a breakdown of findings along a dimension, such as severity or
 * finding type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Distribution">AWS
 * API Reference</a></p>
 */
class Distribution {
 public:
  AWS_GUARDDUTY_API Distribution() = default;
  AWS_GUARDDUTY_API Distribution(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Distribution& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The dimension of the breakdown. The value identifies the breakdown that the
   * record describes: <code>SEVERITY</code> (<code>SeverityBreakdown</code>),
   * <code>TYPE</code> (<code>FindingTypes</code> or <code>TopFindingTypes</code>),
   * <code>RESOURCE</code> (<code>Resources</code>), <code>ATTACK_VECTOR</code>
   * (<code>AttackVectors</code>), and <code>ARCHIVE</code>
   * (<code>Archive</code>).</p>
   */
  inline DistributionDimension GetDimension() const { return m_dimension; }
  inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
  inline void SetDimension(DistributionDimension value) {
    m_dimensionHasBeenSet = true;
    m_dimension = value;
  }
  inline Distribution& WithDimension(DistributionDimension value) {
    SetDimension(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of findings in the breakdown.</p>
   */
  inline long long GetTotalFindings() const { return m_totalFindings; }
  inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
  inline void SetTotalFindings(long long value) {
    m_totalFindingsHasBeenSet = true;
    m_totalFindings = value;
  }
  inline Distribution& WithTotalFindings(long long value) {
    SetTotalFindings(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings at each severity level.</p>
   */
  inline const SeverityBreakdown& GetSeverityBreakdown() const { return m_severityBreakdown; }
  inline bool SeverityBreakdownHasBeenSet() const { return m_severityBreakdownHasBeenSet; }
  template <typename SeverityBreakdownT = SeverityBreakdown>
  void SetSeverityBreakdown(SeverityBreakdownT&& value) {
    m_severityBreakdownHasBeenSet = true;
    m_severityBreakdown = std::forward<SeverityBreakdownT>(value);
  }
  template <typename SeverityBreakdownT = SeverityBreakdown>
  Distribution& WithSeverityBreakdown(SeverityBreakdownT&& value) {
    SetSeverityBreakdown(std::forward<SeverityBreakdownT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The findings broken down by finding type, with counts and percentages.</p>
   */
  inline const Aws::Vector<TypeDistribution>& GetFindingTypes() const { return m_findingTypes; }
  inline bool FindingTypesHasBeenSet() const { return m_findingTypesHasBeenSet; }
  template <typename FindingTypesT = Aws::Vector<TypeDistribution>>
  void SetFindingTypes(FindingTypesT&& value) {
    m_findingTypesHasBeenSet = true;
    m_findingTypes = std::forward<FindingTypesT>(value);
  }
  template <typename FindingTypesT = Aws::Vector<TypeDistribution>>
  Distribution& WithFindingTypes(FindingTypesT&& value) {
    SetFindingTypes(std::forward<FindingTypesT>(value));
    return *this;
  }
  template <typename FindingTypesT = TypeDistribution>
  Distribution& AddFindingTypes(FindingTypesT&& value) {
    m_findingTypesHasBeenSet = true;
    m_findingTypes.emplace_back(std::forward<FindingTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The finding types that have the most findings, with counts.</p>
   */
  inline const Aws::Vector<FindingTypeCount>& GetTopFindingTypes() const { return m_topFindingTypes; }
  inline bool TopFindingTypesHasBeenSet() const { return m_topFindingTypesHasBeenSet; }
  template <typename TopFindingTypesT = Aws::Vector<FindingTypeCount>>
  void SetTopFindingTypes(TopFindingTypesT&& value) {
    m_topFindingTypesHasBeenSet = true;
    m_topFindingTypes = std::forward<TopFindingTypesT>(value);
  }
  template <typename TopFindingTypesT = Aws::Vector<FindingTypeCount>>
  Distribution& WithTopFindingTypes(TopFindingTypesT&& value) {
    SetTopFindingTypes(std::forward<TopFindingTypesT>(value));
    return *this;
  }
  template <typename TopFindingTypesT = FindingTypeCount>
  Distribution& AddTopFindingTypes(TopFindingTypesT&& value) {
    m_topFindingTypesHasBeenSet = true;
    m_topFindingTypes.emplace_back(std::forward<TopFindingTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The findings broken down by affected resource.</p>
   */
  inline const Aws::Vector<ResourceDistribution>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<ResourceDistribution>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<ResourceDistribution>>
  Distribution& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = ResourceDistribution>
  Distribution& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The findings broken down by MITRE ATT&amp;CK tactic.</p>
   */
  inline const Aws::Vector<TacticCoverage>& GetAttackVectors() const { return m_attackVectors; }
  inline bool AttackVectorsHasBeenSet() const { return m_attackVectorsHasBeenSet; }
  template <typename AttackVectorsT = Aws::Vector<TacticCoverage>>
  void SetAttackVectors(AttackVectorsT&& value) {
    m_attackVectorsHasBeenSet = true;
    m_attackVectors = std::forward<AttackVectorsT>(value);
  }
  template <typename AttackVectorsT = Aws::Vector<TacticCoverage>>
  Distribution& WithAttackVectors(AttackVectorsT&& value) {
    SetAttackVectors(std::forward<AttackVectorsT>(value));
    return *this;
  }
  template <typename AttackVectorsT = TacticCoverage>
  Distribution& AddAttackVectors(AttackVectorsT&& value) {
    m_attackVectorsHasBeenSet = true;
    m_attackVectors.emplace_back(std::forward<AttackVectorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number and percentage of archived and unarchived findings.</p>
   */
  inline const ArchiveDistribution& GetArchive() const { return m_archive; }
  inline bool ArchiveHasBeenSet() const { return m_archiveHasBeenSet; }
  template <typename ArchiveT = ArchiveDistribution>
  void SetArchive(ArchiveT&& value) {
    m_archiveHasBeenSet = true;
    m_archive = std::forward<ArchiveT>(value);
  }
  template <typename ArchiveT = ArchiveDistribution>
  Distribution& WithArchive(ArchiveT&& value) {
    SetArchive(std::forward<ArchiveT>(value));
    return *this;
  }
  ///@}
 private:
  DistributionDimension m_dimension{DistributionDimension::NOT_SET};

  long long m_totalFindings{0};

  SeverityBreakdown m_severityBreakdown;

  Aws::Vector<TypeDistribution> m_findingTypes;

  Aws::Vector<FindingTypeCount> m_topFindingTypes;

  Aws::Vector<ResourceDistribution> m_resources;

  Aws::Vector<TacticCoverage> m_attackVectors;

  ArchiveDistribution m_archive;
  bool m_dimensionHasBeenSet = false;
  bool m_totalFindingsHasBeenSet = false;
  bool m_severityBreakdownHasBeenSet = false;
  bool m_findingTypesHasBeenSet = false;
  bool m_topFindingTypesHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
  bool m_attackVectorsHasBeenSet = false;
  bool m_archiveHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
