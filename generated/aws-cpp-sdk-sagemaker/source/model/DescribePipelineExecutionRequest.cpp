/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribePipelineExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePipelineExecutionRequest::DescribePipelineExecutionRequest() : 
    m_pipelineExecutionArnHasBeenSet(false)
{
}

Aws::String DescribePipelineExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineExecutionArnHasBeenSet)
  {
   payload.WithString("PipelineExecutionArn", m_pipelineExecutionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribePipelineExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribePipelineExecution"));
  return headers;

}




