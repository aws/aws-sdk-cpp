/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/OwnerDirectoryDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

OwnerDirectoryDescription::OwnerDirectoryDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

OwnerDirectoryDescription& OwnerDirectoryDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");
    m_directoryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnsIpAddrs"))
  {
    Aws::Utils::Array<JsonView> dnsIpAddrsJsonList = jsonValue.GetArray("DnsIpAddrs");
    for(unsigned dnsIpAddrsIndex = 0; dnsIpAddrsIndex < dnsIpAddrsJsonList.GetLength(); ++dnsIpAddrsIndex)
    {
      m_dnsIpAddrs.push_back(dnsIpAddrsJsonList[dnsIpAddrsIndex].AsString());
    }
    m_dnsIpAddrsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnsIpv6Addrs"))
  {
    Aws::Utils::Array<JsonView> dnsIpv6AddrsJsonList = jsonValue.GetArray("DnsIpv6Addrs");
    for(unsigned dnsIpv6AddrsIndex = 0; dnsIpv6AddrsIndex < dnsIpv6AddrsJsonList.GetLength(); ++dnsIpv6AddrsIndex)
    {
      m_dnsIpv6Addrs.push_back(dnsIpv6AddrsJsonList[dnsIpv6AddrsIndex].AsString());
    }
    m_dnsIpv6AddrsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcSettings"))
  {
    m_vpcSettings = jsonValue.GetObject("VpcSettings");
    m_vpcSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RadiusSettings"))
  {
    m_radiusSettings = jsonValue.GetObject("RadiusSettings");
    m_radiusSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RadiusStatus"))
  {
    m_radiusStatus = RadiusStatusMapper::GetRadiusStatusForName(jsonValue.GetString("RadiusStatus"));
    m_radiusStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkType"))
  {
    m_networkType = NetworkTypeMapper::GetNetworkTypeForName(jsonValue.GetString("NetworkType"));
    m_networkTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue OwnerDirectoryDescription::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_dnsIpAddrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsIpAddrsJsonList(m_dnsIpAddrs.size());
   for(unsigned dnsIpAddrsIndex = 0; dnsIpAddrsIndex < dnsIpAddrsJsonList.GetLength(); ++dnsIpAddrsIndex)
   {
     dnsIpAddrsJsonList[dnsIpAddrsIndex].AsString(m_dnsIpAddrs[dnsIpAddrsIndex]);
   }
   payload.WithArray("DnsIpAddrs", std::move(dnsIpAddrsJsonList));

  }

  if(m_dnsIpv6AddrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsIpv6AddrsJsonList(m_dnsIpv6Addrs.size());
   for(unsigned dnsIpv6AddrsIndex = 0; dnsIpv6AddrsIndex < dnsIpv6AddrsJsonList.GetLength(); ++dnsIpv6AddrsIndex)
   {
     dnsIpv6AddrsJsonList[dnsIpv6AddrsIndex].AsString(m_dnsIpv6Addrs[dnsIpv6AddrsIndex]);
   }
   payload.WithArray("DnsIpv6Addrs", std::move(dnsIpv6AddrsJsonList));

  }

  if(m_vpcSettingsHasBeenSet)
  {
   payload.WithObject("VpcSettings", m_vpcSettings.Jsonize());

  }

  if(m_radiusSettingsHasBeenSet)
  {
   payload.WithObject("RadiusSettings", m_radiusSettings.Jsonize());

  }

  if(m_radiusStatusHasBeenSet)
  {
   payload.WithString("RadiusStatus", RadiusStatusMapper::GetNameForRadiusStatus(m_radiusStatus));
  }

  if(m_networkTypeHasBeenSet)
  {
   payload.WithString("NetworkType", NetworkTypeMapper::GetNameForNetworkType(m_networkType));
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
