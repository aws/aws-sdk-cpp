/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ExtractionJobMessages.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ExtractionJobMessages::ExtractionJobMessages(JsonView jsonValue) { *this = jsonValue; }

ExtractionJobMessages& ExtractionJobMessages::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("messagesList")) {
    Aws::Utils::Array<JsonView> messagesListJsonList = jsonValue.GetArray("messagesList");
    for (unsigned messagesListIndex = 0; messagesListIndex < messagesListJsonList.GetLength(); ++messagesListIndex) {
      m_messagesList.push_back(messagesListJsonList[messagesListIndex].AsObject());
    }
    m_messagesListHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractionJobMessages::Jsonize() const {
  JsonValue payload;

  if (m_messagesListHasBeenSet) {
    Aws::Utils::Array<JsonValue> messagesListJsonList(m_messagesList.size());
    for (unsigned messagesListIndex = 0; messagesListIndex < messagesListJsonList.GetLength(); ++messagesListIndex) {
      messagesListJsonList[messagesListIndex].AsObject(m_messagesList[messagesListIndex].Jsonize());
    }
    payload.WithArray("messagesList", std::move(messagesListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
