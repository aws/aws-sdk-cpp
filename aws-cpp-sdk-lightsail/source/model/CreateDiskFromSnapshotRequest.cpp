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

#include <aws/lightsail/model/CreateDiskFromSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDiskFromSnapshotRequest::CreateDiskFromSnapshotRequest() : 
    m_diskNameHasBeenSet(false),
    m_diskSnapshotNameHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_addOnsHasBeenSet(false),
    m_sourceDiskNameHasBeenSet(false),
    m_restoreDateHasBeenSet(false),
    m_useLatestRestorableAutoSnapshot(false),
    m_useLatestRestorableAutoSnapshotHasBeenSet(false)
{
}

Aws::String CreateDiskFromSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_diskNameHasBeenSet)
  {
   payload.WithString("diskName", m_diskName);

  }

  if(m_diskSnapshotNameHasBeenSet)
  {
   payload.WithString("diskSnapshotName", m_diskSnapshotName);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_sizeInGbHasBeenSet)
  {
   payload.WithInteger("sizeInGb", m_sizeInGb);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_addOnsHasBeenSet)
  {
   Array<JsonValue> addOnsJsonList(m_addOns.size());
   for(unsigned addOnsIndex = 0; addOnsIndex < addOnsJsonList.GetLength(); ++addOnsIndex)
   {
     addOnsJsonList[addOnsIndex].AsObject(m_addOns[addOnsIndex].Jsonize());
   }
   payload.WithArray("addOns", std::move(addOnsJsonList));

  }

  if(m_sourceDiskNameHasBeenSet)
  {
   payload.WithString("sourceDiskName", m_sourceDiskName);

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

Aws::Http::HeaderValueCollection CreateDiskFromSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateDiskFromSnapshot"));
  return headers;

}




