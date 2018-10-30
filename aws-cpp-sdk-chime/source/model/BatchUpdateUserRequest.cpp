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
   Array<JsonValue> updateUserRequestItemsJsonList(m_updateUserRequestItems.size());
   for(unsigned updateUserRequestItemsIndex = 0; updateUserRequestItemsIndex < updateUserRequestItemsJsonList.GetLength(); ++updateUserRequestItemsIndex)
   {
     updateUserRequestItemsJsonList[updateUserRequestItemsIndex].AsObject(m_updateUserRequestItems[updateUserRequestItemsIndex].Jsonize());
   }
   payload.WithArray("UpdateUserRequestItems", std::move(updateUserRequestItemsJsonList));

  }

  return payload.View().WriteReadable();
}




