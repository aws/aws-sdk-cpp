/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/DetectionRuleEksRequirements.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

DetectionRuleEksRequirements::DetectionRuleEksRequirements(JsonView jsonValue) { *this = jsonValue; }

DetectionRuleEksRequirements& DetectionRuleEksRequirements::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minAgentVersion")) {
    m_minAgentVersion = jsonValue.GetString("minAgentVersion");
    m_minAgentVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue DetectionRuleEksRequirements::Jsonize() const {
  JsonValue payload;

  if (m_minAgentVersionHasBeenSet) {
    payload.WithString("minAgentVersion", m_minAgentVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
