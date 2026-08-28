/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/LastDayOfMonth.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>The day of the month on which a monthly sync runs. Specify exactly one of
 * <code>dayNumber</code> or <code>lastDayOfMonth</code>.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DayOfMonth">AWS
 * API Reference</a></p>
 */
class DayOfMonth {
 public:
  AWS_BEDROCKAGENT_API DayOfMonth() = default;
  AWS_BEDROCKAGENT_API DayOfMonth(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API DayOfMonth& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A specific day of the month, from 1 to 28. Values are capped at 28, so a
   * monthly sync runs in every month, including February.</p>
   */
  inline int GetDayNumber() const { return m_dayNumber; }
  inline bool DayNumberHasBeenSet() const { return m_dayNumberHasBeenSet; }
  inline void SetDayNumber(int value) {
    m_dayNumberHasBeenSet = true;
    m_dayNumber = value;
  }
  inline DayOfMonth& WithDayNumber(int value) {
    SetDayNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set this option to run the monthly sync on the last calendar day of each
   * month.</p>
   */
  inline const LastDayOfMonth& GetLastDayOfMonth() const { return m_lastDayOfMonth; }
  inline bool LastDayOfMonthHasBeenSet() const { return m_lastDayOfMonthHasBeenSet; }
  template <typename LastDayOfMonthT = LastDayOfMonth>
  void SetLastDayOfMonth(LastDayOfMonthT&& value) {
    m_lastDayOfMonthHasBeenSet = true;
    m_lastDayOfMonth = std::forward<LastDayOfMonthT>(value);
  }
  template <typename LastDayOfMonthT = LastDayOfMonth>
  DayOfMonth& WithLastDayOfMonth(LastDayOfMonthT&& value) {
    SetLastDayOfMonth(std::forward<LastDayOfMonthT>(value));
    return *this;
  }
  ///@}
 private:
  int m_dayNumber{0};

  LastDayOfMonth m_lastDayOfMonth;
  bool m_dayNumberHasBeenSet = false;
  bool m_lastDayOfMonthHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
