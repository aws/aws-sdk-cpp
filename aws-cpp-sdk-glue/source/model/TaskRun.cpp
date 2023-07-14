/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TaskRun.h>
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

TaskRun::TaskRun() : 
    m_transformIdHasBeenSet(false),
    m_taskRunIdHasBeenSet(false),
    m_status(TaskStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_errorStringHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_completedOnHasBeenSet(false),
    m_executionTime(0),
    m_executionTimeHasBeenSet(false)
{
}

TaskRun::TaskRun(JsonView jsonValue) : 
    m_transformIdHasBeenSet(false),
    m_taskRunIdHasBeenSet(false),
    m_status(TaskStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_errorStringHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_completedOnHasBeenSet(false),
    m_executionTime(0),
    m_executionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

TaskRun& TaskRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransformId"))
  {
    m_transformId = jsonValue.GetString("TransformId");

    m_transformIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskRunId"))
  {
    m_taskRunId = jsonValue.GetString("TaskRunId");

    m_taskRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskStatusTypeMapper::GetTaskStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogGroupName"))
  {
    m_logGroupName = jsonValue.GetString("LogGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Properties"))
  {
    m_properties = jsonValue.GetObject("Properties");

    m_propertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorString"))
  {
    m_errorString = jsonValue.GetString("ErrorString");

    m_errorStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");

    m_startedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");

    m_lastModifiedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");

    m_completedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionTime"))
  {
    m_executionTime = jsonValue.GetInteger("ExecutionTime");

    m_executionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskRun::Jsonize() const
{
  JsonValue payload;

  if(m_transformIdHasBeenSet)
  {
   payload.WithString("TransformId", m_transformId);

  }

  if(m_taskRunIdHasBeenSet)
  {
   payload.WithString("TaskRunId", m_taskRunId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TaskStatusTypeMapper::GetNameForTaskStatusType(m_status));
  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("LogGroupName", m_logGroupName);

  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithObject("Properties", m_properties.Jsonize());

  }

  if(m_errorStringHasBeenSet)
  {
   payload.WithString("ErrorString", m_errorString);

  }

  if(m_startedOnHasBeenSet)
  {
   payload.WithDouble("StartedOn", m_startedOn.SecondsWithMSPrecision());
  }

  if(m_lastModifiedOnHasBeenSet)
  {
   payload.WithDouble("LastModifiedOn", m_lastModifiedOn.SecondsWithMSPrecision());
  }

  if(m_completedOnHasBeenSet)
  {
   payload.WithDouble("CompletedOn", m_completedOn.SecondsWithMSPrecision());
  }

  if(m_executionTimeHasBeenSet)
  {
   payload.WithInteger("ExecutionTime", m_executionTime);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
