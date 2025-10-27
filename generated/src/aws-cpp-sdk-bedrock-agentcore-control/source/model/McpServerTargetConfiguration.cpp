/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/McpServerTargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

McpServerTargetConfiguration::McpServerTargetConfiguration(JsonView jsonValue) { *this = jsonValue; }

McpServerTargetConfiguration& McpServerTargetConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  return *this;
}

JsonValue McpServerTargetConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_endpointHasBeenSet) {
    payload.WithString("endpoint", m_endpoint);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
