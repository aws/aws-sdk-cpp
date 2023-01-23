/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/NetworkInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

NetworkInterface::NetworkInterface() : 
    m_networkInterfaceIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_publicDnsNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_securityGroupsHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(JsonView jsonValue) : 
    m_networkInterfaceIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_publicDnsNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_securityGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkInterface& NetworkInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("networkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("networkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnetId"))
  {
    m_subnetId = jsonValue.GetString("subnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateDnsName"))
  {
    m_privateDnsName = jsonValue.GetString("privateDnsName");

    m_privateDnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("privateIpAddress");

    m_privateIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateIpAddresses"))
  {
    Aws::Utils::Array<JsonView> privateIpAddressesJsonList = jsonValue.GetArray("privateIpAddresses");
    for(unsigned privateIpAddressesIndex = 0; privateIpAddressesIndex < privateIpAddressesJsonList.GetLength(); ++privateIpAddressesIndex)
    {
      m_privateIpAddresses.push_back(privateIpAddressesJsonList[privateIpAddressesIndex].AsObject());
    }
    m_privateIpAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicDnsName"))
  {
    m_publicDnsName = jsonValue.GetString("publicDnsName");

    m_publicDnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicIp"))
  {
    m_publicIp = jsonValue.GetString("publicIp");

    m_publicIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipv6Addresses"))
  {
    Aws::Utils::Array<JsonView> ipv6AddressesJsonList = jsonValue.GetArray("ipv6Addresses");
    for(unsigned ipv6AddressesIndex = 0; ipv6AddressesIndex < ipv6AddressesJsonList.GetLength(); ++ipv6AddressesIndex)
    {
      m_ipv6Addresses.push_back(ipv6AddressesJsonList[ipv6AddressesIndex].AsString());
    }
    m_ipv6AddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsObject());
    }
    m_securityGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkInterface::Jsonize() const
{
  JsonValue payload;

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("networkInterfaceId", m_networkInterfaceId);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("subnetId", m_subnetId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  if(m_privateDnsNameHasBeenSet)
  {
   payload.WithString("privateDnsName", m_privateDnsName);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("privateIpAddress", m_privateIpAddress);

  }

  if(m_privateIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> privateIpAddressesJsonList(m_privateIpAddresses.size());
   for(unsigned privateIpAddressesIndex = 0; privateIpAddressesIndex < privateIpAddressesJsonList.GetLength(); ++privateIpAddressesIndex)
   {
     privateIpAddressesJsonList[privateIpAddressesIndex].AsObject(m_privateIpAddresses[privateIpAddressesIndex].Jsonize());
   }
   payload.WithArray("privateIpAddresses", std::move(privateIpAddressesJsonList));

  }

  if(m_publicDnsNameHasBeenSet)
  {
   payload.WithString("publicDnsName", m_publicDnsName);

  }

  if(m_publicIpHasBeenSet)
  {
   payload.WithString("publicIp", m_publicIp);

  }

  if(m_ipv6AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipv6AddressesJsonList(m_ipv6Addresses.size());
   for(unsigned ipv6AddressesIndex = 0; ipv6AddressesIndex < ipv6AddressesJsonList.GetLength(); ++ipv6AddressesIndex)
   {
     ipv6AddressesJsonList[ipv6AddressesIndex].AsString(m_ipv6Addresses[ipv6AddressesIndex]);
   }
   payload.WithArray("ipv6Addresses", std::move(ipv6AddressesJsonList));

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsObject(m_securityGroups[securityGroupsIndex].Jsonize());
   }
   payload.WithArray("securityGroups", std::move(securityGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
