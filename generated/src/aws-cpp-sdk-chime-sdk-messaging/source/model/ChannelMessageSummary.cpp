/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelMessageSummary.h>
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

ChannelMessageSummary::ChannelMessageSummary() : 
    m_messageIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_type(ChannelMessageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_lastEditedTimestampHasBeenSet(false),
    m_senderHasBeenSet(false),
    m_redacted(false),
    m_redactedHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageAttributesHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

ChannelMessageSummary::ChannelMessageSummary(JsonView jsonValue) : 
    m_messageIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_type(ChannelMessageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_lastEditedTimestampHasBeenSet(false),
    m_senderHasBeenSet(false),
    m_redacted(false),
    m_redactedHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageAttributesHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelMessageSummary& ChannelMessageSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ChannelMessageTypeMapper::GetChannelMessageTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastEditedTimestamp"))
  {
    m_lastEditedTimestamp = jsonValue.GetDouble("LastEditedTimestamp");

    m_lastEditedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sender"))
  {
    m_sender = jsonValue.GetObject("Sender");

    m_senderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Redacted"))
  {
    m_redacted = jsonValue.GetBool("Redacted");

    m_redactedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
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

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    Aws::Utils::Array<JsonView> targetJsonList = jsonValue.GetArray("Target");
    for(unsigned targetIndex = 0; targetIndex < targetJsonList.GetLength(); ++targetIndex)
    {
      m_target.push_back(targetJsonList[targetIndex].AsObject());
    }
    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelMessageSummary::Jsonize() const
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChannelMessageTypeMapper::GetNameForChannelMessageType(m_type));
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastEditedTimestampHasBeenSet)
  {
   payload.WithDouble("LastEditedTimestamp", m_lastEditedTimestamp.SecondsWithMSPrecision());
  }

  if(m_senderHasBeenSet)
  {
   payload.WithObject("Sender", m_sender.Jsonize());

  }

  if(m_redactedHasBeenSet)
  {
   payload.WithBool("Redacted", m_redacted);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
