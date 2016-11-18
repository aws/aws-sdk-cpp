/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/model/MLModel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

MLModel::MLModel() : 
    m_mLModelIdHasBeenSet(false),
    m_trainingDataSourceIdHasBeenSet(false),
    m_createdByIamUserHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(EntityStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sizeInBytes(0),
    m_sizeInBytesHasBeenSet(false),
    m_endpointInfoHasBeenSet(false),
    m_trainingParametersHasBeenSet(false),
    m_inputDataLocationS3HasBeenSet(false),
    m_algorithm(Algorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_mLModelType(MLModelType::NOT_SET),
    m_mLModelTypeHasBeenSet(false),
    m_scoreThreshold(0.0),
    m_scoreThresholdHasBeenSet(false),
    m_scoreThresholdLastUpdatedAtHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_computeTime(0),
    m_computeTimeHasBeenSet(false),
    m_finishedAtHasBeenSet(false),
    m_startedAtHasBeenSet(false)
{
}

MLModel::MLModel(const JsonValue& jsonValue) : 
    m_mLModelIdHasBeenSet(false),
    m_trainingDataSourceIdHasBeenSet(false),
    m_createdByIamUserHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(EntityStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sizeInBytes(0),
    m_sizeInBytesHasBeenSet(false),
    m_endpointInfoHasBeenSet(false),
    m_trainingParametersHasBeenSet(false),
    m_inputDataLocationS3HasBeenSet(false),
    m_algorithm(Algorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_mLModelType(MLModelType::NOT_SET),
    m_mLModelTypeHasBeenSet(false),
    m_scoreThreshold(0.0),
    m_scoreThresholdHasBeenSet(false),
    m_scoreThresholdLastUpdatedAtHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_computeTime(0),
    m_computeTimeHasBeenSet(false),
    m_finishedAtHasBeenSet(false),
    m_startedAtHasBeenSet(false)
{
  *this = jsonValue;
}

MLModel& MLModel::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("MLModelId"))
  {
    m_mLModelId = jsonValue.GetString("MLModelId");

    m_mLModelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingDataSourceId"))
  {
    m_trainingDataSourceId = jsonValue.GetString("TrainingDataSourceId");

    m_trainingDataSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedByIamUser"))
  {
    m_createdByIamUser = jsonValue.GetString("CreatedByIamUser");

    m_createdByIamUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeInBytes"))
  {
    m_sizeInBytes = jsonValue.GetInt64("SizeInBytes");

    m_sizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointInfo"))
  {
    m_endpointInfo = jsonValue.GetObject("EndpointInfo");

    m_endpointInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingParameters"))
  {
    Aws::Map<Aws::String, JsonValue> trainingParametersJsonMap = jsonValue.GetObject("TrainingParameters").GetAllObjects();
    for(auto& trainingParametersItem : trainingParametersJsonMap)
    {
      m_trainingParameters[trainingParametersItem.first] = trainingParametersItem.second.AsString();
    }
    m_trainingParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputDataLocationS3"))
  {
    m_inputDataLocationS3 = jsonValue.GetString("InputDataLocationS3");

    m_inputDataLocationS3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Algorithm"))
  {
    m_algorithm = AlgorithmMapper::GetAlgorithmForName(jsonValue.GetString("Algorithm"));

    m_algorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MLModelType"))
  {
    m_mLModelType = MLModelTypeMapper::GetMLModelTypeForName(jsonValue.GetString("MLModelType"));

    m_mLModelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScoreThreshold"))
  {
    m_scoreThreshold = jsonValue.GetDouble("ScoreThreshold");

    m_scoreThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScoreThresholdLastUpdatedAt"))
  {
    m_scoreThresholdLastUpdatedAt = jsonValue.GetDouble("ScoreThresholdLastUpdatedAt");

    m_scoreThresholdLastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputeTime"))
  {
    m_computeTime = jsonValue.GetInt64("ComputeTime");

    m_computeTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FinishedAt"))
  {
    m_finishedAt = jsonValue.GetDouble("FinishedAt");

    m_finishedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetDouble("StartedAt");

    m_startedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue MLModel::Jsonize() const
{
  JsonValue payload;

  if(m_mLModelIdHasBeenSet)
  {
   payload.WithString("MLModelId", m_mLModelId);

  }

  if(m_trainingDataSourceIdHasBeenSet)
  {
   payload.WithString("TrainingDataSourceId", m_trainingDataSourceId);

  }

  if(m_createdByIamUserHasBeenSet)
  {
   payload.WithString("CreatedByIamUser", m_createdByIamUser);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EntityStatusMapper::GetNameForEntityStatus(m_status));
  }

  if(m_sizeInBytesHasBeenSet)
  {
   payload.WithInt64("SizeInBytes", m_sizeInBytes);

  }

  if(m_endpointInfoHasBeenSet)
  {
   payload.WithObject("EndpointInfo", m_endpointInfo.Jsonize());

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

  if(m_inputDataLocationS3HasBeenSet)
  {
   payload.WithString("InputDataLocationS3", m_inputDataLocationS3);

  }

  if(m_algorithmHasBeenSet)
  {
   payload.WithString("Algorithm", AlgorithmMapper::GetNameForAlgorithm(m_algorithm));
  }

  if(m_mLModelTypeHasBeenSet)
  {
   payload.WithString("MLModelType", MLModelTypeMapper::GetNameForMLModelType(m_mLModelType));
  }

  if(m_scoreThresholdHasBeenSet)
  {
   payload.WithDouble("ScoreThreshold", m_scoreThreshold);

  }

  if(m_scoreThresholdLastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("ScoreThresholdLastUpdatedAt", m_scoreThresholdLastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_computeTimeHasBeenSet)
  {
   payload.WithInt64("ComputeTime", m_computeTime);

  }

  if(m_finishedAtHasBeenSet)
  {
   payload.WithDouble("FinishedAt", m_finishedAt.SecondsWithMSPrecision());
  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("StartedAt", m_startedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws