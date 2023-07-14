/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChannelMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

ChannelMessage::ChannelMessage() : 
    m_channelArnHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_type(ChannelMessageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastEditedTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_senderHasBeenSet(false),
    m_redacted(false),
    m_redactedHasBeenSet(false),
    m_persistence(ChannelMessagePersistenceType::NOT_SET),
    m_persistenceHasBeenSet(false)
{
}

ChannelMessage::ChannelMessage(JsonView jsonValue) : 
    m_channelArnHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_type(ChannelMessageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastEditedTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_senderHasBeenSet(false),
    m_redacted(false),
    m_redactedHasBeenSet(false),
    m_persistence(ChannelMessagePersistenceType::NOT_SET),
    m_persistenceHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelMessage& ChannelMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelArn"))
  {
    m_channelArn = jsonValue.GetString("ChannelArn");

    m_channelArnHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("LastEditedTimestamp"))
  {
    m_lastEditedTimestamp = jsonValue.GetDouble("LastEditedTimestamp");

    m_lastEditedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
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

  if(jsonValue.ValueExists("Persistence"))
  {
    m_persistence = ChannelMessagePersistenceTypeMapper::GetChannelMessagePersistenceTypeForName(jsonValue.GetString("Persistence"));

    m_persistenceHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelMessage::Jsonize() const
{
  JsonValue payload;

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("ChannelArn", m_channelArn);

  }

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

  if(m_lastEditedTimestampHasBeenSet)
  {
   payload.WithDouble("LastEditedTimestamp", m_lastEditedTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_senderHasBeenSet)
  {
   payload.WithObject("Sender", m_sender.Jsonize());

  }

  if(m_redactedHasBeenSet)
  {
   payload.WithBool("Redacted", m_redacted);

  }

  if(m_persistenceHasBeenSet)
  {
   payload.WithString("Persistence", ChannelMessagePersistenceTypeMapper::GetNameForChannelMessagePersistenceType(m_persistence));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
