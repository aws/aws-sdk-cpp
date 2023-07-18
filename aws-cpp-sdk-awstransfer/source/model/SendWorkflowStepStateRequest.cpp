/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/SendWorkflowStepStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendWorkflowStepStateRequest::SendWorkflowStepStateRequest() : 
    m_workflowIdHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_status(CustomStepStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String SendWorkflowStepStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("WorkflowId", m_workflowId);

  }

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("ExecutionId", m_executionId);

  }

  if(m_tokenHasBeenSet)
  {
   payload.WithString("Token", m_token);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CustomStepStatusMapper::GetNameForCustomStepStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendWorkflowStepStateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.SendWorkflowStepState"));
  return headers;

}




