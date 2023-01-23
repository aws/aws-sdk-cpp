/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/User.h>
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

User::User() : 
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
    m_createTime(0),
    m_createTimeHasBeenSet(false),
    m_lastEnabledTime(0),
    m_lastEnabledTimeHasBeenSet(false),
    m_lastDisabledTime(0),
    m_lastDisabledTimeHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastLoginTime(0),
    m_lastLoginTimeHasBeenSet(false)
{
}

User::User(JsonView jsonValue) : 
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
    m_createTime(0),
    m_createTimeHasBeenSet(false),
    m_lastEnabledTime(0),
    m_lastEnabledTimeHasBeenSet(false),
    m_lastDisabledTime(0),
    m_lastDisabledTimeHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastLoginTime(0),
    m_lastLoginTimeHasBeenSet(false)
{
  *this = jsonValue;
}

User& User::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetInt64("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastEnabledTime"))
  {
    m_lastEnabledTime = jsonValue.GetInt64("lastEnabledTime");

    m_lastEnabledTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastDisabledTime"))
  {
    m_lastDisabledTime = jsonValue.GetInt64("lastDisabledTime");

    m_lastDisabledTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("lastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastLoginTime"))
  {
    m_lastLoginTime = jsonValue.GetInt64("lastLoginTime");

    m_lastLoginTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue User::Jsonize() const
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

  if(m_createTimeHasBeenSet)
  {
   payload.WithInt64("createTime", m_createTime);

  }

  if(m_lastEnabledTimeHasBeenSet)
  {
   payload.WithInt64("lastEnabledTime", m_lastEnabledTime);

  }

  if(m_lastDisabledTimeHasBeenSet)
  {
   payload.WithInt64("lastDisabledTime", m_lastDisabledTime);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithInt64("lastModifiedTime", m_lastModifiedTime);

  }

  if(m_lastLoginTimeHasBeenSet)
  {
   payload.WithInt64("lastLoginTime", m_lastLoginTime);

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
