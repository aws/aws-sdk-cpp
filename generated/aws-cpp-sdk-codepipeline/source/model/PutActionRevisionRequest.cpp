/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PutActionRevisionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutActionRevisionRequest::PutActionRevisionRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_actionRevisionHasBeenSet(false)
{
}

Aws::String PutActionRevisionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineNameHasBeenSet)
  {
   payload.WithString("pipelineName", m_pipelineName);

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("stageName", m_stageName);

  }

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_actionRevisionHasBeenSet)
  {
   payload.WithObject("actionRevision", m_actionRevision.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutActionRevisionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.PutActionRevision"));
  return headers;

}




