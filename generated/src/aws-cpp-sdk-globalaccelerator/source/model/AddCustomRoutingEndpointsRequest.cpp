/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/AddCustomRoutingEndpointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddCustomRoutingEndpointsRequest::AddCustomRoutingEndpointsRequest() : 
    m_endpointConfigurationsHasBeenSet(false),
    m_endpointGroupArnHasBeenSet(false)
{
}

Aws::String AddCustomRoutingEndpointsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointConfigurationsJsonList(m_endpointConfigurations.size());
   for(unsigned endpointConfigurationsIndex = 0; endpointConfigurationsIndex < endpointConfigurationsJsonList.GetLength(); ++endpointConfigurationsIndex)
   {
     endpointConfigurationsJsonList[endpointConfigurationsIndex].AsObject(m_endpointConfigurations[endpointConfigurationsIndex].Jsonize());
   }
   payload.WithArray("EndpointConfigurations", std::move(endpointConfigurationsJsonList));

  }

  if(m_endpointGroupArnHasBeenSet)
  {
   payload.WithString("EndpointGroupArn", m_endpointGroupArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddCustomRoutingEndpointsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.AddCustomRoutingEndpoints"));
  return headers;

}




