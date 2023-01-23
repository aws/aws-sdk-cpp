/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/UpdateBatchPredictionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBatchPredictionRequest::UpdateBatchPredictionRequest() : 
    m_batchPredictionIdHasBeenSet(false),
    m_batchPredictionNameHasBeenSet(false)
{
}

Aws::String UpdateBatchPredictionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_batchPredictionIdHasBeenSet)
  {
   payload.WithString("BatchPredictionId", m_batchPredictionId);

  }

  if(m_batchPredictionNameHasBeenSet)
  {
   payload.WithString("BatchPredictionName", m_batchPredictionName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBatchPredictionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.UpdateBatchPrediction"));
  return headers;

}




