/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/directconnect/model/VirtualInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

VirtualInterface::VirtualInterface() : 
    m_ownerAccountHasBeenSet(false),
    m_virtualInterfaceIdHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_virtualInterfaceTypeHasBeenSet(false),
    m_virtualInterfaceNameHasBeenSet(false),
    m_vlan(0),
    m_vlanHasBeenSet(false),
    m_asn(0),
    m_asnHasBeenSet(false),
    m_amazonSideAsn(0),
    m_amazonSideAsnHasBeenSet(false),
    m_authKeyHasBeenSet(false),
    m_amazonAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_virtualInterfaceState(VirtualInterfaceState::NOT_SET),
    m_virtualInterfaceStateHasBeenSet(false),
    m_customerRouterConfigHasBeenSet(false),
    m_mtu(0),
    m_mtuHasBeenSet(false),
    m_jumboFrameCapable(false),
    m_jumboFrameCapableHasBeenSet(false),
    m_virtualGatewayIdHasBeenSet(false),
    m_directConnectGatewayIdHasBeenSet(false),
    m_routeFilterPrefixesHasBeenSet(false),
    m_bgpPeersHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_awsDeviceV2HasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

VirtualInterface::VirtualInterface(JsonView jsonValue) : 
    m_ownerAccountHasBeenSet(false),
    m_virtualInterfaceIdHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_virtualInterfaceTypeHasBeenSet(false),
    m_virtualInterfaceNameHasBeenSet(false),
    m_vlan(0),
    m_vlanHasBeenSet(false),
    m_asn(0),
    m_asnHasBeenSet(false),
    m_amazonSideAsn(0),
    m_amazonSideAsnHasBeenSet(false),
    m_authKeyHasBeenSet(false),
    m_amazonAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_virtualInterfaceState(VirtualInterfaceState::NOT_SET),
    m_virtualInterfaceStateHasBeenSet(false),
    m_customerRouterConfigHasBeenSet(false),
    m_mtu(0),
    m_mtuHasBeenSet(false),
    m_jumboFrameCapable(false),
    m_jumboFrameCapableHasBeenSet(false),
    m_virtualGatewayIdHasBeenSet(false),
    m_directConnectGatewayIdHasBeenSet(false),
    m_routeFilterPrefixesHasBeenSet(false),
    m_bgpPeersHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_awsDeviceV2HasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualInterface& VirtualInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ownerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("ownerAccount");

    m_ownerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualInterfaceId"))
  {
    m_virtualInterfaceId = jsonValue.GetString("virtualInterfaceId");

    m_virtualInterfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");

    m_connectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualInterfaceType"))
  {
    m_virtualInterfaceType = jsonValue.GetString("virtualInterfaceType");

    m_virtualInterfaceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualInterfaceName"))
  {
    m_virtualInterfaceName = jsonValue.GetString("virtualInterfaceName");

    m_virtualInterfaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vlan"))
  {
    m_vlan = jsonValue.GetInteger("vlan");

    m_vlanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("asn"))
  {
    m_asn = jsonValue.GetInteger("asn");

    m_asnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amazonSideAsn"))
  {
    m_amazonSideAsn = jsonValue.GetInt64("amazonSideAsn");

    m_amazonSideAsnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authKey"))
  {
    m_authKey = jsonValue.GetString("authKey");

    m_authKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amazonAddress"))
  {
    m_amazonAddress = jsonValue.GetString("amazonAddress");

    m_amazonAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customerAddress"))
  {
    m_customerAddress = jsonValue.GetString("customerAddress");

    m_customerAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addressFamily"))
  {
    m_addressFamily = AddressFamilyMapper::GetAddressFamilyForName(jsonValue.GetString("addressFamily"));

    m_addressFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualInterfaceState"))
  {
    m_virtualInterfaceState = VirtualInterfaceStateMapper::GetVirtualInterfaceStateForName(jsonValue.GetString("virtualInterfaceState"));

    m_virtualInterfaceStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customerRouterConfig"))
  {
    m_customerRouterConfig = jsonValue.GetString("customerRouterConfig");

    m_customerRouterConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mtu"))
  {
    m_mtu = jsonValue.GetInteger("mtu");

    m_mtuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jumboFrameCapable"))
  {
    m_jumboFrameCapable = jsonValue.GetBool("jumboFrameCapable");

    m_jumboFrameCapableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualGatewayId"))
  {
    m_virtualGatewayId = jsonValue.GetString("virtualGatewayId");

    m_virtualGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("directConnectGatewayId"))
  {
    m_directConnectGatewayId = jsonValue.GetString("directConnectGatewayId");

    m_directConnectGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("routeFilterPrefixes"))
  {
    Array<JsonView> routeFilterPrefixesJsonList = jsonValue.GetArray("routeFilterPrefixes");
    for(unsigned routeFilterPrefixesIndex = 0; routeFilterPrefixesIndex < routeFilterPrefixesJsonList.GetLength(); ++routeFilterPrefixesIndex)
    {
      m_routeFilterPrefixes.push_back(routeFilterPrefixesJsonList[routeFilterPrefixesIndex].AsObject());
    }
    m_routeFilterPrefixesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bgpPeers"))
  {
    Array<JsonView> bgpPeersJsonList = jsonValue.GetArray("bgpPeers");
    for(unsigned bgpPeersIndex = 0; bgpPeersIndex < bgpPeersJsonList.GetLength(); ++bgpPeersIndex)
    {
      m_bgpPeers.push_back(bgpPeersJsonList[bgpPeersIndex].AsObject());
    }
    m_bgpPeersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsDeviceV2"))
  {
    m_awsDeviceV2 = jsonValue.GetString("awsDeviceV2");

    m_awsDeviceV2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualInterface::Jsonize() const
{
  JsonValue payload;

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("ownerAccount", m_ownerAccount);

  }

  if(m_virtualInterfaceIdHasBeenSet)
  {
   payload.WithString("virtualInterfaceId", m_virtualInterfaceId);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_virtualInterfaceTypeHasBeenSet)
  {
   payload.WithString("virtualInterfaceType", m_virtualInterfaceType);

  }

  if(m_virtualInterfaceNameHasBeenSet)
  {
   payload.WithString("virtualInterfaceName", m_virtualInterfaceName);

  }

  if(m_vlanHasBeenSet)
  {
   payload.WithInteger("vlan", m_vlan);

  }

  if(m_asnHasBeenSet)
  {
   payload.WithInteger("asn", m_asn);

  }

  if(m_amazonSideAsnHasBeenSet)
  {
   payload.WithInt64("amazonSideAsn", m_amazonSideAsn);

  }

  if(m_authKeyHasBeenSet)
  {
   payload.WithString("authKey", m_authKey);

  }

  if(m_amazonAddressHasBeenSet)
  {
   payload.WithString("amazonAddress", m_amazonAddress);

  }

  if(m_customerAddressHasBeenSet)
  {
   payload.WithString("customerAddress", m_customerAddress);

  }

  if(m_addressFamilyHasBeenSet)
  {
   payload.WithString("addressFamily", AddressFamilyMapper::GetNameForAddressFamily(m_addressFamily));
  }

  if(m_virtualInterfaceStateHasBeenSet)
  {
   payload.WithString("virtualInterfaceState", VirtualInterfaceStateMapper::GetNameForVirtualInterfaceState(m_virtualInterfaceState));
  }

  if(m_customerRouterConfigHasBeenSet)
  {
   payload.WithString("customerRouterConfig", m_customerRouterConfig);

  }

  if(m_mtuHasBeenSet)
  {
   payload.WithInteger("mtu", m_mtu);

  }

  if(m_jumboFrameCapableHasBeenSet)
  {
   payload.WithBool("jumboFrameCapable", m_jumboFrameCapable);

  }

  if(m_virtualGatewayIdHasBeenSet)
  {
   payload.WithString("virtualGatewayId", m_virtualGatewayId);

  }

  if(m_directConnectGatewayIdHasBeenSet)
  {
   payload.WithString("directConnectGatewayId", m_directConnectGatewayId);

  }

  if(m_routeFilterPrefixesHasBeenSet)
  {
   Array<JsonValue> routeFilterPrefixesJsonList(m_routeFilterPrefixes.size());
   for(unsigned routeFilterPrefixesIndex = 0; routeFilterPrefixesIndex < routeFilterPrefixesJsonList.GetLength(); ++routeFilterPrefixesIndex)
   {
     routeFilterPrefixesJsonList[routeFilterPrefixesIndex].AsObject(m_routeFilterPrefixes[routeFilterPrefixesIndex].Jsonize());
   }
   payload.WithArray("routeFilterPrefixes", std::move(routeFilterPrefixesJsonList));

  }

  if(m_bgpPeersHasBeenSet)
  {
   Array<JsonValue> bgpPeersJsonList(m_bgpPeers.size());
   for(unsigned bgpPeersIndex = 0; bgpPeersIndex < bgpPeersJsonList.GetLength(); ++bgpPeersIndex)
   {
     bgpPeersJsonList[bgpPeersIndex].AsObject(m_bgpPeers[bgpPeersIndex].Jsonize());
   }
   payload.WithArray("bgpPeers", std::move(bgpPeersJsonList));

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_awsDeviceV2HasBeenSet)
  {
   payload.WithString("awsDeviceV2", m_awsDeviceV2);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
