/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ToolDescriptionOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ToolDescriptionOutput::ToolDescriptionOutput(JsonView jsonValue) { *this = jsonValue; }

ToolDescriptionOutput& ToolDescriptionOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolName")) {
    m_toolName = jsonValue.GetString("toolName");
    m_toolNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendedToolDescription")) {
    m_recommendedToolDescription = jsonValue.GetString("recommendedToolDescription");
    m_recommendedToolDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolDescriptionOutput::Jsonize() const {
  JsonValue payload;

  if (m_toolNameHasBeenSet) {
    payload.WithString("toolName", m_toolName);
  }

  if (m_recommendedToolDescriptionHasBeenSet) {
    payload.WithString("recommendedToolDescription", m_recommendedToolDescription);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
