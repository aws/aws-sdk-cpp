/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

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
 * <p>Monthly recurrence</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MonthlyRecurrence">AWS
 * API Reference</a></p>
 */
class MonthlyRecurrence {
 public:
  AWS_DEVOPSAGENT_API MonthlyRecurrence() = default;
  AWS_DEVOPSAGENT_API MonthlyRecurrence(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MonthlyRecurrence& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Day of month the window recurs on</p>
   */
  inline int GetDayOfMonth() const { return m_dayOfMonth; }
  inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }
  inline void SetDayOfMonth(int value) {
    m_dayOfMonthHasBeenSet = true;
    m_dayOfMonth = value;
  }
  inline MonthlyRecurrence& WithDayOfMonth(int value) {
    SetDayOfMonth(value);
    return *this;
  }
  ///@}
 private:
  int m_dayOfMonth{0};
  bool m_dayOfMonthHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
