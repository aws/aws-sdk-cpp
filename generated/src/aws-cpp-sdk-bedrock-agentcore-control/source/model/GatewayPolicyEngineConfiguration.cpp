/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GatewayPolicyEngineConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

GatewayPolicyEngineConfiguration::GatewayPolicyEngineConfiguration(JsonView jsonValue) { *this = jsonValue; }

GatewayPolicyEngineConfiguration& GatewayPolicyEngineConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mode")) {
    m_mode = GatewayPolicyEngineModeMapper::GetGatewayPolicyEngineModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayPolicyEngineConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_modeHasBeenSet) {
    payload.WithString("mode", GatewayPolicyEngineModeMapper::GetNameForGatewayPolicyEngineMode(m_mode));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
