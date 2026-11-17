/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AgentInvocationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

AgentInvocationDetails::AgentInvocationDetails(JsonView jsonValue) { *this = jsonValue; }

AgentInvocationDetails& AgentInvocationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentCoreRuntime")) {
    m_agentCoreRuntime = jsonValue.GetObject("agentCoreRuntime");
    m_agentCoreRuntimeHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentInvocationDetails::Jsonize() const {
  JsonValue payload;

  if (m_agentCoreRuntimeHasBeenSet) {
    payload.WithObject("agentCoreRuntime", m_agentCoreRuntime.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
