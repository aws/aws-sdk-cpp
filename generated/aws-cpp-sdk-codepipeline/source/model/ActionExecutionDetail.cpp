/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionExecutionDetail.h>
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

ActionExecutionDetail::ActionExecutionDetail() : 
    m_pipelineExecutionIdHasBeenSet(false),
    m_actionExecutionIdHasBeenSet(false),
    m_pipelineVersion(0),
    m_pipelineVersionHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_status(ActionExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false)
{
}

ActionExecutionDetail::ActionExecutionDetail(JsonView jsonValue) : 
    m_pipelineExecutionIdHasBeenSet(false),
    m_actionExecutionIdHasBeenSet(false),
    m_pipelineVersion(0),
    m_pipelineVersionHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_status(ActionExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false)
{
  *this = jsonValue;
}

ActionExecutionDetail& ActionExecutionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineExecutionId"))
  {
    m_pipelineExecutionId = jsonValue.GetString("pipelineExecutionId");

    m_pipelineExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionExecutionId"))
  {
    m_actionExecutionId = jsonValue.GetString("actionExecutionId");

    m_actionExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineVersion"))
  {
    m_pipelineVersion = jsonValue.GetInteger("pipelineVersion");

    m_pipelineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stageName"))
  {
    m_stageName = jsonValue.GetString("stageName");

    m_stageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

    m_actionNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = ActionExecutionStatusMapper::GetActionExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetObject("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetObject("output");

    m_outputHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionExecutionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineExecutionIdHasBeenSet)
  {
   payload.WithString("pipelineExecutionId", m_pipelineExecutionId);

  }

  if(m_actionExecutionIdHasBeenSet)
  {
   payload.WithString("actionExecutionId", m_actionExecutionId);

  }

  if(m_pipelineVersionHasBeenSet)
  {
   payload.WithInteger("pipelineVersion", m_pipelineVersion);

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("stageName", m_stageName);

  }

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ActionExecutionStatusMapper::GetNameForActionExecutionStatus(m_status));
  }

  if(m_inputHasBeenSet)
  {
   payload.WithObject("input", m_input.Jsonize());

  }

  if(m_outputHasBeenSet)
  {
   payload.WithObject("output", m_output.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
