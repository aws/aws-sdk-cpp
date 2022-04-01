/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ModelDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

ModelDescription::ModelDescription() : 
    m_modelVersionHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(ModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_performanceHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_evaluationManifestHasBeenSet(false),
    m_evaluationResultHasBeenSet(false),
    m_evaluationEndTimestampHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_minInferenceUnits(0),
    m_minInferenceUnitsHasBeenSet(false),
    m_maxInferenceUnits(0),
    m_maxInferenceUnitsHasBeenSet(false)
{
}

ModelDescription::ModelDescription(JsonView jsonValue) : 
    m_modelVersionHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(ModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_performanceHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_evaluationManifestHasBeenSet(false),
    m_evaluationResultHasBeenSet(false),
    m_evaluationEndTimestampHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_minInferenceUnits(0),
    m_minInferenceUnitsHasBeenSet(false),
    m_maxInferenceUnits(0),
    m_maxInferenceUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

ModelDescription& ModelDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");

    m_modelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");

    m_modelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Performance"))
  {
    m_performance = jsonValue.GetObject("Performance");

    m_performanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

    m_outputConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationManifest"))
  {
    m_evaluationManifest = jsonValue.GetObject("EvaluationManifest");

    m_evaluationManifestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationResult"))
  {
    m_evaluationResult = jsonValue.GetObject("EvaluationResult");

    m_evaluationResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationEndTimestamp"))
  {
    m_evaluationEndTimestamp = jsonValue.GetDouble("EvaluationEndTimestamp");

    m_evaluationEndTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinInferenceUnits"))
  {
    m_minInferenceUnits = jsonValue.GetInteger("MinInferenceUnits");

    m_minInferenceUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxInferenceUnits"))
  {
    m_maxInferenceUnits = jsonValue.GetInteger("MaxInferenceUnits");

    m_maxInferenceUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelDescription::Jsonize() const
{
  JsonValue payload;

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("ModelVersion", m_modelVersion);

  }

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("ModelArn", m_modelArn);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ModelStatusMapper::GetNameForModelStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_performanceHasBeenSet)
  {
   payload.WithObject("Performance", m_performance.Jsonize());

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_evaluationManifestHasBeenSet)
  {
   payload.WithObject("EvaluationManifest", m_evaluationManifest.Jsonize());

  }

  if(m_evaluationResultHasBeenSet)
  {
   payload.WithObject("EvaluationResult", m_evaluationResult.Jsonize());

  }

  if(m_evaluationEndTimestampHasBeenSet)
  {
   payload.WithDouble("EvaluationEndTimestamp", m_evaluationEndTimestamp.SecondsWithMSPrecision());
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_minInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("MinInferenceUnits", m_minInferenceUnits);

  }

  if(m_maxInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("MaxInferenceUnits", m_maxInferenceUnits);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
