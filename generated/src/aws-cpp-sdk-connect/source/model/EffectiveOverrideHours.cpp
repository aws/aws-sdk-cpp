/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EffectiveOverrideHours.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EffectiveOverrideHours::EffectiveOverrideHours(JsonView jsonValue) { *this = jsonValue; }

EffectiveOverrideHours& EffectiveOverrideHours::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Date")) {
    m_date = jsonValue.GetString("Date");
    m_dateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OverrideHours")) {
    Aws::Utils::Array<JsonView> overrideHoursJsonList = jsonValue.GetArray("OverrideHours");
    for (unsigned overrideHoursIndex = 0; overrideHoursIndex < overrideHoursJsonList.GetLength(); ++overrideHoursIndex) {
      m_overrideHours.push_back(overrideHoursJsonList[overrideHoursIndex].AsObject());
    }
    m_overrideHoursHasBeenSet = true;
  }
  return *this;
}

JsonValue EffectiveOverrideHours::Jsonize() const {
  JsonValue payload;

  if (m_dateHasBeenSet) {
    payload.WithString("Date", m_date);
  }

  if (m_overrideHoursHasBeenSet) {
    Aws::Utils::Array<JsonValue> overrideHoursJsonList(m_overrideHours.size());
    for (unsigned overrideHoursIndex = 0; overrideHoursIndex < overrideHoursJsonList.GetLength(); ++overrideHoursIndex) {
      overrideHoursJsonList[overrideHoursIndex].AsObject(m_overrideHours[overrideHoursIndex].Jsonize());
    }
    payload.WithArray("OverrideHours", std::move(overrideHoursJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
