/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/UserIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

UserIdentity::UserIdentity() : 
    m_userType(UserType::NOT_SET),
    m_userTypeHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false)
{
}

UserIdentity::UserIdentity(JsonView jsonValue) : 
    m_userType(UserType::NOT_SET),
    m_userTypeHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false)
{
  *this = jsonValue;
}

UserIdentity& UserIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userType"))
  {
    m_userType = UserTypeMapper::GetUserTypeForName(jsonValue.GetString("userType"));

    m_userTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalId"))
  {
    m_principalId = jsonValue.GetString("principalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userName"))
  {
    m_userName = jsonValue.GetString("userName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UserIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_userTypeHasBeenSet)
  {
   payload.WithString("userType", UserTypeMapper::GetNameForUserType(m_userType));
  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("principalId", m_principalId);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("userName", m_userName);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
