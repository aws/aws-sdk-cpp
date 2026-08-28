/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MonthlySchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

MonthlySchedule::MonthlySchedule(JsonView jsonValue) { *this = jsonValue; }

MonthlySchedule& MonthlySchedule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dayOfMonth")) {
    m_dayOfMonth = jsonValue.GetObject("dayOfMonth");
    m_dayOfMonthHasBeenSet = true;
  }
  return *this;
}

JsonValue MonthlySchedule::Jsonize() const {
  JsonValue payload;

  if (m_dayOfMonthHasBeenSet) {
    payload.WithObject("dayOfMonth", m_dayOfMonth.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
