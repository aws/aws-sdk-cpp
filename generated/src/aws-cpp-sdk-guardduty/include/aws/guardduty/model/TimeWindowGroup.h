/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
 * <p>Contains the number of findings in a time window.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/TimeWindowGroup">AWS
 * API Reference</a></p>
 */
class TimeWindowGroup {
 public:
  AWS_GUARDDUTY_API TimeWindowGroup() = default;
  AWS_GUARDDUTY_API TimeWindowGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API TimeWindowGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp at which the time window starts.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  TimeWindowGroup& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the time window ends.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  TimeWindowGroup& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings in the time window.</p>
   */
  inline int GetFindingCount() const { return m_findingCount; }
  inline bool FindingCountHasBeenSet() const { return m_findingCountHasBeenSet; }
  inline void SetFindingCount(int value) {
    m_findingCountHasBeenSet = true;
    m_findingCount = value;
  }
  inline TimeWindowGroup& WithFindingCount(int value) {
    SetFindingCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  int m_findingCount{0};
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_findingCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
