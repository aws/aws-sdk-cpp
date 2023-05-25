/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateFileSystemFromBackupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFileSystemFromBackupRequest::CreateFileSystemFromBackupRequest() : 
    m_backupIdHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_subnetIdsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_windowsConfigurationHasBeenSet(false),
    m_lustreConfigurationHasBeenSet(false),
    m_storageType(StorageType::NOT_SET),
    m_storageTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_fileSystemTypeVersionHasBeenSet(false),
    m_openZFSConfigurationHasBeenSet(false),
    m_storageCapacity(0),
    m_storageCapacityHasBeenSet(false)
{
}

Aws::String CreateFileSystemFromBackupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupIdHasBeenSet)
  {
   payload.WithString("BackupId", m_backupId);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

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

  if(m_windowsConfigurationHasBeenSet)
  {
   payload.WithObject("WindowsConfiguration", m_windowsConfiguration.Jsonize());

  }

  if(m_lustreConfigurationHasBeenSet)
  {
   payload.WithObject("LustreConfiguration", m_lustreConfiguration.Jsonize());

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_fileSystemTypeVersionHasBeenSet)
  {
   payload.WithString("FileSystemTypeVersion", m_fileSystemTypeVersion);

  }

  if(m_openZFSConfigurationHasBeenSet)
  {
   payload.WithObject("OpenZFSConfiguration", m_openZFSConfiguration.Jsonize());

  }

  if(m_storageCapacityHasBeenSet)
  {
   payload.WithInteger("StorageCapacity", m_storageCapacity);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFileSystemFromBackupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.CreateFileSystemFromBackup"));
  return headers;

}




