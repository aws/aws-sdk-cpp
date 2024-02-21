/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ModelVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

ModelVersionSummary::ModelVersionSummary() : 
    m_modelNameHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_modelVersion(0),
    m_modelVersionHasBeenSet(false),
    m_modelVersionArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(ModelVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourceType(ModelVersionSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_modelQuality(ModelQuality::NOT_SET),
    m_modelQualityHasBeenSet(false)
{
}

ModelVersionSummary::ModelVersionSummary(JsonView jsonValue) : 
    m_modelNameHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_modelVersion(0),
    m_modelVersionHasBeenSet(false),
    m_modelVersionArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(ModelVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourceType(ModelVersionSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_modelQuality(ModelQuality::NOT_SET),
    m_modelQualityHasBeenSet(false)
{
  *this = jsonValue;
}

ModelVersionSummary& ModelVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

    m_modelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");

    m_modelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetInt64("ModelVersion");

    m_modelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelVersionArn"))
  {
    m_modelVersionArn = jsonValue.GetString("ModelVersionArn");

    m_modelVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelVersionStatusMapper::GetModelVersionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = ModelVersionSourceTypeMapper::GetModelVersionSourceTypeForName(jsonValue.GetString("SourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelQuality"))
  {
    m_modelQuality = ModelQualityMapper::GetModelQualityForName(jsonValue.GetString("ModelQuality"));

    m_modelQualityHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("ModelArn", m_modelArn);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithInt64("ModelVersion", m_modelVersion);

  }

  if(m_modelVersionArnHasBeenSet)
  {
   payload.WithString("ModelVersionArn", m_modelVersionArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ModelVersionStatusMapper::GetNameForModelVersionStatus(m_status));
  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", ModelVersionSourceTypeMapper::GetNameForModelVersionSourceType(m_sourceType));
  }

  if(m_modelQualityHasBeenSet)
  {
   payload.WithString("ModelQuality", ModelQualityMapper::GetNameForModelQuality(m_modelQuality));
  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
