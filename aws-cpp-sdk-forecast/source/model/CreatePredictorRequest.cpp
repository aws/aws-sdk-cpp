/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_performAutoML(false),
    m_performAutoMLHasBeenSet(false),
    m_performHPO(false),
    m_performHPOHasBeenSet(false),
    m_trainingParametersHasBeenSet(false),
    m_evaluationParametersHasBeenSet(false),
    m_hPOConfigHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_featurizationConfigHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false)
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

  if(m_performAutoMLHasBeenSet)
  {
   payload.WithBool("PerformAutoML", m_performAutoML);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePredictorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.CreatePredictor"));
  return headers;

}




