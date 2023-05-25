/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/TerminateJobFlowsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TerminateJobFlowsRequest::TerminateJobFlowsRequest() : 
    m_jobFlowIdsHasBeenSet(false)
{
}

Aws::String TerminateJobFlowsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobFlowIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobFlowIdsJsonList(m_jobFlowIds.size());
   for(unsigned jobFlowIdsIndex = 0; jobFlowIdsIndex < jobFlowIdsJsonList.GetLength(); ++jobFlowIdsIndex)
   {
     jobFlowIdsJsonList[jobFlowIdsIndex].AsString(m_jobFlowIds[jobFlowIdsIndex]);
   }
   payload.WithArray("JobFlowIds", std::move(jobFlowIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TerminateJobFlowsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.TerminateJobFlows"));
  return headers;

}




