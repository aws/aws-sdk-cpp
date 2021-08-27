/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/EnableStageTransitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableStageTransitionRequest::EnableStageTransitionRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_transitionType(StageTransitionType::NOT_SET),
    m_transitionTypeHasBeenSet(false)
{
}

Aws::String EnableStageTransitionRequest::SerializePayload() const
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

  if(m_transitionTypeHasBeenSet)
  {
   payload.WithString("transitionType", StageTransitionTypeMapper::GetNameForStageTransitionType(m_transitionType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection EnableStageTransitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.EnableStageTransition"));
  return headers;

}




