/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/LambdaVolumeMount.h>
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

LambdaVolumeMount::LambdaVolumeMount() : 
    m_sourcePathHasBeenSet(false),
    m_destinationPathHasBeenSet(false),
    m_permission(LambdaFilesystemPermission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_addGroupOwner(false),
    m_addGroupOwnerHasBeenSet(false)
{
}

LambdaVolumeMount::LambdaVolumeMount(JsonView jsonValue) : 
    m_sourcePathHasBeenSet(false),
    m_destinationPathHasBeenSet(false),
    m_permission(LambdaFilesystemPermission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_addGroupOwner(false),
    m_addGroupOwnerHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaVolumeMount& LambdaVolumeMount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourcePath"))
  {
    m_sourcePath = jsonValue.GetString("sourcePath");

    m_sourcePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationPath"))
  {
    m_destinationPath = jsonValue.GetString("destinationPath");

    m_destinationPathHasBeenSet = true;
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

JsonValue LambdaVolumeMount::Jsonize() const
{
  JsonValue payload;

  if(m_sourcePathHasBeenSet)
  {
   payload.WithString("sourcePath", m_sourcePath);

  }

  if(m_destinationPathHasBeenSet)
  {
   payload.WithString("destinationPath", m_destinationPath);

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
