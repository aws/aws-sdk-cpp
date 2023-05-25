/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/UpdateChannelMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateChannelMessageRequest::UpdateChannelMessageRequest() : 
    m_channelArnHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_chimeBearerHasBeenSet(false),
    m_subChannelIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

Aws::String UpdateChannelMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  if(m_subChannelIdHasBeenSet)
  {
   payload.WithString("SubChannelId", m_subChannelId);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateChannelMessageRequest::GetRequestSpecificHeaders() const
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




