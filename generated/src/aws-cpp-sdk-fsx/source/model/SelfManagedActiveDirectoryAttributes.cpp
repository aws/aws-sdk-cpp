/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> dnsIpsJsonList = jsonValue.GetArray("DnsIps");
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
