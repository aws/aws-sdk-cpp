/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateFileCacheRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFileCacheRequest::CreateFileCacheRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_fileCacheType(FileCacheType::NOT_SET),
    m_fileCacheTypeHasBeenSet(false),
    m_fileCacheTypeVersionHasBeenSet(false),
    m_storageCapacity(0),
    m_storageCapacityHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_copyTagsToDataRepositoryAssociations(false),
    m_copyTagsToDataRepositoryAssociationsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_lustreConfigurationHasBeenSet(false),
    m_dataRepositoryAssociationsHasBeenSet(false)
{
}

Aws::String CreateFileCacheRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_fileCacheTypeHasBeenSet)
  {
   payload.WithString("FileCacheType", FileCacheTypeMapper::GetNameForFileCacheType(m_fileCacheType));
  }

  if(m_fileCacheTypeVersionHasBeenSet)
  {
   payload.WithString("FileCacheTypeVersion", m_fileCacheTypeVersion);

  }

  if(m_storageCapacityHasBeenSet)
  {
   payload.WithInteger("StorageCapacity", m_storageCapacity);

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

  if(m_copyTagsToDataRepositoryAssociationsHasBeenSet)
  {
   payload.WithBool("CopyTagsToDataRepositoryAssociations", m_copyTagsToDataRepositoryAssociations);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_lustreConfigurationHasBeenSet)
  {
   payload.WithObject("LustreConfiguration", m_lustreConfiguration.Jsonize());

  }

  if(m_dataRepositoryAssociationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataRepositoryAssociationsJsonList(m_dataRepositoryAssociations.size());
   for(unsigned dataRepositoryAssociationsIndex = 0; dataRepositoryAssociationsIndex < dataRepositoryAssociationsJsonList.GetLength(); ++dataRepositoryAssociationsIndex)
   {
     dataRepositoryAssociationsJsonList[dataRepositoryAssociationsIndex].AsObject(m_dataRepositoryAssociations[dataRepositoryAssociationsIndex].Jsonize());
   }
   payload.WithArray("DataRepositoryAssociations", std::move(dataRepositoryAssociationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFileCacheRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.CreateFileCache"));
  return headers;

}




