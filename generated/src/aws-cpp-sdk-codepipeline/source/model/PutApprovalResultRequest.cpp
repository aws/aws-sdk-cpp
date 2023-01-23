/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PutApprovalResultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutApprovalResultRequest::PutApprovalResultRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

Aws::String PutApprovalResultRequest::SerializePayload() const
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

  if(m_resultHasBeenSet)
  {
   payload.WithObject("result", m_result.Jsonize());

  }

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutApprovalResultRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.PutApprovalResult"));
  return headers;

}




