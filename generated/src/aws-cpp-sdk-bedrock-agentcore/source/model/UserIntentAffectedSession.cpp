/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/UserIntentAffectedSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

UserIntentAffectedSession::UserIntentAffectedSession(JsonView jsonValue) { *this = jsonValue; }

UserIntentAffectedSession& UserIntentAffectedSession::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userMessages")) {
    Aws::Utils::Array<JsonView> userMessagesJsonList = jsonValue.GetArray("userMessages");
    for (unsigned userMessagesIndex = 0; userMessagesIndex < userMessagesJsonList.GetLength(); ++userMessagesIndex) {
      m_userMessages.push_back(userMessagesJsonList[userMessagesIndex].AsString());
    }
    m_userMessagesHasBeenSet = true;
  }
  return *this;
}

JsonValue UserIntentAffectedSession::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_userMessagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> userMessagesJsonList(m_userMessages.size());
    for (unsigned userMessagesIndex = 0; userMessagesIndex < userMessagesJsonList.GetLength(); ++userMessagesIndex) {
      userMessagesJsonList[userMessagesIndex].AsString(m_userMessages[userMessagesIndex]);
    }
    payload.WithArray("userMessages", std::move(userMessagesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
