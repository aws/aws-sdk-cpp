/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/CreateACLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateACLRequest::CreateACLRequest() : 
    m_aCLNameHasBeenSet(false),
    m_userNamesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateACLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aCLNameHasBeenSet)
  {
   payload.WithString("ACLName", m_aCLName);

  }

  if(m_userNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userNamesJsonList(m_userNames.size());
   for(unsigned userNamesIndex = 0; userNamesIndex < userNamesJsonList.GetLength(); ++userNamesIndex)
   {
     userNamesJsonList[userNamesIndex].AsString(m_userNames[userNamesIndex]);
   }
   payload.WithArray("UserNames", std::move(userNamesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateACLRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.CreateACL"));
  return headers;

}




