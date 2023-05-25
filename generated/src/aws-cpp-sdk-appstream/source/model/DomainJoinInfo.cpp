/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DomainJoinInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

DomainJoinInfo::DomainJoinInfo() : 
    m_directoryNameHasBeenSet(false),
    m_organizationalUnitDistinguishedNameHasBeenSet(false)
{
}

DomainJoinInfo::DomainJoinInfo(JsonView jsonValue) : 
    m_directoryNameHasBeenSet(false),
    m_organizationalUnitDistinguishedNameHasBeenSet(false)
{
  *this = jsonValue;
}

DomainJoinInfo& DomainJoinInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectoryName"))
  {
    m_directoryName = jsonValue.GetString("DirectoryName");

    m_directoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationalUnitDistinguishedName"))
  {
    m_organizationalUnitDistinguishedName = jsonValue.GetString("OrganizationalUnitDistinguishedName");

    m_organizationalUnitDistinguishedNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainJoinInfo::Jsonize() const
{
  JsonValue payload;

  if(m_directoryNameHasBeenSet)
  {
   payload.WithString("DirectoryName", m_directoryName);

  }

  if(m_organizationalUnitDistinguishedNameHasBeenSet)
  {
   payload.WithString("OrganizationalUnitDistinguishedName", m_organizationalUnitDistinguishedName);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
