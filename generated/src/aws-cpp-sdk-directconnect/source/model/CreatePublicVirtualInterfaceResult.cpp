/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/CreatePublicVirtualInterfaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePublicVirtualInterfaceResult::CreatePublicVirtualInterfaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePublicVirtualInterfaceResult& CreatePublicVirtualInterfaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
  if(jsonValue.ValueExists("asnLong"))
  {
    m_asnLong = jsonValue.GetInt64("asnLong");
    m_asnLongHasBeenSet = true;
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
    Aws::Utils::Array<JsonView> routeFilterPrefixesJsonList = jsonValue.GetArray("routeFilterPrefixes");
    for(unsigned routeFilterPrefixesIndex = 0; routeFilterPrefixesIndex < routeFilterPrefixesJsonList.GetLength(); ++routeFilterPrefixesIndex)
    {
      m_routeFilterPrefixes.push_back(routeFilterPrefixesJsonList[routeFilterPrefixesIndex].AsObject());
    }
    m_routeFilterPrefixesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bgpPeers"))
  {
    Aws::Utils::Array<JsonView> bgpPeersJsonList = jsonValue.GetArray("bgpPeers");
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
  if(jsonValue.ValueExists("awsLogicalDeviceId"))
  {
    m_awsLogicalDeviceId = jsonValue.GetString("awsLogicalDeviceId");
    m_awsLogicalDeviceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("siteLinkEnabled"))
  {
    m_siteLinkEnabled = jsonValue.GetBool("siteLinkEnabled");
    m_siteLinkEnabledHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
