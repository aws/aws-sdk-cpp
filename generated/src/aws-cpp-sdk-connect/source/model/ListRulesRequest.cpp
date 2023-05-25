/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListRulesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListRulesRequest::ListRulesRequest() : 
    m_instanceIdHasBeenSet(false),
    m_publishStatus(RulePublishStatus::NOT_SET),
    m_publishStatusHasBeenSet(false),
    m_eventSourceName(EventSourceName::NOT_SET),
    m_eventSourceNameHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListRulesRequest::SerializePayload() const
{
  return {};
}

void ListRulesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_publishStatusHasBeenSet)
    {
      ss << RulePublishStatusMapper::GetNameForRulePublishStatus(m_publishStatus);
      uri.AddQueryStringParameter("publishStatus", ss.str());
      ss.str("");
    }

    if(m_eventSourceNameHasBeenSet)
    {
      ss << EventSourceNameMapper::GetNameForEventSourceName(m_eventSourceName);
      uri.AddQueryStringParameter("eventSourceName", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



