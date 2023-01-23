/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListGatewayRoutesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppMesh::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListGatewayRoutesRequest::ListGatewayRoutesRequest() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_meshNameHasBeenSet(false),
    m_meshOwnerHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_virtualGatewayNameHasBeenSet(false)
{
}

Aws::String ListGatewayRoutesRequest::SerializePayload() const
{
  return {};
}

void ListGatewayRoutesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_meshOwnerHasBeenSet)
    {
      ss << m_meshOwner;
      uri.AddQueryStringParameter("meshOwner", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



