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

#include <aws/quicksight/model/RegisterUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterUserRequest::RegisterUserRequest() : 
    m_identityType(IdentityType::NOT_SET),
    m_identityTypeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_userRole(UserRole::NOT_SET),
    m_userRoleHasBeenSet(false),
    m_iamArnHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

Aws::String RegisterUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityTypeHasBeenSet)
  {
   payload.WithString("IdentityType", IdentityTypeMapper::GetNameForIdentityType(m_identityType));
  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_userRoleHasBeenSet)
  {
   payload.WithString("UserRole", UserRoleMapper::GetNameForUserRole(m_userRole));
  }

  if(m_iamArnHasBeenSet)
  {
   payload.WithString("IamArn", m_iamArn);

  }

  if(m_sessionNameHasBeenSet)
  {
   payload.WithString("SessionName", m_sessionName);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  return payload.View().WriteReadable();
}




