/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryMetadataFilterLeft.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveMemoryMetadataFilterLeft::AgenticRetrieveMemoryMetadataFilterLeft(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveMemoryMetadataFilterLeft& AgenticRetrieveMemoryMetadataFilterLeft::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metadataKey")) {
    m_metadataKey = jsonValue.GetString("metadataKey");
    m_metadataKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveMemoryMetadataFilterLeft::Jsonize() const {
  JsonValue payload;

  if (m_metadataKeyHasBeenSet) {
    payload.WithString("metadataKey", m_metadataKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
