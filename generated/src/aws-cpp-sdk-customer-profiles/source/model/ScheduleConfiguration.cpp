/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/ScheduleConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

ScheduleConfiguration::ScheduleConfiguration(JsonView jsonValue) { *this = jsonValue; }

ScheduleConfiguration& ScheduleConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Interval")) {
    m_interval = jsonValue.GetInteger("Interval");
    m_intervalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Unit")) {
    m_unit = ScheduleConfigurationUnitMapper::GetScheduleConfigurationUnitForName(jsonValue.GetString("Unit"));
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_intervalHasBeenSet) {
    payload.WithInteger("Interval", m_interval);
  }

  if (m_unitHasBeenSet) {
    payload.WithString("Unit", ScheduleConfigurationUnitMapper::GetNameForScheduleConfigurationUnit(m_unit));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
