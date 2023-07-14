/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DeleteSnapshotScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSnapshotScheduleRequest::DeleteSnapshotScheduleRequest() : 
    m_volumeARNHasBeenSet(false)
{
}

Aws::String DeleteSnapshotScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_volumeARNHasBeenSet)
  {
   payload.WithString("VolumeARN", m_volumeARN);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSnapshotScheduleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DeleteSnapshotSchedule"));
  return headers;

}




