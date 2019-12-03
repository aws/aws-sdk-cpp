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

#include <aws/frauddetector/model/ModelVersionDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

ModelVersionDetail::ModelVersionDetail() : 
    m_modelIdHasBeenSet(false),
    m_modelType(ModelTypeEnum::NOT_SET),
    m_modelTypeHasBeenSet(false),
    m_modelVersionNumberHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_trainingDataSourceHasBeenSet(false),
    m_modelVariablesHasBeenSet(false),
    m_labelSchemaHasBeenSet(false),
    m_validationMetricsHasBeenSet(false),
    m_trainingMetricsHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

ModelVersionDetail::ModelVersionDetail(JsonView jsonValue) : 
    m_modelIdHasBeenSet(false),
    m_modelType(ModelTypeEnum::NOT_SET),
    m_modelTypeHasBeenSet(false),
    m_modelVersionNumberHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_trainingDataSourceHasBeenSet(false),
    m_modelVariablesHasBeenSet(false),
    m_labelSchemaHasBeenSet(false),
    m_validationMetricsHasBeenSet(false),
    m_trainingMetricsHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ModelVersionDetail& ModelVersionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");

    m_modelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelType"))
  {
    m_modelType = ModelTypeEnumMapper::GetModelTypeEnumForName(jsonValue.GetString("modelType"));

    m_modelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelVersionNumber"))
  {
    m_modelVersionNumber = jsonValue.GetString("modelVersionNumber");

    m_modelVersionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingDataSource"))
  {
    m_trainingDataSource = jsonValue.GetObject("trainingDataSource");

    m_trainingDataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelVariables"))
  {
    Array<JsonView> modelVariablesJsonList = jsonValue.GetArray("modelVariables");
    for(unsigned modelVariablesIndex = 0; modelVariablesIndex < modelVariablesJsonList.GetLength(); ++modelVariablesIndex)
    {
      m_modelVariables.push_back(modelVariablesJsonList[modelVariablesIndex].AsObject());
    }
    m_modelVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("labelSchema"))
  {
    m_labelSchema = jsonValue.GetObject("labelSchema");

    m_labelSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validationMetrics"))
  {
    Aws::Map<Aws::String, JsonView> validationMetricsJsonMap = jsonValue.GetObject("validationMetrics").GetAllObjects();
    for(auto& validationMetricsItem : validationMetricsJsonMap)
    {
      m_validationMetrics[validationMetricsItem.first] = validationMetricsItem.second.AsString();
    }
    m_validationMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingMetrics"))
  {
    Aws::Map<Aws::String, JsonView> trainingMetricsJsonMap = jsonValue.GetObject("trainingMetrics").GetAllObjects();
    for(auto& trainingMetricsItem : trainingMetricsJsonMap)
    {
      m_trainingMetrics[trainingMetricsItem.first] = trainingMetricsItem.second.AsString();
    }
    m_trainingMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetString("createdTime");

    m_createdTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelVersionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_modelTypeHasBeenSet)
  {
   payload.WithString("modelType", ModelTypeEnumMapper::GetNameForModelTypeEnum(m_modelType));
  }

  if(m_modelVersionNumberHasBeenSet)
  {
   payload.WithString("modelVersionNumber", m_modelVersionNumber);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_trainingDataSourceHasBeenSet)
  {
   payload.WithObject("trainingDataSource", m_trainingDataSource.Jsonize());

  }

  if(m_modelVariablesHasBeenSet)
  {
   Array<JsonValue> modelVariablesJsonList(m_modelVariables.size());
   for(unsigned modelVariablesIndex = 0; modelVariablesIndex < modelVariablesJsonList.GetLength(); ++modelVariablesIndex)
   {
     modelVariablesJsonList[modelVariablesIndex].AsObject(m_modelVariables[modelVariablesIndex].Jsonize());
   }
   payload.WithArray("modelVariables", std::move(modelVariablesJsonList));

  }

  if(m_labelSchemaHasBeenSet)
  {
   payload.WithObject("labelSchema", m_labelSchema.Jsonize());

  }

  if(m_validationMetricsHasBeenSet)
  {
   JsonValue validationMetricsJsonMap;
   for(auto& validationMetricsItem : m_validationMetrics)
   {
     validationMetricsJsonMap.WithString(validationMetricsItem.first, validationMetricsItem.second);
   }
   payload.WithObject("validationMetrics", std::move(validationMetricsJsonMap));

  }

  if(m_trainingMetricsHasBeenSet)
  {
   JsonValue trainingMetricsJsonMap;
   for(auto& trainingMetricsItem : m_trainingMetrics)
   {
     trainingMetricsJsonMap.WithString(trainingMetricsItem.first, trainingMetricsItem.second);
   }
   payload.WithObject("trainingMetrics", std::move(trainingMetricsJsonMap));

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("lastUpdatedTime", m_lastUpdatedTime);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("createdTime", m_createdTime);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
