/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdatedAgentSkillsDefinitionDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

UpdatedAgentSkillsDefinitionDescriptor::UpdatedAgentSkillsDefinitionDescriptor(JsonView jsonValue) { *this = jsonValue; }

UpdatedAgentSkillsDefinitionDescriptor& UpdatedAgentSkillsDefinitionDescriptor::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("optionalValue")) {
    m_optionalValue = jsonValue.GetObject("optionalValue");
    m_optionalValueHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedAgentSkillsDefinitionDescriptor::Jsonize() const {
  JsonValue payload;

  if (m_optionalValueHasBeenSet) {
    payload.WithObject("optionalValue", m_optionalValue.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
