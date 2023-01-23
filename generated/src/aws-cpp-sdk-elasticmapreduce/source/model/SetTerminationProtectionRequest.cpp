/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/SetTerminationProtectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetTerminationProtectionRequest::SetTerminationProtectionRequest() : 
    m_jobFlowIdsHasBeenSet(false),
    m_terminationProtected(false),
    m_terminationProtectedHasBeenSet(false)
{
}

Aws::String SetTerminationProtectionRequest::SerializePayload() const
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

  if(m_terminationProtectedHasBeenSet)
  {
   payload.WithBool("TerminationProtected", m_terminationProtected);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetTerminationProtectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.SetTerminationProtection"));
  return headers;

}




