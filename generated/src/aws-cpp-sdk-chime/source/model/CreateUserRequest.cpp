/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserRequest::CreateUserRequest() : 
    m_accountIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_userType(UserType::NOT_SET),
    m_userTypeHasBeenSet(false)
{
}

Aws::String CreateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_userTypeHasBeenSet)
  {
   payload.WithString("UserType", UserTypeMapper::GetNameForUserType(m_userType));
  }

  return payload.View().WriteReadable();
}




