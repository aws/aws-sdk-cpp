/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/BatchUpdateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdateClusterRequest::BatchUpdateClusterRequest() : 
    m_clusterNamesHasBeenSet(false),
    m_serviceUpdateHasBeenSet(false)
{
}

Aws::String BatchUpdateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterNamesJsonList(m_clusterNames.size());
   for(unsigned clusterNamesIndex = 0; clusterNamesIndex < clusterNamesJsonList.GetLength(); ++clusterNamesIndex)
   {
     clusterNamesJsonList[clusterNamesIndex].AsString(m_clusterNames[clusterNamesIndex]);
   }
   payload.WithArray("ClusterNames", std::move(clusterNamesJsonList));

  }

  if(m_serviceUpdateHasBeenSet)
  {
   payload.WithObject("ServiceUpdate", m_serviceUpdate.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchUpdateClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.BatchUpdateCluster"));
  return headers;

}




