/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetInstanceSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetInstanceSnapshotRequest::GetInstanceSnapshotRequest() : 
    m_instanceSnapshotNameHasBeenSet(false)
{
}

Aws::String GetInstanceSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceSnapshotNameHasBeenSet)
  {
   payload.WithString("instanceSnapshotName", m_instanceSnapshotName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetInstanceSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetInstanceSnapshot"));
  return headers;

}




