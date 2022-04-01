/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ListChannelsAssociatedWithChannelFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListChannelsAssociatedWithChannelFlowRequest::ListChannelsAssociatedWithChannelFlowRequest() : 
    m_channelFlowArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListChannelsAssociatedWithChannelFlowRequest::SerializePayload() const
{
  return {};
}

void ListChannelsAssociatedWithChannelFlowRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_channelFlowArnHasBeenSet)
    {
      ss << m_channelFlowArn;
      uri.AddQueryStringParameter("channel-flow-arn", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("max-results", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("next-token", ss.str());
      ss.str("");
    }

}



