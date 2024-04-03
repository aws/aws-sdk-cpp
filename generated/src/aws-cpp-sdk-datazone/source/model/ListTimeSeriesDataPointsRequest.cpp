/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListTimeSeriesDataPointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListTimeSeriesDataPointsRequest::ListTimeSeriesDataPointsRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_entityIdentifierHasBeenSet(false),
    m_entityType(TimeSeriesEntityType::NOT_SET),
    m_entityTypeHasBeenSet(false),
    m_formNameHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_startedAtHasBeenSet(false)
{
}

Aws::String ListTimeSeriesDataPointsRequest::SerializePayload() const
{
  return {};
}

void ListTimeSeriesDataPointsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_endedAtHasBeenSet)
    {
      ss << m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("endedAt", ss.str());
      ss.str("");
    }

    if(m_formNameHasBeenSet)
    {
      ss << m_formName;
      uri.AddQueryStringParameter("formName", ss.str());
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

    if(m_startedAtHasBeenSet)
    {
      ss << m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("startedAt", ss.str());
      ss.str("");
    }

}



