/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/QueueLimitAssociationSummary.h>
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

QueueLimitAssociationSummary::QueueLimitAssociationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

QueueLimitAssociationSummary& QueueLimitAssociationSummary::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("queueId"))
  {
    m_queueId = jsonValue.GetString("queueId");
    m_queueIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("limitId"))
  {
    m_limitId = jsonValue.GetString("limitId");
    m_limitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = QueueLimitAssociationStatusMapper::GetQueueLimitAssociationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue QueueLimitAssociationSummary::Jsonize() const
{
  JsonValue payload;

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

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("queueId", m_queueId);

  }

  if(m_limitIdHasBeenSet)
  {
   payload.WithString("limitId", m_limitId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", QueueLimitAssociationStatusMapper::GetNameForQueueLimitAssociationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
