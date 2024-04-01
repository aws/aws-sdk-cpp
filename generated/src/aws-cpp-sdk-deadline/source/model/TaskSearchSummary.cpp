/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/TaskSearchSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

TaskSearchSummary::TaskSearchSummary() : 
    m_endedAtHasBeenSet(false),
    m_failureRetryCount(0),
    m_failureRetryCountHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_runStatus(TaskRunStatus::NOT_SET),
    m_runStatusHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_targetRunStatus(TaskTargetRunStatus::NOT_SET),
    m_targetRunStatusHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

TaskSearchSummary::TaskSearchSummary(JsonView jsonValue) : 
    m_endedAtHasBeenSet(false),
    m_failureRetryCount(0),
    m_failureRetryCountHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_runStatus(TaskRunStatus::NOT_SET),
    m_runStatusHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_targetRunStatus(TaskTargetRunStatus::NOT_SET),
    m_targetRunStatusHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
  *this = jsonValue;
}

TaskSearchSummary& TaskSearchSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");

    m_endedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureRetryCount"))
  {
    m_failureRetryCount = jsonValue.GetInteger("failureRetryCount");

    m_failureRetryCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queueId"))
  {
    m_queueId = jsonValue.GetString("queueId");

    m_queueIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runStatus"))
  {
    m_runStatus = TaskRunStatusMapper::GetTaskRunStatusForName(jsonValue.GetString("runStatus"));

    m_runStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");

    m_stepIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetRunStatus"))
  {
    m_targetRunStatus = TaskTargetRunStatusMapper::GetTaskTargetRunStatusForName(jsonValue.GetString("targetRunStatus"));

    m_targetRunStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskSearchSummary::Jsonize() const
{
  JsonValue payload;

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_failureRetryCountHasBeenSet)
  {
   payload.WithInteger("failureRetryCount", m_failureRetryCount);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("queueId", m_queueId);

  }

  if(m_runStatusHasBeenSet)
  {
   payload.WithString("runStatus", TaskRunStatusMapper::GetNameForTaskRunStatus(m_runStatus));
  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("stepId", m_stepId);

  }

  if(m_targetRunStatusHasBeenSet)
  {
   payload.WithString("targetRunStatus", TaskTargetRunStatusMapper::GetNameForTaskTargetRunStatus(m_targetRunStatus));
  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
