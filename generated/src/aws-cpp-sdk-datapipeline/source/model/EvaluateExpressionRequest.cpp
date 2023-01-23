/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/EvaluateExpressionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EvaluateExpressionRequest::EvaluateExpressionRequest() : 
    m_pipelineIdHasBeenSet(false),
    m_objectIdHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

Aws::String EvaluateExpressionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

  }

  if(m_objectIdHasBeenSet)
  {
   payload.WithString("objectId", m_objectId);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection EvaluateExpressionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.EvaluateExpression"));
  return headers;

}




