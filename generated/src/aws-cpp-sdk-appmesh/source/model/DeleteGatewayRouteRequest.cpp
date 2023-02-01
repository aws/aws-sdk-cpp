/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/DeleteGatewayRouteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppMesh::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteGatewayRouteRequest::DeleteGatewayRouteRequest() : 
    m_gatewayRouteNameHasBeenSet(false),
    m_meshNameHasBeenSet(false),
    m_meshOwnerHasBeenSet(false),
    m_virtualGatewayNameHasBeenSet(false)
{
}

Aws::String DeleteGatewayRouteRequest::SerializePayload() const
{
  return {};
}

void DeleteGatewayRouteRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_meshOwnerHasBeenSet)
    {
      ss << m_meshOwner;
      uri.AddQueryStringParameter("meshOwner", ss.str());
      ss.str("");
    }

}



