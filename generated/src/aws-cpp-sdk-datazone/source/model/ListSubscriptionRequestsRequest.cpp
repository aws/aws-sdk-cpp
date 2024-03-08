/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListSubscriptionRequestsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListSubscriptionRequestsRequest::ListSubscriptionRequestsRequest() : 
    m_approverProjectIdHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_owningProjectIdHasBeenSet(false),
    m_sortBy(SortKey::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_status(SubscriptionRequestStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subscribedListingIdHasBeenSet(false)
{
}

Aws::String ListSubscriptionRequestsRequest::SerializePayload() const
{
  return {};
}

void ListSubscriptionRequestsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_approverProjectIdHasBeenSet)
    {
      ss << m_approverProjectId;
      uri.AddQueryStringParameter("approverProjectId", ss.str());
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

    if(m_statusHasBeenSet)
    {
      ss << SubscriptionRequestStatusMapper::GetNameForSubscriptionRequestStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

    if(m_subscribedListingIdHasBeenSet)
    {
      ss << m_subscribedListingId;
      uri.AddQueryStringParameter("subscribedListingId", ss.str());
      ss.str("");
    }

}



