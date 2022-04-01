/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ScheduledQueryRunSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

ScheduledQueryRunSummary::ScheduledQueryRunSummary() : 
    m_invocationTimeHasBeenSet(false),
    m_triggerTimeHasBeenSet(false),
    m_runStatus(ScheduledQueryRunStatus::NOT_SET),
    m_runStatusHasBeenSet(false),
    m_executionStatsHasBeenSet(false),
    m_errorReportLocationHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

ScheduledQueryRunSummary::ScheduledQueryRunSummary(JsonView jsonValue) : 
    m_invocationTimeHasBeenSet(false),
    m_triggerTimeHasBeenSet(false),
    m_runStatus(ScheduledQueryRunStatus::NOT_SET),
    m_runStatusHasBeenSet(false),
    m_executionStatsHasBeenSet(false),
    m_errorReportLocationHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledQueryRunSummary& ScheduledQueryRunSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvocationTime"))
  {
    m_invocationTime = jsonValue.GetDouble("InvocationTime");

    m_invocationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TriggerTime"))
  {
    m_triggerTime = jsonValue.GetDouble("TriggerTime");

    m_triggerTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunStatus"))
  {
    m_runStatus = ScheduledQueryRunStatusMapper::GetScheduledQueryRunStatusForName(jsonValue.GetString("RunStatus"));

    m_runStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionStats"))
  {
    m_executionStats = jsonValue.GetObject("ExecutionStats");

    m_executionStatsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorReportLocation"))
  {
    m_errorReportLocation = jsonValue.GetObject("ErrorReportLocation");

    m_errorReportLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledQueryRunSummary::Jsonize() const
{
  JsonValue payload;

  if(m_invocationTimeHasBeenSet)
  {
   payload.WithDouble("InvocationTime", m_invocationTime.SecondsWithMSPrecision());
  }

  if(m_triggerTimeHasBeenSet)
  {
   payload.WithDouble("TriggerTime", m_triggerTime.SecondsWithMSPrecision());
  }

  if(m_runStatusHasBeenSet)
  {
   payload.WithString("RunStatus", ScheduledQueryRunStatusMapper::GetNameForScheduledQueryRunStatus(m_runStatus));
  }

  if(m_executionStatsHasBeenSet)
  {
   payload.WithObject("ExecutionStats", m_executionStats.Jsonize());

  }

  if(m_errorReportLocationHasBeenSet)
  {
   payload.WithObject("ErrorReportLocation", m_errorReportLocation.Jsonize());

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
