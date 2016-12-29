/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection EnableStageTransitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.EnableStageTransition"));
  return headers;

}



