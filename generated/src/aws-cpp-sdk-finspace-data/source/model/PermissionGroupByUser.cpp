/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/PermissionGroupByUser.h>
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

PermissionGroupByUser::PermissionGroupByUser() : 
    m_permissionGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_membershipStatus(PermissionGroupMembershipStatus::NOT_SET),
    m_membershipStatusHasBeenSet(false)
{
}

PermissionGroupByUser::PermissionGroupByUser(JsonView jsonValue) : 
    m_permissionGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_membershipStatus(PermissionGroupMembershipStatus::NOT_SET),
    m_membershipStatusHasBeenSet(false)
{
  *this = jsonValue;
}

PermissionGroupByUser& PermissionGroupByUser::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("membershipStatus"))
  {
    m_membershipStatus = PermissionGroupMembershipStatusMapper::GetPermissionGroupMembershipStatusForName(jsonValue.GetString("membershipStatus"));

    m_membershipStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue PermissionGroupByUser::Jsonize() const
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

  if(m_membershipStatusHasBeenSet)
  {
   payload.WithString("membershipStatus", PermissionGroupMembershipStatusMapper::GetNameForPermissionGroupMembershipStatus(m_membershipStatus));
  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
