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
#include <aws/elasticmapreduce/model/AddJobFlowStepsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddJobFlowStepsRequest::AddJobFlowStepsRequest() : 
    m_jobFlowIdHasBeenSet(false),
    m_stepsHasBeenSet(false)
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
   Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("Steps", std::move(stepsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection AddJobFlowStepsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.AddJobFlowSteps"));
  return headers;

}



