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
 * <p>Contains a summary of findings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FindingsSummary">AWS
 * API Reference</a></p>
 */
class FindingsSummary {
 public:
  AWS_GUARDDUTY_API FindingsSummary() = default;
  AWS_GUARDDUTY_API FindingsSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API FindingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of findings.</p>
   */
  inline int GetTotalFindings() const { return m_totalFindings; }
  inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
  inline void SetTotalFindings(int value) {
    m_totalFindingsHasBeenSet = true;
    m_totalFindings = value;
  }
  inline FindingsSummary& WithTotalFindings(int value) {
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
  FindingsSummary& WithSeverityBreakdown(SeverityBreakdownT&& value) {
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
  FindingsSummary& WithTopFindingTypes(TopFindingTypesT&& value) {
    SetTopFindingTypes(std::forward<TopFindingTypesT>(value));
    return *this;
  }
  template <typename TopFindingTypesT = FindingTypeCount>
  FindingsSummary& AddTopFindingTypes(TopFindingTypesT&& value) {
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
  FindingsSummary& WithByTimeWindow(ByTimeWindowT&& value) {
    SetByTimeWindow(std::forward<ByTimeWindowT>(value));
    return *this;
  }
  template <typename ByTimeWindowT = TimeWindowGroup>
  FindingsSummary& AddByTimeWindow(ByTimeWindowT&& value) {
    m_byTimeWindowHasBeenSet = true;
    m_byTimeWindow.emplace_back(std::forward<ByTimeWindowT>(value));
    return *this;
  }
  ///@}
 private:
  int m_totalFindings{0};

  SeverityBreakdown m_severityBreakdown;

  Aws::Vector<FindingTypeCount> m_topFindingTypes;

  Aws::Vector<TimeWindowGroup> m_byTimeWindow;
  bool m_totalFindingsHasBeenSet = false;
  bool m_severityBreakdownHasBeenSet = false;
  bool m_topFindingTypesHasBeenSet = false;
  bool m_byTimeWindowHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
