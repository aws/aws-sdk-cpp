/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CreateCustomRoutingEndpointGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCustomRoutingEndpointGroupRequest::CreateCustomRoutingEndpointGroupRequest() : 
    m_listenerArnHasBeenSet(false),
    m_endpointGroupRegionHasBeenSet(false),
    m_destinationConfigurationsHasBeenSet(false),
    m_idempotencyToken(Aws::Utils::UUID::RandomUUID()),
    m_idempotencyTokenHasBeenSet(true)
{
}

Aws::String CreateCustomRoutingEndpointGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_listenerArnHasBeenSet)
  {
   payload.WithString("ListenerArn", m_listenerArn);

  }

  if(m_endpointGroupRegionHasBeenSet)
  {
   payload.WithString("EndpointGroupRegion", m_endpointGroupRegion);

  }

  if(m_destinationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationConfigurationsJsonList(m_destinationConfigurations.size());
   for(unsigned destinationConfigurationsIndex = 0; destinationConfigurationsIndex < destinationConfigurationsJsonList.GetLength(); ++destinationConfigurationsIndex)
   {
     destinationConfigurationsJsonList[destinationConfigurationsIndex].AsObject(m_destinationConfigurations[destinationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("DestinationConfigurations", std::move(destinationConfigurationsJsonList));

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCustomRoutingEndpointGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.CreateCustomRoutingEndpointGroup"));
  return headers;

}




