/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/SendChannelMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
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
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
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

  return payload.View().WriteReadable();
}




