/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DeletePredictorBacktestExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePredictorBacktestExportJobRequest::DeletePredictorBacktestExportJobRequest() : 
    m_predictorBacktestExportJobArnHasBeenSet(false)
{
}

Aws::String DeletePredictorBacktestExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_predictorBacktestExportJobArnHasBeenSet)
  {
   payload.WithString("PredictorBacktestExportJobArn", m_predictorBacktestExportJobArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeletePredictorBacktestExportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.DeletePredictorBacktestExportJob"));
  return headers;

}




