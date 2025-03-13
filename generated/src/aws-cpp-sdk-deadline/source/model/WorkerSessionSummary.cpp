/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/WorkerSessionSummary.h>
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

WorkerSessionSummary::WorkerSessionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkerSessionSummary& WorkerSessionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queueId"))
  {
    m_queueId = jsonValue.GetString("queueId");
    m_queueIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifecycleStatus"))
  {
    m_lifecycleStatus = SessionLifecycleStatusMapper::GetSessionLifecycleStatusForName(jsonValue.GetString("lifecycleStatus"));
    m_lifecycleStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetLifecycleStatus"))
  {
    m_targetLifecycleStatus = SessionLifecycleTargetStatusMapper::GetSessionLifecycleTargetStatusForName(jsonValue.GetString("targetLifecycleStatus"));
    m_targetLifecycleStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkerSessionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("queueId", m_queueId);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lifecycleStatusHasBeenSet)
  {
   payload.WithString("lifecycleStatus", SessionLifecycleStatusMapper::GetNameForSessionLifecycleStatus(m_lifecycleStatus));
  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_targetLifecycleStatusHasBeenSet)
  {
   payload.WithString("targetLifecycleStatus", SessionLifecycleTargetStatusMapper::GetNameForSessionLifecycleTargetStatus(m_targetLifecycleStatus));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
