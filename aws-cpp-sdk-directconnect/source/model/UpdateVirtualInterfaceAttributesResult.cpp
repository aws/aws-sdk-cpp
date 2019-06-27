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

#include <aws/directconnect/model/UpdateVirtualInterfaceAttributesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateVirtualInterfaceAttributesResult::UpdateVirtualInterfaceAttributesResult() : 
    m_vlan(0),
    m_asn(0),
    m_amazonSideAsn(0),
    m_addressFamily(AddressFamily::NOT_SET),
    m_virtualInterfaceState(VirtualInterfaceState::NOT_SET),
    m_mtu(0),
    m_jumboFrameCapable(false)
{
}

UpdateVirtualInterfaceAttributesResult::UpdateVirtualInterfaceAttributesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_vlan(0),
    m_asn(0),
    m_amazonSideAsn(0),
    m_addressFamily(AddressFamily::NOT_SET),
    m_virtualInterfaceState(VirtualInterfaceState::NOT_SET),
    m_mtu(0),
    m_jumboFrameCapable(false)
{
  *this = result;
}

UpdateVirtualInterfaceAttributesResult& UpdateVirtualInterfaceAttributesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ownerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("ownerAccount");

  }

  if(jsonValue.ValueExists("virtualInterfaceId"))
  {
    m_virtualInterfaceId = jsonValue.GetString("virtualInterfaceId");

  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

  }

  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");

  }

  if(jsonValue.ValueExists("virtualInterfaceType"))
  {
    m_virtualInterfaceType = jsonValue.GetString("virtualInterfaceType");

  }

  if(jsonValue.ValueExists("virtualInterfaceName"))
  {
    m_virtualInterfaceName = jsonValue.GetString("virtualInterfaceName");

  }

  if(jsonValue.ValueExists("vlan"))
  {
    m_vlan = jsonValue.GetInteger("vlan");

  }

  if(jsonValue.ValueExists("asn"))
  {
    m_asn = jsonValue.GetInteger("asn");

  }

  if(jsonValue.ValueExists("amazonSideAsn"))
  {
    m_amazonSideAsn = jsonValue.GetInt64("amazonSideAsn");

  }

  if(jsonValue.ValueExists("authKey"))
  {
    m_authKey = jsonValue.GetString("authKey");

  }

  if(jsonValue.ValueExists("amazonAddress"))
  {
    m_amazonAddress = jsonValue.GetString("amazonAddress");

  }

  if(jsonValue.ValueExists("customerAddress"))
  {
    m_customerAddress = jsonValue.GetString("customerAddress");

  }

  if(jsonValue.ValueExists("addressFamily"))
  {
    m_addressFamily = AddressFamilyMapper::GetAddressFamilyForName(jsonValue.GetString("addressFamily"));

  }

  if(jsonValue.ValueExists("virtualInterfaceState"))
  {
    m_virtualInterfaceState = VirtualInterfaceStateMapper::GetVirtualInterfaceStateForName(jsonValue.GetString("virtualInterfaceState"));

  }

  if(jsonValue.ValueExists("customerRouterConfig"))
  {
    m_customerRouterConfig = jsonValue.GetString("customerRouterConfig");

  }

  if(jsonValue.ValueExists("mtu"))
  {
    m_mtu = jsonValue.GetInteger("mtu");

  }

  if(jsonValue.ValueExists("jumboFrameCapable"))
  {
    m_jumboFrameCapable = jsonValue.GetBool("jumboFrameCapable");

  }

  if(jsonValue.ValueExists("virtualGatewayId"))
  {
    m_virtualGatewayId = jsonValue.GetString("virtualGatewayId");

  }

  if(jsonValue.ValueExists("directConnectGatewayId"))
  {
    m_directConnectGatewayId = jsonValue.GetString("directConnectGatewayId");

  }

  if(jsonValue.ValueExists("routeFilterPrefixes"))
  {
    Array<JsonView> routeFilterPrefixesJsonList = jsonValue.GetArray("routeFilterPrefixes");
    for(unsigned routeFilterPrefixesIndex = 0; routeFilterPrefixesIndex < routeFilterPrefixesJsonList.GetLength(); ++routeFilterPrefixesIndex)
    {
      m_routeFilterPrefixes.push_back(routeFilterPrefixesJsonList[routeFilterPrefixesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("bgpPeers"))
  {
    Array<JsonView> bgpPeersJsonList = jsonValue.GetArray("bgpPeers");
    for(unsigned bgpPeersIndex = 0; bgpPeersIndex < bgpPeersJsonList.GetLength(); ++bgpPeersIndex)
    {
      m_bgpPeers.push_back(bgpPeersJsonList[bgpPeersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

  }

  if(jsonValue.ValueExists("awsDeviceV2"))
  {
    m_awsDeviceV2 = jsonValue.GetString("awsDeviceV2");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }



  return *this;
}
