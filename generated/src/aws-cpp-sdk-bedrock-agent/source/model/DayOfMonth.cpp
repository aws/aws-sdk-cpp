/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DayOfMonth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

DayOfMonth::DayOfMonth(JsonView jsonValue) { *this = jsonValue; }

DayOfMonth& DayOfMonth::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dayNumber")) {
    m_dayNumber = jsonValue.GetInteger("dayNumber");
    m_dayNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastDayOfMonth")) {
    m_lastDayOfMonth = jsonValue.GetObject("lastDayOfMonth");
    m_lastDayOfMonthHasBeenSet = true;
  }
  return *this;
}

JsonValue DayOfMonth::Jsonize() const {
  JsonValue payload;

  if (m_dayNumberHasBeenSet) {
    payload.WithInteger("dayNumber", m_dayNumber);
  }

  if (m_lastDayOfMonthHasBeenSet) {
    payload.WithObject("lastDayOfMonth", m_lastDayOfMonth.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
