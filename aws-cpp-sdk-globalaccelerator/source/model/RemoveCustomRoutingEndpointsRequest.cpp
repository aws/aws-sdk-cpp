/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/RemoveCustomRoutingEndpointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveCustomRoutingEndpointsRequest::RemoveCustomRoutingEndpointsRequest() : 
    m_endpointIdsHasBeenSet(false),
    m_endpointGroupArnHasBeenSet(false)
{
}

Aws::String RemoveCustomRoutingEndpointsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointIdsJsonList(m_endpointIds.size());
   for(unsigned endpointIdsIndex = 0; endpointIdsIndex < endpointIdsJsonList.GetLength(); ++endpointIdsIndex)
   {
     endpointIdsJsonList[endpointIdsIndex].AsString(m_endpointIds[endpointIdsIndex]);
   }
   payload.WithArray("EndpointIds", std::move(endpointIdsJsonList));

  }

  if(m_endpointGroupArnHasBeenSet)
  {
   payload.WithString("EndpointGroupArn", m_endpointGroupArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RemoveCustomRoutingEndpointsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.RemoveCustomRoutingEndpoints"));
  return headers;

}




