/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/InviteUsersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InviteUsersRequest::InviteUsersRequest() : 
    m_accountIdHasBeenSet(false),
    m_userEmailListHasBeenSet(false),
    m_userType(UserType::NOT_SET),
    m_userTypeHasBeenSet(false)
{
}

Aws::String InviteUsersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userEmailListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userEmailListJsonList(m_userEmailList.size());
   for(unsigned userEmailListIndex = 0; userEmailListIndex < userEmailListJsonList.GetLength(); ++userEmailListIndex)
   {
     userEmailListJsonList[userEmailListIndex].AsString(m_userEmailList[userEmailListIndex]);
   }
   payload.WithArray("UserEmailList", std::move(userEmailListJsonList));

  }

  if(m_userTypeHasBeenSet)
  {
   payload.WithString("UserType", UserTypeMapper::GetNameForUserType(m_userType));
  }

  return payload.View().WriteReadable();
}




