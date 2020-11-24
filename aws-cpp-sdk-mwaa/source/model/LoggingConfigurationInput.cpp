/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/LoggingConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MWAA
{
namespace Model
{

LoggingConfigurationInput::LoggingConfigurationInput() : 
    m_dagProcessingLogsHasBeenSet(false),
    m_schedulerLogsHasBeenSet(false),
    m_taskLogsHasBeenSet(false),
    m_webserverLogsHasBeenSet(false),
    m_workerLogsHasBeenSet(false)
{
}

LoggingConfigurationInput::LoggingConfigurationInput(JsonView jsonValue) : 
    m_dagProcessingLogsHasBeenSet(false),
    m_schedulerLogsHasBeenSet(false),
    m_taskLogsHasBeenSet(false),
    m_webserverLogsHasBeenSet(false),
    m_workerLogsHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingConfigurationInput& LoggingConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DagProcessingLogs"))
  {
    m_dagProcessingLogs = jsonValue.GetObject("DagProcessingLogs");

    m_dagProcessingLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchedulerLogs"))
  {
    m_schedulerLogs = jsonValue.GetObject("SchedulerLogs");

    m_schedulerLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskLogs"))
  {
    m_taskLogs = jsonValue.GetObject("TaskLogs");

    m_taskLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebserverLogs"))
  {
    m_webserverLogs = jsonValue.GetObject("WebserverLogs");

    m_webserverLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkerLogs"))
  {
    m_workerLogs = jsonValue.GetObject("WorkerLogs");

    m_workerLogsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_dagProcessingLogsHasBeenSet)
  {
   payload.WithObject("DagProcessingLogs", m_dagProcessingLogs.Jsonize());

  }

  if(m_schedulerLogsHasBeenSet)
  {
   payload.WithObject("SchedulerLogs", m_schedulerLogs.Jsonize());

  }

  if(m_taskLogsHasBeenSet)
  {
   payload.WithObject("TaskLogs", m_taskLogs.Jsonize());

  }

  if(m_webserverLogsHasBeenSet)
  {
   payload.WithObject("WebserverLogs", m_webserverLogs.Jsonize());

  }

  if(m_workerLogsHasBeenSet)
  {
   payload.WithObject("WorkerLogs", m_workerLogs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MWAA
} // namespace Aws
