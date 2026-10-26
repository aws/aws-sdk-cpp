/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CircuitBreakerConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CircuitBreakerConfiguration::CircuitBreakerConfiguration(JsonView jsonValue) { *this = jsonValue; }

CircuitBreakerConfiguration& CircuitBreakerConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mode")) {
    m_mode = CircuitBreakerModeMapper::GetCircuitBreakerModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  return *this;
}

JsonValue CircuitBreakerConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_modeHasBeenSet) {
    payload.WithString("mode", CircuitBreakerModeMapper::GetNameForCircuitBreakerMode(m_mode));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
