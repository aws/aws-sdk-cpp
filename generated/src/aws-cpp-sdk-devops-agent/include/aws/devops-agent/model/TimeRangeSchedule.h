/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/Recurrence.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Recurring time-of-day window in UTC. The service derives an EventBridge
 * expression anchored at startAfter and a flexible-window width from the interval
 * to startBefore. A startBefore earlier than startAfter wraps past
 * midnight.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/TimeRangeSchedule">AWS
 * API Reference</a></p>
 */
class TimeRangeSchedule {
 public:
  AWS_DEVOPSAGENT_API TimeRangeSchedule() = default;
  AWS_DEVOPSAGENT_API TimeRangeSchedule(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API TimeRangeSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Earliest time of day the trigger may fire</p>
   */
  inline const Aws::String& GetStartAfter() const { return m_startAfter; }
  inline bool StartAfterHasBeenSet() const { return m_startAfterHasBeenSet; }
  template <typename StartAfterT = Aws::String>
  void SetStartAfter(StartAfterT&& value) {
    m_startAfterHasBeenSet = true;
    m_startAfter = std::forward<StartAfterT>(value);
  }
  template <typename StartAfterT = Aws::String>
  TimeRangeSchedule& WithStartAfter(StartAfterT&& value) {
    SetStartAfter(std::forward<StartAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Latest time of day the trigger may fire</p>
   */
  inline const Aws::String& GetStartBefore() const { return m_startBefore; }
  inline bool StartBeforeHasBeenSet() const { return m_startBeforeHasBeenSet; }
  template <typename StartBeforeT = Aws::String>
  void SetStartBefore(StartBeforeT&& value) {
    m_startBeforeHasBeenSet = true;
    m_startBefore = std::forward<StartBeforeT>(value);
  }
  template <typename StartBeforeT = Aws::String>
  TimeRangeSchedule& WithStartBefore(StartBeforeT&& value) {
    SetStartBefore(std::forward<StartBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the window recurs</p>
   */
  inline const Recurrence& GetRecurrence() const { return m_recurrence; }
  inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }
  template <typename RecurrenceT = Recurrence>
  void SetRecurrence(RecurrenceT&& value) {
    m_recurrenceHasBeenSet = true;
    m_recurrence = std::forward<RecurrenceT>(value);
  }
  template <typename RecurrenceT = Recurrence>
  TimeRangeSchedule& WithRecurrence(RecurrenceT&& value) {
    SetRecurrence(std::forward<RecurrenceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_startAfter;

  Aws::String m_startBefore;

  Recurrence m_recurrence;
  bool m_startAfterHasBeenSet = false;
  bool m_startBeforeHasBeenSet = false;
  bool m_recurrenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
