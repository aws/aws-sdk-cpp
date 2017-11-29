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

ResourceAccessPolicy::ResourceAccessPolicy(const JsonValue& jsonValue) : 
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceAccessPolicy& ResourceAccessPolicy::operator =(const JsonValue& jsonValue)
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
