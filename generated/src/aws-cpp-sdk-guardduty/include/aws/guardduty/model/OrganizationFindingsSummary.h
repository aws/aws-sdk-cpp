/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FindingTypeCount.h>
#include <aws/guardduty/model/SeverityBreakdown.h>
#include <aws/guardduty/model/TimeWindowGroup.h>

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
 * <p>Contains a summary of findings across an organization.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationFindingsSummary">AWS
 * API Reference</a></p>
 */
class OrganizationFindingsSummary {
 public:
  AWS_GUARDDUTY_API OrganizationFindingsSummary() = default;
  AWS_GUARDDUTY_API OrganizationFindingsSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API OrganizationFindingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of findings across the organization.</p>
   */
  inline int GetTotalFindings() const { return m_totalFindings; }
  inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
  inline void SetTotalFindings(int value) {
    m_totalFindingsHasBeenSet = true;
    m_totalFindings = value;
  }
  inline OrganizationFindingsSummary& WithTotalFindings(int value) {
    SetTotalFindings(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings at each severity level across the organization.</p>
   */
  inline const SeverityBreakdown& GetSeverityBreakdown() const { return m_severityBreakdown; }
  inline bool SeverityBreakdownHasBeenSet() const { return m_severityBreakdownHasBeenSet; }
  template <typename SeverityBreakdownT = SeverityBreakdown>
  void SetSeverityBreakdown(SeverityBreakdownT&& value) {
    m_severityBreakdownHasBeenSet = true;
    m_severityBreakdown = std::forward<SeverityBreakdownT>(value);
  }
  template <typename SeverityBreakdownT = SeverityBreakdown>
  OrganizationFindingsSummary& WithSeverityBreakdown(SeverityBreakdownT&& value) {
    SetSeverityBreakdown(std::forward<SeverityBreakdownT>(value));
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
  OrganizationFindingsSummary& WithTopFindingTypes(TopFindingTypesT&& value) {
    SetTopFindingTypes(std::forward<TopFindingTypesT>(value));
    return *this;
  }
  template <typename TopFindingTypesT = FindingTypeCount>
  OrganizationFindingsSummary& AddTopFindingTypes(TopFindingTypesT&& value) {
    m_topFindingTypesHasBeenSet = true;
    m_topFindingTypes.emplace_back(std::forward<TopFindingTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings in each time window.</p>
   */
  inline const Aws::Vector<TimeWindowGroup>& GetByTimeWindow() const { return m_byTimeWindow; }
  inline bool ByTimeWindowHasBeenSet() const { return m_byTimeWindowHasBeenSet; }
  template <typename ByTimeWindowT = Aws::Vector<TimeWindowGroup>>
  void SetByTimeWindow(ByTimeWindowT&& value) {
    m_byTimeWindowHasBeenSet = true;
    m_byTimeWindow = std::forward<ByTimeWindowT>(value);
  }
  template <typename ByTimeWindowT = Aws::Vector<TimeWindowGroup>>
  OrganizationFindingsSummary& WithByTimeWindow(ByTimeWindowT&& value) {
    SetByTimeWindow(std::forward<ByTimeWindowT>(value));
    return *this;
  }
  template <typename ByTimeWindowT = TimeWindowGroup>
  OrganizationFindingsSummary& AddByTimeWindow(ByTimeWindowT&& value) {
    m_byTimeWindowHasBeenSet = true;
    m_byTimeWindow.emplace_back(std::forward<ByTimeWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of accounts in the organization.</p>
   */
  inline int GetTotalAccountCount() const { return m_totalAccountCount; }
  inline bool TotalAccountCountHasBeenSet() const { return m_totalAccountCountHasBeenSet; }
  inline void SetTotalAccountCount(int value) {
    m_totalAccountCountHasBeenSet = true;
    m_totalAccountCount = value;
  }
  inline OrganizationFindingsSummary& WithTotalAccountCount(int value) {
    SetTotalAccountCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of accounts that have findings.</p>
   */
  inline int GetAffectedAccountCount() const { return m_affectedAccountCount; }
  inline bool AffectedAccountCountHasBeenSet() const { return m_affectedAccountCountHasBeenSet; }
  inline void SetAffectedAccountCount(int value) {
    m_affectedAccountCountHasBeenSet = true;
    m_affectedAccountCount = value;
  }
  inline OrganizationFindingsSummary& WithAffectedAccountCount(int value) {
    SetAffectedAccountCount(value);
    return *this;
  }
  ///@}
 private:
  int m_totalFindings{0};

  SeverityBreakdown m_severityBreakdown;

  Aws::Vector<FindingTypeCount> m_topFindingTypes;

  Aws::Vector<TimeWindowGroup> m_byTimeWindow;

  int m_totalAccountCount{0};

  int m_affectedAccountCount{0};
  bool m_totalFindingsHasBeenSet = false;
  bool m_severityBreakdownHasBeenSet = false;
  bool m_topFindingTypesHasBeenSet = false;
  bool m_byTimeWindowHasBeenSet = false;
  bool m_totalAccountCountHasBeenSet = false;
  bool m_affectedAccountCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
