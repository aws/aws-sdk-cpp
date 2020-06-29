/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserRequest::UpdateUserRequest() : 
    m_userNameHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_role(UserRole::NOT_SET),
    m_roleHasBeenSet(false)
{
}

Aws::String UpdateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", UserRoleMapper::GetNameForUserRole(m_role));
  }

  return payload.View().WriteReadable();
}




