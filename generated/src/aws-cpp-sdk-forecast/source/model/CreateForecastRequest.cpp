/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/CreateForecastRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateForecastRequest::CreateForecastRequest() : 
    m_forecastNameHasBeenSet(false),
    m_predictorArnHasBeenSet(false),
    m_forecastTypesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_timeSeriesSelectorHasBeenSet(false)
{
}

Aws::String CreateForecastRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_forecastNameHasBeenSet)
  {
   payload.WithString("ForecastName", m_forecastName);

  }

  if(m_predictorArnHasBeenSet)
  {
   payload.WithString("PredictorArn", m_predictorArn);

  }

  if(m_forecastTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> forecastTypesJsonList(m_forecastTypes.size());
   for(unsigned forecastTypesIndex = 0; forecastTypesIndex < forecastTypesJsonList.GetLength(); ++forecastTypesIndex)
   {
     forecastTypesJsonList[forecastTypesIndex].AsString(m_forecastTypes[forecastTypesIndex]);
   }
   payload.WithArray("ForecastTypes", std::move(forecastTypesJsonList));

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

  if(m_timeSeriesSelectorHasBeenSet)
  {
   payload.WithObject("TimeSeriesSelector", m_timeSeriesSelector.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateForecastRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateForecast"));
  return headers;

}




