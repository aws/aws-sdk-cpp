/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/TaskSummary.h>
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

TaskSummary::TaskSummary() : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_failureRetryCount(0),
    m_failureRetryCountHasBeenSet(false),
    m_latestSessionActionIdHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_runStatus(TaskRunStatus::NOT_SET),
    m_runStatusHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_targetRunStatus(TaskTargetRunStatus::NOT_SET),
    m_targetRunStatusHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
}

TaskSummary::TaskSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_failureRetryCount(0),
    m_failureRetryCountHasBeenSet(false),
    m_latestSessionActionIdHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_runStatus(TaskRunStatus::NOT_SET),
    m_runStatusHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_targetRunStatus(TaskTargetRunStatus::NOT_SET),
    m_targetRunStatusHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
  *this = jsonValue;
}

TaskSummary& TaskSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("latestSessionActionId"))
  {
    m_latestSessionActionId = jsonValue.GetString("latestSessionActionId");

    m_latestSessionActionIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

    m_updatedByHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_failureRetryCountHasBeenSet)
  {
   payload.WithInteger("failureRetryCount", m_failureRetryCount);

  }

  if(m_latestSessionActionIdHasBeenSet)
  {
   payload.WithString("latestSessionActionId", m_latestSessionActionId);

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

  if(m_runStatusHasBeenSet)
  {
   payload.WithString("runStatus", TaskRunStatusMapper::GetNameForTaskRunStatus(m_runStatus));
  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_targetRunStatusHasBeenSet)
  {
   payload.WithString("targetRunStatus", TaskTargetRunStatusMapper::GetNameForTaskTargetRunStatus(m_targetRunStatus));
  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
