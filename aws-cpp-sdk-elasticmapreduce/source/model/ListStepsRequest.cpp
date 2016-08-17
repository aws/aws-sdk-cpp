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
   Array<JsonValue> stepStatesJsonList(m_stepStates.size());
   for(unsigned stepStatesIndex = 0; stepStatesIndex < stepStatesJsonList.GetLength(); ++stepStatesIndex)
   {
     stepStatesJsonList[stepStatesIndex].AsString(StepStateMapper::GetNameForStepState(m_stepStates[stepStatesIndex]));
   }
   payload.WithArray("StepStates", std::move(stepStatesJsonList));

  }

  if(m_stepIdsHasBeenSet)
  {
   Array<JsonValue> stepIdsJsonList(m_stepIds.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListStepsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.ListSteps"));
  return headers;

}



