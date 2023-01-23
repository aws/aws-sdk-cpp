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

PipelineExecution::PipelineExecution() : 
    m_pipelineNameHasBeenSet(false),
    m_pipelineVersion(0),
    m_pipelineVersionHasBeenSet(false),
    m_pipelineExecutionIdHasBeenSet(false),
    m_status(PipelineExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusSummaryHasBeenSet(false),
    m_artifactRevisionsHasBeenSet(false)
{
}

PipelineExecution::PipelineExecution(JsonView jsonValue) : 
    m_pipelineNameHasBeenSet(false),
    m_pipelineVersion(0),
    m_pipelineVersionHasBeenSet(false),
    m_pipelineExecutionIdHasBeenSet(false),
    m_status(PipelineExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusSummaryHasBeenSet(false),
    m_artifactRevisionsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
