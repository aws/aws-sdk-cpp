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
#include <aws/datapipeline/model/PutPipelineDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutPipelineDefinitionRequest::PutPipelineDefinitionRequest() : 
    m_pipelineIdHasBeenSet(false),
    m_pipelineObjectsHasBeenSet(false),
    m_parameterObjectsHasBeenSet(false),
    m_parameterValuesHasBeenSet(false)
{
}

Aws::String PutPipelineDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

  }

  if(m_pipelineObjectsHasBeenSet)
  {
   Array<JsonValue> pipelineObjectsJsonList(m_pipelineObjects.size());
   for(unsigned pipelineObjectsIndex = 0; pipelineObjectsIndex < pipelineObjectsJsonList.GetLength(); ++pipelineObjectsIndex)
   {
     pipelineObjectsJsonList[pipelineObjectsIndex].AsObject(m_pipelineObjects[pipelineObjectsIndex].Jsonize());
   }
   payload.WithArray("pipelineObjects", std::move(pipelineObjectsJsonList));

  }

  if(m_parameterObjectsHasBeenSet)
  {
   Array<JsonValue> parameterObjectsJsonList(m_parameterObjects.size());
   for(unsigned parameterObjectsIndex = 0; parameterObjectsIndex < parameterObjectsJsonList.GetLength(); ++parameterObjectsIndex)
   {
     parameterObjectsJsonList[parameterObjectsIndex].AsObject(m_parameterObjects[parameterObjectsIndex].Jsonize());
   }
   payload.WithArray("parameterObjects", std::move(parameterObjectsJsonList));

  }

  if(m_parameterValuesHasBeenSet)
  {
   Array<JsonValue> parameterValuesJsonList(m_parameterValues.size());
   for(unsigned parameterValuesIndex = 0; parameterValuesIndex < parameterValuesJsonList.GetLength(); ++parameterValuesIndex)
   {
     parameterValuesJsonList[parameterValuesIndex].AsObject(m_parameterValues[parameterValuesIndex].Jsonize());
   }
   payload.WithArray("parameterValues", std::move(parameterValuesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PutPipelineDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.PutPipelineDefinition"));
  return headers;

}



