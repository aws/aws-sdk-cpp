/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/Message.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

Message::Message(JsonView jsonValue) { *this = jsonValue; }

Message& Message::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userMessage")) {
    Aws::Utils::Array<JsonView> userMessageJsonList = jsonValue.GetArray("userMessage");
    for (unsigned userMessageIndex = 0; userMessageIndex < userMessageJsonList.GetLength(); ++userMessageIndex) {
      m_userMessage.push_back(userMessageJsonList[userMessageIndex].AsObject());
    }
    m_userMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assistantMessage")) {
    Aws::Utils::Array<JsonView> assistantMessageJsonList = jsonValue.GetArray("assistantMessage");
    for (unsigned assistantMessageIndex = 0; assistantMessageIndex < assistantMessageJsonList.GetLength(); ++assistantMessageIndex) {
      m_assistantMessage.push_back(assistantMessageJsonList[assistantMessageIndex].AsObject());
    }
    m_assistantMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue Message::Jsonize() const {
  JsonValue payload;

  if (m_userMessageHasBeenSet) {
    Aws::Utils::Array<JsonValue> userMessageJsonList(m_userMessage.size());
    for (unsigned userMessageIndex = 0; userMessageIndex < userMessageJsonList.GetLength(); ++userMessageIndex) {
      userMessageJsonList[userMessageIndex].AsObject(m_userMessage[userMessageIndex].Jsonize());
    }
    payload.WithArray("userMessage", std::move(userMessageJsonList));
  }

  if (m_assistantMessageHasBeenSet) {
    Aws::Utils::Array<JsonValue> assistantMessageJsonList(m_assistantMessage.size());
    for (unsigned assistantMessageIndex = 0; assistantMessageIndex < assistantMessageJsonList.GetLength(); ++assistantMessageIndex) {
      assistantMessageJsonList[assistantMessageIndex].AsObject(m_assistantMessage[assistantMessageIndex].Jsonize());
    }
    payload.WithArray("assistantMessage", std::move(assistantMessageJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
