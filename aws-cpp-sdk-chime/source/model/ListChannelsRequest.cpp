/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ListChannelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListChannelsRequest::ListChannelsRequest() : 
    m_appInstanceArnHasBeenSet(false),
    m_privacy(ChannelPrivacy::NOT_SET),
    m_privacyHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListChannelsRequest::SerializePayload() const
{
  return {};
}

void ListChannelsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_appInstanceArnHasBeenSet)
    {
      ss << m_appInstanceArn;
      uri.AddQueryStringParameter("app-instance-arn", ss.str());
      ss.str("");
    }

    if(m_privacyHasBeenSet)
    {
      ss << ChannelPrivacyMapper::GetNameForChannelPrivacy(m_privacy);
      uri.AddQueryStringParameter("privacy", ss.str());
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



