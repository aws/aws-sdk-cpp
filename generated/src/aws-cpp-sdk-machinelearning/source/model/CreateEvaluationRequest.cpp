/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/CreateEvaluationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEvaluationRequest::CreateEvaluationRequest() : 
    m_evaluationIdHasBeenSet(false),
    m_evaluationNameHasBeenSet(false),
    m_mLModelIdHasBeenSet(false),
    m_evaluationDataSourceIdHasBeenSet(false)
{
}

Aws::String CreateEvaluationRequest::SerializePayload() const
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

  if(m_mLModelIdHasBeenSet)
  {
   payload.WithString("MLModelId", m_mLModelId);

  }

  if(m_evaluationDataSourceIdHasBeenSet)
  {
   payload.WithString("EvaluationDataSourceId", m_evaluationDataSourceId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEvaluationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.CreateEvaluation"));
  return headers;

}




