/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailChecksMessage::GuardrailChecksMessage(JsonView jsonValue) { *this = jsonValue; }

GuardrailChecksMessage& GuardrailChecksMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("role")) {
    m_role = GuardrailChecksRoleMapper::GetGuardrailChecksRoleForName(jsonValue.GetString("role"));
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    Aws::Utils::Array<JsonView> contentJsonList = jsonValue.GetArray("content");
    for (unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex) {
      m_content.push_back(contentJsonList[contentIndex].AsObject());
    }
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailChecksMessage::Jsonize() const {
  JsonValue payload;

  if (m_roleHasBeenSet) {
    payload.WithString("role", GuardrailChecksRoleMapper::GetNameForGuardrailChecksRole(m_role));
  }

  if (m_contentHasBeenSet) {
    Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
    for (unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex) {
      contentJsonList[contentIndex].AsObject(m_content[contentIndex].Jsonize());
    }
    payload.WithArray("content", std::move(contentJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
