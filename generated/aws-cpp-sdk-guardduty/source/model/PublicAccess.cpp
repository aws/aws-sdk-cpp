/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/PublicAccess.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

PublicAccess::PublicAccess() : 
    m_permissionConfigurationHasBeenSet(false),
    m_effectivePermissionHasBeenSet(false)
{
}

PublicAccess::PublicAccess(JsonView jsonValue) : 
    m_permissionConfigurationHasBeenSet(false),
    m_effectivePermissionHasBeenSet(false)
{
  *this = jsonValue;
}

PublicAccess& PublicAccess::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("permissionConfiguration"))
  {
    m_permissionConfiguration = jsonValue.GetObject("permissionConfiguration");

    m_permissionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("effectivePermission"))
  {
    m_effectivePermission = jsonValue.GetString("effectivePermission");

    m_effectivePermissionHasBeenSet = true;
  }

  return *this;
}

JsonValue PublicAccess::Jsonize() const
{
  JsonValue payload;

  if(m_permissionConfigurationHasBeenSet)
  {
   payload.WithObject("permissionConfiguration", m_permissionConfiguration.Jsonize());

  }

  if(m_effectivePermissionHasBeenSet)
  {
   payload.WithString("effectivePermission", m_effectivePermission);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
