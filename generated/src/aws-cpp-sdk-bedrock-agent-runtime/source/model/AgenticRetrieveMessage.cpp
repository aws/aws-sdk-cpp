/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveMessage::AgenticRetrieveMessage(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveMessage& AgenticRetrieveMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("role")) {
    m_role = ConversationRoleMapper::GetConversationRoleForName(jsonValue.GetString("role"));
    m_roleHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveMessage::Jsonize() const {
  JsonValue payload;

  if (m_contentHasBeenSet) {
    payload.WithObject("content", m_content.Jsonize());
  }

  if (m_roleHasBeenSet) {
    payload.WithString("role", ConversationRoleMapper::GetNameForConversationRole(m_role));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
