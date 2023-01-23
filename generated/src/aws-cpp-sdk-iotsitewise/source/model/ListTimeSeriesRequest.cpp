/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListTimeSeriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListTimeSeriesRequest::ListTimeSeriesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_aliasPrefixHasBeenSet(false),
    m_timeSeriesType(ListTimeSeriesType::NOT_SET),
    m_timeSeriesTypeHasBeenSet(false)
{
}

Aws::String ListTimeSeriesRequest::SerializePayload() const
{
  return {};
}

void ListTimeSeriesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_assetIdHasBeenSet)
    {
      ss << m_assetId;
      uri.AddQueryStringParameter("assetId", ss.str());
      ss.str("");
    }

    if(m_aliasPrefixHasBeenSet)
    {
      ss << m_aliasPrefix;
      uri.AddQueryStringParameter("aliasPrefix", ss.str());
      ss.str("");
    }

    if(m_timeSeriesTypeHasBeenSet)
    {
      ss << ListTimeSeriesTypeMapper::GetNameForListTimeSeriesType(m_timeSeriesType);
      uri.AddQueryStringParameter("timeSeriesType", ss.str());
      ss.str("");
    }

}



