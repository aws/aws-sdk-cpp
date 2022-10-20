/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/UpdateACLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateACLRequest::UpdateACLRequest() : 
    m_aCLNameHasBeenSet(false),
    m_userNamesToAddHasBeenSet(false),
    m_userNamesToRemoveHasBeenSet(false)
{
}

Aws::String UpdateACLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aCLNameHasBeenSet)
  {
   payload.WithString("ACLName", m_aCLName);

  }

  if(m_userNamesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userNamesToAddJsonList(m_userNamesToAdd.size());
   for(unsigned userNamesToAddIndex = 0; userNamesToAddIndex < userNamesToAddJsonList.GetLength(); ++userNamesToAddIndex)
   {
     userNamesToAddJsonList[userNamesToAddIndex].AsString(m_userNamesToAdd[userNamesToAddIndex]);
   }
   payload.WithArray("UserNamesToAdd", std::move(userNamesToAddJsonList));

  }

  if(m_userNamesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userNamesToRemoveJsonList(m_userNamesToRemove.size());
   for(unsigned userNamesToRemoveIndex = 0; userNamesToRemoveIndex < userNamesToRemoveJsonList.GetLength(); ++userNamesToRemoveIndex)
   {
     userNamesToRemoveJsonList[userNamesToRemoveIndex].AsString(m_userNamesToRemove[userNamesToRemoveIndex]);
   }
   payload.WithArray("UserNamesToRemove", std::move(userNamesToRemoveJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateACLRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.UpdateACL"));
  return headers;

}




