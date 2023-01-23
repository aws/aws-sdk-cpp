/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/LambdaDeviceMount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

LambdaDeviceMount::LambdaDeviceMount() : 
    m_pathHasBeenSet(false),
    m_permission(LambdaFilesystemPermission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_addGroupOwner(false),
    m_addGroupOwnerHasBeenSet(false)
{
}

LambdaDeviceMount::LambdaDeviceMount(JsonView jsonValue) : 
    m_pathHasBeenSet(false),
    m_permission(LambdaFilesystemPermission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_addGroupOwner(false),
    m_addGroupOwnerHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaDeviceMount& LambdaDeviceMount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("permission"))
  {
    m_permission = LambdaFilesystemPermissionMapper::GetLambdaFilesystemPermissionForName(jsonValue.GetString("permission"));

    m_permissionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addGroupOwner"))
  {
    m_addGroupOwner = jsonValue.GetBool("addGroupOwner");

    m_addGroupOwnerHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaDeviceMount::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_permissionHasBeenSet)
  {
   payload.WithString("permission", LambdaFilesystemPermissionMapper::GetNameForLambdaFilesystemPermission(m_permission));
  }

  if(m_addGroupOwnerHasBeenSet)
  {
   payload.WithBool("addGroupOwner", m_addGroupOwner);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
