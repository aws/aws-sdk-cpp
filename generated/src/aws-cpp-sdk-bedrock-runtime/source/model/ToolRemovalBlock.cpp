/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ToolRemovalBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

ToolRemovalBlock::ToolRemovalBlock(JsonView jsonValue) { *this = jsonValue; }

ToolRemovalBlock& ToolRemovalBlock::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tool")) {
    m_tool = jsonValue.GetObject("tool");
    m_toolHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolRemovalBlock::Jsonize() const {
  JsonValue payload;

  if (m_toolHasBeenSet) {
    payload.WithObject("tool", m_tool.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
