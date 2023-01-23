/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListQueuesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListQueuesRequest::ListQueuesRequest() : 
    m_instanceIdHasBeenSet(false),
    m_queueTypesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListQueuesRequest::SerializePayload() const
{
  return {};
}

void ListQueuesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_queueTypesHasBeenSet)
    {
      for(const auto& item : m_queueTypes)
      {
        ss << QueueTypeMapper::GetNameForQueueType(item);
        uri.AddQueryStringParameter("queueTypes", ss.str());
        ss.str("");
      }
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

}



