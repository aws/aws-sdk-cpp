/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/AdminScope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

AdminScope::AdminScope() : 
    m_accountScopeHasBeenSet(false),
    m_organizationalUnitScopeHasBeenSet(false),
    m_regionScopeHasBeenSet(false),
    m_policyTypeScopeHasBeenSet(false)
{
}

AdminScope::AdminScope(JsonView jsonValue) : 
    m_accountScopeHasBeenSet(false),
    m_organizationalUnitScopeHasBeenSet(false),
    m_regionScopeHasBeenSet(false),
    m_policyTypeScopeHasBeenSet(false)
{
  *this = jsonValue;
}

AdminScope& AdminScope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountScope"))
  {
    m_accountScope = jsonValue.GetObject("AccountScope");

    m_accountScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationalUnitScope"))
  {
    m_organizationalUnitScope = jsonValue.GetObject("OrganizationalUnitScope");

    m_organizationalUnitScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegionScope"))
  {
    m_regionScope = jsonValue.GetObject("RegionScope");

    m_regionScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyTypeScope"))
  {
    m_policyTypeScope = jsonValue.GetObject("PolicyTypeScope");

    m_policyTypeScopeHasBeenSet = true;
  }

  return *this;
}

JsonValue AdminScope::Jsonize() const
{
  JsonValue payload;

  if(m_accountScopeHasBeenSet)
  {
   payload.WithObject("AccountScope", m_accountScope.Jsonize());

  }

  if(m_organizationalUnitScopeHasBeenSet)
  {
   payload.WithObject("OrganizationalUnitScope", m_organizationalUnitScope.Jsonize());

  }

  if(m_regionScopeHasBeenSet)
  {
   payload.WithObject("RegionScope", m_regionScope.Jsonize());

  }

  if(m_policyTypeScopeHasBeenSet)
  {
   payload.WithObject("PolicyTypeScope", m_policyTypeScope.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
