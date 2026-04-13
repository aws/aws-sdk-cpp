/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdatedDescriptorsUnion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

UpdatedDescriptorsUnion::UpdatedDescriptorsUnion(JsonView jsonValue) { *this = jsonValue; }

UpdatedDescriptorsUnion& UpdatedDescriptorsUnion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mcp")) {
    m_mcp = jsonValue.GetObject("mcp");
    m_mcpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("a2a")) {
    m_a2a = jsonValue.GetObject("a2a");
    m_a2aHasBeenSet = true;
  }
  if (jsonValue.ValueExists("custom")) {
    m_custom = jsonValue.GetObject("custom");
    m_customHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSkills")) {
    m_agentSkills = jsonValue.GetObject("agentSkills");
    m_agentSkillsHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedDescriptorsUnion::Jsonize() const {
  JsonValue payload;

  if (m_mcpHasBeenSet) {
    payload.WithObject("mcp", m_mcp.Jsonize());
  }

  if (m_a2aHasBeenSet) {
    payload.WithObject("a2a", m_a2a.Jsonize());
  }

  if (m_customHasBeenSet) {
    payload.WithObject("custom", m_custom.Jsonize());
  }

  if (m_agentSkillsHasBeenSet) {
    payload.WithObject("agentSkills", m_agentSkills.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
