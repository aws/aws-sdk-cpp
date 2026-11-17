/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AgentCoreRuntimeInvocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

AgentCoreRuntimeInvocation::AgentCoreRuntimeInvocation(JsonView jsonValue) { *this = jsonValue; }

AgentCoreRuntimeInvocation& AgentCoreRuntimeInvocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentRuntimeEndpointArn")) {
    m_agentRuntimeEndpointArn = jsonValue.GetString("agentRuntimeEndpointArn");
    m_agentRuntimeEndpointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestTemplate")) {
    m_requestTemplate = jsonValue.GetString("requestTemplate");
    m_requestTemplateHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentCoreRuntimeInvocation::Jsonize() const {
  JsonValue payload;

  if (m_agentRuntimeEndpointArnHasBeenSet) {
    payload.WithString("agentRuntimeEndpointArn", m_agentRuntimeEndpointArn);
  }

  if (m_requestTemplateHasBeenSet) {
    payload.WithString("requestTemplate", m_requestTemplate);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
