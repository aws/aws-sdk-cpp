﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/GetBatchPredictionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBatchPredictionRequest::GetBatchPredictionRequest() : 
    m_batchPredictionIdHasBeenSet(false)
{
}

Aws::String GetBatchPredictionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_batchPredictionIdHasBeenSet)
  {
   payload.WithString("BatchPredictionId", m_batchPredictionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBatchPredictionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.GetBatchPrediction"));
  return headers;

}




