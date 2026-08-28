/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/DayOfWeek.h>

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
 * <p>A weekly sync on a specified day of the week.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/WeeklySchedule">AWS
 * API Reference</a></p>
 */
class WeeklySchedule {
 public:
  AWS_BEDROCKAGENT_API WeeklySchedule() = default;
  AWS_BEDROCKAGENT_API WeeklySchedule(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API WeeklySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The day of the week on which the weekly sync runs.</p>
   */
  inline DayOfWeek GetDayOfWeek() const { return m_dayOfWeek; }
  inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
  inline void SetDayOfWeek(DayOfWeek value) {
    m_dayOfWeekHasBeenSet = true;
    m_dayOfWeek = value;
  }
  inline WeeklySchedule& WithDayOfWeek(DayOfWeek value) {
    SetDayOfWeek(value);
    return *this;
  }
  ///@}
 private:
  DayOfWeek m_dayOfWeek{DayOfWeek::NOT_SET};
  bool m_dayOfWeekHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
