/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ListEksAnywhereSubscriptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListEksAnywhereSubscriptionsRequest::ListEksAnywhereSubscriptionsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_includeStatusHasBeenSet(false)
{
}

Aws::String ListEksAnywhereSubscriptionsRequest::SerializePayload() const
{
  return {};
}

void ListEksAnywhereSubscriptionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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

    if(m_includeStatusHasBeenSet)
    {
      for(const auto& item : m_includeStatus)
      {
        ss << EksAnywhereSubscriptionStatusMapper::GetNameForEksAnywhereSubscriptionStatus(item);
        uri.AddQueryStringParameter("includeStatus", ss.str());
        ss.str("");
      }
    }

}



