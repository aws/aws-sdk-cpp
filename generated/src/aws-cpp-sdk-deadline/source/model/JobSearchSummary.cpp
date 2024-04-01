/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobSearchSummary.h>
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

JobSearchSummary::JobSearchSummary() : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobParametersHasBeenSet(false),
    m_lifecycleStatus(JobLifecycleStatus::NOT_SET),
    m_lifecycleStatusHasBeenSet(false),
    m_lifecycleStatusMessageHasBeenSet(false),
    m_maxFailedTasksCount(0),
    m_maxFailedTasksCountHasBeenSet(false),
    m_maxRetriesPerTask(0),
    m_maxRetriesPerTaskHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_targetTaskRunStatus(JobTargetTaskRunStatus::NOT_SET),
    m_targetTaskRunStatusHasBeenSet(false),
    m_taskRunStatus(TaskRunStatus::NOT_SET),
    m_taskRunStatusHasBeenSet(false),
    m_taskRunStatusCountsHasBeenSet(false)
{
}

JobSearchSummary::JobSearchSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobParametersHasBeenSet(false),
    m_lifecycleStatus(JobLifecycleStatus::NOT_SET),
    m_lifecycleStatusHasBeenSet(false),
    m_lifecycleStatusMessageHasBeenSet(false),
    m_maxFailedTasksCount(0),
    m_maxFailedTasksCountHasBeenSet(false),
    m_maxRetriesPerTask(0),
    m_maxRetriesPerTaskHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_targetTaskRunStatus(JobTargetTaskRunStatus::NOT_SET),
    m_targetTaskRunStatusHasBeenSet(false),
    m_taskRunStatus(TaskRunStatus::NOT_SET),
    m_taskRunStatusHasBeenSet(false),
    m_taskRunStatusCountsHasBeenSet(false)
{
  *this = jsonValue;
}

JobSearchSummary& JobSearchSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobParameters"))
  {
    Aws::Map<Aws::String, JsonView> jobParametersJsonMap = jsonValue.GetObject("jobParameters").GetAllObjects();
    for(auto& jobParametersItem : jobParametersJsonMap)
    {
      m_jobParameters[jobParametersItem.first] = jobParametersItem.second.AsObject();
    }
    m_jobParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleStatus"))
  {
    m_lifecycleStatus = JobLifecycleStatusMapper::GetJobLifecycleStatusForName(jsonValue.GetString("lifecycleStatus"));

    m_lifecycleStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleStatusMessage"))
  {
    m_lifecycleStatusMessage = jsonValue.GetString("lifecycleStatusMessage");

    m_lifecycleStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxFailedTasksCount"))
  {
    m_maxFailedTasksCount = jsonValue.GetInteger("maxFailedTasksCount");

    m_maxFailedTasksCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxRetriesPerTask"))
  {
    m_maxRetriesPerTask = jsonValue.GetInteger("maxRetriesPerTask");

    m_maxRetriesPerTaskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queueId"))
  {
    m_queueId = jsonValue.GetString("queueId");

    m_queueIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetTaskRunStatus"))
  {
    m_targetTaskRunStatus = JobTargetTaskRunStatusMapper::GetJobTargetTaskRunStatusForName(jsonValue.GetString("targetTaskRunStatus"));

    m_targetTaskRunStatusHasBeenSet = true;
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

  return *this;
}

JsonValue JobSearchSummary::Jsonize() const
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

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_jobParametersHasBeenSet)
  {
   JsonValue jobParametersJsonMap;
   for(auto& jobParametersItem : m_jobParameters)
   {
     jobParametersJsonMap.WithObject(jobParametersItem.first, jobParametersItem.second.Jsonize());
   }
   payload.WithObject("jobParameters", std::move(jobParametersJsonMap));

  }

  if(m_lifecycleStatusHasBeenSet)
  {
   payload.WithString("lifecycleStatus", JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(m_lifecycleStatus));
  }

  if(m_lifecycleStatusMessageHasBeenSet)
  {
   payload.WithString("lifecycleStatusMessage", m_lifecycleStatusMessage);

  }

  if(m_maxFailedTasksCountHasBeenSet)
  {
   payload.WithInteger("maxFailedTasksCount", m_maxFailedTasksCount);

  }

  if(m_maxRetriesPerTaskHasBeenSet)
  {
   payload.WithInteger("maxRetriesPerTask", m_maxRetriesPerTask);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("queueId", m_queueId);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_targetTaskRunStatusHasBeenSet)
  {
   payload.WithString("targetTaskRunStatus", JobTargetTaskRunStatusMapper::GetNameForJobTargetTaskRunStatus(m_targetTaskRunStatus));
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

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
