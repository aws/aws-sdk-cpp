/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/ScheduleActionStartConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

ScheduleActionStartConfiguration::ScheduleActionStartConfiguration(JsonView jsonValue) { *this = jsonValue; }

ScheduleActionStartConfiguration& ScheduleActionStartConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fixedModeScheduleActionStartSettings")) {
    m_fixedModeScheduleActionStartSettings = jsonValue.GetObject("fixedModeScheduleActionStartSettings");
    m_fixedModeScheduleActionStartSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleActionStartConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_fixedModeScheduleActionStartSettingsHasBeenSet) {
    payload.WithObject("fixedModeScheduleActionStartSettings", m_fixedModeScheduleActionStartSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
