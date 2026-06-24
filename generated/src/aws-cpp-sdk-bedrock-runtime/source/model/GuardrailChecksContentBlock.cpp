/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksContentBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailChecksContentBlock::GuardrailChecksContentBlock(JsonView jsonValue) { *this = jsonValue; }

GuardrailChecksContentBlock& GuardrailChecksContentBlock::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailChecksContentBlock::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
