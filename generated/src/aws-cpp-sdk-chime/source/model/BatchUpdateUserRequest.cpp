/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/BatchUpdateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdateUserRequest::BatchUpdateUserRequest() : 
    m_accountIdHasBeenSet(false),
    m_updateUserRequestItemsHasBeenSet(false)
{
}

Aws::String BatchUpdateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updateUserRequestItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updateUserRequestItemsJsonList(m_updateUserRequestItems.size());
   for(unsigned updateUserRequestItemsIndex = 0; updateUserRequestItemsIndex < updateUserRequestItemsJsonList.GetLength(); ++updateUserRequestItemsIndex)
   {
     updateUserRequestItemsJsonList[updateUserRequestItemsIndex].AsObject(m_updateUserRequestItems[updateUserRequestItemsIndex].Jsonize());
   }
   payload.WithArray("UpdateUserRequestItems", std::move(updateUserRequestItemsJsonList));

  }

  return payload.View().WriteReadable();
}




