/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/StorageVirtualMachine.h>
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

StorageVirtualMachine::StorageVirtualMachine() : 
    m_activeDirectoryConfigurationHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_lifecycle(StorageVirtualMachineLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_storageVirtualMachineIdHasBeenSet(false),
    m_subtype(StorageVirtualMachineSubtype::NOT_SET),
    m_subtypeHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lifecycleTransitionReasonHasBeenSet(false),
    m_rootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle::NOT_SET),
    m_rootVolumeSecurityStyleHasBeenSet(false)
{
}

StorageVirtualMachine::StorageVirtualMachine(JsonView jsonValue) : 
    m_activeDirectoryConfigurationHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_lifecycle(StorageVirtualMachineLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_storageVirtualMachineIdHasBeenSet(false),
    m_subtype(StorageVirtualMachineSubtype::NOT_SET),
    m_subtypeHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lifecycleTransitionReasonHasBeenSet(false),
    m_rootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle::NOT_SET),
    m_rootVolumeSecurityStyleHasBeenSet(false)
{
  *this = jsonValue;
}

StorageVirtualMachine& StorageVirtualMachine::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActiveDirectoryConfiguration"))
  {
    m_activeDirectoryConfiguration = jsonValue.GetObject("ActiveDirectoryConfiguration");

    m_activeDirectoryConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoints"))
  {
    m_endpoints = jsonValue.GetObject("Endpoints");

    m_endpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = StorageVirtualMachineLifecycleMapper::GetStorageVirtualMachineLifecycleForName(jsonValue.GetString("Lifecycle"));

    m_lifecycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceARN"))
  {
    m_resourceARN = jsonValue.GetString("ResourceARN");

    m_resourceARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageVirtualMachineId"))
  {
    m_storageVirtualMachineId = jsonValue.GetString("StorageVirtualMachineId");

    m_storageVirtualMachineIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subtype"))
  {
    m_subtype = StorageVirtualMachineSubtypeMapper::GetStorageVirtualMachineSubtypeForName(jsonValue.GetString("Subtype"));

    m_subtypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UUID"))
  {
    m_uUID = jsonValue.GetString("UUID");

    m_uUIDHasBeenSet = true;
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

  if(jsonValue.ValueExists("LifecycleTransitionReason"))
  {
    m_lifecycleTransitionReason = jsonValue.GetObject("LifecycleTransitionReason");

    m_lifecycleTransitionReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootVolumeSecurityStyle"))
  {
    m_rootVolumeSecurityStyle = StorageVirtualMachineRootVolumeSecurityStyleMapper::GetStorageVirtualMachineRootVolumeSecurityStyleForName(jsonValue.GetString("RootVolumeSecurityStyle"));

    m_rootVolumeSecurityStyleHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageVirtualMachine::Jsonize() const
{
  JsonValue payload;

  if(m_activeDirectoryConfigurationHasBeenSet)
  {
   payload.WithObject("ActiveDirectoryConfiguration", m_activeDirectoryConfiguration.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_endpointsHasBeenSet)
  {
   payload.WithObject("Endpoints", m_endpoints.Jsonize());

  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithString("Lifecycle", StorageVirtualMachineLifecycleMapper::GetNameForStorageVirtualMachineLifecycle(m_lifecycle));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  if(m_storageVirtualMachineIdHasBeenSet)
  {
   payload.WithString("StorageVirtualMachineId", m_storageVirtualMachineId);

  }

  if(m_subtypeHasBeenSet)
  {
   payload.WithString("Subtype", StorageVirtualMachineSubtypeMapper::GetNameForStorageVirtualMachineSubtype(m_subtype));
  }

  if(m_uUIDHasBeenSet)
  {
   payload.WithString("UUID", m_uUID);

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

  if(m_lifecycleTransitionReasonHasBeenSet)
  {
   payload.WithObject("LifecycleTransitionReason", m_lifecycleTransitionReason.Jsonize());

  }

  if(m_rootVolumeSecurityStyleHasBeenSet)
  {
   payload.WithString("RootVolumeSecurityStyle", StorageVirtualMachineRootVolumeSecurityStyleMapper::GetNameForStorageVirtualMachineRootVolumeSecurityStyle(m_rootVolumeSecurityStyle));
  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
