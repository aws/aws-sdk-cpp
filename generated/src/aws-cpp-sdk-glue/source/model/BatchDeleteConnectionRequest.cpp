/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchDeleteConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteConnectionRequest::BatchDeleteConnectionRequest() : 
    m_catalogIdHasBeenSet(false),
    m_connectionNameListHasBeenSet(false)
{
}

Aws::String BatchDeleteConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_connectionNameListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectionNameListJsonList(m_connectionNameList.size());
   for(unsigned connectionNameListIndex = 0; connectionNameListIndex < connectionNameListJsonList.GetLength(); ++connectionNameListIndex)
   {
     connectionNameListJsonList[connectionNameListIndex].AsString(m_connectionNameList[connectionNameListIndex]);
   }
   payload.WithArray("ConnectionNameList", std::move(connectionNameListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchDeleteConnection"));
  return headers;

}




