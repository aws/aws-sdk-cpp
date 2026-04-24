/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessToolUseBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessToolUseBlock::HarnessToolUseBlock(JsonView jsonValue) { *this = jsonValue; }

HarnessToolUseBlock& HarnessToolUseBlock::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolUseId")) {
    m_toolUseId = jsonValue.GetString("toolUseId");
    m_toolUseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("input")) {
    m_input = jsonValue.GetObject("input");
    m_inputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = HarnessToolUseTypeMapper::GetHarnessToolUseTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serverName")) {
    m_serverName = jsonValue.GetString("serverName");
    m_serverNameHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessToolUseBlock::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_toolUseIdHasBeenSet) {
    payload.WithString("toolUseId", m_toolUseId);
  }

  if (m_inputHasBeenSet) {
    if (!m_input.View().IsNull()) {
      payload.WithObject("input", JsonValue(m_input.View()));
    }
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", HarnessToolUseTypeMapper::GetNameForHarnessToolUseType(m_type));
  }

  if (m_serverNameHasBeenSet) {
    payload.WithString("serverName", m_serverName);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
