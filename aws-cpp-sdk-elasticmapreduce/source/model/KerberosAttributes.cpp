/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/KerberosAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

KerberosAttributes::KerberosAttributes() : 
    m_realmHasBeenSet(false),
    m_kdcAdminPasswordHasBeenSet(false),
    m_crossRealmTrustPrincipalPasswordHasBeenSet(false),
    m_aDDomainJoinUserHasBeenSet(false),
    m_aDDomainJoinPasswordHasBeenSet(false)
{
}

KerberosAttributes::KerberosAttributes(JsonView jsonValue) : 
    m_realmHasBeenSet(false),
    m_kdcAdminPasswordHasBeenSet(false),
    m_crossRealmTrustPrincipalPasswordHasBeenSet(false),
    m_aDDomainJoinUserHasBeenSet(false),
    m_aDDomainJoinPasswordHasBeenSet(false)
{
  *this = jsonValue;
}

KerberosAttributes& KerberosAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Realm"))
  {
    m_realm = jsonValue.GetString("Realm");

    m_realmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KdcAdminPassword"))
  {
    m_kdcAdminPassword = jsonValue.GetString("KdcAdminPassword");

    m_kdcAdminPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrossRealmTrustPrincipalPassword"))
  {
    m_crossRealmTrustPrincipalPassword = jsonValue.GetString("CrossRealmTrustPrincipalPassword");

    m_crossRealmTrustPrincipalPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ADDomainJoinUser"))
  {
    m_aDDomainJoinUser = jsonValue.GetString("ADDomainJoinUser");

    m_aDDomainJoinUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ADDomainJoinPassword"))
  {
    m_aDDomainJoinPassword = jsonValue.GetString("ADDomainJoinPassword");

    m_aDDomainJoinPasswordHasBeenSet = true;
  }

  return *this;
}

JsonValue KerberosAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_realmHasBeenSet)
  {
   payload.WithString("Realm", m_realm);

  }

  if(m_kdcAdminPasswordHasBeenSet)
  {
   payload.WithString("KdcAdminPassword", m_kdcAdminPassword);

  }

  if(m_crossRealmTrustPrincipalPasswordHasBeenSet)
  {
   payload.WithString("CrossRealmTrustPrincipalPassword", m_crossRealmTrustPrincipalPassword);

  }

  if(m_aDDomainJoinUserHasBeenSet)
  {
   payload.WithString("ADDomainJoinUser", m_aDDomainJoinUser);

  }

  if(m_aDDomainJoinPasswordHasBeenSet)
  {
   payload.WithString("ADDomainJoinPassword", m_aDDomainJoinPassword);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
