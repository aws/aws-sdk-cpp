/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RecurrenceFrequency.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Specifies the detailed pattern for event recurrence. Use this to define
 * complex scheduling rules such as "every 2nd Tuesday of the month" or "every 3
 * months on the 15th".</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RecurrencePattern">AWS
 * API Reference</a></p>
 */
class RecurrencePattern {
 public:
  AWS_CONNECT_API RecurrencePattern() = default;
  AWS_CONNECT_API RecurrencePattern(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API RecurrencePattern& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Defines how often the pattern repeats. This is the base unit for the
   * recurrence schedule and works in conjunction with the Interval field to
   * determine the exact repetition sequence.</p>
   */
  inline RecurrenceFrequency GetFrequency() const { return m_frequency; }
  inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
  inline void SetFrequency(RecurrenceFrequency value) {
    m_frequencyHasBeenSet = true;
    m_frequency = value;
  }
  inline RecurrencePattern& WithFrequency(RecurrenceFrequency value) {
    SetFrequency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the number of frequency units between each occurrence. Must be a
   * positive integer. </p> <p> Examples: To repeat every week, set Interval=1 with
   * WEEKLY frequency. To repeat every two months, set Interval=2 with MONTHLY
   * frequency.</p>
   */
  inline int GetInterval() const { return m_interval; }
  inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
  inline void SetInterval(int value) {
    m_intervalHasBeenSet = true;
    m_interval = value;
  }
  inline RecurrencePattern& WithInterval(int value) {
    SetInterval(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which month the event should occur in (1-12, where 1=January,
   * 12=December). Used with YEARLY frequency to schedule events in specific month.
   * </p> <p>Note: It does not accept multiple values in the same list</p>
   */
  inline const Aws::Vector<int>& GetByMonth() const { return m_byMonth; }
  inline bool ByMonthHasBeenSet() const { return m_byMonthHasBeenSet; }
  template <typename ByMonthT = Aws::Vector<int>>
  void SetByMonth(ByMonthT&& value) {
    m_byMonthHasBeenSet = true;
    m_byMonth = std::forward<ByMonthT>(value);
  }
  template <typename ByMonthT = Aws::Vector<int>>
  RecurrencePattern& WithByMonth(ByMonthT&& value) {
    SetByMonth(std::forward<ByMonthT>(value));
    return *this;
  }
  inline RecurrencePattern& AddByMonth(int value) {
    m_byMonthHasBeenSet = true;
    m_byMonth.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which day of the month the event should occur on (1-31). Used with
   * MONTHLY or YEARLY frequency to schedule events on specific date within a
   * month.</p> <p> Examples: [15] for events on the 15th of each month, [-1] for
   * events on the last day of month. </p> <p>Note: It does not accept multiple
   * values in the same list. If a specified day doesn't exist in a particular month
   * (e.g., day 31 in February), the event will be skipped for that month. This field
   * cannot be used simultaneously with ByWeekdayOccurrence as they represent
   * different scheduling approaches (specific dates vs. relative weekday
   * positions).</p>
   */
  inline const Aws::Vector<int>& GetByMonthDay() const { return m_byMonthDay; }
  inline bool ByMonthDayHasBeenSet() const { return m_byMonthDayHasBeenSet; }
  template <typename ByMonthDayT = Aws::Vector<int>>
  void SetByMonthDay(ByMonthDayT&& value) {
    m_byMonthDayHasBeenSet = true;
    m_byMonthDay = std::forward<ByMonthDayT>(value);
  }
  template <typename ByMonthDayT = Aws::Vector<int>>
  RecurrencePattern& WithByMonthDay(ByMonthDayT&& value) {
    SetByMonthDay(std::forward<ByMonthDayT>(value));
    return *this;
  }
  inline RecurrencePattern& AddByMonthDay(int value) {
    m_byMonthDayHasBeenSet = true;
    m_byMonthDay.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which occurrence of a weekday within the month the event should
   * occur on. Must be used with MONTHLY or YEARLY frequency. </p> <p>Example: 2
   * corresponds to second occurrence of the weekday in the month. -1 corresponds to
   * last occurrence of the weekday in the month </p> <p>The weekday itself is
   * specified separately in the HoursOfOperationConfig. Example: To schedule the
   * recurring event for the 2nd Thursday of April every year, set
   * ByWeekdayOccurrence=[2], Day=THURSDAY, ByMonth=[4], Frequency: YEARLY and
   * INTERVAL=1.</p>
   */
  inline const Aws::Vector<int>& GetByWeekdayOccurrence() const { return m_byWeekdayOccurrence; }
  inline bool ByWeekdayOccurrenceHasBeenSet() const { return m_byWeekdayOccurrenceHasBeenSet; }
  template <typename ByWeekdayOccurrenceT = Aws::Vector<int>>
  void SetByWeekdayOccurrence(ByWeekdayOccurrenceT&& value) {
    m_byWeekdayOccurrenceHasBeenSet = true;
    m_byWeekdayOccurrence = std::forward<ByWeekdayOccurrenceT>(value);
  }
  template <typename ByWeekdayOccurrenceT = Aws::Vector<int>>
  RecurrencePattern& WithByWeekdayOccurrence(ByWeekdayOccurrenceT&& value) {
    SetByWeekdayOccurrence(std::forward<ByWeekdayOccurrenceT>(value));
    return *this;
  }
  inline RecurrencePattern& AddByWeekdayOccurrence(int value) {
    m_byWeekdayOccurrenceHasBeenSet = true;
    m_byWeekdayOccurrence.push_back(value);
    return *this;
  }
  ///@}
 private:
  RecurrenceFrequency m_frequency{RecurrenceFrequency::NOT_SET};

  int m_interval{0};

  Aws::Vector<int> m_byMonth;

  Aws::Vector<int> m_byMonthDay;

  Aws::Vector<int> m_byWeekdayOccurrence;
  bool m_frequencyHasBeenSet = false;
  bool m_intervalHasBeenSet = false;
  bool m_byMonthHasBeenSet = false;
  bool m_byMonthDayHasBeenSet = false;
  bool m_byWeekdayOccurrenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
