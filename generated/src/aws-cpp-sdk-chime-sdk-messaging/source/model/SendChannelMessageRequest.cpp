/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/SendChannelMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendChannelMessageRequest::SendChannelMessageRequest() : 
    m_channelArnHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_type(ChannelMessageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_persistence(ChannelMessagePersistenceType::NOT_SET),
    m_persistenceHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_chimeBearerHasBeenSet(false),
    m_pushNotificationHasBeenSet(false),
    m_messageAttributesHasBeenSet(false),
    m_subChannelIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

Aws::String SendChannelMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChannelMessageTypeMapper::GetNameForChannelMessageType(m_type));
  }

  if(m_persistenceHasBeenSet)
  {
   payload.WithString("Persistence", ChannelMessagePersistenceTypeMapper::GetNameForChannelMessagePersistenceType(m_persistence));
  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_pushNotificationHasBeenSet)
  {
   payload.WithObject("PushNotification", m_pushNotification.Jsonize());

  }

  if(m_messageAttributesHasBeenSet)
  {
   JsonValue messageAttributesJsonMap;
   for(auto& messageAttributesItem : m_messageAttributes)
   {
     messageAttributesJsonMap.WithObject(messageAttributesItem.first, messageAttributesItem.second.Jsonize());
   }
   payload.WithObject("MessageAttributes", std::move(messageAttributesJsonMap));

  }

  if(m_subChannelIdHasBeenSet)
  {
   payload.WithString("SubChannelId", m_subChannelId);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_targetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetJsonList(m_target.size());
   for(unsigned targetIndex = 0; targetIndex < targetJsonList.GetLength(); ++targetIndex)
   {
     targetJsonList[targetIndex].AsObject(m_target[targetIndex].Jsonize());
   }
   payload.WithArray("Target", std::move(targetJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendChannelMessageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_chimeBearerHasBeenSet)
  {
    ss << m_chimeBearer;
    headers.emplace("x-amz-chime-bearer",  ss.str());
    ss.str("");
  }

  return headers;

}




