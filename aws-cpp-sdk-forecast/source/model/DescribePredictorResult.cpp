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
