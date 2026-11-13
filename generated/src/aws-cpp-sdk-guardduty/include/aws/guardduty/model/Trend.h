/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/TimeGranularity.h>
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
 * <p>Contains information about the number of findings over time.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Trend">AWS API
 * Reference</a></p>
 */
class Trend {
 public:
  AWS_GUARDDUTY_API Trend() = default;
  AWS_GUARDDUTY_API Trend(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Trend& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The length of each time window in the trend. Possible values are
   * <code>DAY</code>, <code>WEEK</code>, and <code>MONTH</code>.</p>
   */
  inline TimeGranularity GetGranularity() const { return m_granularity; }
  inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
  inline void SetGranularity(TimeGranularity value) {
    m_granularityHasBeenSet = true;
    m_granularity = value;
  }
  inline Trend& WithGranularity(TimeGranularity value) {
    SetGranularity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the period of the trend starts.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  Trend& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the period of the trend ends.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  Trend& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of findings in the period.</p>
   */
  inline long long GetTotalFindings() const { return m_totalFindings; }
  inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
  inline void SetTotalFindings(long long value) {
    m_totalFindingsHasBeenSet = true;
    m_totalFindings = value;
  }
  inline Trend& WithTotalFindings(long long value) {
    SetTotalFindings(value);
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
  Trend& WithByTimeWindow(ByTimeWindowT&& value) {
    SetByTimeWindow(std::forward<ByTimeWindowT>(value));
    return *this;
  }
  template <typename ByTimeWindowT = TimeWindowGroup>
  Trend& AddByTimeWindow(ByTimeWindowT&& value) {
    m_byTimeWindowHasBeenSet = true;
    m_byTimeWindow.emplace_back(std::forward<ByTimeWindowT>(value));
    return *this;
  }
  ///@}
 private:
  TimeGranularity m_granularity{TimeGranularity::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  long long m_totalFindings{0};

  Aws::Vector<TimeWindowGroup> m_byTimeWindow;
  bool m_granularityHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_totalFindingsHasBeenSet = false;
  bool m_byTimeWindowHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
