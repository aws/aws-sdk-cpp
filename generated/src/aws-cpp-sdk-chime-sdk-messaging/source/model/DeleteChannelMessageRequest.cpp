/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/DeleteChannelMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteChannelMessageRequest::DeleteChannelMessageRequest() : 
    m_channelArnHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_chimeBearerHasBeenSet(false),
    m_subChannelIdHasBeenSet(false)
{
}

Aws::String DeleteChannelMessageRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection DeleteChannelMessageRequest::GetRequestSpecificHeaders() const
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

void DeleteChannelMessageRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_subChannelIdHasBeenSet)
    {
      ss << m_subChannelId;
      uri.AddQueryStringParameter("sub-channel-id", ss.str());
      ss.str("");
    }

}



