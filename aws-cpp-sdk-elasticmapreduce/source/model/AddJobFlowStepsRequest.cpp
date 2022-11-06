/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/AddJobFlowStepsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddJobFlowStepsRequest::AddJobFlowStepsRequest() : 
    m_jobFlowIdHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false)
{
}

Aws::String AddJobFlowStepsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobFlowIdHasBeenSet)
  {
   payload.WithString("JobFlowId", m_jobFlowId);

  }

  if(m_stepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("Steps", std::move(stepsJsonList));

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddJobFlowStepsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.AddJobFlowSteps"));
  return headers;

}




