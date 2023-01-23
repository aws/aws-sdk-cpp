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

OwnerDirectoryDescription::OwnerDirectoryDescription() : 
    m_directoryIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_dnsIpAddrsHasBeenSet(false),
    m_vpcSettingsHasBeenSet(false),
    m_radiusSettingsHasBeenSet(false),
    m_radiusStatus(RadiusStatus::NOT_SET),
    m_radiusStatusHasBeenSet(false)
{
}

OwnerDirectoryDescription::OwnerDirectoryDescription(JsonView jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_dnsIpAddrsHasBeenSet(false),
    m_vpcSettingsHasBeenSet(false),
    m_radiusSettingsHasBeenSet(false),
    m_radiusStatus(RadiusStatus::NOT_SET),
    m_radiusStatusHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
