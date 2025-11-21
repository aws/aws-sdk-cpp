/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MessageMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

MessageMetadata::MessageMetadata(JsonView jsonValue) { *this = jsonValue; }

MessageMetadata& MessageMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventId")) {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("messageIndex")) {
    m_messageIndex = jsonValue.GetInteger("messageIndex");
    m_messageIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageMetadata::Jsonize() const {
  JsonValue payload;

  if (m_eventIdHasBeenSet) {
    payload.WithString("eventId", m_eventId);
  }

  if (m_messageIndexHasBeenSet) {
    payload.WithInteger("messageIndex", m_messageIndex);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
