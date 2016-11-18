/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/model/AddUploadBufferRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddUploadBufferRequest::AddUploadBufferRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_diskIdsHasBeenSet(false)
{
}

Aws::String AddUploadBufferRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_diskIdsHasBeenSet)
  {
   Array<JsonValue> diskIdsJsonList(m_diskIds.size());
   for(unsigned diskIdsIndex = 0; diskIdsIndex < diskIdsJsonList.GetLength(); ++diskIdsIndex)
   {
     diskIdsJsonList[diskIdsIndex].AsString(m_diskIds[diskIdsIndex]);
   }
   payload.WithArray("DiskIds", std::move(diskIdsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection AddUploadBufferRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.AddUploadBuffer"));
  return headers;

}



