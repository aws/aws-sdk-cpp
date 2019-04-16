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

#include <aws/storagegateway/model/CreateTapeWithBarcodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTapeWithBarcodeRequest::CreateTapeWithBarcodeRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_tapeSizeInBytes(0),
    m_tapeSizeInBytesHasBeenSet(false),
    m_tapeBarcodeHasBeenSet(false),
    m_kMSEncrypted(false),
    m_kMSEncryptedHasBeenSet(false),
    m_kMSKeyHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTapeWithBarcodeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_tapeSizeInBytesHasBeenSet)
  {
   payload.WithInt64("TapeSizeInBytes", m_tapeSizeInBytes);

  }

  if(m_tapeBarcodeHasBeenSet)
  {
   payload.WithString("TapeBarcode", m_tapeBarcode);

  }

  if(m_kMSEncryptedHasBeenSet)
  {
   payload.WithBool("KMSEncrypted", m_kMSEncrypted);

  }

  if(m_kMSKeyHasBeenSet)
  {
   payload.WithString("KMSKey", m_kMSKey);

  }

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTapeWithBarcodeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.CreateTapeWithBarcode"));
  return headers;

}




