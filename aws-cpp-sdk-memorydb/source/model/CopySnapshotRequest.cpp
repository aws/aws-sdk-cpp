/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/CopySnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CopySnapshotRequest::CopySnapshotRequest() : 
    m_sourceSnapshotNameHasBeenSet(false),
    m_targetSnapshotNameHasBeenSet(false),
    m_targetBucketHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CopySnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceSnapshotNameHasBeenSet)
  {
   payload.WithString("SourceSnapshotName", m_sourceSnapshotName);

  }

  if(m_targetSnapshotNameHasBeenSet)
  {
   payload.WithString("TargetSnapshotName", m_targetSnapshotName);

  }

  if(m_targetBucketHasBeenSet)
  {
   payload.WithString("TargetBucket", m_targetBucket);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CopySnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.CopySnapshot"));
  return headers;

}




