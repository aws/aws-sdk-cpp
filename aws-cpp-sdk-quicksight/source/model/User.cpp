/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/User.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

User::User() : 
    m_arnHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_role(UserRole::NOT_SET),
    m_roleHasBeenSet(false),
    m_identityType(IdentityType::NOT_SET),
    m_identityTypeHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_customPermissionsNameHasBeenSet(false)
{
}

User::User(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_role(UserRole::NOT_SET),
    m_roleHasBeenSet(false),
    m_identityType(IdentityType::NOT_SET),
    m_identityTypeHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_customPermissionsNameHasBeenSet(false)
{
  *this = jsonValue;
}

User& User::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = UserRoleMapper::GetUserRoleForName(jsonValue.GetString("Role"));

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityType"))
  {
    m_identityType = IdentityTypeMapper::GetIdentityTypeForName(jsonValue.GetString("IdentityType"));

    m_identityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Active"))
  {
    m_active = jsonValue.GetBool("Active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalId"))
  {
    m_principalId = jsonValue.GetString("PrincipalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomPermissionsName"))
  {
    m_customPermissionsName = jsonValue.GetString("CustomPermissionsName");

    m_customPermissionsNameHasBeenSet = true;
  }

  return *this;
}

JsonValue User::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", UserRoleMapper::GetNameForUserRole(m_role));
  }

  if(m_identityTypeHasBeenSet)
  {
   payload.WithString("IdentityType", IdentityTypeMapper::GetNameForIdentityType(m_identityType));
  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("Active", m_active);

  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("PrincipalId", m_principalId);

  }

  if(m_customPermissionsNameHasBeenSet)
  {
   payload.WithString("CustomPermissionsName", m_customPermissionsName);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
