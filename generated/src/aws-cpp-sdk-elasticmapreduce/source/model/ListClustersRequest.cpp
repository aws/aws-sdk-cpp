/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListClustersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListClustersRequest::ListClustersRequest() : 
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_clusterStatesHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String ListClustersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_createdAfterHasBeenSet)
  {
   payload.WithDouble("CreatedAfter", m_createdAfter.SecondsWithMSPrecision());
  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithDouble("CreatedBefore", m_createdBefore.SecondsWithMSPrecision());
  }

  if(m_clusterStatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterStatesJsonList(m_clusterStates.size());
   for(unsigned clusterStatesIndex = 0; clusterStatesIndex < clusterStatesJsonList.GetLength(); ++clusterStatesIndex)
   {
     clusterStatesJsonList[clusterStatesIndex].AsString(ClusterStateMapper::GetNameForClusterState(m_clusterStates[clusterStatesIndex]));
   }
   payload.WithArray("ClusterStates", std::move(clusterStatesJsonList));

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListClustersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.ListClusters"));
  return headers;

}




