/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/DayOfMonth.h>

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
 * <p>A monthly sync on a specified day of the month.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MonthlySchedule">AWS
 * API Reference</a></p>
 */
class MonthlySchedule {
 public:
  AWS_BEDROCKAGENT_API MonthlySchedule() = default;
  AWS_BEDROCKAGENT_API MonthlySchedule(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API MonthlySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The day of the month on which the monthly sync runs.</p>
   */
  inline const DayOfMonth& GetDayOfMonth() const { return m_dayOfMonth; }
  inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }
  template <typename DayOfMonthT = DayOfMonth>
  void SetDayOfMonth(DayOfMonthT&& value) {
    m_dayOfMonthHasBeenSet = true;
    m_dayOfMonth = std::forward<DayOfMonthT>(value);
  }
  template <typename DayOfMonthT = DayOfMonth>
  MonthlySchedule& WithDayOfMonth(DayOfMonthT&& value) {
    SetDayOfMonth(std::forward<DayOfMonthT>(value));
    return *this;
  }
  ///@}
 private:
  DayOfMonth m_dayOfMonth;
  bool m_dayOfMonthHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
