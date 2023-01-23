/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribeExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeExecutionRequest::DescribeExecutionRequest() : 
    m_executionIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false)
{
}

Aws::String DescribeExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("ExecutionId", m_executionId);

  }

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("WorkflowId", m_workflowId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.DescribeExecution"));
  return headers;

}




