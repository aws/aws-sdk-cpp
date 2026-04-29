/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ToolDescriptionInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ToolDescriptionInput::ToolDescriptionInput(JsonView jsonValue) { *this = jsonValue; }

ToolDescriptionInput& ToolDescriptionInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolName")) {
    m_toolName = jsonValue.GetString("toolName");
    m_toolNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolDescription")) {
    m_toolDescription = jsonValue.GetObject("toolDescription");
    m_toolDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolDescriptionInput::Jsonize() const {
  JsonValue payload;

  if (m_toolNameHasBeenSet) {
    payload.WithString("toolName", m_toolName);
  }

  if (m_toolDescriptionHasBeenSet) {
    payload.WithObject("toolDescription", m_toolDescription.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
