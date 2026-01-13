/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/ScheduleConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

ScheduleConfiguration::ScheduleConfiguration(JsonView jsonValue) { *this = jsonValue; }

ScheduleConfiguration& ScheduleConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timezone")) {
    m_timezone = TimezoneMapper::GetTimezoneForName(jsonValue.GetString("timezone"));
    m_timezoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schedule")) {
    m_schedule = jsonValue.GetString("schedule");
    m_scheduleHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_timezoneHasBeenSet) {
    payload.WithString("timezone", TimezoneMapper::GetNameForTimezone(m_timezone));
  }

  if (m_scheduleHasBeenSet) {
    payload.WithString("schedule", m_schedule);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
