/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/DescribePipelinesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePipelinesRequest::DescribePipelinesRequest() : 
    m_pipelineIdsHasBeenSet(false)
{
}

Aws::String DescribePipelinesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pipelineIdsJsonList(m_pipelineIds.size());
   for(unsigned pipelineIdsIndex = 0; pipelineIdsIndex < pipelineIdsJsonList.GetLength(); ++pipelineIdsIndex)
   {
     pipelineIdsJsonList[pipelineIdsIndex].AsString(m_pipelineIds[pipelineIdsIndex]);
   }
   payload.WithArray("pipelineIds", std::move(pipelineIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribePipelinesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.DescribePipelines"));
  return headers;

}




