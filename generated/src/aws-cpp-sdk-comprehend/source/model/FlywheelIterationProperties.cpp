/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/FlywheelIterationProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

FlywheelIterationProperties::FlywheelIterationProperties() : 
    m_flywheelArnHasBeenSet(false),
    m_flywheelIterationIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_status(FlywheelIterationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_evaluatedModelArnHasBeenSet(false),
    m_evaluatedModelMetricsHasBeenSet(false),
    m_trainedModelArnHasBeenSet(false),
    m_trainedModelMetricsHasBeenSet(false),
    m_evaluationManifestS3PrefixHasBeenSet(false)
{
}

FlywheelIterationProperties::FlywheelIterationProperties(JsonView jsonValue) : 
    m_flywheelArnHasBeenSet(false),
    m_flywheelIterationIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_status(FlywheelIterationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_evaluatedModelArnHasBeenSet(false),
    m_evaluatedModelMetricsHasBeenSet(false),
    m_trainedModelArnHasBeenSet(false),
    m_trainedModelMetricsHasBeenSet(false),
    m_evaluationManifestS3PrefixHasBeenSet(false)
{
  *this = jsonValue;
}

FlywheelIterationProperties& FlywheelIterationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FlywheelArn"))
  {
    m_flywheelArn = jsonValue.GetString("FlywheelArn");

    m_flywheelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlywheelIterationId"))
  {
    m_flywheelIterationId = jsonValue.GetString("FlywheelIterationId");

    m_flywheelIterationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = FlywheelIterationStatusMapper::GetFlywheelIterationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluatedModelArn"))
  {
    m_evaluatedModelArn = jsonValue.GetString("EvaluatedModelArn");

    m_evaluatedModelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluatedModelMetrics"))
  {
    m_evaluatedModelMetrics = jsonValue.GetObject("EvaluatedModelMetrics");

    m_evaluatedModelMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainedModelArn"))
  {
    m_trainedModelArn = jsonValue.GetString("TrainedModelArn");

    m_trainedModelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainedModelMetrics"))
  {
    m_trainedModelMetrics = jsonValue.GetObject("TrainedModelMetrics");

    m_trainedModelMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationManifestS3Prefix"))
  {
    m_evaluationManifestS3Prefix = jsonValue.GetString("EvaluationManifestS3Prefix");

    m_evaluationManifestS3PrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue FlywheelIterationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_flywheelArnHasBeenSet)
  {
   payload.WithString("FlywheelArn", m_flywheelArn);

  }

  if(m_flywheelIterationIdHasBeenSet)
  {
   payload.WithString("FlywheelIterationId", m_flywheelIterationId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FlywheelIterationStatusMapper::GetNameForFlywheelIterationStatus(m_status));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_evaluatedModelArnHasBeenSet)
  {
   payload.WithString("EvaluatedModelArn", m_evaluatedModelArn);

  }

  if(m_evaluatedModelMetricsHasBeenSet)
  {
   payload.WithObject("EvaluatedModelMetrics", m_evaluatedModelMetrics.Jsonize());

  }

  if(m_trainedModelArnHasBeenSet)
  {
   payload.WithString("TrainedModelArn", m_trainedModelArn);

  }

  if(m_trainedModelMetricsHasBeenSet)
  {
   payload.WithObject("TrainedModelMetrics", m_trainedModelMetrics.Jsonize());

  }

  if(m_evaluationManifestS3PrefixHasBeenSet)
  {
   payload.WithString("EvaluationManifestS3Prefix", m_evaluationManifestS3Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
