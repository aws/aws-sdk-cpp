/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/CreateWhatIfForecastRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWhatIfForecastRequest::CreateWhatIfForecastRequest() : 
    m_whatIfForecastNameHasBeenSet(false),
    m_whatIfAnalysisArnHasBeenSet(false),
    m_timeSeriesTransformationsHasBeenSet(false),
    m_timeSeriesReplacementsDataSourceHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateWhatIfForecastRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_whatIfForecastNameHasBeenSet)
  {
   payload.WithString("WhatIfForecastName", m_whatIfForecastName);

  }

  if(m_whatIfAnalysisArnHasBeenSet)
  {
   payload.WithString("WhatIfAnalysisArn", m_whatIfAnalysisArn);

  }

  if(m_timeSeriesTransformationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timeSeriesTransformationsJsonList(m_timeSeriesTransformations.size());
   for(unsigned timeSeriesTransformationsIndex = 0; timeSeriesTransformationsIndex < timeSeriesTransformationsJsonList.GetLength(); ++timeSeriesTransformationsIndex)
   {
     timeSeriesTransformationsJsonList[timeSeriesTransformationsIndex].AsObject(m_timeSeriesTransformations[timeSeriesTransformationsIndex].Jsonize());
   }
   payload.WithArray("TimeSeriesTransformations", std::move(timeSeriesTransformationsJsonList));

  }

  if(m_timeSeriesReplacementsDataSourceHasBeenSet)
  {
   payload.WithObject("TimeSeriesReplacementsDataSource", m_timeSeriesReplacementsDataSource.Jsonize());

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

Aws::Http::HeaderValueCollection CreateWhatIfForecastRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateWhatIfForecast"));
  return headers;

}




