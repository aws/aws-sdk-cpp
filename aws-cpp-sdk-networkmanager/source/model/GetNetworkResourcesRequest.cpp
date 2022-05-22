/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetNetworkResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetNetworkResourcesRequest::GetNetworkResourcesRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_coreNetworkIdHasBeenSet(false),
    m_registeredGatewayArnHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetNetworkResourcesRequest::SerializePayload() const
{
  return {};
}

void GetNetworkResourcesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_coreNetworkIdHasBeenSet)
    {
      ss << m_coreNetworkId;
      uri.AddQueryStringParameter("coreNetworkId", ss.str());
      ss.str("");
    }

    if(m_registeredGatewayArnHasBeenSet)
    {
      ss << m_registeredGatewayArn;
      uri.AddQueryStringParameter("registeredGatewayArn", ss.str());
      ss.str("");
    }

    if(m_awsRegionHasBeenSet)
    {
      ss << m_awsRegion;
      uri.AddQueryStringParameter("awsRegion", ss.str());
      ss.str("");
    }

    if(m_accountIdHasBeenSet)
    {
      ss << m_accountId;
      uri.AddQueryStringParameter("accountId", ss.str());
      ss.str("");
    }

    if(m_resourceTypeHasBeenSet)
    {
      ss << m_resourceType;
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

    if(m_resourceArnHasBeenSet)
    {
      ss << m_resourceArn;
      uri.AddQueryStringParameter("resourceArn", ss.str());
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



