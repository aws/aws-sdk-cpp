/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/GetMLModelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMLModelResult::GetMLModelResult() : 
    m_status(EntityStatus::NOT_SET),
    m_sizeInBytes(0),
    m_mLModelType(MLModelType::NOT_SET),
    m_scoreThreshold(0.0),
    m_computeTime(0)
{
}

GetMLModelResult::GetMLModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(EntityStatus::NOT_SET),
    m_sizeInBytes(0),
    m_mLModelType(MLModelType::NOT_SET),
    m_scoreThreshold(0.0),
    m_computeTime(0)
{
  *this = result;
}

GetMLModelResult& GetMLModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MLModelId"))
  {
    m_mLModelId = jsonValue.GetString("MLModelId");

  }

  if(jsonValue.ValueExists("TrainingDataSourceId"))
  {
    m_trainingDataSourceId = jsonValue.GetString("TrainingDataSourceId");

  }

  if(jsonValue.ValueExists("CreatedByIamUser"))
  {
    m_createdByIamUser = jsonValue.GetString("CreatedByIamUser");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("SizeInBytes"))
  {
    m_sizeInBytes = jsonValue.GetInt64("SizeInBytes");

  }

  if(jsonValue.ValueExists("EndpointInfo"))
  {
    m_endpointInfo = jsonValue.GetObject("EndpointInfo");

  }

  if(jsonValue.ValueExists("TrainingParameters"))
  {
    Aws::Map<Aws::String, JsonView> trainingParametersJsonMap = jsonValue.GetObject("TrainingParameters").GetAllObjects();
    for(auto& trainingParametersItem : trainingParametersJsonMap)
    {
      m_trainingParameters[trainingParametersItem.first] = trainingParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("InputDataLocationS3"))
  {
    m_inputDataLocationS3 = jsonValue.GetString("InputDataLocationS3");

  }

  if(jsonValue.ValueExists("MLModelType"))
  {
    m_mLModelType = MLModelTypeMapper::GetMLModelTypeForName(jsonValue.GetString("MLModelType"));

  }

  if(jsonValue.ValueExists("ScoreThreshold"))
  {
    m_scoreThreshold = jsonValue.GetDouble("ScoreThreshold");

  }

  if(jsonValue.ValueExists("ScoreThresholdLastUpdatedAt"))
  {
    m_scoreThresholdLastUpdatedAt = jsonValue.GetDouble("ScoreThresholdLastUpdatedAt");

  }

  if(jsonValue.ValueExists("LogUri"))
  {
    m_logUri = jsonValue.GetString("LogUri");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("ComputeTime"))
  {
    m_computeTime = jsonValue.GetInt64("ComputeTime");

  }

  if(jsonValue.ValueExists("FinishedAt"))
  {
    m_finishedAt = jsonValue.GetDouble("FinishedAt");

  }

  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetDouble("StartedAt");

  }

  if(jsonValue.ValueExists("Recipe"))
  {
    m_recipe = jsonValue.GetString("Recipe");

  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetString("Schema");

  }



  return *this;
}
