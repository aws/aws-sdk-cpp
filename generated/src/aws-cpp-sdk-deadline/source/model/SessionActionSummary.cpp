/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SessionActionSummary.h>
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

SessionActionSummary::SessionActionSummary() : 
    m_definitionHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_progressPercent(0.0),
    m_progressPercentHasBeenSet(false),
    m_sessionActionIdHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_status(SessionActionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_workerUpdatedAtHasBeenSet(false)
{
}

SessionActionSummary::SessionActionSummary(JsonView jsonValue) : 
    m_definitionHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_progressPercent(0.0),
    m_progressPercentHasBeenSet(false),
    m_sessionActionIdHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_status(SessionActionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_workerUpdatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

SessionActionSummary& SessionActionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetObject("definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");

    m_endedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progressPercent"))
  {
    m_progressPercent = jsonValue.GetDouble("progressPercent");

    m_progressPercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionActionId"))
  {
    m_sessionActionId = jsonValue.GetString("sessionActionId");

    m_sessionActionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SessionActionStatusMapper::GetSessionActionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workerUpdatedAt"))
  {
    m_workerUpdatedAt = jsonValue.GetString("workerUpdatedAt");

    m_workerUpdatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionActionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_progressPercentHasBeenSet)
  {
   payload.WithDouble("progressPercent", m_progressPercent);

  }

  if(m_sessionActionIdHasBeenSet)
  {
   payload.WithString("sessionActionId", m_sessionActionId);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SessionActionStatusMapper::GetNameForSessionActionStatus(m_status));
  }

  if(m_workerUpdatedAtHasBeenSet)
  {
   payload.WithString("workerUpdatedAt", m_workerUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
