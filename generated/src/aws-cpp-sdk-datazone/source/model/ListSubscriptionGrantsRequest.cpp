/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListSubscriptionGrantsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListSubscriptionGrantsRequest::SerializePayload() const
{
  return {};
}

void ListSubscriptionGrantsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_environmentIdHasBeenSet)
    {
      ss << m_environmentId;
      uri.AddQueryStringParameter("environmentId", ss.str());
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

    if(m_owningProjectIdHasBeenSet)
    {
      ss << m_owningProjectId;
      uri.AddQueryStringParameter("owningProjectId", ss.str());
      ss.str("");
    }

    if(m_sortByHasBeenSet)
    {
      ss << SortKeyMapper::GetNameForSortKey(m_sortBy);
      uri.AddQueryStringParameter("sortBy", ss.str());
      ss.str("");
    }

    if(m_sortOrderHasBeenSet)
    {
      ss << SortOrderMapper::GetNameForSortOrder(m_sortOrder);
      uri.AddQueryStringParameter("sortOrder", ss.str());
      ss.str("");
    }

    if(m_subscribedListingIdHasBeenSet)
    {
      ss << m_subscribedListingId;
      uri.AddQueryStringParameter("subscribedListingId", ss.str());
      ss.str("");
    }

    if(m_subscriptionIdHasBeenSet)
    {
      ss << m_subscriptionId;
      uri.AddQueryStringParameter("subscriptionId", ss.str());
      ss.str("");
    }

    if(m_subscriptionTargetIdHasBeenSet)
    {
      ss << m_subscriptionTargetId;
      uri.AddQueryStringParameter("subscriptionTargetId", ss.str());
      ss.str("");
    }

}



