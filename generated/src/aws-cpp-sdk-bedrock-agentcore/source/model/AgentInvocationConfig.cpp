/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AgentInvocationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

AgentInvocationConfig::AgentInvocationConfig(JsonView jsonValue) { *this = jsonValue; }

AgentInvocationConfig& AgentInvocationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentCoreRuntime")) {
    m_agentCoreRuntime = jsonValue.GetObject("agentCoreRuntime");
    m_agentCoreRuntimeHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentInvocationConfig::Jsonize() const {
  JsonValue payload;

  if (m_agentCoreRuntimeHasBeenSet) {
    payload.WithObject("agentCoreRuntime", m_agentCoreRuntime.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
