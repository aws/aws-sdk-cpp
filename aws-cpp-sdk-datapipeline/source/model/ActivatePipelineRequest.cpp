/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/ActivatePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ActivatePipelineRequest::ActivatePipelineRequest() : 
    m_pipelineIdHasBeenSet(false),
    m_parameterValuesHasBeenSet(false),
    m_startTimestampHasBeenSet(false)
{
}

Aws::String ActivatePipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

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

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("startTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ActivatePipelineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.ActivatePipeline"));
  return headers;

}




