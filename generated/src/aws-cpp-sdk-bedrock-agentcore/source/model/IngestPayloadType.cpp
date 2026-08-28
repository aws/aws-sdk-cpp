/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/IngestPayloadType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

IngestPayloadType::IngestPayloadType(JsonView jsonValue) { *this = jsonValue; }

IngestPayloadType& IngestPayloadType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("conversational")) {
    m_conversational = jsonValue.GetObject("conversational");
    m_conversationalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("json")) {
    m_json = jsonValue.GetObject("json");
    m_jsonHasBeenSet = true;
  }
  return *this;
}

JsonValue IngestPayloadType::Jsonize() const {
  JsonValue payload;

  if (m_conversationalHasBeenSet) {
    payload.WithObject("conversational", m_conversational.Jsonize());
  }

  if (m_jsonHasBeenSet) {
    payload.WithObject("json", m_json.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
