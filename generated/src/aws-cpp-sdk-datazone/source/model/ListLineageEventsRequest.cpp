/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListLineageEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListLineageEventsRequest::ListLineageEventsRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_processingStatus(LineageEventProcessingStatus::NOT_SET),
    m_processingStatusHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_timestampAfterHasBeenSet(false),
    m_timestampBeforeHasBeenSet(false)
{
}

Aws::String ListLineageEventsRequest::SerializePayload() const
{
  return {};
}

void ListLineageEventsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_processingStatusHasBeenSet)
    {
      ss << LineageEventProcessingStatusMapper::GetNameForLineageEventProcessingStatus(m_processingStatus);
      uri.AddQueryStringParameter("processingStatus", ss.str());
      ss.str("");
    }

    if(m_sortOrderHasBeenSet)
    {
      ss << SortOrderMapper::GetNameForSortOrder(m_sortOrder);
      uri.AddQueryStringParameter("sortOrder", ss.str());
      ss.str("");
    }

    if(m_timestampAfterHasBeenSet)
    {
      ss << m_timestampAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("timestampAfter", ss.str());
      ss.str("");
    }

    if(m_timestampBeforeHasBeenSet)
    {
      ss << m_timestampBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("timestampBefore", ss.str());
      ss.str("");
    }

}



