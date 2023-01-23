/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileSystem.h>
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

FileSystem::FileSystem() : 
    m_ownerIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_fileSystemType(FileSystemType::NOT_SET),
    m_fileSystemTypeHasBeenSet(false),
    m_lifecycle(FileSystemLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_storageCapacity(0),
    m_storageCapacityHasBeenSet(false),
    m_storageType(StorageType::NOT_SET),
    m_storageTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_networkInterfaceIdsHasBeenSet(false),
    m_dNSNameHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_windowsConfigurationHasBeenSet(false),
    m_lustreConfigurationHasBeenSet(false),
    m_administrativeActionsHasBeenSet(false),
    m_ontapConfigurationHasBeenSet(false),
    m_fileSystemTypeVersionHasBeenSet(false),
    m_openZFSConfigurationHasBeenSet(false)
{
}

FileSystem::FileSystem(JsonView jsonValue) : 
    m_ownerIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_fileSystemType(FileSystemType::NOT_SET),
    m_fileSystemTypeHasBeenSet(false),
    m_lifecycle(FileSystemLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_storageCapacity(0),
    m_storageCapacityHasBeenSet(false),
    m_storageType(StorageType::NOT_SET),
    m_storageTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_networkInterfaceIdsHasBeenSet(false),
    m_dNSNameHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_windowsConfigurationHasBeenSet(false),
    m_lustreConfigurationHasBeenSet(false),
    m_administrativeActionsHasBeenSet(false),
    m_ontapConfigurationHasBeenSet(false),
    m_fileSystemTypeVersionHasBeenSet(false),
    m_openZFSConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystem& FileSystem::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemType"))
  {
    m_fileSystemType = FileSystemTypeMapper::GetFileSystemTypeForName(jsonValue.GetString("FileSystemType"));

    m_fileSystemTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = FileSystemLifecycleMapper::GetFileSystemLifecycleForName(jsonValue.GetString("Lifecycle"));

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

  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("StorageType"));

    m_storageTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("WindowsConfiguration"))
  {
    m_windowsConfiguration = jsonValue.GetObject("WindowsConfiguration");

    m_windowsConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LustreConfiguration"))
  {
    m_lustreConfiguration = jsonValue.GetObject("LustreConfiguration");

    m_lustreConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdministrativeActions"))
  {
    Aws::Utils::Array<JsonView> administrativeActionsJsonList = jsonValue.GetArray("AdministrativeActions");
    for(unsigned administrativeActionsIndex = 0; administrativeActionsIndex < administrativeActionsJsonList.GetLength(); ++administrativeActionsIndex)
    {
      m_administrativeActions.push_back(administrativeActionsJsonList[administrativeActionsIndex].AsObject());
    }
    m_administrativeActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OntapConfiguration"))
  {
    m_ontapConfiguration = jsonValue.GetObject("OntapConfiguration");

    m_ontapConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemTypeVersion"))
  {
    m_fileSystemTypeVersion = jsonValue.GetString("FileSystemTypeVersion");

    m_fileSystemTypeVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpenZFSConfiguration"))
  {
    m_openZFSConfiguration = jsonValue.GetObject("OpenZFSConfiguration");

    m_openZFSConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSystem::Jsonize() const
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

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_fileSystemTypeHasBeenSet)
  {
   payload.WithString("FileSystemType", FileSystemTypeMapper::GetNameForFileSystemType(m_fileSystemType));
  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithString("Lifecycle", FileSystemLifecycleMapper::GetNameForFileSystemLifecycle(m_lifecycle));
  }

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("FailureDetails", m_failureDetails.Jsonize());

  }

  if(m_storageCapacityHasBeenSet)
  {
   payload.WithInteger("StorageCapacity", m_storageCapacity);

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
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

  if(m_windowsConfigurationHasBeenSet)
  {
   payload.WithObject("WindowsConfiguration", m_windowsConfiguration.Jsonize());

  }

  if(m_lustreConfigurationHasBeenSet)
  {
   payload.WithObject("LustreConfiguration", m_lustreConfiguration.Jsonize());

  }

  if(m_administrativeActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> administrativeActionsJsonList(m_administrativeActions.size());
   for(unsigned administrativeActionsIndex = 0; administrativeActionsIndex < administrativeActionsJsonList.GetLength(); ++administrativeActionsIndex)
   {
     administrativeActionsJsonList[administrativeActionsIndex].AsObject(m_administrativeActions[administrativeActionsIndex].Jsonize());
   }
   payload.WithArray("AdministrativeActions", std::move(administrativeActionsJsonList));

  }

  if(m_ontapConfigurationHasBeenSet)
  {
   payload.WithObject("OntapConfiguration", m_ontapConfiguration.Jsonize());

  }

  if(m_fileSystemTypeVersionHasBeenSet)
  {
   payload.WithString("FileSystemTypeVersion", m_fileSystemTypeVersion);

  }

  if(m_openZFSConfigurationHasBeenSet)
  {
   payload.WithObject("OpenZFSConfiguration", m_openZFSConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
