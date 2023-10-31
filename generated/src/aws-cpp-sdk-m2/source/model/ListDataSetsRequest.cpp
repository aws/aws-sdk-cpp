/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ListDataSetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDataSetsRequest::ListDataSetsRequest() : 
    m_applicationIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nameFilterHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

Aws::String ListDataSetsRequest::SerializePayload() const
{
  return {};
}

void ListDataSetsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nameFilterHasBeenSet)
    {
      ss << m_nameFilter;
      uri.AddQueryStringParameter("nameFilter", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_prefixHasBeenSet)
    {
      ss << m_prefix;
      uri.AddQueryStringParameter("prefix", ss.str());
      ss.str("");
    }

}



