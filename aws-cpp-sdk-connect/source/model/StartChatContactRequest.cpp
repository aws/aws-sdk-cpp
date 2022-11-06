/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StartChatContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartChatContactRequest::StartChatContactRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_participantDetailsHasBeenSet(false),
    m_initialMessageHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_chatDurationInMinutes(0),
    m_chatDurationInMinutesHasBeenSet(false),
    m_supportedMessagingContentTypesHasBeenSet(false)
{
}

Aws::String StartChatContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_contactFlowIdHasBeenSet)
  {
   payload.WithString("ContactFlowId", m_contactFlowId);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_participantDetailsHasBeenSet)
  {
   payload.WithObject("ParticipantDetails", m_participantDetails.Jsonize());

  }

  if(m_initialMessageHasBeenSet)
  {
   payload.WithObject("InitialMessage", m_initialMessage.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_chatDurationInMinutesHasBeenSet)
  {
   payload.WithInteger("ChatDurationInMinutes", m_chatDurationInMinutes);

  }

  if(m_supportedMessagingContentTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedMessagingContentTypesJsonList(m_supportedMessagingContentTypes.size());
   for(unsigned supportedMessagingContentTypesIndex = 0; supportedMessagingContentTypesIndex < supportedMessagingContentTypesJsonList.GetLength(); ++supportedMessagingContentTypesIndex)
   {
     supportedMessagingContentTypesJsonList[supportedMessagingContentTypesIndex].AsString(m_supportedMessagingContentTypes[supportedMessagingContentTypesIndex]);
   }
   payload.WithArray("SupportedMessagingContentTypes", std::move(supportedMessagingContentTypesJsonList));

  }

  return payload.View().WriteReadable();
}




