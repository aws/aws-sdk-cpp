/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminCreateUserConfigType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

AdminCreateUserConfigType::AdminCreateUserConfigType() : 
    m_allowAdminCreateUserOnly(false),
    m_allowAdminCreateUserOnlyHasBeenSet(false),
    m_unusedAccountValidityDays(0),
    m_unusedAccountValidityDaysHasBeenSet(false),
    m_inviteMessageTemplateHasBeenSet(false)
{
}

AdminCreateUserConfigType::AdminCreateUserConfigType(JsonView jsonValue) : 
    m_allowAdminCreateUserOnly(false),
    m_allowAdminCreateUserOnlyHasBeenSet(false),
    m_unusedAccountValidityDays(0),
    m_unusedAccountValidityDaysHasBeenSet(false),
    m_inviteMessageTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

AdminCreateUserConfigType& AdminCreateUserConfigType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowAdminCreateUserOnly"))
  {
    m_allowAdminCreateUserOnly = jsonValue.GetBool("AllowAdminCreateUserOnly");

    m_allowAdminCreateUserOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnusedAccountValidityDays"))
  {
    m_unusedAccountValidityDays = jsonValue.GetInteger("UnusedAccountValidityDays");

    m_unusedAccountValidityDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InviteMessageTemplate"))
  {
    m_inviteMessageTemplate = jsonValue.GetObject("InviteMessageTemplate");

    m_inviteMessageTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue AdminCreateUserConfigType::Jsonize() const
{
  JsonValue payload;

  if(m_allowAdminCreateUserOnlyHasBeenSet)
  {
   payload.WithBool("AllowAdminCreateUserOnly", m_allowAdminCreateUserOnly);

  }

  if(m_unusedAccountValidityDaysHasBeenSet)
  {
   payload.WithInteger("UnusedAccountValidityDays", m_unusedAccountValidityDays);

  }

  if(m_inviteMessageTemplateHasBeenSet)
  {
   payload.WithObject("InviteMessageTemplate", m_inviteMessageTemplate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
