/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/CreatePredictorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePredictorRequest::CreatePredictorRequest() : 
    m_predictorNameHasBeenSet(false),
    m_algorithmArnHasBeenSet(false),
    m_forecastHorizon(0),
    m_forecastHorizonHasBeenSet(false),
    m_forecastTypesHasBeenSet(false),
    m_performAutoML(false),
    m_performAutoMLHasBeenSet(false),
    m_autoMLOverrideStrategy(AutoMLOverrideStrategy::NOT_SET),
    m_autoMLOverrideStrategyHasBeenSet(false),
    m_performHPO(false),
    m_performHPOHasBeenSet(false),
    m_trainingParametersHasBeenSet(false),
    m_evaluationParametersHasBeenSet(false),
    m_hPOConfigHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_featurizationConfigHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_optimizationMetric(OptimizationMetric::NOT_SET),
    m_optimizationMetricHasBeenSet(false)
{
}

Aws::String CreatePredictorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_predictorNameHasBeenSet)
  {
   payload.WithString("PredictorName", m_predictorName);

  }

  if(m_algorithmArnHasBeenSet)
  {
   payload.WithString("AlgorithmArn", m_algorithmArn);

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

  if(m_performAutoMLHasBeenSet)
  {
   payload.WithBool("PerformAutoML", m_performAutoML);

  }

  if(m_autoMLOverrideStrategyHasBeenSet)
  {
   payload.WithString("AutoMLOverrideStrategy", AutoMLOverrideStrategyMapper::GetNameForAutoMLOverrideStrategy(m_autoMLOverrideStrategy));
  }

  if(m_performHPOHasBeenSet)
  {
   payload.WithBool("PerformHPO", m_performHPO);

  }

  if(m_trainingParametersHasBeenSet)
  {
   JsonValue trainingParametersJsonMap;
   for(auto& trainingParametersItem : m_trainingParameters)
   {
     trainingParametersJsonMap.WithString(trainingParametersItem.first, trainingParametersItem.second);
   }
   payload.WithObject("TrainingParameters", std::move(trainingParametersJsonMap));

  }

  if(m_evaluationParametersHasBeenSet)
  {
   payload.WithObject("EvaluationParameters", m_evaluationParameters.Jsonize());

  }

  if(m_hPOConfigHasBeenSet)
  {
   payload.WithObject("HPOConfig", m_hPOConfig.Jsonize());

  }

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

  }

  if(m_featurizationConfigHasBeenSet)
  {
   payload.WithObject("FeaturizationConfig", m_featurizationConfig.Jsonize());

  }

  if(m_encryptionConfigHasBeenSet)
  {
   payload.WithObject("EncryptionConfig", m_encryptionConfig.Jsonize());

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

  if(m_optimizationMetricHasBeenSet)
  {
   payload.WithString("OptimizationMetric", OptimizationMetricMapper::GetNameForOptimizationMetric(m_optimizationMetric));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePredictorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreatePredictor"));
  return headers;

}




