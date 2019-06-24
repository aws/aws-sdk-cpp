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
    Array<JsonView> dnsIpsJsonList = jsonValue.GetArray("DnsIps");
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
   Array<JsonValue> dnsIpsJsonList(m_dnsIps.size());
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
