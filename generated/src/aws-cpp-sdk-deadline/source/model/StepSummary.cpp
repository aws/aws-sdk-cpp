/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StepSummary.h>
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

StepSummary::StepSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

StepSummary& StepSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");
    m_stepIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifecycleStatus"))
  {
    m_lifecycleStatus = StepLifecycleStatusMapper::GetStepLifecycleStatusForName(jsonValue.GetString("lifecycleStatus"));
    m_lifecycleStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifecycleStatusMessage"))
  {
    m_lifecycleStatusMessage = jsonValue.GetString("lifecycleStatusMessage");
    m_lifecycleStatusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskRunStatus"))
  {
    m_taskRunStatus = TaskRunStatusMapper::GetTaskRunStatusForName(jsonValue.GetString("taskRunStatus"));
    m_taskRunStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskRunStatusCounts"))
  {
    Aws::Map<Aws::String, JsonView> taskRunStatusCountsJsonMap = jsonValue.GetObject("taskRunStatusCounts").GetAllObjects();
    for(auto& taskRunStatusCountsItem : taskRunStatusCountsJsonMap)
    {
      m_taskRunStatusCounts[TaskRunStatusMapper::GetTaskRunStatusForName(taskRunStatusCountsItem.first)] = taskRunStatusCountsItem.second.AsInteger();
    }
    m_taskRunStatusCountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskFailureRetryCount"))
  {
    m_taskFailureRetryCount = jsonValue.GetInteger("taskFailureRetryCount");
    m_taskFailureRetryCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetTaskRunStatus"))
  {
    m_targetTaskRunStatus = StepTargetTaskRunStatusMapper::GetStepTargetTaskRunStatusForName(jsonValue.GetString("targetTaskRunStatus"));
    m_targetTaskRunStatusHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dependencyCounts"))
  {
    m_dependencyCounts = jsonValue.GetObject("dependencyCounts");
    m_dependencyCountsHasBeenSet = true;
  }
  return *this;
}

JsonValue StepSummary::Jsonize() const
{
  JsonValue payload;

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("stepId", m_stepId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_lifecycleStatusHasBeenSet)
  {
   payload.WithString("lifecycleStatus", StepLifecycleStatusMapper::GetNameForStepLifecycleStatus(m_lifecycleStatus));
  }

  if(m_lifecycleStatusMessageHasBeenSet)
  {
   payload.WithString("lifecycleStatusMessage", m_lifecycleStatusMessage);

  }

  if(m_taskRunStatusHasBeenSet)
  {
   payload.WithString("taskRunStatus", TaskRunStatusMapper::GetNameForTaskRunStatus(m_taskRunStatus));
  }

  if(m_taskRunStatusCountsHasBeenSet)
  {
   JsonValue taskRunStatusCountsJsonMap;
   for(auto& taskRunStatusCountsItem : m_taskRunStatusCounts)
   {
     taskRunStatusCountsJsonMap.WithInteger(TaskRunStatusMapper::GetNameForTaskRunStatus(taskRunStatusCountsItem.first), taskRunStatusCountsItem.second);
   }
   payload.WithObject("taskRunStatusCounts", std::move(taskRunStatusCountsJsonMap));

  }

  if(m_taskFailureRetryCountHasBeenSet)
  {
   payload.WithInteger("taskFailureRetryCount", m_taskFailureRetryCount);

  }

  if(m_targetTaskRunStatusHasBeenSet)
  {
   payload.WithString("targetTaskRunStatus", StepTargetTaskRunStatusMapper::GetNameForStepTargetTaskRunStatus(m_targetTaskRunStatus));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dependencyCountsHasBeenSet)
  {
   payload.WithObject("dependencyCounts", m_dependencyCounts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
