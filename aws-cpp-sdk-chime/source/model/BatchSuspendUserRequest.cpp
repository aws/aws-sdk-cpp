/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/BatchSuspendUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchSuspendUserRequest::BatchSuspendUserRequest() : 
    m_accountIdHasBeenSet(false),
    m_userIdListHasBeenSet(false)
{
}

Aws::String BatchSuspendUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userIdListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userIdListJsonList(m_userIdList.size());
   for(unsigned userIdListIndex = 0; userIdListIndex < userIdListJsonList.GetLength(); ++userIdListIndex)
   {
     userIdListJsonList[userIdListIndex].AsString(m_userIdList[userIdListIndex]);
   }
   payload.WithArray("UserIdList", std::move(userIdListJsonList));

  }

  return payload.View().WriteReadable();
}




