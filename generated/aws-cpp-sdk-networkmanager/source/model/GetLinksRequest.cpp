/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetLinksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetLinksRequest::GetLinksRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_linkIdsHasBeenSet(false),
    m_siteIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetLinksRequest::SerializePayload() const
{
  return {};
}

void GetLinksRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_linkIdsHasBeenSet)
    {
      for(const auto& item : m_linkIds)
      {
        ss << item;
        uri.AddQueryStringParameter("linkIds", ss.str());
        ss.str("");
      }
    }

    if(m_siteIdHasBeenSet)
    {
      ss << m_siteId;
      uri.AddQueryStringParameter("siteId", ss.str());
      ss.str("");
    }

    if(m_typeHasBeenSet)
    {
      ss << m_type;
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

    if(m_providerHasBeenSet)
    {
      ss << m_provider;
      uri.AddQueryStringParameter("provider", ss.str());
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

}



