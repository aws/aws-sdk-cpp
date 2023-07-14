/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/Grant.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

Grant::Grant() : 
    m_granteeHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false)
{
}

Grant::Grant(JsonView jsonValue) : 
    m_granteeHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false)
{
  *this = jsonValue;
}

Grant& Grant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Grantee"))
  {
    m_grantee = jsonValue.GetObject("Grantee");

    m_granteeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permission"))
  {
    m_permission = PermissionMapper::GetPermissionForName(jsonValue.GetString("Permission"));

    m_permissionHasBeenSet = true;
  }

  return *this;
}

JsonValue Grant::Jsonize() const
{
  JsonValue payload;

  if(m_granteeHasBeenSet)
  {
   payload.WithObject("Grantee", m_grantee.Jsonize());

  }

  if(m_permissionHasBeenSet)
  {
   payload.WithString("Permission", PermissionMapper::GetNameForPermission(m_permission));
  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
