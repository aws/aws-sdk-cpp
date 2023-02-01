/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/DestinationPortMapping.h>
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

DestinationPortMapping::DestinationPortMapping() : 
    m_acceleratorArnHasBeenSet(false),
    m_acceleratorSocketAddressesHasBeenSet(false),
    m_endpointGroupArnHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_endpointGroupRegionHasBeenSet(false),
    m_destinationSocketAddressHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_destinationTrafficState(CustomRoutingDestinationTrafficState::NOT_SET),
    m_destinationTrafficStateHasBeenSet(false)
{
}

DestinationPortMapping::DestinationPortMapping(JsonView jsonValue) : 
    m_acceleratorArnHasBeenSet(false),
    m_acceleratorSocketAddressesHasBeenSet(false),
    m_endpointGroupArnHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_endpointGroupRegionHasBeenSet(false),
    m_destinationSocketAddressHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_destinationTrafficState(CustomRoutingDestinationTrafficState::NOT_SET),
    m_destinationTrafficStateHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationPortMapping& DestinationPortMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcceleratorArn"))
  {
    m_acceleratorArn = jsonValue.GetString("AcceleratorArn");

    m_acceleratorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AcceleratorSocketAddresses"))
  {
    Aws::Utils::Array<JsonView> acceleratorSocketAddressesJsonList = jsonValue.GetArray("AcceleratorSocketAddresses");
    for(unsigned acceleratorSocketAddressesIndex = 0; acceleratorSocketAddressesIndex < acceleratorSocketAddressesJsonList.GetLength(); ++acceleratorSocketAddressesIndex)
    {
      m_acceleratorSocketAddresses.push_back(acceleratorSocketAddressesJsonList[acceleratorSocketAddressesIndex].AsObject());
    }
    m_acceleratorSocketAddressesHasBeenSet = true;
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

  if(jsonValue.ValueExists("EndpointGroupRegion"))
  {
    m_endpointGroupRegion = jsonValue.GetString("EndpointGroupRegion");

    m_endpointGroupRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationSocketAddress"))
  {
    m_destinationSocketAddress = jsonValue.GetObject("DestinationSocketAddress");

    m_destinationSocketAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddressType"))
  {
    m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(jsonValue.GetString("IpAddressType"));

    m_ipAddressTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationTrafficState"))
  {
    m_destinationTrafficState = CustomRoutingDestinationTrafficStateMapper::GetCustomRoutingDestinationTrafficStateForName(jsonValue.GetString("DestinationTrafficState"));

    m_destinationTrafficStateHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationPortMapping::Jsonize() const
{
  JsonValue payload;

  if(m_acceleratorArnHasBeenSet)
  {
   payload.WithString("AcceleratorArn", m_acceleratorArn);

  }

  if(m_acceleratorSocketAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceleratorSocketAddressesJsonList(m_acceleratorSocketAddresses.size());
   for(unsigned acceleratorSocketAddressesIndex = 0; acceleratorSocketAddressesIndex < acceleratorSocketAddressesJsonList.GetLength(); ++acceleratorSocketAddressesIndex)
   {
     acceleratorSocketAddressesJsonList[acceleratorSocketAddressesIndex].AsObject(m_acceleratorSocketAddresses[acceleratorSocketAddressesIndex].Jsonize());
   }
   payload.WithArray("AcceleratorSocketAddresses", std::move(acceleratorSocketAddressesJsonList));

  }

  if(m_endpointGroupArnHasBeenSet)
  {
   payload.WithString("EndpointGroupArn", m_endpointGroupArn);

  }

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  if(m_endpointGroupRegionHasBeenSet)
  {
   payload.WithString("EndpointGroupRegion", m_endpointGroupRegion);

  }

  if(m_destinationSocketAddressHasBeenSet)
  {
   payload.WithObject("DestinationSocketAddress", m_destinationSocketAddress.Jsonize());

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("IpAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
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
