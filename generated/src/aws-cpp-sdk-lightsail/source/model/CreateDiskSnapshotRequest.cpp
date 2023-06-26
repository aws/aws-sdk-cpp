/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateDiskSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDiskSnapshotRequest::CreateDiskSnapshotRequest() : 
    m_diskNameHasBeenSet(false),
    m_diskSnapshotNameHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDiskSnapshotRequest::SerializePayload() const
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

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDiskSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateDiskSnapshot"));
  return headers;

}




