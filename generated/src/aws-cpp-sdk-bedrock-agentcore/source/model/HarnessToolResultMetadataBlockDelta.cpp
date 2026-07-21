/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessToolResultMetadataBlockDelta.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessToolResultMetadataBlockDelta::HarnessToolResultMetadataBlockDelta(JsonView jsonValue) { *this = jsonValue; }

HarnessToolResultMetadataBlockDelta& HarnessToolResultMetadataBlockDelta::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metadata")) {
    m_metadata = jsonValue.GetString("metadata");
    m_metadataHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessToolResultMetadataBlockDelta::Jsonize() const {
  JsonValue payload;

  if (m_metadataHasBeenSet) {
    payload.WithString("metadata", m_metadata);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
