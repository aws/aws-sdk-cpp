/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/RestoreFromSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RestoreFromSnapshotRequest::RestoreFromSnapshotRequest() : 
    m_snapshotIdHasBeenSet(false)
{
}

Aws::String RestoreFromSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("SnapshotId", m_snapshotId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreFromSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.RestoreFromSnapshot"));
  return headers;

}




