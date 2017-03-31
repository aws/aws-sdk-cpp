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
#include <aws/storagegateway/model/CreateNFSFileShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNFSFileShareRequest::CreateNFSFileShareRequest() : 
    m_clientTokenHasBeenSet(false),
    m_nFSFileShareDefaultsHasBeenSet(false),
    m_gatewayARNHasBeenSet(false),
    m_kMSEncrypted(false),
    m_kMSEncryptedHasBeenSet(false),
    m_kMSKeyHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_locationARNHasBeenSet(false),
    m_defaultStorageClassHasBeenSet(false),
    m_clientListHasBeenSet(false),
    m_squashHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false)
{
}

Aws::String CreateNFSFileShareRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_nFSFileShareDefaultsHasBeenSet)
  {
   payload.WithObject("NFSFileShareDefaults", m_nFSFileShareDefaults.Jsonize());

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_kMSEncryptedHasBeenSet)
  {
   payload.WithBool("KMSEncrypted", m_kMSEncrypted);

  }

  if(m_kMSKeyHasBeenSet)
  {
   payload.WithString("KMSKey", m_kMSKey);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_locationARNHasBeenSet)
  {
   payload.WithString("LocationARN", m_locationARN);

  }

  if(m_defaultStorageClassHasBeenSet)
  {
   payload.WithString("DefaultStorageClass", m_defaultStorageClass);

  }

  if(m_clientListHasBeenSet)
  {
   Array<JsonValue> clientListJsonList(m_clientList.size());
   for(unsigned clientListIndex = 0; clientListIndex < clientListJsonList.GetLength(); ++clientListIndex)
   {
     clientListJsonList[clientListIndex].AsString(m_clientList[clientListIndex]);
   }
   payload.WithArray("ClientList", std::move(clientListJsonList));

  }

  if(m_squashHasBeenSet)
  {
   payload.WithString("Squash", m_squash);

  }

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("ReadOnly", m_readOnly);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateNFSFileShareRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.CreateNFSFileShare"));
  return headers;

}




