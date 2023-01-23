/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ResumeWorkflowRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResumeWorkflowRunRequest::ResumeWorkflowRunRequest() : 
    m_nameHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_nodeIdsHasBeenSet(false)
{
}

Aws::String ResumeWorkflowRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  if(m_nodeIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeIdsJsonList(m_nodeIds.size());
   for(unsigned nodeIdsIndex = 0; nodeIdsIndex < nodeIdsJsonList.GetLength(); ++nodeIdsIndex)
   {
     nodeIdsJsonList[nodeIdsIndex].AsString(m_nodeIds[nodeIdsIndex]);
   }
   payload.WithArray("NodeIds", std::move(nodeIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ResumeWorkflowRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.ResumeWorkflowRun"));
  return headers;

}




