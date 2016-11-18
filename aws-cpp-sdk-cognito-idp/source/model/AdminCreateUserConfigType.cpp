/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

AdminCreateUserConfigType::AdminCreateUserConfigType(const JsonValue& jsonValue) : 
    m_allowAdminCreateUserOnly(false),
    m_allowAdminCreateUserOnlyHasBeenSet(false),
    m_unusedAccountValidityDays(0),
    m_unusedAccountValidityDaysHasBeenSet(false),
    m_inviteMessageTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

AdminCreateUserConfigType& AdminCreateUserConfigType::operator =(const JsonValue& jsonValue)
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