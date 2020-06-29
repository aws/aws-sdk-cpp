/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/DescribeWorkflowExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorkflowExecutionRequest::DescribeWorkflowExecutionRequest() : 
    m_domainHasBeenSet(false),
    m_executionHasBeenSet(false)
{
}

Aws::String DescribeWorkflowExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_executionHasBeenSet)
  {
   payload.WithObject("execution", m_execution.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWorkflowExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.DescribeWorkflowExecution"));
  return headers;

}




