/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/GroupOrderingIdSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

GroupOrderingIdSummary::GroupOrderingIdSummary() : 
    m_status(PrincipalMappingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_receivedAtHasBeenSet(false),
    m_orderingId(0),
    m_orderingIdHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

GroupOrderingIdSummary::GroupOrderingIdSummary(JsonView jsonValue) : 
    m_status(PrincipalMappingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_receivedAtHasBeenSet(false),
    m_orderingId(0),
    m_orderingIdHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

GroupOrderingIdSummary& GroupOrderingIdSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = PrincipalMappingStatusMapper::GetPrincipalMappingStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReceivedAt"))
  {
    m_receivedAt = jsonValue.GetDouble("ReceivedAt");

    m_receivedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrderingId"))
  {
    m_orderingId = jsonValue.GetInt64("OrderingId");

    m_orderingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupOrderingIdSummary::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PrincipalMappingStatusMapper::GetNameForPrincipalMappingStatus(m_status));
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_receivedAtHasBeenSet)
  {
   payload.WithDouble("ReceivedAt", m_receivedAt.SecondsWithMSPrecision());
  }

  if(m_orderingIdHasBeenSet)
  {
   payload.WithInt64("OrderingId", m_orderingId);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
