/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/ListProfileTimesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListProfileTimesRequest::ListProfileTimesRequest() : 
    m_endTimeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_orderBy(OrderBy::NOT_SET),
    m_orderByHasBeenSet(false),
    m_period(AggregationPeriod::NOT_SET),
    m_periodHasBeenSet(false),
    m_profilingGroupNameHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

Aws::String ListProfileTimesRequest::SerializePayload() const
{
  return {};
}

void ListProfileTimesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_endTimeHasBeenSet)
    {
      ss << m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("endTime", ss.str());
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

    if(m_orderByHasBeenSet)
    {
      ss << OrderByMapper::GetNameForOrderBy(m_orderBy);
      uri.AddQueryStringParameter("orderBy", ss.str());
      ss.str("");
    }

    if(m_periodHasBeenSet)
    {
      ss << AggregationPeriodMapper::GetNameForAggregationPeriod(m_period);
      uri.AddQueryStringParameter("period", ss.str());
      ss.str("");
    }

    if(m_startTimeHasBeenSet)
    {
      ss << m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("startTime", ss.str());
      ss.str("");
    }

}



