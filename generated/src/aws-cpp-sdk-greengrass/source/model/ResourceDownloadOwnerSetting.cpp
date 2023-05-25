/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ResourceDownloadOwnerSetting.h>
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

ResourceDownloadOwnerSetting::ResourceDownloadOwnerSetting() : 
    m_groupOwnerHasBeenSet(false),
    m_groupPermission(Permission::NOT_SET),
    m_groupPermissionHasBeenSet(false)
{
}

ResourceDownloadOwnerSetting::ResourceDownloadOwnerSetting(JsonView jsonValue) : 
    m_groupOwnerHasBeenSet(false),
    m_groupPermission(Permission::NOT_SET),
    m_groupPermissionHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDownloadOwnerSetting& ResourceDownloadOwnerSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupOwner"))
  {
    m_groupOwner = jsonValue.GetString("GroupOwner");

    m_groupOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupPermission"))
  {
    m_groupPermission = PermissionMapper::GetPermissionForName(jsonValue.GetString("GroupPermission"));

    m_groupPermissionHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDownloadOwnerSetting::Jsonize() const
{
  JsonValue payload;

  if(m_groupOwnerHasBeenSet)
  {
   payload.WithString("GroupOwner", m_groupOwner);

  }

  if(m_groupPermissionHasBeenSet)
  {
   payload.WithString("GroupPermission", PermissionMapper::GetNameForPermission(m_groupPermission));
  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
