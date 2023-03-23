/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelMessageCallback.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

ChannelMessageCallback::ChannelMessageCallback() : 
    m_messageIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_pushNotificationHasBeenSet(false),
    m_messageAttributesHasBeenSet(false),
    m_subChannelIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

ChannelMessageCallback::ChannelMessageCallback(JsonView jsonValue) : 
    m_messageIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_pushNotificationHasBeenSet(false),
    m_messageAttributesHasBeenSet(false),
    m_subChannelIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelMessageCallback& ChannelMessageCallback::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetString("Metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PushNotification"))
  {
    m_pushNotification = jsonValue.GetObject("PushNotification");

    m_pushNotificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageAttributes"))
  {
    Aws::Map<Aws::String, JsonView> messageAttributesJsonMap = jsonValue.GetObject("MessageAttributes").GetAllObjects();
    for(auto& messageAttributesItem : messageAttributesJsonMap)
    {
      m_messageAttributes[messageAttributesItem.first] = messageAttributesItem.second.AsObject();
    }
    m_messageAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubChannelId"))
  {
    m_subChannelId = jsonValue.GetString("SubChannelId");

    m_subChannelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelMessageCallback::Jsonize() const
{
  JsonValue payload;

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("MessageId", m_messageId);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

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

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
