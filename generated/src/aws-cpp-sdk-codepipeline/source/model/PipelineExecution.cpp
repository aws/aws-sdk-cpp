/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineExecution.h>
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

PipelineExecution::PipelineExecution(JsonView jsonValue)
{
  *this = jsonValue;
}

PipelineExecution& PipelineExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineName"))
  {
    m_pipelineName = jsonValue.GetString("pipelineName");
    m_pipelineNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pipelineVersion"))
  {
    m_pipelineVersion = jsonValue.GetInteger("pipelineVersion");
    m_pipelineVersionHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("artifactRevisions"))
  {
    Aws::Utils::Array<JsonView> artifactRevisionsJsonList = jsonValue.GetArray("artifactRevisions");
    for(unsigned artifactRevisionsIndex = 0; artifactRevisionsIndex < artifactRevisionsJsonList.GetLength(); ++artifactRevisionsIndex)
    {
      m_artifactRevisions.push_back(artifactRevisionsJsonList[artifactRevisionsIndex].AsObject());
    }
    m_artifactRevisionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("variables"))
  {
    Aws::Utils::Array<JsonView> variablesJsonList = jsonValue.GetArray("variables");
    for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
    {
      m_variables.push_back(variablesJsonList[variablesIndex].AsObject());
    }
    m_variablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trigger"))
  {
    m_trigger = jsonValue.GetObject("trigger");
    m_triggerHasBeenSet = true;
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

JsonValue PipelineExecution::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineNameHasBeenSet)
  {
   payload.WithString("pipelineName", m_pipelineName);

  }

  if(m_pipelineVersionHasBeenSet)
  {
   payload.WithInteger("pipelineVersion", m_pipelineVersion);

  }

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

  if(m_artifactRevisionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> artifactRevisionsJsonList(m_artifactRevisions.size());
   for(unsigned artifactRevisionsIndex = 0; artifactRevisionsIndex < artifactRevisionsJsonList.GetLength(); ++artifactRevisionsIndex)
   {
     artifactRevisionsJsonList[artifactRevisionsIndex].AsObject(m_artifactRevisions[artifactRevisionsIndex].Jsonize());
   }
   payload.WithArray("artifactRevisions", std::move(artifactRevisionsJsonList));

  }

  if(m_variablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> variablesJsonList(m_variables.size());
   for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
   {
     variablesJsonList[variablesIndex].AsObject(m_variables[variablesIndex].Jsonize());
   }
   payload.WithArray("variables", std::move(variablesJsonList));

  }

  if(m_triggerHasBeenSet)
  {
   payload.WithObject("trigger", m_trigger.Jsonize());

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
