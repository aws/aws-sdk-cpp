/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/LineageSyncInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

LineageSyncInput::LineageSyncInput(JsonView jsonValue) { *this = jsonValue; }

LineageSyncInput& LineageSyncInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timezone")) {
    m_timezone = TimezoneMapper::GetTimezoneForName(jsonValue.GetString("timezone"));
    m_timezoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schedule")) {
    m_schedule = jsonValue.GetString("schedule");
    m_scheduleHasBeenSet = true;
  }
  return *this;
}

JsonValue LineageSyncInput::Jsonize() const {
  JsonValue payload;

  if (m_timezoneHasBeenSet) {
    payload.WithString("timezone", TimezoneMapper::GetNameForTimezone(m_timezone));
  }

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  if (m_scheduleHasBeenSet) {
    payload.WithString("schedule", m_schedule);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
