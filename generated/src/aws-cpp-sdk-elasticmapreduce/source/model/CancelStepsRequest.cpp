/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/CancelStepsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelStepsRequest::CancelStepsRequest() : 
    m_clusterIdHasBeenSet(false),
    m_stepIdsHasBeenSet(false),
    m_stepCancellationOption(StepCancellationOption::NOT_SET),
    m_stepCancellationOptionHasBeenSet(false)
{
}

Aws::String CancelStepsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

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

  if(m_stepCancellationOptionHasBeenSet)
  {
   payload.WithString("StepCancellationOption", StepCancellationOptionMapper::GetNameForStepCancellationOption(m_stepCancellationOption));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelStepsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.CancelSteps"));
  return headers;

}




