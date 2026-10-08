/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/WeeklyRecurrence.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

WeeklyRecurrence::WeeklyRecurrence(JsonView jsonValue) { *this = jsonValue; }

WeeklyRecurrence& WeeklyRecurrence::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dayOfWeek")) {
    m_dayOfWeek = DayOfWeekMapper::GetDayOfWeekForName(jsonValue.GetString("dayOfWeek"));
    m_dayOfWeekHasBeenSet = true;
  }
  return *this;
}

JsonValue WeeklyRecurrence::Jsonize() const {
  JsonValue payload;

  if (m_dayOfWeekHasBeenSet) {
    payload.WithString("dayOfWeek", DayOfWeekMapper::GetNameForDayOfWeek(m_dayOfWeek));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
