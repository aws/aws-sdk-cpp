/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/CreateBatchPredictionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBatchPredictionRequest::CreateBatchPredictionRequest() : 
    m_batchPredictionIdHasBeenSet(false),
    m_batchPredictionNameHasBeenSet(false),
    m_mLModelIdHasBeenSet(false),
    m_batchPredictionDataSourceIdHasBeenSet(false),
    m_outputUriHasBeenSet(false)
{
}

Aws::String CreateBatchPredictionRequest::SerializePayload() const
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

  if(m_mLModelIdHasBeenSet)
  {
   payload.WithString("MLModelId", m_mLModelId);

  }

  if(m_batchPredictionDataSourceIdHasBeenSet)
  {
   payload.WithString("BatchPredictionDataSourceId", m_batchPredictionDataSourceId);

  }

  if(m_outputUriHasBeenSet)
  {
   payload.WithString("OutputUri", m_outputUri);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateBatchPredictionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.CreateBatchPrediction"));
  return headers;

}




