/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_statusHasBeenSet(false),
    m_trainingDataSource(TrainingDataSourceEnum::NOT_SET),
    m_trainingDataSourceHasBeenSet(false),
    m_trainingDataSchemaHasBeenSet(false),
    m_externalEventsDetailHasBeenSet(false),
    m_trainingResultHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

ModelVersionDetail::ModelVersionDetail(JsonView jsonValue) : 
    m_modelIdHasBeenSet(false),
    m_modelType(ModelTypeEnum::NOT_SET),
    m_modelTypeHasBeenSet(false),
    m_modelVersionNumberHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_trainingDataSource(TrainingDataSourceEnum::NOT_SET),
    m_trainingDataSourceHasBeenSet(false),
    m_trainingDataSchemaHasBeenSet(false),
    m_externalEventsDetailHasBeenSet(false),
    m_trainingResultHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_arnHasBeenSet(false)
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingDataSource"))
  {
    m_trainingDataSource = TrainingDataSourceEnumMapper::GetTrainingDataSourceEnumForName(jsonValue.GetString("trainingDataSource"));

    m_trainingDataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingDataSchema"))
  {
    m_trainingDataSchema = jsonValue.GetObject("trainingDataSchema");

    m_trainingDataSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalEventsDetail"))
  {
    m_externalEventsDetail = jsonValue.GetObject("externalEventsDetail");

    m_externalEventsDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingResult"))
  {
    m_trainingResult = jsonValue.GetObject("trainingResult");

    m_trainingResultHasBeenSet = true;
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

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_trainingDataSourceHasBeenSet)
  {
   payload.WithString("trainingDataSource", TrainingDataSourceEnumMapper::GetNameForTrainingDataSourceEnum(m_trainingDataSource));
  }

  if(m_trainingDataSchemaHasBeenSet)
  {
   payload.WithObject("trainingDataSchema", m_trainingDataSchema.Jsonize());

  }

  if(m_externalEventsDetailHasBeenSet)
  {
   payload.WithObject("externalEventsDetail", m_externalEventsDetail.Jsonize());

  }

  if(m_trainingResultHasBeenSet)
  {
   payload.WithObject("trainingResult", m_trainingResult.Jsonize());

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("lastUpdatedTime", m_lastUpdatedTime);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("createdTime", m_createdTime);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
