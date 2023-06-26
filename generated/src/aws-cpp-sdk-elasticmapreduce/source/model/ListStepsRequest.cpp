/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListStepsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListStepsRequest::ListStepsRequest() : 
    m_clusterIdHasBeenSet(false),
    m_stepStatesHasBeenSet(false),
    m_stepIdsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String ListStepsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_stepStatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepStatesJsonList(m_stepStates.size());
   for(unsigned stepStatesIndex = 0; stepStatesIndex < stepStatesJsonList.GetLength(); ++stepStatesIndex)
   {
     stepStatesJsonList[stepStatesIndex].AsString(StepStateMapper::GetNameForStepState(m_stepStates[stepStatesIndex]));
   }
   payload.WithArray("StepStates", std::move(stepStatesJsonList));

  }

  if(m_stepIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepIdsJsonList(m_stepIds.size());
   for(unsigned stepIdsIndex = 0; stepIdsIndex < stepIdsJsonList.GetLength(); ++stepIdsIndex)
   {
     stepIdsJsonList[stepIdsIndex].AsString(m_stepIds[stepIdsIndex]);
   }
   payload.WithArray("StepIds", std::move(stepIdsJsonList));

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListStepsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.ListSteps"));
  return headers;

}




