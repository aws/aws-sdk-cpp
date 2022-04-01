/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/ExecutionStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

ExecutionStatus::ExecutionStatus() : 
    m_timestampHasBeenSet(false),
    m_status(AnomalyDetectionTaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

ExecutionStatus::ExecutionStatus(JsonView jsonValue) : 
    m_timestampHasBeenSet(false),
    m_status(AnomalyDetectionTaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionStatus& ExecutionStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetString("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AnomalyDetectionTaskStatusMapper::GetAnomalyDetectionTaskStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithString("Timestamp", m_timestamp);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AnomalyDetectionTaskStatusMapper::GetNameForAnomalyDetectionTaskStatus(m_status));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
