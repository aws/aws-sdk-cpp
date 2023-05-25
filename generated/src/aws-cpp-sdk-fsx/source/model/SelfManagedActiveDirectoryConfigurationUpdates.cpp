/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/SelfManagedActiveDirectoryConfigurationUpdates.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

SelfManagedActiveDirectoryConfigurationUpdates::SelfManagedActiveDirectoryConfigurationUpdates() : 
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_dnsIpsHasBeenSet(false)
{
}

SelfManagedActiveDirectoryConfigurationUpdates::SelfManagedActiveDirectoryConfigurationUpdates(JsonView jsonValue) : 
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_dnsIpsHasBeenSet(false)
{
  *this = jsonValue;
}

SelfManagedActiveDirectoryConfigurationUpdates& SelfManagedActiveDirectoryConfigurationUpdates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsIps"))
  {
    Aws::Utils::Array<JsonView> dnsIpsJsonList = jsonValue.GetArray("DnsIps");
    for(unsigned dnsIpsIndex = 0; dnsIpsIndex < dnsIpsJsonList.GetLength(); ++dnsIpsIndex)
    {
      m_dnsIps.push_back(dnsIpsJsonList[dnsIpsIndex].AsString());
    }
    m_dnsIpsHasBeenSet = true;
  }

  return *this;
}

JsonValue SelfManagedActiveDirectoryConfigurationUpdates::Jsonize() const
{
  JsonValue payload;

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_dnsIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsIpsJsonList(m_dnsIps.size());
   for(unsigned dnsIpsIndex = 0; dnsIpsIndex < dnsIpsJsonList.GetLength(); ++dnsIpsIndex)
   {
     dnsIpsJsonList[dnsIpsIndex].AsString(m_dnsIps[dnsIpsIndex]);
   }
   payload.WithArray("DnsIps", std::move(dnsIpsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
