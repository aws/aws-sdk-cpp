/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaTaskExecutionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

OtaTaskExecutionSummary::OtaTaskExecutionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

OtaTaskExecutionSummary& OtaTaskExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionNumber"))
  {
    m_executionNumber = jsonValue.GetInt64("ExecutionNumber");
    m_executionNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueuedAt"))
  {
    m_queuedAt = jsonValue.GetDouble("QueuedAt");
    m_queuedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetryAttempt"))
  {
    m_retryAttempt = jsonValue.GetInteger("RetryAttempt");
    m_retryAttemptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetDouble("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = OtaTaskExecutionStatusMapper::GetOtaTaskExecutionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue OtaTaskExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_executionNumberHasBeenSet)
  {
   payload.WithInt64("ExecutionNumber", m_executionNumber);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_queuedAtHasBeenSet)
  {
   payload.WithDouble("QueuedAt", m_queuedAt.SecondsWithMSPrecision());
  }

  if(m_retryAttemptHasBeenSet)
  {
   payload.WithInteger("RetryAttempt", m_retryAttempt);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("StartedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OtaTaskExecutionStatusMapper::GetNameForOtaTaskExecutionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
