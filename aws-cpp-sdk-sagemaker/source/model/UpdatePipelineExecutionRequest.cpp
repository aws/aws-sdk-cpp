/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdatePipelineExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePipelineExecutionRequest::UpdatePipelineExecutionRequest() : 
    m_pipelineExecutionArnHasBeenSet(false),
    m_pipelineExecutionDescriptionHasBeenSet(false),
    m_pipelineExecutionDisplayNameHasBeenSet(false),
    m_parallelismConfigurationHasBeenSet(false)
{
}

Aws::String UpdatePipelineExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineExecutionArnHasBeenSet)
  {
   payload.WithString("PipelineExecutionArn", m_pipelineExecutionArn);

  }

  if(m_pipelineExecutionDescriptionHasBeenSet)
  {
   payload.WithString("PipelineExecutionDescription", m_pipelineExecutionDescription);

  }

  if(m_pipelineExecutionDisplayNameHasBeenSet)
  {
   payload.WithString("PipelineExecutionDisplayName", m_pipelineExecutionDisplayName);

  }

  if(m_parallelismConfigurationHasBeenSet)
  {
   payload.WithObject("ParallelismConfiguration", m_parallelismConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePipelineExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdatePipelineExecution"));
  return headers;

}




