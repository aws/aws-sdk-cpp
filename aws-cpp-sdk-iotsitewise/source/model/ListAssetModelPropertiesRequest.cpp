/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListAssetModelPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListAssetModelPropertiesRequest::ListAssetModelPropertiesRequest() : 
    m_assetModelIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filter(ListAssetModelPropertiesFilter::NOT_SET),
    m_filterHasBeenSet(false)
{
}

Aws::String ListAssetModelPropertiesRequest::SerializePayload() const
{
  return {};
}

void ListAssetModelPropertiesRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_filterHasBeenSet)
    {
      ss << ListAssetModelPropertiesFilterMapper::GetNameForListAssetModelPropertiesFilter(m_filter);
      uri.AddQueryStringParameter("filter", ss.str());
      ss.str("");
    }

}



