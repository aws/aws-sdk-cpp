/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdatedAgentSkillsDescriptorFields.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

UpdatedAgentSkillsDescriptorFields::UpdatedAgentSkillsDescriptorFields(JsonView jsonValue) { *this = jsonValue; }

UpdatedAgentSkillsDescriptorFields& UpdatedAgentSkillsDescriptorFields::operator=(JsonView jsonValue) {
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

JsonValue UpdatedAgentSkillsDescriptorFields::Jsonize() const {
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
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
