/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ToolsDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ToolsDefinition::ToolsDefinition(JsonView jsonValue) { *this = jsonValue; }

ToolsDefinition& ToolsDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("protocolVersion")) {
    m_protocolVersion = jsonValue.GetString("protocolVersion");
    m_protocolVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inlineContent")) {
    m_inlineContent = jsonValue.GetString("inlineContent");
    m_inlineContentHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolsDefinition::Jsonize() const {
  JsonValue payload;

  if (m_protocolVersionHasBeenSet) {
    payload.WithString("protocolVersion", m_protocolVersion);
  }

  if (m_inlineContentHasBeenSet) {
    payload.WithString("inlineContent", m_inlineContent);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
