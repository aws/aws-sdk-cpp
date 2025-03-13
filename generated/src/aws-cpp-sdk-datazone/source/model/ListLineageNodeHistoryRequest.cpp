/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListLineageNodeHistoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListLineageNodeHistoryRequest::SerializePayload() const
{
  return {};
}

void ListLineageNodeHistoryRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_directionHasBeenSet)
    {
      ss << EdgeDirectionMapper::GetNameForEdgeDirection(m_direction);
      uri.AddQueryStringParameter("direction", ss.str());
      ss.str("");
    }

    if(m_eventTimestampGTEHasBeenSet)
    {
      ss << m_eventTimestampGTE.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("timestampGTE", ss.str());
      ss.str("");
    }

    if(m_eventTimestampLTEHasBeenSet)
    {
      ss << m_eventTimestampLTE.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("timestampLTE", ss.str());
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

    if(m_sortOrderHasBeenSet)
    {
      ss << SortOrderMapper::GetNameForSortOrder(m_sortOrder);
      uri.AddQueryStringParameter("sortOrder", ss.str());
      ss.str("");
    }

}



