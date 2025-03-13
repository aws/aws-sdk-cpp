/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribePredictorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePredictorResult::DescribePredictorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePredictorResult& DescribePredictorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PredictorArn"))
  {
    m_predictorArn = jsonValue.GetString("PredictorArn");
    m_predictorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PredictorName"))
  {
    m_predictorName = jsonValue.GetString("PredictorName");
    m_predictorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AlgorithmArn"))
  {
    m_algorithmArn = jsonValue.GetString("AlgorithmArn");
    m_algorithmArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLAlgorithmArns"))
  {
    Aws::Utils::Array<JsonView> autoMLAlgorithmArnsJsonList = jsonValue.GetArray("AutoMLAlgorithmArns");
    for(unsigned autoMLAlgorithmArnsIndex = 0; autoMLAlgorithmArnsIndex < autoMLAlgorithmArnsJsonList.GetLength(); ++autoMLAlgorithmArnsIndex)
    {
      m_autoMLAlgorithmArns.push_back(autoMLAlgorithmArnsJsonList[autoMLAlgorithmArnsIndex].AsString());
    }
    m_autoMLAlgorithmArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForecastHorizon"))
  {
    m_forecastHorizon = jsonValue.GetInteger("ForecastHorizon");
    m_forecastHorizonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForecastTypes"))
  {
    Aws::Utils::Array<JsonView> forecastTypesJsonList = jsonValue.GetArray("ForecastTypes");
    for(unsigned forecastTypesIndex = 0; forecastTypesIndex < forecastTypesJsonList.GetLength(); ++forecastTypesIndex)
    {
      m_forecastTypes.push_back(forecastTypesJsonList[forecastTypesIndex].AsString());
    }
    m_forecastTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PerformAutoML"))
  {
    m_performAutoML = jsonValue.GetBool("PerformAutoML");
    m_performAutoMLHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLOverrideStrategy"))
  {
    m_autoMLOverrideStrategy = AutoMLOverrideStrategyMapper::GetAutoMLOverrideStrategyForName(jsonValue.GetString("AutoMLOverrideStrategy"));
    m_autoMLOverrideStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PerformHPO"))
  {
    m_performHPO = jsonValue.GetBool("PerformHPO");
    m_performHPOHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingParameters"))
  {
    Aws::Map<Aws::String, JsonView> trainingParametersJsonMap = jsonValue.GetObject("TrainingParameters").GetAllObjects();
    for(auto& trainingParametersItem : trainingParametersJsonMap)
    {
      m_trainingParameters[trainingParametersItem.first] = trainingParametersItem.second.AsString();
    }
    m_trainingParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationParameters"))
  {
    m_evaluationParameters = jsonValue.GetObject("EvaluationParameters");
    m_evaluationParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HPOConfig"))
  {
    m_hPOConfig = jsonValue.GetObject("HPOConfig");
    m_hPOConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputDataConfig"))
  {
    m_inputDataConfig = jsonValue.GetObject("InputDataConfig");
    m_inputDataConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeaturizationConfig"))
  {
    m_featurizationConfig = jsonValue.GetObject("FeaturizationConfig");
    m_featurizationConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionConfig"))
  {
    m_encryptionConfig = jsonValue.GetObject("EncryptionConfig");
    m_encryptionConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PredictorExecutionDetails"))
  {
    m_predictorExecutionDetails = jsonValue.GetObject("PredictorExecutionDetails");
    m_predictorExecutionDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EstimatedTimeRemainingInMinutes"))
  {
    m_estimatedTimeRemainingInMinutes = jsonValue.GetInt64("EstimatedTimeRemainingInMinutes");
    m_estimatedTimeRemainingInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsAutoPredictor"))
  {
    m_isAutoPredictor = jsonValue.GetBool("IsAutoPredictor");
    m_isAutoPredictorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetImportJobArns"))
  {
    Aws::Utils::Array<JsonView> datasetImportJobArnsJsonList = jsonValue.GetArray("DatasetImportJobArns");
    for(unsigned datasetImportJobArnsIndex = 0; datasetImportJobArnsIndex < datasetImportJobArnsJsonList.GetLength(); ++datasetImportJobArnsIndex)
    {
      m_datasetImportJobArns.push_back(datasetImportJobArnsJsonList[datasetImportJobArnsIndex].AsString());
    }
    m_datasetImportJobArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");
    m_lastModificationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizationMetric"))
  {
    m_optimizationMetric = OptimizationMetricMapper::GetOptimizationMetricForName(jsonValue.GetString("OptimizationMetric"));
    m_optimizationMetricHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
