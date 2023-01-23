/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeSnapshotsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSnapshotsRequest::DescribeSnapshotsRequest() : 
    m_directoryIdHasBeenSet(false),
    m_snapshotIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String DescribeSnapshotsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_snapshotIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> snapshotIdsJsonList(m_snapshotIds.size());
   for(unsigned snapshotIdsIndex = 0; snapshotIdsIndex < snapshotIdsJsonList.GetLength(); ++snapshotIdsIndex)
   {
     snapshotIdsJsonList[snapshotIdsIndex].AsString(m_snapshotIds[snapshotIdsIndex]);
   }
   payload.WithArray("SnapshotIds", std::move(snapshotIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSnapshotsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeSnapshots"));
  return headers;

}




