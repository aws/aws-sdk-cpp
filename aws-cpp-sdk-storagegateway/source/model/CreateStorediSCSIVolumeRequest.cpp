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

#include <aws/storagegateway/model/CreateStorediSCSIVolumeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStorediSCSIVolumeRequest::CreateStorediSCSIVolumeRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_diskIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_preserveExistingData(false),
    m_preserveExistingDataHasBeenSet(false),
    m_targetNameHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_kMSEncrypted(false),
    m_kMSEncryptedHasBeenSet(false),
    m_kMSKeyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateStorediSCSIVolumeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_diskIdHasBeenSet)
  {
   payload.WithString("DiskId", m_diskId);

  }

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("SnapshotId", m_snapshotId);

  }

  if(m_preserveExistingDataHasBeenSet)
  {
   payload.WithBool("PreserveExistingData", m_preserveExistingData);

  }

  if(m_targetNameHasBeenSet)
  {
   payload.WithString("TargetName", m_targetName);

  }

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("NetworkInterfaceId", m_networkInterfaceId);

  }

  if(m_kMSEncryptedHasBeenSet)
  {
   payload.WithBool("KMSEncrypted", m_kMSEncrypted);

  }

  if(m_kMSKeyHasBeenSet)
  {
   payload.WithString("KMSKey", m_kMSKey);

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

Aws::Http::HeaderValueCollection CreateStorediSCSIVolumeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.CreateStorediSCSIVolume"));
  return headers;

}




