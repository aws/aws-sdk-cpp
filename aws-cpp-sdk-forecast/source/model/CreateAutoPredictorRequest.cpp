/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/CreateAutoPredictorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAutoPredictorRequest::CreateAutoPredictorRequest() : 
    m_predictorNameHasBeenSet(false),
    m_forecastHorizon(0),
    m_forecastHorizonHasBeenSet(false),
    m_forecastTypesHasBeenSet(false),
    m_forecastDimensionsHasBeenSet(false),
    m_forecastFrequencyHasBeenSet(false),
    m_dataConfigHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false),
    m_referencePredictorArnHasBeenSet(false),
    m_optimizationMetric(OptimizationMetric::NOT_SET),
    m_optimizationMetricHasBeenSet(false),
    m_explainPredictor(false),
    m_explainPredictorHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_monitorConfigHasBeenSet(false),
    m_timeAlignmentBoundaryHasBeenSet(false)
{
}

Aws::String CreateAutoPredictorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_predictorNameHasBeenSet)
  {
   payload.WithString("PredictorName", m_predictorName);

  }

  if(m_forecastHorizonHasBeenSet)
  {
   payload.WithInteger("ForecastHorizon", m_forecastHorizon);

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

  if(m_forecastDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> forecastDimensionsJsonList(m_forecastDimensions.size());
   for(unsigned forecastDimensionsIndex = 0; forecastDimensionsIndex < forecastDimensionsJsonList.GetLength(); ++forecastDimensionsIndex)
   {
     forecastDimensionsJsonList[forecastDimensionsIndex].AsString(m_forecastDimensions[forecastDimensionsIndex]);
   }
   payload.WithArray("ForecastDimensions", std::move(forecastDimensionsJsonList));

  }

  if(m_forecastFrequencyHasBeenSet)
  {
   payload.WithString("ForecastFrequency", m_forecastFrequency);

  }

  if(m_dataConfigHasBeenSet)
  {
   payload.WithObject("DataConfig", m_dataConfig.Jsonize());

  }

  if(m_encryptionConfigHasBeenSet)
  {
   payload.WithObject("EncryptionConfig", m_encryptionConfig.Jsonize());

  }

  if(m_referencePredictorArnHasBeenSet)
  {
   payload.WithString("ReferencePredictorArn", m_referencePredictorArn);

  }

  if(m_optimizationMetricHasBeenSet)
  {
   payload.WithString("OptimizationMetric", OptimizationMetricMapper::GetNameForOptimizationMetric(m_optimizationMetric));
  }

  if(m_explainPredictorHasBeenSet)
  {
   payload.WithBool("ExplainPredictor", m_explainPredictor);

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

  if(m_monitorConfigHasBeenSet)
  {
   payload.WithObject("MonitorConfig", m_monitorConfig.Jsonize());

  }

  if(m_timeAlignmentBoundaryHasBeenSet)
  {
   payload.WithObject("TimeAlignmentBoundary", m_timeAlignmentBoundary.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAutoPredictorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreateAutoPredictor"));
  return headers;

}




