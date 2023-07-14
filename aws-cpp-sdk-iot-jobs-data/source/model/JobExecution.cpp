/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-jobs-data/model/JobExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTJobsDataPlane
{
namespace Model
{

JobExecution::JobExecution() : 
    m_jobIdHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_status(JobExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_queuedAt(0),
    m_queuedAtHasBeenSet(false),
    m_startedAt(0),
    m_startedAtHasBeenSet(false),
    m_lastUpdatedAt(0),
    m_lastUpdatedAtHasBeenSet(false),
    m_approximateSecondsBeforeTimedOut(0),
    m_approximateSecondsBeforeTimedOutHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_executionNumber(0),
    m_executionNumberHasBeenSet(false),
    m_jobDocumentHasBeenSet(false)
{
}

JobExecution::JobExecution(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_status(JobExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_queuedAt(0),
    m_queuedAtHasBeenSet(false),
    m_startedAt(0),
    m_startedAtHasBeenSet(false),
    m_lastUpdatedAt(0),
    m_lastUpdatedAtHasBeenSet(false),
    m_approximateSecondsBeforeTimedOut(0),
    m_approximateSecondsBeforeTimedOutHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_executionNumber(0),
    m_executionNumberHasBeenSet(false),
    m_jobDocumentHasBeenSet(false)
{
  *this = jsonValue;
}

JobExecution& JobExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");

    m_thingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobExecutionStatusMapper::GetJobExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusDetails"))
  {
    Aws::Map<Aws::String, JsonView> statusDetailsJsonMap = jsonValue.GetObject("statusDetails").GetAllObjects();
    for(auto& statusDetailsItem : statusDetailsJsonMap)
    {
      m_statusDetails[statusDetailsItem.first] = statusDetailsItem.second.AsString();
    }
    m_statusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queuedAt"))
  {
    m_queuedAt = jsonValue.GetInt64("queuedAt");

    m_queuedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetInt64("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetInt64("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approximateSecondsBeforeTimedOut"))
  {
    m_approximateSecondsBeforeTimedOut = jsonValue.GetInt64("approximateSecondsBeforeTimedOut");

    m_approximateSecondsBeforeTimedOutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("versionNumber");

    m_versionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionNumber"))
  {
    m_executionNumber = jsonValue.GetInt64("executionNumber");

    m_executionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobDocument"))
  {
    m_jobDocument = jsonValue.GetString("jobDocument");

    m_jobDocumentHasBeenSet = true;
  }

  return *this;
}

JsonValue JobExecution::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobExecutionStatusMapper::GetNameForJobExecutionStatus(m_status));
  }

  if(m_statusDetailsHasBeenSet)
  {
   JsonValue statusDetailsJsonMap;
   for(auto& statusDetailsItem : m_statusDetails)
   {
     statusDetailsJsonMap.WithString(statusDetailsItem.first, statusDetailsItem.second);
   }
   payload.WithObject("statusDetails", std::move(statusDetailsJsonMap));

  }

  if(m_queuedAtHasBeenSet)
  {
   payload.WithInt64("queuedAt", m_queuedAt);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithInt64("startedAt", m_startedAt);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithInt64("lastUpdatedAt", m_lastUpdatedAt);

  }

  if(m_approximateSecondsBeforeTimedOutHasBeenSet)
  {
   payload.WithInt64("approximateSecondsBeforeTimedOut", m_approximateSecondsBeforeTimedOut);

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("versionNumber", m_versionNumber);

  }

  if(m_executionNumberHasBeenSet)
  {
   payload.WithInt64("executionNumber", m_executionNumber);

  }

  if(m_jobDocumentHasBeenSet)
  {
   payload.WithString("jobDocument", m_jobDocument);

  }

  return payload;
}

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
