﻿/*
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
   Array<JsonValue> connectionNameListJsonList(m_connectionNameList.size());
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




