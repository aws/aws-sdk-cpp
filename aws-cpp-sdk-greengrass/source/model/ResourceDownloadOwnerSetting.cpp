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
