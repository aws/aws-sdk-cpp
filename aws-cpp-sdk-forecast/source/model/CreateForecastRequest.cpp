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
    m_forecastTypesHasBeenSet(false)
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
   Array<JsonValue> forecastTypesJsonList(m_forecastTypes.size());
   for(unsigned forecastTypesIndex = 0; forecastTypesIndex < forecastTypesJsonList.GetLength(); ++forecastTypesIndex)
   {
     forecastTypesJsonList[forecastTypesIndex].AsString(m_forecastTypes[forecastTypesIndex]);
   }
   payload.WithArray("ForecastTypes", std::move(forecastTypesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateForecastRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateForecast"));
  return headers;

}




