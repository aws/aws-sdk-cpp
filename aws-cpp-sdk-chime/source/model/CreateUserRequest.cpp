/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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




