/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TaskRunFilterCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TaskRunFilterCriteria::TaskRunFilterCriteria() : 
    m_taskRunType(TaskType::NOT_SET),
    m_taskRunTypeHasBeenSet(false),
    m_status(TaskStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_startedBeforeHasBeenSet(false),
    m_startedAfterHasBeenSet(false)
{
}

TaskRunFilterCriteria::TaskRunFilterCriteria(JsonView jsonValue) : 
    m_taskRunType(TaskType::NOT_SET),
    m_taskRunTypeHasBeenSet(false),
    m_status(TaskStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_startedBeforeHasBeenSet(false),
    m_startedAfterHasBeenSet(false)
{
  *this = jsonValue;
}

TaskRunFilterCriteria& TaskRunFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TaskRunType"))
  {
    m_taskRunType = TaskTypeMapper::GetTaskTypeForName(jsonValue.GetString("TaskRunType"));

    m_taskRunTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskStatusTypeMapper::GetTaskStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedBefore"))
  {
    m_startedBefore = jsonValue.GetDouble("StartedBefore");

    m_startedBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedAfter"))
  {
    m_startedAfter = jsonValue.GetDouble("StartedAfter");

    m_startedAfterHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskRunFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_taskRunTypeHasBeenSet)
  {
   payload.WithString("TaskRunType", TaskTypeMapper::GetNameForTaskType(m_taskRunType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TaskStatusTypeMapper::GetNameForTaskStatusType(m_status));
  }

  if(m_startedBeforeHasBeenSet)
  {
   payload.WithDouble("StartedBefore", m_startedBefore.SecondsWithMSPrecision());
  }

  if(m_startedAfterHasBeenSet)
  {
   payload.WithDouble("StartedAfter", m_startedAfter.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
