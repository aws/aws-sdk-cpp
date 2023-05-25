/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateInstancesFromSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInstancesFromSnapshotRequest::CreateInstancesFromSnapshotRequest() : 
    m_instanceNamesHasBeenSet(false),
    m_attachedDiskMappingHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_instanceSnapshotNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_keyPairNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_addOnsHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_sourceInstanceNameHasBeenSet(false),
    m_restoreDateHasBeenSet(false),
    m_useLatestRestorableAutoSnapshot(false),
    m_useLatestRestorableAutoSnapshotHasBeenSet(false)
{
}

Aws::String CreateInstancesFromSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceNamesJsonList(m_instanceNames.size());
   for(unsigned instanceNamesIndex = 0; instanceNamesIndex < instanceNamesJsonList.GetLength(); ++instanceNamesIndex)
   {
     instanceNamesJsonList[instanceNamesIndex].AsString(m_instanceNames[instanceNamesIndex]);
   }
   payload.WithArray("instanceNames", std::move(instanceNamesJsonList));

  }

  if(m_attachedDiskMappingHasBeenSet)
  {
   JsonValue attachedDiskMappingJsonMap;
   for(auto& attachedDiskMappingItem : m_attachedDiskMapping)
   {
     Aws::Utils::Array<JsonValue> diskMapListJsonList(attachedDiskMappingItem.second.size());
     for(unsigned diskMapListIndex = 0; diskMapListIndex < diskMapListJsonList.GetLength(); ++diskMapListIndex)
     {
       diskMapListJsonList[diskMapListIndex].AsObject(attachedDiskMappingItem.second[diskMapListIndex].Jsonize());
     }
     attachedDiskMappingJsonMap.WithArray(attachedDiskMappingItem.first, std::move(diskMapListJsonList));
   }
   payload.WithObject("attachedDiskMapping", std::move(attachedDiskMappingJsonMap));

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_instanceSnapshotNameHasBeenSet)
  {
   payload.WithString("instanceSnapshotName", m_instanceSnapshotName);

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("bundleId", m_bundleId);

  }

  if(m_userDataHasBeenSet)
  {
   payload.WithString("userData", m_userData);

  }

  if(m_keyPairNameHasBeenSet)
  {
   payload.WithString("keyPairName", m_keyPairName);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_addOnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addOnsJsonList(m_addOns.size());
   for(unsigned addOnsIndex = 0; addOnsIndex < addOnsJsonList.GetLength(); ++addOnsIndex)
   {
     addOnsJsonList[addOnsIndex].AsObject(m_addOns[addOnsIndex].Jsonize());
   }
   payload.WithArray("addOns", std::move(addOnsJsonList));

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("ipAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  if(m_sourceInstanceNameHasBeenSet)
  {
   payload.WithString("sourceInstanceName", m_sourceInstanceName);

  }

  if(m_restoreDateHasBeenSet)
  {
   payload.WithString("restoreDate", m_restoreDate);

  }

  if(m_useLatestRestorableAutoSnapshotHasBeenSet)
  {
   payload.WithBool("useLatestRestorableAutoSnapshot", m_useLatestRestorableAutoSnapshot);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateInstancesFromSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateInstancesFromSnapshot"));
  return headers;

}




