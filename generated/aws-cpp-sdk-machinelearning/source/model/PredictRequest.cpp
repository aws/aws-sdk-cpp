/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/PredictRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PredictRequest::PredictRequest() : 
    m_mLModelIdHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_predictEndpointHasBeenSet(false)
{
}

Aws::String PredictRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mLModelIdHasBeenSet)
  {
   payload.WithString("MLModelId", m_mLModelId);

  }

  if(m_recordHasBeenSet)
  {
   JsonValue recordJsonMap;
   for(auto& recordItem : m_record)
   {
     recordJsonMap.WithString(recordItem.first, recordItem.second);
   }
   payload.WithObject("Record", std::move(recordJsonMap));

  }

  if(m_predictEndpointHasBeenSet)
  {
   payload.WithString("PredictEndpoint", m_predictEndpoint);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PredictRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.Predict"));
  return headers;

}




