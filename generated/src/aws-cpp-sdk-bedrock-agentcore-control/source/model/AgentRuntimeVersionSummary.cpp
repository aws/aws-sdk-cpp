/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AgentRuntimeVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

AgentRuntimeVersionSummary::AgentRuntimeVersionSummary(JsonView jsonValue) { *this = jsonValue; }

AgentRuntimeVersionSummary& AgentRuntimeVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentRuntimeArn")) {
    m_agentRuntimeArn = jsonValue.GetString("agentRuntimeArn");
    m_agentRuntimeArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentRuntimeVersion")) {
    m_agentRuntimeVersion = jsonValue.GetString("agentRuntimeVersion");
    m_agentRuntimeVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AgentRuntimeStatusMapper::GetAgentRuntimeStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentRuntimeVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_agentRuntimeArnHasBeenSet) {
    payload.WithString("agentRuntimeArn", m_agentRuntimeArn);
  }

  if (m_agentRuntimeVersionHasBeenSet) {
    payload.WithString("agentRuntimeVersion", m_agentRuntimeVersion);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AgentRuntimeStatusMapper::GetNameForAgentRuntimeStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
