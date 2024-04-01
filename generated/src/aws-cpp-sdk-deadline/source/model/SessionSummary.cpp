/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SessionSummary.h>
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

SessionSummary::SessionSummary() : 
    m_endedAtHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_lifecycleStatus(SessionLifecycleStatus::NOT_SET),
    m_lifecycleStatusHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_targetLifecycleStatus(SessionLifecycleTargetStatus::NOT_SET),
    m_targetLifecycleStatusHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false),
    m_workerIdHasBeenSet(false)
{
}

SessionSummary::SessionSummary(JsonView jsonValue) : 
    m_endedAtHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_lifecycleStatus(SessionLifecycleStatus::NOT_SET),
    m_lifecycleStatusHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_targetLifecycleStatus(SessionLifecycleTargetStatus::NOT_SET),
    m_targetLifecycleStatusHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false),
    m_workerIdHasBeenSet(false)
{
  *this = jsonValue;
}

SessionSummary& SessionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");

    m_endedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fleetId"))
  {
    m_fleetId = jsonValue.GetString("fleetId");

    m_fleetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleStatus"))
  {
    m_lifecycleStatus = SessionLifecycleStatusMapper::GetSessionLifecycleStatusForName(jsonValue.GetString("lifecycleStatus"));

    m_lifecycleStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

    m_sessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetLifecycleStatus"))
  {
    m_targetLifecycleStatus = SessionLifecycleTargetStatusMapper::GetSessionLifecycleTargetStatusForName(jsonValue.GetString("targetLifecycleStatus"));

    m_targetLifecycleStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

    m_updatedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workerId"))
  {
    m_workerId = jsonValue.GetString("workerId");

    m_workerIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("fleetId", m_fleetId);

  }

  if(m_lifecycleStatusHasBeenSet)
  {
   payload.WithString("lifecycleStatus", SessionLifecycleStatusMapper::GetNameForSessionLifecycleStatus(m_lifecycleStatus));
  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_targetLifecycleStatusHasBeenSet)
  {
   payload.WithString("targetLifecycleStatus", SessionLifecycleTargetStatusMapper::GetNameForSessionLifecycleTargetStatus(m_targetLifecycleStatus));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("workerId", m_workerId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
