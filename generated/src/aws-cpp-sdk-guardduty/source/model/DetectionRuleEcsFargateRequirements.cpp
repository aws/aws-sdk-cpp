/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/DetectionRuleEcsFargateRequirements.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

DetectionRuleEcsFargateRequirements::DetectionRuleEcsFargateRequirements(JsonView jsonValue) { *this = jsonValue; }

DetectionRuleEcsFargateRequirements& DetectionRuleEcsFargateRequirements::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minAgentVersion")) {
    m_minAgentVersion = jsonValue.GetString("minAgentVersion");
    m_minAgentVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue DetectionRuleEcsFargateRequirements::Jsonize() const {
  JsonValue payload;

  if (m_minAgentVersionHasBeenSet) {
    payload.WithString("minAgentVersion", m_minAgentVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
