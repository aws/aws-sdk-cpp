﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/DeleteSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSnapshotRequest::DeleteSnapshotRequest() : 
    m_snapshotNameHasBeenSet(false)
{
}

Aws::String DeleteSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("SnapshotName", m_snapshotName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.DeleteSnapshot"));
  return headers;

}




