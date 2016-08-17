/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> clusterStatesJsonList(m_clusterStates.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListClustersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.ListClusters"));
  return headers;

}



