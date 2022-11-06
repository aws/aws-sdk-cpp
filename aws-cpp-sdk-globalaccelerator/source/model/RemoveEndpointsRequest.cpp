/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/RemoveEndpointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveEndpointsRequest::RemoveEndpointsRequest() : 
    m_endpointIdentifiersHasBeenSet(false),
    m_endpointGroupArnHasBeenSet(false)
{
}

Aws::String RemoveEndpointsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointIdentifiersJsonList(m_endpointIdentifiers.size());
   for(unsigned endpointIdentifiersIndex = 0; endpointIdentifiersIndex < endpointIdentifiersJsonList.GetLength(); ++endpointIdentifiersIndex)
   {
     endpointIdentifiersJsonList[endpointIdentifiersIndex].AsObject(m_endpointIdentifiers[endpointIdentifiersIndex].Jsonize());
   }
   payload.WithArray("EndpointIdentifiers", std::move(endpointIdentifiersJsonList));

  }

  if(m_endpointGroupArnHasBeenSet)
  {
   payload.WithString("EndpointGroupArn", m_endpointGroupArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RemoveEndpointsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.RemoveEndpoints"));
  return headers;

}




