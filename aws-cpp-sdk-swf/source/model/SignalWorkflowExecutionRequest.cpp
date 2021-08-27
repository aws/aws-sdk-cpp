/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/SignalWorkflowExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SignalWorkflowExecutionRequest::SignalWorkflowExecutionRequest() : 
    m_domainHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_signalNameHasBeenSet(false),
    m_inputHasBeenSet(false)
{
}

Aws::String SignalWorkflowExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("workflowId", m_workflowId);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("runId", m_runId);

  }

  if(m_signalNameHasBeenSet)
  {
   payload.WithString("signalName", m_signalName);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SignalWorkflowExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.SignalWorkflowExecution"));
  return headers;

}




