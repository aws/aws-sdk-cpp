/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/JobExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

JobExecution::JobExecution() : 
    m_jobIdHasBeenSet(false),
    m_status(JobExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_forceCanceled(false),
    m_forceCanceledHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_thingArnHasBeenSet(false),
    m_queuedAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_executionNumber(0),
    m_executionNumberHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_approximateSecondsBeforeTimedOut(0),
    m_approximateSecondsBeforeTimedOutHasBeenSet(false)
{
}

JobExecution::JobExecution(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_status(JobExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_forceCanceled(false),
    m_forceCanceledHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_thingArnHasBeenSet(false),
    m_queuedAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_executionNumber(0),
    m_executionNumberHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_approximateSecondsBeforeTimedOut(0),
    m_approximateSecondsBeforeTimedOutHasBeenSet(false)
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobExecutionStatusMapper::GetJobExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("forceCanceled"))
  {
    m_forceCanceled = jsonValue.GetBool("forceCanceled");

    m_forceCanceledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusDetails"))
  {
    m_statusDetails = jsonValue.GetObject("statusDetails");

    m_statusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingArn"))
  {
    m_thingArn = jsonValue.GetString("thingArn");

    m_thingArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queuedAt"))
  {
    m_queuedAt = jsonValue.GetDouble("queuedAt");

    m_queuedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetDouble("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionNumber"))
  {
    m_executionNumber = jsonValue.GetInt64("executionNumber");

    m_executionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("versionNumber");

    m_versionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approximateSecondsBeforeTimedOut"))
  {
    m_approximateSecondsBeforeTimedOut = jsonValue.GetInt64("approximateSecondsBeforeTimedOut");

    m_approximateSecondsBeforeTimedOutHasBeenSet = true;
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobExecutionStatusMapper::GetNameForJobExecutionStatus(m_status));
  }

  if(m_forceCanceledHasBeenSet)
  {
   payload.WithBool("forceCanceled", m_forceCanceled);

  }

  if(m_statusDetailsHasBeenSet)
  {
   payload.WithObject("statusDetails", m_statusDetails.Jsonize());

  }

  if(m_thingArnHasBeenSet)
  {
   payload.WithString("thingArn", m_thingArn);

  }

  if(m_queuedAtHasBeenSet)
  {
   payload.WithDouble("queuedAt", m_queuedAt.SecondsWithMSPrecision());
  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_executionNumberHasBeenSet)
  {
   payload.WithInt64("executionNumber", m_executionNumber);

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("versionNumber", m_versionNumber);

  }

  if(m_approximateSecondsBeforeTimedOutHasBeenSet)
  {
   payload.WithInt64("approximateSecondsBeforeTimedOut", m_approximateSecondsBeforeTimedOut);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
