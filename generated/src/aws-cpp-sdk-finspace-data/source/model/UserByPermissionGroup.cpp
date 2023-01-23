/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/UserByPermissionGroup.h>
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

UserByPermissionGroup::UserByPermissionGroup() : 
    m_userIdHasBeenSet(false),
    m_status(UserStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_type(UserType::NOT_SET),
    m_typeHasBeenSet(false),
    m_apiAccess(ApiAccess::NOT_SET),
    m_apiAccessHasBeenSet(false),
    m_apiAccessPrincipalArnHasBeenSet(false),
    m_membershipStatus(PermissionGroupMembershipStatus::NOT_SET),
    m_membershipStatusHasBeenSet(false)
{
}

UserByPermissionGroup::UserByPermissionGroup(JsonView jsonValue) : 
    m_userIdHasBeenSet(false),
    m_status(UserStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_type(UserType::NOT_SET),
    m_typeHasBeenSet(false),
    m_apiAccess(ApiAccess::NOT_SET),
    m_apiAccessHasBeenSet(false),
    m_apiAccessPrincipalArnHasBeenSet(false),
    m_membershipStatus(PermissionGroupMembershipStatus::NOT_SET),
    m_membershipStatusHasBeenSet(false)
{
  *this = jsonValue;
}

UserByPermissionGroup& UserByPermissionGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = UserStatusMapper::GetUserStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstName"))
  {
    m_firstName = jsonValue.GetString("firstName");

    m_firstNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastName"))
  {
    m_lastName = jsonValue.GetString("lastName");

    m_lastNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("emailAddress"))
  {
    m_emailAddress = jsonValue.GetString("emailAddress");

    m_emailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = UserTypeMapper::GetUserTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiAccess"))
  {
    m_apiAccess = ApiAccessMapper::GetApiAccessForName(jsonValue.GetString("apiAccess"));

    m_apiAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiAccessPrincipalArn"))
  {
    m_apiAccessPrincipalArn = jsonValue.GetString("apiAccessPrincipalArn");

    m_apiAccessPrincipalArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("membershipStatus"))
  {
    m_membershipStatus = PermissionGroupMembershipStatusMapper::GetPermissionGroupMembershipStatusForName(jsonValue.GetString("membershipStatus"));

    m_membershipStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue UserByPermissionGroup::Jsonize() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", UserStatusMapper::GetNameForUserStatus(m_status));
  }

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("firstName", m_firstName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("lastName", m_lastName);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("emailAddress", m_emailAddress);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", UserTypeMapper::GetNameForUserType(m_type));
  }

  if(m_apiAccessHasBeenSet)
  {
   payload.WithString("apiAccess", ApiAccessMapper::GetNameForApiAccess(m_apiAccess));
  }

  if(m_apiAccessPrincipalArnHasBeenSet)
  {
   payload.WithString("apiAccessPrincipalArn", m_apiAccessPrincipalArn);

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
