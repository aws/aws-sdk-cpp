/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ModelSummary.h>
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

ModelSummary::ModelSummary() : 
    m_modelNameHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_status(ModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_activeModelVersion(0),
    m_activeModelVersionHasBeenSet(false),
    m_activeModelVersionArnHasBeenSet(false),
    m_latestScheduledRetrainingStatus(ModelVersionStatus::NOT_SET),
    m_latestScheduledRetrainingStatusHasBeenSet(false),
    m_latestScheduledRetrainingModelVersion(0),
    m_latestScheduledRetrainingModelVersionHasBeenSet(false),
    m_latestScheduledRetrainingStartTimeHasBeenSet(false),
    m_nextScheduledRetrainingStartDateHasBeenSet(false),
    m_retrainingSchedulerStatus(RetrainingSchedulerStatus::NOT_SET),
    m_retrainingSchedulerStatusHasBeenSet(false),
    m_modelDiagnosticsOutputConfigurationHasBeenSet(false),
    m_modelQuality(ModelQuality::NOT_SET),
    m_modelQualityHasBeenSet(false)
{
}

ModelSummary::ModelSummary(JsonView jsonValue) : 
    m_modelNameHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_status(ModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_activeModelVersion(0),
    m_activeModelVersionHasBeenSet(false),
    m_activeModelVersionArnHasBeenSet(false),
    m_latestScheduledRetrainingStatus(ModelVersionStatus::NOT_SET),
    m_latestScheduledRetrainingStatusHasBeenSet(false),
    m_latestScheduledRetrainingModelVersion(0),
    m_latestScheduledRetrainingModelVersionHasBeenSet(false),
    m_latestScheduledRetrainingStartTimeHasBeenSet(false),
    m_nextScheduledRetrainingStartDateHasBeenSet(false),
    m_retrainingSchedulerStatus(RetrainingSchedulerStatus::NOT_SET),
    m_retrainingSchedulerStatusHasBeenSet(false),
    m_modelDiagnosticsOutputConfigurationHasBeenSet(false),
    m_modelQuality(ModelQuality::NOT_SET),
    m_modelQualityHasBeenSet(false)
{
  *this = jsonValue;
}

ModelSummary& ModelSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");

    m_datasetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

    m_datasetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveModelVersion"))
  {
    m_activeModelVersion = jsonValue.GetInt64("ActiveModelVersion");

    m_activeModelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveModelVersionArn"))
  {
    m_activeModelVersionArn = jsonValue.GetString("ActiveModelVersionArn");

    m_activeModelVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestScheduledRetrainingStatus"))
  {
    m_latestScheduledRetrainingStatus = ModelVersionStatusMapper::GetModelVersionStatusForName(jsonValue.GetString("LatestScheduledRetrainingStatus"));

    m_latestScheduledRetrainingStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestScheduledRetrainingModelVersion"))
  {
    m_latestScheduledRetrainingModelVersion = jsonValue.GetInt64("LatestScheduledRetrainingModelVersion");

    m_latestScheduledRetrainingModelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestScheduledRetrainingStartTime"))
  {
    m_latestScheduledRetrainingStartTime = jsonValue.GetDouble("LatestScheduledRetrainingStartTime");

    m_latestScheduledRetrainingStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextScheduledRetrainingStartDate"))
  {
    m_nextScheduledRetrainingStartDate = jsonValue.GetDouble("NextScheduledRetrainingStartDate");

    m_nextScheduledRetrainingStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetrainingSchedulerStatus"))
  {
    m_retrainingSchedulerStatus = RetrainingSchedulerStatusMapper::GetRetrainingSchedulerStatusForName(jsonValue.GetString("RetrainingSchedulerStatus"));

    m_retrainingSchedulerStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelDiagnosticsOutputConfiguration"))
  {
    m_modelDiagnosticsOutputConfiguration = jsonValue.GetObject("ModelDiagnosticsOutputConfiguration");

    m_modelDiagnosticsOutputConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelQuality"))
  {
    m_modelQuality = ModelQualityMapper::GetModelQualityForName(jsonValue.GetString("ModelQuality"));

    m_modelQualityHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelSummary::Jsonize() const
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

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ModelStatusMapper::GetNameForModelStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_activeModelVersionHasBeenSet)
  {
   payload.WithInt64("ActiveModelVersion", m_activeModelVersion);

  }

  if(m_activeModelVersionArnHasBeenSet)
  {
   payload.WithString("ActiveModelVersionArn", m_activeModelVersionArn);

  }

  if(m_latestScheduledRetrainingStatusHasBeenSet)
  {
   payload.WithString("LatestScheduledRetrainingStatus", ModelVersionStatusMapper::GetNameForModelVersionStatus(m_latestScheduledRetrainingStatus));
  }

  if(m_latestScheduledRetrainingModelVersionHasBeenSet)
  {
   payload.WithInt64("LatestScheduledRetrainingModelVersion", m_latestScheduledRetrainingModelVersion);

  }

  if(m_latestScheduledRetrainingStartTimeHasBeenSet)
  {
   payload.WithDouble("LatestScheduledRetrainingStartTime", m_latestScheduledRetrainingStartTime.SecondsWithMSPrecision());
  }

  if(m_nextScheduledRetrainingStartDateHasBeenSet)
  {
   payload.WithDouble("NextScheduledRetrainingStartDate", m_nextScheduledRetrainingStartDate.SecondsWithMSPrecision());
  }

  if(m_retrainingSchedulerStatusHasBeenSet)
  {
   payload.WithString("RetrainingSchedulerStatus", RetrainingSchedulerStatusMapper::GetNameForRetrainingSchedulerStatus(m_retrainingSchedulerStatus));
  }

  if(m_modelDiagnosticsOutputConfigurationHasBeenSet)
  {
   payload.WithObject("ModelDiagnosticsOutputConfiguration", m_modelDiagnosticsOutputConfiguration.Jsonize());

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
