/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/ListAssetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListAssetsRequest::ListAssetsRequest() : 
    m_outpostIdentifierHasBeenSet(false),
    m_hostIdFilterHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_statusFilterHasBeenSet(false)
{
}

Aws::String ListAssetsRequest::SerializePayload() const
{
  return {};
}

void ListAssetsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_hostIdFilterHasBeenSet)
    {
      for(const auto& item : m_hostIdFilter)
      {
        ss << item;
        uri.AddQueryStringParameter("HostIdFilter", ss.str());
        ss.str("");
      }
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_statusFilterHasBeenSet)
    {
      for(const auto& item : m_statusFilter)
      {
        ss << AssetStateMapper::GetNameForAssetState(item);
        uri.AddQueryStringParameter("StatusFilter", ss.str());
        ss.str("");
      }
    }

}



