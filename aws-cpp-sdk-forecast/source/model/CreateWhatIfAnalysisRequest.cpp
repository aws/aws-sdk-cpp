/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/CreateWhatIfAnalysisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWhatIfAnalysisRequest::CreateWhatIfAnalysisRequest() : 
    m_whatIfAnalysisNameHasBeenSet(false),
    m_forecastArnHasBeenSet(false),
    m_timeSeriesSelectorHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateWhatIfAnalysisRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_whatIfAnalysisNameHasBeenSet)
  {
   payload.WithString("WhatIfAnalysisName", m_whatIfAnalysisName);

  }

  if(m_forecastArnHasBeenSet)
  {
   payload.WithString("ForecastArn", m_forecastArn);

  }

  if(m_timeSeriesSelectorHasBeenSet)
  {
   payload.WithObject("TimeSeriesSelector", m_timeSeriesSelector.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWhatIfAnalysisRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateWhatIfAnalysis"));
  return headers;

}




