/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/GetEvaluationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEvaluationRequest::GetEvaluationRequest() : 
    m_evaluationIdHasBeenSet(false)
{
}

Aws::String GetEvaluationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_evaluationIdHasBeenSet)
  {
   payload.WithString("EvaluationId", m_evaluationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetEvaluationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.GetEvaluation"));
  return headers;

}




