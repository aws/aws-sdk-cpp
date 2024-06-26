﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineExecutionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

PipelineExecutionSummary::PipelineExecutionSummary() : 
    m_pipelineExecutionIdHasBeenSet(false),
    m_status(PipelineExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusSummaryHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_sourceRevisionsHasBeenSet(false),
    m_triggerHasBeenSet(false),
    m_stopTriggerHasBeenSet(false),
    m_executionMode(ExecutionMode::NOT_SET),
    m_executionModeHasBeenSet(false),
    m_executionType(ExecutionType::NOT_SET),
    m_executionTypeHasBeenSet(false),
    m_rollbackMetadataHasBeenSet(false)
{
}

PipelineExecutionSummary::PipelineExecutionSummary(JsonView jsonValue)
  : PipelineExecutionSummary()
{
  *this = jsonValue;
}

PipelineExecutionSummary& PipelineExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineExecutionId"))
  {
    m_pipelineExecutionId = jsonValue.GetString("pipelineExecutionId");

    m_pipelineExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PipelineExecutionStatusMapper::GetPipelineExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusSummary"))
  {
    m_statusSummary = jsonValue.GetString("statusSummary");

    m_statusSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceRevisions"))
  {
    Aws::Utils::Array<JsonView> sourceRevisionsJsonList = jsonValue.GetArray("sourceRevisions");
    for(unsigned sourceRevisionsIndex = 0; sourceRevisionsIndex < sourceRevisionsJsonList.GetLength(); ++sourceRevisionsIndex)
    {
      m_sourceRevisions.push_back(sourceRevisionsJsonList[sourceRevisionsIndex].AsObject());
    }
    m_sourceRevisionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trigger"))
  {
    m_trigger = jsonValue.GetObject("trigger");

    m_triggerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopTrigger"))
  {
    m_stopTrigger = jsonValue.GetObject("stopTrigger");

    m_stopTriggerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionMode"))
  {
    m_executionMode = ExecutionModeMapper::GetExecutionModeForName(jsonValue.GetString("executionMode"));

    m_executionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionType"))
  {
    m_executionType = ExecutionTypeMapper::GetExecutionTypeForName(jsonValue.GetString("executionType"));

    m_executionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rollbackMetadata"))
  {
    m_rollbackMetadata = jsonValue.GetObject("rollbackMetadata");

    m_rollbackMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineExecutionIdHasBeenSet)
  {
   payload.WithString("pipelineExecutionId", m_pipelineExecutionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PipelineExecutionStatusMapper::GetNameForPipelineExecutionStatus(m_status));
  }

  if(m_statusSummaryHasBeenSet)
  {
   payload.WithString("statusSummary", m_statusSummary);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_sourceRevisionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceRevisionsJsonList(m_sourceRevisions.size());
   for(unsigned sourceRevisionsIndex = 0; sourceRevisionsIndex < sourceRevisionsJsonList.GetLength(); ++sourceRevisionsIndex)
   {
     sourceRevisionsJsonList[sourceRevisionsIndex].AsObject(m_sourceRevisions[sourceRevisionsIndex].Jsonize());
   }
   payload.WithArray("sourceRevisions", std::move(sourceRevisionsJsonList));

  }

  if(m_triggerHasBeenSet)
  {
   payload.WithObject("trigger", m_trigger.Jsonize());

  }

  if(m_stopTriggerHasBeenSet)
  {
   payload.WithObject("stopTrigger", m_stopTrigger.Jsonize());

  }

  if(m_executionModeHasBeenSet)
  {
   payload.WithString("executionMode", ExecutionModeMapper::GetNameForExecutionMode(m_executionMode));
  }

  if(m_executionTypeHasBeenSet)
  {
   payload.WithString("executionType", ExecutionTypeMapper::GetNameForExecutionType(m_executionType));
  }

  if(m_rollbackMetadataHasBeenSet)
  {
   payload.WithObject("rollbackMetadata", m_rollbackMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
