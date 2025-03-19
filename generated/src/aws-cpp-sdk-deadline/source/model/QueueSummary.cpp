/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/QueueSummary.h>
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

QueueSummary::QueueSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

QueueSummary& QueueSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("farmId"))
  {
    m_farmId = jsonValue.GetString("farmId");
    m_farmIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queueId"))
  {
    m_queueId = jsonValue.GetString("queueId");
    m_queueIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = QueueStatusMapper::GetQueueStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultBudgetAction"))
  {
    m_defaultBudgetAction = DefaultQueueBudgetActionMapper::GetDefaultQueueBudgetActionForName(jsonValue.GetString("defaultBudgetAction"));
    m_defaultBudgetActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blockedReason"))
  {
    m_blockedReason = QueueBlockedReasonMapper::GetQueueBlockedReasonForName(jsonValue.GetString("blockedReason"));
    m_blockedReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
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
  return *this;
}

JsonValue QueueSummary::Jsonize() const
{
  JsonValue payload;

  if(m_farmIdHasBeenSet)
  {
   payload.WithString("farmId", m_farmId);

  }

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("queueId", m_queueId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", QueueStatusMapper::GetNameForQueueStatus(m_status));
  }

  if(m_defaultBudgetActionHasBeenSet)
  {
   payload.WithString("defaultBudgetAction", DefaultQueueBudgetActionMapper::GetNameForDefaultQueueBudgetAction(m_defaultBudgetAction));
  }

  if(m_blockedReasonHasBeenSet)
  {
   payload.WithString("blockedReason", QueueBlockedReasonMapper::GetNameForQueueBlockedReason(m_blockedReason));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
