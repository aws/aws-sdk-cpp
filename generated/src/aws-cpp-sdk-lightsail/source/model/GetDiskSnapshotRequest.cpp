/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetDiskSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDiskSnapshotRequest::GetDiskSnapshotRequest() : 
    m_diskSnapshotNameHasBeenSet(false)
{
}

Aws::String GetDiskSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_diskSnapshotNameHasBeenSet)
  {
   payload.WithString("diskSnapshotName", m_diskSnapshotName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDiskSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetDiskSnapshot"));
  return headers;

}




