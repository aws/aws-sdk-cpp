/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AgenticRetrieveStreamRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agenticRetrieveConfigurationHasBeenSet) {
    payload.WithObject("agenticRetrieveConfiguration", m_agenticRetrieveConfiguration.Jsonize());
  }

  if (m_generateResponseHasBeenSet) {
    payload.WithBool("generateResponse", m_generateResponse);
  }

  if (m_messagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
    for (unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex) {
      messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
    }
    payload.WithArray("messages", std::move(messagesJsonList));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_policyConfigurationHasBeenSet) {
    payload.WithObject("policyConfiguration", m_policyConfiguration.Jsonize());
  }

  if (m_retrieversHasBeenSet) {
    Aws::Utils::Array<JsonValue> retrieversJsonList(m_retrievers.size());
    for (unsigned retrieversIndex = 0; retrieversIndex < retrieversJsonList.GetLength(); ++retrieversIndex) {
      retrieversJsonList[retrieversIndex].AsObject(m_retrievers[retrieversIndex].Jsonize());
    }
    payload.WithArray("retrievers", std::move(retrieversJsonList));
  }

  if (m_userContextHasBeenSet) {
    payload.WithObject("userContext", m_userContext.Jsonize());
  }

  return payload.View().WriteReadable();
}
