/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ToolResultBlockDelta.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

ToolResultBlockDelta::ToolResultBlockDelta(JsonView jsonValue) { *this = jsonValue; }

ToolResultBlockDelta& ToolResultBlockDelta::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("json")) {
    m_json = jsonValue.GetObject("json");
    m_jsonHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolResultBlockDelta::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  if (m_jsonHasBeenSet) {
    if (!m_json.View().IsNull()) {
      payload.WithObject("json", JsonValue(m_json.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
