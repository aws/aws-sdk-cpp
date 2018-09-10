﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_startTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_sourceRevisionsHasBeenSet(false)
{
}

PipelineExecutionSummary::PipelineExecutionSummary(JsonView jsonValue) : 
    m_pipelineExecutionIdHasBeenSet(false),
    m_status(PipelineExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_sourceRevisionsHasBeenSet(false)
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
    Array<JsonView> sourceRevisionsJsonList = jsonValue.GetArray("sourceRevisions");
    for(unsigned sourceRevisionsIndex = 0; sourceRevisionsIndex < sourceRevisionsJsonList.GetLength(); ++sourceRevisionsIndex)
    {
      m_sourceRevisions.push_back(sourceRevisionsJsonList[sourceRevisionsIndex].AsObject());
    }
    m_sourceRevisionsHasBeenSet = true;
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
   Array<JsonValue> sourceRevisionsJsonList(m_sourceRevisions.size());
   for(unsigned sourceRevisionsIndex = 0; sourceRevisionsIndex < sourceRevisionsJsonList.GetLength(); ++sourceRevisionsIndex)
   {
     sourceRevisionsJsonList[sourceRevisionsIndex].AsObject(m_sourceRevisions[sourceRevisionsIndex].Jsonize());
   }
   payload.WithArray("sourceRevisions", std::move(sourceRevisionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
