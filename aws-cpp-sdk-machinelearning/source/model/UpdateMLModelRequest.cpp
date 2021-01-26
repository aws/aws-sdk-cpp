/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/UpdateMLModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMLModelRequest::UpdateMLModelRequest() : 
    m_mLModelIdHasBeenSet(false),
    m_mLModelNameHasBeenSet(false),
    m_scoreThreshold(0.0),
    m_scoreThresholdHasBeenSet(false)
{
}

Aws::String UpdateMLModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mLModelIdHasBeenSet)
  {
   payload.WithString("MLModelId", m_mLModelId);

  }

  if(m_mLModelNameHasBeenSet)
  {
   payload.WithString("MLModelName", m_mLModelName);

  }

  if(m_scoreThresholdHasBeenSet)
  {
   payload.WithDouble("ScoreThreshold", m_scoreThreshold);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMLModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.UpdateMLModel"));
  return headers;

}




