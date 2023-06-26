/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileCacheCreating.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

FileCacheCreating::FileCacheCreating() : 
    m_ownerIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_fileCacheIdHasBeenSet(false),
    m_fileCacheType(FileCacheType::NOT_SET),
    m_fileCacheTypeHasBeenSet(false),
    m_fileCacheTypeVersionHasBeenSet(false),
    m_lifecycle(FileCacheLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_storageCapacity(0),
    m_storageCapacityHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_networkInterfaceIdsHasBeenSet(false),
    m_dNSNameHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_copyTagsToDataRepositoryAssociations(false),
    m_copyTagsToDataRepositoryAssociationsHasBeenSet(false),
    m_lustreConfigurationHasBeenSet(false),
    m_dataRepositoryAssociationIdsHasBeenSet(false)
{
}

FileCacheCreating::FileCacheCreating(JsonView jsonValue) : 
    m_ownerIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_fileCacheIdHasBeenSet(false),
    m_fileCacheType(FileCacheType::NOT_SET),
    m_fileCacheTypeHasBeenSet(false),
    m_fileCacheTypeVersionHasBeenSet(false),
    m_lifecycle(FileCacheLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_storageCapacity(0),
    m_storageCapacityHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_networkInterfaceIdsHasBeenSet(false),
    m_dNSNameHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_copyTagsToDataRepositoryAssociations(false),
    m_copyTagsToDataRepositoryAssociationsHasBeenSet(false),
    m_lustreConfigurationHasBeenSet(false),
    m_dataRepositoryAssociationIdsHasBeenSet(false)
{
  *this = jsonValue;
}

FileCacheCreating& FileCacheCreating::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileCacheId"))
  {
    m_fileCacheId = jsonValue.GetString("FileCacheId");

    m_fileCacheIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileCacheType"))
  {
    m_fileCacheType = FileCacheTypeMapper::GetFileCacheTypeForName(jsonValue.GetString("FileCacheType"));

    m_fileCacheTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileCacheTypeVersion"))
  {
    m_fileCacheTypeVersion = jsonValue.GetString("FileCacheTypeVersion");

    m_fileCacheTypeVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = FileCacheLifecycleMapper::GetFileCacheLifecycleForName(jsonValue.GetString("Lifecycle"));

    m_lifecycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureDetails"))
  {
    m_failureDetails = jsonValue.GetObject("FailureDetails");

    m_failureDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageCapacity"))
  {
    m_storageCapacity = jsonValue.GetInteger("StorageCapacity");

    m_storageCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaceIds"))
  {
    Aws::Utils::Array<JsonView> networkInterfaceIdsJsonList = jsonValue.GetArray("NetworkInterfaceIds");
    for(unsigned networkInterfaceIdsIndex = 0; networkInterfaceIdsIndex < networkInterfaceIdsJsonList.GetLength(); ++networkInterfaceIdsIndex)
    {
      m_networkInterfaceIds.push_back(networkInterfaceIdsJsonList[networkInterfaceIdsIndex].AsString());
    }
    m_networkInterfaceIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DNSName"))
  {
    m_dNSName = jsonValue.GetString("DNSName");

    m_dNSNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceARN"))
  {
    m_resourceARN = jsonValue.GetString("ResourceARN");

    m_resourceARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyTagsToDataRepositoryAssociations"))
  {
    m_copyTagsToDataRepositoryAssociations = jsonValue.GetBool("CopyTagsToDataRepositoryAssociations");

    m_copyTagsToDataRepositoryAssociationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LustreConfiguration"))
  {
    m_lustreConfiguration = jsonValue.GetObject("LustreConfiguration");

    m_lustreConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataRepositoryAssociationIds"))
  {
    Aws::Utils::Array<JsonView> dataRepositoryAssociationIdsJsonList = jsonValue.GetArray("DataRepositoryAssociationIds");
    for(unsigned dataRepositoryAssociationIdsIndex = 0; dataRepositoryAssociationIdsIndex < dataRepositoryAssociationIdsJsonList.GetLength(); ++dataRepositoryAssociationIdsIndex)
    {
      m_dataRepositoryAssociationIds.push_back(dataRepositoryAssociationIdsJsonList[dataRepositoryAssociationIdsIndex].AsString());
    }
    m_dataRepositoryAssociationIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue FileCacheCreating::Jsonize() const
{
  JsonValue payload;

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_fileCacheIdHasBeenSet)
  {
   payload.WithString("FileCacheId", m_fileCacheId);

  }

  if(m_fileCacheTypeHasBeenSet)
  {
   payload.WithString("FileCacheType", FileCacheTypeMapper::GetNameForFileCacheType(m_fileCacheType));
  }

  if(m_fileCacheTypeVersionHasBeenSet)
  {
   payload.WithString("FileCacheTypeVersion", m_fileCacheTypeVersion);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithString("Lifecycle", FileCacheLifecycleMapper::GetNameForFileCacheLifecycle(m_lifecycle));
  }

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("FailureDetails", m_failureDetails.Jsonize());

  }

  if(m_storageCapacityHasBeenSet)
  {
   payload.WithInteger("StorageCapacity", m_storageCapacity);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

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

  if(m_networkInterfaceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfaceIdsJsonList(m_networkInterfaceIds.size());
   for(unsigned networkInterfaceIdsIndex = 0; networkInterfaceIdsIndex < networkInterfaceIdsJsonList.GetLength(); ++networkInterfaceIdsIndex)
   {
     networkInterfaceIdsJsonList[networkInterfaceIdsIndex].AsString(m_networkInterfaceIds[networkInterfaceIdsIndex]);
   }
   payload.WithArray("NetworkInterfaceIds", std::move(networkInterfaceIdsJsonList));

  }

  if(m_dNSNameHasBeenSet)
  {
   payload.WithString("DNSName", m_dNSName);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

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

  if(m_lustreConfigurationHasBeenSet)
  {
   payload.WithObject("LustreConfiguration", m_lustreConfiguration.Jsonize());

  }

  if(m_dataRepositoryAssociationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataRepositoryAssociationIdsJsonList(m_dataRepositoryAssociationIds.size());
   for(unsigned dataRepositoryAssociationIdsIndex = 0; dataRepositoryAssociationIdsIndex < dataRepositoryAssociationIdsJsonList.GetLength(); ++dataRepositoryAssociationIdsIndex)
   {
     dataRepositoryAssociationIdsJsonList[dataRepositoryAssociationIdsIndex].AsString(m_dataRepositoryAssociationIds[dataRepositoryAssociationIdsIndex]);
   }
   payload.WithArray("DataRepositoryAssociationIds", std::move(dataRepositoryAssociationIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
