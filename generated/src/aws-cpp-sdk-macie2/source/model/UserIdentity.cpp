/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UserIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

UserIdentity::UserIdentity() : 
    m_assumedRoleHasBeenSet(false),
    m_awsAccountHasBeenSet(false),
    m_awsServiceHasBeenSet(false),
    m_federatedUserHasBeenSet(false),
    m_iamUserHasBeenSet(false),
    m_rootHasBeenSet(false),
    m_type(UserIdentityType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

UserIdentity::UserIdentity(JsonView jsonValue) : 
    m_assumedRoleHasBeenSet(false),
    m_awsAccountHasBeenSet(false),
    m_awsServiceHasBeenSet(false),
    m_federatedUserHasBeenSet(false),
    m_iamUserHasBeenSet(false),
    m_rootHasBeenSet(false),
    m_type(UserIdentityType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

UserIdentity& UserIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assumedRole"))
  {
    m_assumedRole = jsonValue.GetObject("assumedRole");

    m_assumedRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsAccount"))
  {
    m_awsAccount = jsonValue.GetObject("awsAccount");

    m_awsAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsService"))
  {
    m_awsService = jsonValue.GetObject("awsService");

    m_awsServiceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("federatedUser"))
  {
    m_federatedUser = jsonValue.GetObject("federatedUser");

    m_federatedUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamUser"))
  {
    m_iamUser = jsonValue.GetObject("iamUser");

    m_iamUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("root"))
  {
    m_root = jsonValue.GetObject("root");

    m_rootHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = UserIdentityTypeMapper::GetUserIdentityTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue UserIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_assumedRoleHasBeenSet)
  {
   payload.WithObject("assumedRole", m_assumedRole.Jsonize());

  }

  if(m_awsAccountHasBeenSet)
  {
   payload.WithObject("awsAccount", m_awsAccount.Jsonize());

  }

  if(m_awsServiceHasBeenSet)
  {
   payload.WithObject("awsService", m_awsService.Jsonize());

  }

  if(m_federatedUserHasBeenSet)
  {
   payload.WithObject("federatedUser", m_federatedUser.Jsonize());

  }

  if(m_iamUserHasBeenSet)
  {
   payload.WithObject("iamUser", m_iamUser.Jsonize());

  }

  if(m_rootHasBeenSet)
  {
   payload.WithObject("root", m_root.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", UserIdentityTypeMapper::GetNameForUserIdentityType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
