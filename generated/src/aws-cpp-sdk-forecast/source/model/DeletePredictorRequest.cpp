/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DeletePredictorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePredictorRequest::DeletePredictorRequest() : 
    m_predictorArnHasBeenSet(false)
{
}

Aws::String DeletePredictorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_predictorArnHasBeenSet)
  {
   payload.WithString("PredictorArn", m_predictorArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeletePredictorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.DeletePredictor"));
  return headers;

}




