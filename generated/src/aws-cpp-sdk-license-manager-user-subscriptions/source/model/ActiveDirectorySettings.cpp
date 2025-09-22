/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/ActiveDirectorySettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

ActiveDirectorySettings::ActiveDirectorySettings(JsonView jsonValue)
{
  *this = jsonValue;
}

ActiveDirectorySettings& ActiveDirectorySettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainIpv4List"))
  {
    Aws::Utils::Array<JsonView> domainIpv4ListJsonList = jsonValue.GetArray("DomainIpv4List");
    for(unsigned domainIpv4ListIndex = 0; domainIpv4ListIndex < domainIpv4ListJsonList.GetLength(); ++domainIpv4ListIndex)
    {
      m_domainIpv4List.push_back(domainIpv4ListJsonList[domainIpv4ListIndex].AsString());
    }
    m_domainIpv4ListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainCredentialsProvider"))
  {
    m_domainCredentialsProvider = jsonValue.GetObject("DomainCredentialsProvider");
    m_domainCredentialsProviderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainNetworkSettings"))
  {
    m_domainNetworkSettings = jsonValue.GetObject("DomainNetworkSettings");
    m_domainNetworkSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ActiveDirectorySettings::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_domainIpv4ListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainIpv4ListJsonList(m_domainIpv4List.size());
   for(unsigned domainIpv4ListIndex = 0; domainIpv4ListIndex < domainIpv4ListJsonList.GetLength(); ++domainIpv4ListIndex)
   {
     domainIpv4ListJsonList[domainIpv4ListIndex].AsString(m_domainIpv4List[domainIpv4ListIndex]);
   }
   payload.WithArray("DomainIpv4List", std::move(domainIpv4ListJsonList));

  }

  if(m_domainCredentialsProviderHasBeenSet)
  {
   payload.WithObject("DomainCredentialsProvider", m_domainCredentialsProvider.Jsonize());

  }

  if(m_domainNetworkSettingsHasBeenSet)
  {
   payload.WithObject("DomainNetworkSettings", m_domainNetworkSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
