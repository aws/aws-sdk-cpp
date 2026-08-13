/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StartAssistantContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartAssistantContactRequest::SerializePayload() const {
  JsonValue payload;

  if (m_instanceIdHasBeenSet) {
    payload.WithString("InstanceId", m_instanceId);
  }

  if (m_aiAgentHasBeenSet) {
    payload.WithObject("AiAgent", m_aiAgent.Jsonize());
  }

  if (m_participantDetailsHasBeenSet) {
    payload.WithObject("ParticipantDetails", m_participantDetails.Jsonize());
  }

  if (m_initialMessageHasBeenSet) {
    payload.WithObject("InitialMessage", m_initialMessage.Jsonize());
  }

  if (m_attributesHasBeenSet) {
    JsonValue attributesJsonMap;
    for (auto& attributesItem : m_attributes) {
      attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
    }
    payload.WithObject("Attributes", std::move(attributesJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_persistentChatHasBeenSet) {
    payload.WithObject("PersistentChat", m_persistentChat.Jsonize());
  }

  if (m_relatedContactIdHasBeenSet) {
    payload.WithString("RelatedContactId", m_relatedContactId);
  }

  return payload.View().WriteReadable();
}
