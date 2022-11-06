/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> pipelineObjectsJsonList(m_pipelineObjects.size());
   for(unsigned pipelineObjectsIndex = 0; pipelineObjectsIndex < pipelineObjectsJsonList.GetLength(); ++pipelineObjectsIndex)
   {
     pipelineObjectsJsonList[pipelineObjectsIndex].AsObject(m_pipelineObjects[pipelineObjectsIndex].Jsonize());
   }
   payload.WithArray("pipelineObjects", std::move(pipelineObjectsJsonList));

  }

  if(m_parameterObjectsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterObjectsJsonList(m_parameterObjects.size());
   for(unsigned parameterObjectsIndex = 0; parameterObjectsIndex < parameterObjectsJsonList.GetLength(); ++parameterObjectsIndex)
   {
     parameterObjectsJsonList[parameterObjectsIndex].AsObject(m_parameterObjects[parameterObjectsIndex].Jsonize());
   }
   payload.WithArray("parameterObjects", std::move(parameterObjectsJsonList));

  }

  if(m_parameterValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterValuesJsonList(m_parameterValues.size());
   for(unsigned parameterValuesIndex = 0; parameterValuesIndex < parameterValuesJsonList.GetLength(); ++parameterValuesIndex)
   {
     parameterValuesJsonList[parameterValuesIndex].AsObject(m_parameterValues[parameterValuesIndex].Jsonize());
   }
   payload.WithArray("parameterValues", std::move(parameterValuesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutPipelineDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.PutPipelineDefinition"));
  return headers;

}




