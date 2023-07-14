/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ListChannelMembershipsForAppInstanceUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListChannelMembershipsForAppInstanceUserRequest::ListChannelMembershipsForAppInstanceUserRequest() : 
    m_appInstanceUserArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_chimeBearerHasBeenSet(false)
{
}

Aws::String ListChannelMembershipsForAppInstanceUserRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection ListChannelMembershipsForAppInstanceUserRequest::GetRequestSpecificHeaders() const
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

void ListChannelMembershipsForAppInstanceUserRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_appInstanceUserArnHasBeenSet)
    {
      ss << m_appInstanceUserArn;
      uri.AddQueryStringParameter("app-instance-user-arn", ss.str());
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



