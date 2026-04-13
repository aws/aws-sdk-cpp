/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AgentSkillsDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

AgentSkillsDescriptor::AgentSkillsDescriptor(JsonView jsonValue) { *this = jsonValue; }

AgentSkillsDescriptor& AgentSkillsDescriptor::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("skillMd")) {
    m_skillMd = jsonValue.GetObject("skillMd");
    m_skillMdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("skillDefinition")) {
    m_skillDefinition = jsonValue.GetObject("skillDefinition");
    m_skillDefinitionHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentSkillsDescriptor::Jsonize() const {
  JsonValue payload;

  if (m_skillMdHasBeenSet) {
    payload.WithObject("skillMd", m_skillMd.Jsonize());
  }

  if (m_skillDefinitionHasBeenSet) {
    payload.WithObject("skillDefinition", m_skillDefinition.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
