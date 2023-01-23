/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ResourceAccessPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

ResourceAccessPolicy::ResourceAccessPolicy() : 
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

ResourceAccessPolicy::ResourceAccessPolicy(JsonView jsonValue) : 
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceAccessPolicy& ResourceAccessPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Permission"))
  {
    m_permission = PermissionMapper::GetPermissionForName(jsonValue.GetString("Permission"));

    m_permissionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceAccessPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_permissionHasBeenSet)
  {
   payload.WithString("Permission", PermissionMapper::GetNameForPermission(m_permission));
  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
