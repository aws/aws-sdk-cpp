/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribePredictorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePredictorResult::DescribePredictorResult() : 
    m_forecastHorizon(0),
    m_performAutoML(false),
    m_performHPO(false)
{
}

DescribePredictorResult::DescribePredictorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_forecastHorizon(0),
    m_performAutoML(false),
    m_performHPO(false)
{
  *this = result;
}

DescribePredictorResult& DescribePredictorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PredictorArn"))
  {
    m_predictorArn = jsonValue.GetString("PredictorArn");

  }

  if(jsonValue.ValueExists("PredictorName"))
  {
    m_predictorName = jsonValue.GetString("PredictorName");

  }

  if(jsonValue.ValueExists("AlgorithmArn"))
  {
    m_algorithmArn = jsonValue.GetString("AlgorithmArn");

  }

  if(jsonValue.ValueExists("ForecastHorizon"))
  {
    m_forecastHorizon = jsonValue.GetInteger("ForecastHorizon");

  }

  if(jsonValue.ValueExists("ForecastTypes"))
  {
    Array<JsonView> forecastTypesJsonList = jsonValue.GetArray("ForecastTypes");
    for(unsigned forecastTypesIndex = 0; forecastTypesIndex < forecastTypesJsonList.GetLength(); ++forecastTypesIndex)
    {
      m_forecastTypes.push_back(forecastTypesJsonList[forecastTypesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("PerformAutoML"))
  {
    m_performAutoML = jsonValue.GetBool("PerformAutoML");

  }

  if(jsonValue.ValueExists("PerformHPO"))
  {
    m_performHPO = jsonValue.GetBool("PerformHPO");

  }

  if(jsonValue.ValueExists("TrainingParameters"))
  {
    Aws::Map<Aws::String, JsonView> trainingParametersJsonMap = jsonValue.GetObject("TrainingParameters").GetAllObjects();
    for(auto& trainingParametersItem : trainingParametersJsonMap)
    {
      m_trainingParameters[trainingParametersItem.first] = trainingParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("EvaluationParameters"))
  {
    m_evaluationParameters = jsonValue.GetObject("EvaluationParameters");

  }

  if(jsonValue.ValueExists("HPOConfig"))
  {
    m_hPOConfig = jsonValue.GetObject("HPOConfig");

  }

  if(jsonValue.ValueExists("InputDataConfig"))
  {
    m_inputDataConfig = jsonValue.GetObject("InputDataConfig");

  }

  if(jsonValue.ValueExists("FeaturizationConfig"))
  {
    m_featurizationConfig = jsonValue.GetObject("FeaturizationConfig");

  }

  if(jsonValue.ValueExists("EncryptionConfig"))
  {
    m_encryptionConfig = jsonValue.GetObject("EncryptionConfig");

  }

  if(jsonValue.ValueExists("PredictorExecutionDetails"))
  {
    m_predictorExecutionDetails = jsonValue.GetObject("PredictorExecutionDetails");

  }

  if(jsonValue.ValueExists("DatasetImportJobArns"))
  {
    Array<JsonView> datasetImportJobArnsJsonList = jsonValue.GetArray("DatasetImportJobArns");
    for(unsigned datasetImportJobArnsIndex = 0; datasetImportJobArnsIndex < datasetImportJobArnsJsonList.GetLength(); ++datasetImportJobArnsIndex)
    {
      m_datasetImportJobArns.push_back(datasetImportJobArnsJsonList[datasetImportJobArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("AutoMLAlgorithmArns"))
  {
    Array<JsonView> autoMLAlgorithmArnsJsonList = jsonValue.GetArray("AutoMLAlgorithmArns");
    for(unsigned autoMLAlgorithmArnsIndex = 0; autoMLAlgorithmArnsIndex < autoMLAlgorithmArnsJsonList.GetLength(); ++autoMLAlgorithmArnsIndex)
    {
      m_autoMLAlgorithmArns.push_back(autoMLAlgorithmArnsJsonList[autoMLAlgorithmArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

  }



  return *this;
}
