/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeFlowDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFlowDefinitionRequest::DescribeFlowDefinitionRequest() : 
    m_flowDefinitionNameHasBeenSet(false)
{
}

Aws::String DescribeFlowDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_flowDefinitionNameHasBeenSet)
  {
   payload.WithString("FlowDefinitionName", m_flowDefinitionName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFlowDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeFlowDefinition"));
  return headers;

}




