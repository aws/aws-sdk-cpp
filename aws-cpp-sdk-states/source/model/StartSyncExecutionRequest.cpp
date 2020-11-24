/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/StartSyncExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSyncExecutionRequest::StartSyncExecutionRequest() : 
    m_stateMachineArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_traceHeaderHasBeenSet(false)
{
}

Aws::String StartSyncExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stateMachineArnHasBeenSet)
  {
   payload.WithString("stateMachineArn", m_stateMachineArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_traceHeaderHasBeenSet)
  {
   payload.WithString("traceHeader", m_traceHeader);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartSyncExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.StartSyncExecution"));
  return headers;

}




