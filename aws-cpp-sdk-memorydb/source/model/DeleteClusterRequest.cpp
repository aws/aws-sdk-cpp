/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/DeleteClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteClusterRequest::DeleteClusterRequest() : 
    m_clusterNameHasBeenSet(false),
    m_finalSnapshotNameHasBeenSet(false)
{
}

Aws::String DeleteClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_finalSnapshotNameHasBeenSet)
  {
   payload.WithString("FinalSnapshotName", m_finalSnapshotName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.DeleteCluster"));
  return headers;

}




