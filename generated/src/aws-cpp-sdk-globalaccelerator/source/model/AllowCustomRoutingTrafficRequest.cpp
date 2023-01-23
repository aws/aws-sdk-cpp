/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/AllowCustomRoutingTrafficRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AllowCustomRoutingTrafficRequest::AllowCustomRoutingTrafficRequest() : 
    m_endpointGroupArnHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_destinationAddressesHasBeenSet(false),
    m_destinationPortsHasBeenSet(false),
    m_allowAllTrafficToEndpoint(false),
    m_allowAllTrafficToEndpointHasBeenSet(false)
{
}

Aws::String AllowCustomRoutingTrafficRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointGroupArnHasBeenSet)
  {
   payload.WithString("EndpointGroupArn", m_endpointGroupArn);

  }

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  if(m_destinationAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationAddressesJsonList(m_destinationAddresses.size());
   for(unsigned destinationAddressesIndex = 0; destinationAddressesIndex < destinationAddressesJsonList.GetLength(); ++destinationAddressesIndex)
   {
     destinationAddressesJsonList[destinationAddressesIndex].AsString(m_destinationAddresses[destinationAddressesIndex]);
   }
   payload.WithArray("DestinationAddresses", std::move(destinationAddressesJsonList));

  }

  if(m_destinationPortsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationPortsJsonList(m_destinationPorts.size());
   for(unsigned destinationPortsIndex = 0; destinationPortsIndex < destinationPortsJsonList.GetLength(); ++destinationPortsIndex)
   {
     destinationPortsJsonList[destinationPortsIndex].AsInteger(m_destinationPorts[destinationPortsIndex]);
   }
   payload.WithArray("DestinationPorts", std::move(destinationPortsJsonList));

  }

  if(m_allowAllTrafficToEndpointHasBeenSet)
  {
   payload.WithBool("AllowAllTrafficToEndpoint", m_allowAllTrafficToEndpoint);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AllowCustomRoutingTrafficRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.AllowCustomRoutingTraffic"));
  return headers;

}




