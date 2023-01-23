/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/PortMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

PortMapping::PortMapping() : 
    m_acceleratorPort(0),
    m_acceleratorPortHasBeenSet(false),
    m_endpointGroupArnHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_destinationSocketAddressHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_destinationTrafficState(CustomRoutingDestinationTrafficState::NOT_SET),
    m_destinationTrafficStateHasBeenSet(false)
{
}

PortMapping::PortMapping(JsonView jsonValue) : 
    m_acceleratorPort(0),
    m_acceleratorPortHasBeenSet(false),
    m_endpointGroupArnHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_destinationSocketAddressHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_destinationTrafficState(CustomRoutingDestinationTrafficState::NOT_SET),
    m_destinationTrafficStateHasBeenSet(false)
{
  *this = jsonValue;
}

PortMapping& PortMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcceleratorPort"))
  {
    m_acceleratorPort = jsonValue.GetInteger("AcceleratorPort");

    m_acceleratorPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointGroupArn"))
  {
    m_endpointGroupArn = jsonValue.GetString("EndpointGroupArn");

    m_endpointGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointId"))
  {
    m_endpointId = jsonValue.GetString("EndpointId");

    m_endpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationSocketAddress"))
  {
    m_destinationSocketAddress = jsonValue.GetObject("DestinationSocketAddress");

    m_destinationSocketAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocols"))
  {
    Aws::Utils::Array<JsonView> protocolsJsonList = jsonValue.GetArray("Protocols");
    for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
    {
      m_protocols.push_back(CustomRoutingProtocolMapper::GetCustomRoutingProtocolForName(protocolsJsonList[protocolsIndex].AsString()));
    }
    m_protocolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationTrafficState"))
  {
    m_destinationTrafficState = CustomRoutingDestinationTrafficStateMapper::GetCustomRoutingDestinationTrafficStateForName(jsonValue.GetString("DestinationTrafficState"));

    m_destinationTrafficStateHasBeenSet = true;
  }

  return *this;
}

JsonValue PortMapping::Jsonize() const
{
  JsonValue payload;

  if(m_acceleratorPortHasBeenSet)
  {
   payload.WithInteger("AcceleratorPort", m_acceleratorPort);

  }

  if(m_endpointGroupArnHasBeenSet)
  {
   payload.WithString("EndpointGroupArn", m_endpointGroupArn);

  }

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  if(m_destinationSocketAddressHasBeenSet)
  {
   payload.WithObject("DestinationSocketAddress", m_destinationSocketAddress.Jsonize());

  }

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(CustomRoutingProtocolMapper::GetNameForCustomRoutingProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("Protocols", std::move(protocolsJsonList));

  }

  if(m_destinationTrafficStateHasBeenSet)
  {
   payload.WithString("DestinationTrafficState", CustomRoutingDestinationTrafficStateMapper::GetNameForCustomRoutingDestinationTrafficState(m_destinationTrafficState));
  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
