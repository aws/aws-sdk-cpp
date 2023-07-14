/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/UpdateEvaluationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEvaluationRequest::UpdateEvaluationRequest() : 
    m_evaluationIdHasBeenSet(false),
    m_evaluationNameHasBeenSet(false)
{
}

Aws::String UpdateEvaluationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_evaluationIdHasBeenSet)
  {
   payload.WithString("EvaluationId", m_evaluationId);

  }

  if(m_evaluationNameHasBeenSet)
  {
   payload.WithString("EvaluationName", m_evaluationName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEvaluationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.UpdateEvaluation"));
  return headers;

}




