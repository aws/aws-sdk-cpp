/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/codepipeline/model/StopPipelineExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopPipelineExecutionRequest::StopPipelineExecutionRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_pipelineExecutionIdHasBeenSet(false),
    m_abandon(false),
    m_abandonHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

Aws::String StopPipelineExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineNameHasBeenSet)
  {
   payload.WithString("pipelineName", m_pipelineName);

  }

  if(m_pipelineExecutionIdHasBeenSet)
  {
   payload.WithString("pipelineExecutionId", m_pipelineExecutionId);

  }

  if(m_abandonHasBeenSet)
  {
   payload.WithBool("abandon", m_abandon);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopPipelineExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.StopPipelineExecution"));
  return headers;

}




