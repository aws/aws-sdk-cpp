/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/PermissionGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

PermissionGroup::PermissionGroup() : 
    m_permissionGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_applicationPermissionsHasBeenSet(false),
    m_createTime(0),
    m_createTimeHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false),
    m_membershipStatus(PermissionGroupMembershipStatus::NOT_SET),
    m_membershipStatusHasBeenSet(false)
{
}

PermissionGroup::PermissionGroup(JsonView jsonValue) : 
    m_permissionGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_applicationPermissionsHasBeenSet(false),
    m_createTime(0),
    m_createTimeHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false),
    m_membershipStatus(PermissionGroupMembershipStatus::NOT_SET),
    m_membershipStatusHasBeenSet(false)
{
  *this = jsonValue;
}

PermissionGroup& PermissionGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("permissionGroupId"))
  {
    m_permissionGroupId = jsonValue.GetString("permissionGroupId");

    m_permissionGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationPermissions"))
  {
    Aws::Utils::Array<JsonView> applicationPermissionsJsonList = jsonValue.GetArray("applicationPermissions");
    for(unsigned applicationPermissionsIndex = 0; applicationPermissionsIndex < applicationPermissionsJsonList.GetLength(); ++applicationPermissionsIndex)
    {
      m_applicationPermissions.push_back(ApplicationPermissionMapper::GetApplicationPermissionForName(applicationPermissionsJsonList[applicationPermissionsIndex].AsString()));
    }
    m_applicationPermissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetInt64("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("lastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("membershipStatus"))
  {
    m_membershipStatus = PermissionGroupMembershipStatusMapper::GetPermissionGroupMembershipStatusForName(jsonValue.GetString("membershipStatus"));

    m_membershipStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue PermissionGroup::Jsonize() const
{
  JsonValue payload;

  if(m_permissionGroupIdHasBeenSet)
  {
   payload.WithString("permissionGroupId", m_permissionGroupId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_applicationPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationPermissionsJsonList(m_applicationPermissions.size());
   for(unsigned applicationPermissionsIndex = 0; applicationPermissionsIndex < applicationPermissionsJsonList.GetLength(); ++applicationPermissionsIndex)
   {
     applicationPermissionsJsonList[applicationPermissionsIndex].AsString(ApplicationPermissionMapper::GetNameForApplicationPermission(m_applicationPermissions[applicationPermissionsIndex]));
   }
   payload.WithArray("applicationPermissions", std::move(applicationPermissionsJsonList));

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithInt64("createTime", m_createTime);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithInt64("lastModifiedTime", m_lastModifiedTime);

  }

  if(m_membershipStatusHasBeenSet)
  {
   payload.WithString("membershipStatus", PermissionGroupMembershipStatusMapper::GetNameForPermissionGroupMembershipStatus(m_membershipStatus));
  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
