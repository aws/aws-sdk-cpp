/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/InferenceExecutionSummary.h>
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

InferenceExecutionSummary::InferenceExecutionSummary() : 
    m_modelNameHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_inferenceSchedulerNameHasBeenSet(false),
    m_inferenceSchedulerArnHasBeenSet(false),
    m_scheduledStartTimeHasBeenSet(false),
    m_dataStartTimeHasBeenSet(false),
    m_dataEndTimeHasBeenSet(false),
    m_dataInputConfigurationHasBeenSet(false),
    m_dataOutputConfigurationHasBeenSet(false),
    m_customerResultObjectHasBeenSet(false),
    m_status(InferenceExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failedReasonHasBeenSet(false),
    m_modelVersion(0),
    m_modelVersionHasBeenSet(false),
    m_modelVersionArnHasBeenSet(false)
{
}

InferenceExecutionSummary::InferenceExecutionSummary(JsonView jsonValue) : 
    m_modelNameHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_inferenceSchedulerNameHasBeenSet(false),
    m_inferenceSchedulerArnHasBeenSet(false),
    m_scheduledStartTimeHasBeenSet(false),
    m_dataStartTimeHasBeenSet(false),
    m_dataEndTimeHasBeenSet(false),
    m_dataInputConfigurationHasBeenSet(false),
    m_dataOutputConfigurationHasBeenSet(false),
    m_customerResultObjectHasBeenSet(false),
    m_status(InferenceExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failedReasonHasBeenSet(false),
    m_modelVersion(0),
    m_modelVersionHasBeenSet(false),
    m_modelVersionArnHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceExecutionSummary& InferenceExecutionSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("InferenceSchedulerName"))
  {
    m_inferenceSchedulerName = jsonValue.GetString("InferenceSchedulerName");

    m_inferenceSchedulerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceSchedulerArn"))
  {
    m_inferenceSchedulerArn = jsonValue.GetString("InferenceSchedulerArn");

    m_inferenceSchedulerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduledStartTime"))
  {
    m_scheduledStartTime = jsonValue.GetDouble("ScheduledStartTime");

    m_scheduledStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataStartTime"))
  {
    m_dataStartTime = jsonValue.GetDouble("DataStartTime");

    m_dataStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataEndTime"))
  {
    m_dataEndTime = jsonValue.GetDouble("DataEndTime");

    m_dataEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataInputConfiguration"))
  {
    m_dataInputConfiguration = jsonValue.GetObject("DataInputConfiguration");

    m_dataInputConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataOutputConfiguration"))
  {
    m_dataOutputConfiguration = jsonValue.GetObject("DataOutputConfiguration");

    m_dataOutputConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerResultObject"))
  {
    m_customerResultObject = jsonValue.GetObject("CustomerResultObject");

    m_customerResultObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = InferenceExecutionStatusMapper::GetInferenceExecutionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailedReason"))
  {
    m_failedReason = jsonValue.GetString("FailedReason");

    m_failedReasonHasBeenSet = true;
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

  return *this;
}

JsonValue InferenceExecutionSummary::Jsonize() const
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

  if(m_inferenceSchedulerNameHasBeenSet)
  {
   payload.WithString("InferenceSchedulerName", m_inferenceSchedulerName);

  }

  if(m_inferenceSchedulerArnHasBeenSet)
  {
   payload.WithString("InferenceSchedulerArn", m_inferenceSchedulerArn);

  }

  if(m_scheduledStartTimeHasBeenSet)
  {
   payload.WithDouble("ScheduledStartTime", m_scheduledStartTime.SecondsWithMSPrecision());
  }

  if(m_dataStartTimeHasBeenSet)
  {
   payload.WithDouble("DataStartTime", m_dataStartTime.SecondsWithMSPrecision());
  }

  if(m_dataEndTimeHasBeenSet)
  {
   payload.WithDouble("DataEndTime", m_dataEndTime.SecondsWithMSPrecision());
  }

  if(m_dataInputConfigurationHasBeenSet)
  {
   payload.WithObject("DataInputConfiguration", m_dataInputConfiguration.Jsonize());

  }

  if(m_dataOutputConfigurationHasBeenSet)
  {
   payload.WithObject("DataOutputConfiguration", m_dataOutputConfiguration.Jsonize());

  }

  if(m_customerResultObjectHasBeenSet)
  {
   payload.WithObject("CustomerResultObject", m_customerResultObject.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", InferenceExecutionStatusMapper::GetNameForInferenceExecutionStatus(m_status));
  }

  if(m_failedReasonHasBeenSet)
  {
   payload.WithString("FailedReason", m_failedReason);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithInt64("ModelVersion", m_modelVersion);

  }

  if(m_modelVersionArnHasBeenSet)
  {
   payload.WithString("ModelVersionArn", m_modelVersionArn);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
