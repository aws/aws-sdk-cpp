/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/DescribeStateMachineForExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeStateMachineForExecutionRequest::DescribeStateMachineForExecutionRequest() : 
    m_executionArnHasBeenSet(false)
{
}

Aws::String DescribeStateMachineForExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_executionArnHasBeenSet)
  {
   payload.WithString("executionArn", m_executionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeStateMachineForExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.DescribeStateMachineForExecution"));
  return headers;

}




