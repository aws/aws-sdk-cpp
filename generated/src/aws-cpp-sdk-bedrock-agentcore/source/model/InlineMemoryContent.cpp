/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InlineMemoryContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

InlineMemoryContent::InlineMemoryContent(JsonView jsonValue) { *this = jsonValue; }

InlineMemoryContent& InlineMemoryContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("payload")) {
    Aws::Utils::Array<JsonView> payloadJsonList = jsonValue.GetArray("payload");
    for (unsigned payloadIndex = 0; payloadIndex < payloadJsonList.GetLength(); ++payloadIndex) {
      m_payload.push_back(payloadJsonList[payloadIndex].AsObject());
    }
    m_payloadHasBeenSet = true;
  }
  return *this;
}

JsonValue InlineMemoryContent::Jsonize() const {
  JsonValue payload;

  if (m_payloadHasBeenSet) {
    Aws::Utils::Array<JsonValue> payloadJsonList(m_payload.size());
    for (unsigned payloadIndex = 0; payloadIndex < payloadJsonList.GetLength(); ++payloadIndex) {
      payloadJsonList[payloadIndex].AsObject(m_payload[payloadIndex].Jsonize());
    }
    payload.WithArray("payload", std::move(payloadJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
