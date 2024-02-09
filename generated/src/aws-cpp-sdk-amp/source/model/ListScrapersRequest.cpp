/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/ListScrapersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListScrapersRequest::ListScrapersRequest() : 
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListScrapersRequest::SerializePayload() const
{
  return {};
}

void ListScrapersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_filtersHasBeenSet)
    {
      for(auto& item : m_filters)
      {
        for(auto& innerItem : item.second)
        {
          ss << innerItem;
          uri.AddQueryStringParameter(item.first.c_str(), ss.str());
          ss.str("");
        }
      }
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



