/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GetSessionEmbedUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSessionEmbedUrlRequest::GetSessionEmbedUrlRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_sessionLifetimeInMinutes(0),
    m_sessionLifetimeInMinutesHasBeenSet(false),
    m_userArnHasBeenSet(false)
{
}

Aws::String GetSessionEmbedUrlRequest::SerializePayload() const
{
  return {};
}

void GetSessionEmbedUrlRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_entryPointHasBeenSet)
    {
      ss << m_entryPoint;
      uri.AddQueryStringParameter("entry-point", ss.str());
      ss.str("");
    }

    if(m_sessionLifetimeInMinutesHasBeenSet)
    {
      ss << m_sessionLifetimeInMinutes;
      uri.AddQueryStringParameter("session-lifetime", ss.str());
      ss.str("");
    }

    if(m_userArnHasBeenSet)
    {
      ss << m_userArn;
      uri.AddQueryStringParameter("user-arn", ss.str());
      ss.str("");
    }

}



