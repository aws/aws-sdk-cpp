/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RecurrencePattern.h>

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
 * <p>Defines the recurrence configuration for overrides. This configuration uses a
 * recurrence pattern to specify when and how frequently an event should
 * repeat.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RecurrenceConfig">AWS
 * API Reference</a></p>
 */
class RecurrenceConfig {
 public:
  AWS_CONNECT_API RecurrenceConfig() = default;
  AWS_CONNECT_API RecurrenceConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API RecurrenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recurrence pattern that defines how the event repeats. Example:
   * Frequency, Interval, ByMonth, ByMonthDay, ByWeekdayOccurrence</p>
   */
  inline const RecurrencePattern& GetRecurrencePattern() const { return m_recurrencePattern; }
  inline bool RecurrencePatternHasBeenSet() const { return m_recurrencePatternHasBeenSet; }
  template <typename RecurrencePatternT = RecurrencePattern>
  void SetRecurrencePattern(RecurrencePatternT&& value) {
    m_recurrencePatternHasBeenSet = true;
    m_recurrencePattern = std::forward<RecurrencePatternT>(value);
  }
  template <typename RecurrencePatternT = RecurrencePattern>
  RecurrenceConfig& WithRecurrencePattern(RecurrencePatternT&& value) {
    SetRecurrencePattern(std::forward<RecurrencePatternT>(value));
    return *this;
  }
  ///@}
 private:
  RecurrencePattern m_recurrencePattern;
  bool m_recurrencePatternHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
