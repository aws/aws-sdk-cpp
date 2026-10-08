/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/DayOfWeek.h>

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
 * <p>Weekly recurrence</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/WeeklyRecurrence">AWS
 * API Reference</a></p>
 */
class WeeklyRecurrence {
 public:
  AWS_DEVOPSAGENT_API WeeklyRecurrence() = default;
  AWS_DEVOPSAGENT_API WeeklyRecurrence(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API WeeklyRecurrence& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Day of week the window recurs on</p>
   */
  inline DayOfWeek GetDayOfWeek() const { return m_dayOfWeek; }
  inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
  inline void SetDayOfWeek(DayOfWeek value) {
    m_dayOfWeekHasBeenSet = true;
    m_dayOfWeek = value;
  }
  inline WeeklyRecurrence& WithDayOfWeek(DayOfWeek value) {
    SetDayOfWeek(value);
    return *this;
  }
  ///@}
 private:
  DayOfWeek m_dayOfWeek{DayOfWeek::NOT_SET};
  bool m_dayOfWeekHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
