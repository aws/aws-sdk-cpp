/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UserStackAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

UserStackAssociation::UserStackAssociation() : 
    m_stackNameHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_sendEmailNotification(false),
    m_sendEmailNotificationHasBeenSet(false)
{
}

UserStackAssociation::UserStackAssociation(JsonView jsonValue) : 
    m_stackNameHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_sendEmailNotification(false),
    m_sendEmailNotificationHasBeenSet(false)
{
  *this = jsonValue;
}

UserStackAssociation& UserStackAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StackName"))
  {
    m_stackName = jsonValue.GetString("StackName");

    m_stackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));

    m_authenticationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SendEmailNotification"))
  {
    m_sendEmailNotification = jsonValue.GetBool("SendEmailNotification");

    m_sendEmailNotificationHasBeenSet = true;
  }

  return *this;
}

JsonValue UserStackAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("StackName", m_stackName);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_sendEmailNotificationHasBeenSet)
  {
   payload.WithBool("SendEmailNotification", m_sendEmailNotification);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
