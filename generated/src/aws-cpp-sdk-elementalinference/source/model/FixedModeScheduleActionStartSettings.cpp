/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/FixedModeScheduleActionStartSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

FixedModeScheduleActionStartSettings::FixedModeScheduleActionStartSettings(JsonView jsonValue) { *this = jsonValue; }

FixedModeScheduleActionStartSettings& FixedModeScheduleActionStartSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scheduledAt")) {
    m_scheduledAt = jsonValue.GetDouble("scheduledAt");
    m_scheduledAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FixedModeScheduleActionStartSettings::Jsonize() const {
  JsonValue payload;

  if (m_scheduledAtHasBeenSet) {
    payload.WithDouble("scheduledAt", m_scheduledAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
