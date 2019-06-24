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

#include <aws/fsx/model/SelfManagedActiveDirectoryAttributes.h>
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

SelfManagedActiveDirectoryAttributes::SelfManagedActiveDirectoryAttributes() : 
    m_domainNameHasBeenSet(false),
    m_organizationalUnitDistinguishedNameHasBeenSet(false),
    m_fileSystemAdministratorsGroupHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_dnsIpsHasBeenSet(false)
{
}

SelfManagedActiveDirectoryAttributes::SelfManagedActiveDirectoryAttributes(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_organizationalUnitDistinguishedNameHasBeenSet(false),
    m_fileSystemAdministratorsGroupHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_dnsIpsHasBeenSet(false)
{
  *this = jsonValue;
}

SelfManagedActiveDirectoryAttributes& SelfManagedActiveDirectoryAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationalUnitDistinguishedName"))
  {
    m_organizationalUnitDistinguishedName = jsonValue.GetString("OrganizationalUnitDistinguishedName");

    m_organizationalUnitDistinguishedNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemAdministratorsGroup"))
  {
    m_fileSystemAdministratorsGroup = jsonValue.GetString("FileSystemAdministratorsGroup");

    m_fileSystemAdministratorsGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
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

JsonValue SelfManagedActiveDirectoryAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_organizationalUnitDistinguishedNameHasBeenSet)
  {
   payload.WithString("OrganizationalUnitDistinguishedName", m_organizationalUnitDistinguishedName);

  }

  if(m_fileSystemAdministratorsGroupHasBeenSet)
  {
   payload.WithString("FileSystemAdministratorsGroup", m_fileSystemAdministratorsGroup);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

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
