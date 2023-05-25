/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RetryStageExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RetryStageExecutionRequest::RetryStageExecutionRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_pipelineExecutionIdHasBeenSet(false),
    m_retryMode(StageRetryMode::NOT_SET),
    m_retryModeHasBeenSet(false)
{
}

Aws::String RetryStageExecutionRequest::SerializePayload() const
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

  if(m_pipelineExecutionIdHasBeenSet)
  {
   payload.WithString("pipelineExecutionId", m_pipelineExecutionId);

  }

  if(m_retryModeHasBeenSet)
  {
   payload.WithString("retryMode", StageRetryModeMapper::GetNameForStageRetryMode(m_retryMode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RetryStageExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.RetryStageExecution"));
  return headers;

}




