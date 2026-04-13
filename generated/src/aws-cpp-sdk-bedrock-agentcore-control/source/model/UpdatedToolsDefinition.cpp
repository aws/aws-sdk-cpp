/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdatedToolsDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

UpdatedToolsDefinition::UpdatedToolsDefinition(JsonView jsonValue) { *this = jsonValue; }

UpdatedToolsDefinition& UpdatedToolsDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("optionalValue")) {
    m_optionalValue = jsonValue.GetObject("optionalValue");
    m_optionalValueHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedToolsDefinition::Jsonize() const {
  JsonValue payload;

  if (m_optionalValueHasBeenSet) {
    payload.WithObject("optionalValue", m_optionalValue.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
