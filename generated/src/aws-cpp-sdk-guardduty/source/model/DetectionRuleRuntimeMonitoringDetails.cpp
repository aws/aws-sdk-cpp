/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/DetectionRuleRuntimeMonitoringDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

DetectionRuleRuntimeMonitoringDetails::DetectionRuleRuntimeMonitoringDetails(JsonView jsonValue) { *this = jsonValue; }

DetectionRuleRuntimeMonitoringDetails& DetectionRuleRuntimeMonitoringDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("platforms")) {
    m_platforms = jsonValue.GetObject("platforms");
    m_platformsHasBeenSet = true;
  }
  return *this;
}

JsonValue DetectionRuleRuntimeMonitoringDetails::Jsonize() const {
  JsonValue payload;

  if (m_platformsHasBeenSet) {
    payload.WithObject("platforms", m_platforms.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
