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

#include <aws/discovery/model/BatchDeleteImportDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteImportDataRequest::BatchDeleteImportDataRequest() : 
    m_importTaskIdsHasBeenSet(false)
{
}

Aws::String BatchDeleteImportDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_importTaskIdsHasBeenSet)
  {
   Array<JsonValue> importTaskIdsJsonList(m_importTaskIds.size());
   for(unsigned importTaskIdsIndex = 0; importTaskIdsIndex < importTaskIdsJsonList.GetLength(); ++importTaskIdsIndex)
   {
     importTaskIdsJsonList[importTaskIdsIndex].AsString(m_importTaskIds[importTaskIdsIndex]);
   }
   payload.WithArray("importTaskIds", std::move(importTaskIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteImportDataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.BatchDeleteImportData"));
  return headers;

}




