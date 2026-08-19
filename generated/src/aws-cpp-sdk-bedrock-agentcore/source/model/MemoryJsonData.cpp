/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MemoryJsonData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

MemoryJsonData::MemoryJsonData(JsonView jsonValue) { *this = jsonValue; }

MemoryJsonData& MemoryJsonData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryJsonData::Jsonize() const {
  JsonValue payload;

  if (m_contentHasBeenSet) {
    if (!m_content.View().IsNull()) {
      payload.WithObject("content", JsonValue(m_content.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
