/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DescribeSnapshotsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSnapshotsRequest::DescribeSnapshotsRequest() : 
    m_snapshotIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeSnapshotsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_snapshotIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> snapshotIdsJsonList(m_snapshotIds.size());
   for(unsigned snapshotIdsIndex = 0; snapshotIdsIndex < snapshotIdsJsonList.GetLength(); ++snapshotIdsIndex)
   {
     snapshotIdsJsonList[snapshotIdsIndex].AsString(m_snapshotIds[snapshotIdsIndex]);
   }
   payload.WithArray("SnapshotIds", std::move(snapshotIdsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSnapshotsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DescribeSnapshots"));
  return headers;

}




