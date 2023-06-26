/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/InferenceSchedulerSummary.h>
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

InferenceSchedulerSummary::InferenceSchedulerSummary() : 
    m_modelNameHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_inferenceSchedulerNameHasBeenSet(false),
    m_inferenceSchedulerArnHasBeenSet(false),
    m_status(InferenceSchedulerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_dataDelayOffsetInMinutes(0),
    m_dataDelayOffsetInMinutesHasBeenSet(false),
    m_dataUploadFrequency(DataUploadFrequency::NOT_SET),
    m_dataUploadFrequencyHasBeenSet(false),
    m_latestInferenceResult(LatestInferenceResult::NOT_SET),
    m_latestInferenceResultHasBeenSet(false)
{
}

InferenceSchedulerSummary::InferenceSchedulerSummary(JsonView jsonValue) : 
    m_modelNameHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_inferenceSchedulerNameHasBeenSet(false),
    m_inferenceSchedulerArnHasBeenSet(false),
    m_status(InferenceSchedulerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_dataDelayOffsetInMinutes(0),
    m_dataDelayOffsetInMinutesHasBeenSet(false),
    m_dataUploadFrequency(DataUploadFrequency::NOT_SET),
    m_dataUploadFrequencyHasBeenSet(false),
    m_latestInferenceResult(LatestInferenceResult::NOT_SET),
    m_latestInferenceResultHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceSchedulerSummary& InferenceSchedulerSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = InferenceSchedulerStatusMapper::GetInferenceSchedulerStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataDelayOffsetInMinutes"))
  {
    m_dataDelayOffsetInMinutes = jsonValue.GetInt64("DataDelayOffsetInMinutes");

    m_dataDelayOffsetInMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataUploadFrequency"))
  {
    m_dataUploadFrequency = DataUploadFrequencyMapper::GetDataUploadFrequencyForName(jsonValue.GetString("DataUploadFrequency"));

    m_dataUploadFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestInferenceResult"))
  {
    m_latestInferenceResult = LatestInferenceResultMapper::GetLatestInferenceResultForName(jsonValue.GetString("LatestInferenceResult"));

    m_latestInferenceResultHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceSchedulerSummary::Jsonize() const
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", InferenceSchedulerStatusMapper::GetNameForInferenceSchedulerStatus(m_status));
  }

  if(m_dataDelayOffsetInMinutesHasBeenSet)
  {
   payload.WithInt64("DataDelayOffsetInMinutes", m_dataDelayOffsetInMinutes);

  }

  if(m_dataUploadFrequencyHasBeenSet)
  {
   payload.WithString("DataUploadFrequency", DataUploadFrequencyMapper::GetNameForDataUploadFrequency(m_dataUploadFrequency));
  }

  if(m_latestInferenceResultHasBeenSet)
  {
   payload.WithString("LatestInferenceResult", LatestInferenceResultMapper::GetNameForLatestInferenceResult(m_latestInferenceResult));
  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
