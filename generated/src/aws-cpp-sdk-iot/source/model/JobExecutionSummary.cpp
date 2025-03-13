/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/JobExecutionSummary.h>
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

JobExecutionSummary::JobExecutionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

JobExecutionSummary& JobExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = JobExecutionStatusMapper::GetJobExecutionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
  if(jsonValue.ValueExists("retryAttempt"))
  {
    m_retryAttempt = jsonValue.GetInteger("retryAttempt");
    m_retryAttemptHasBeenSet = true;
  }
  return *this;
}

JsonValue JobExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobExecutionStatusMapper::GetNameForJobExecutionStatus(m_status));
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

  if(m_retryAttemptHasBeenSet)
  {
   payload.WithInteger("retryAttempt", m_retryAttempt);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
