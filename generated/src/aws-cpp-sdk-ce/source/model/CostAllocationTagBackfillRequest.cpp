/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostAllocationTagBackfillRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

CostAllocationTagBackfillRequest::CostAllocationTagBackfillRequest() : 
    m_backfillFromHasBeenSet(false),
    m_requestedAtHasBeenSet(false),
    m_completedAtHasBeenSet(false),
    m_backfillStatus(CostAllocationTagBackfillStatus::NOT_SET),
    m_backfillStatusHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
}

CostAllocationTagBackfillRequest::CostAllocationTagBackfillRequest(JsonView jsonValue) : 
    m_backfillFromHasBeenSet(false),
    m_requestedAtHasBeenSet(false),
    m_completedAtHasBeenSet(false),
    m_backfillStatus(CostAllocationTagBackfillStatus::NOT_SET),
    m_backfillStatusHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

CostAllocationTagBackfillRequest& CostAllocationTagBackfillRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackfillFrom"))
  {
    m_backfillFrom = jsonValue.GetString("BackfillFrom");

    m_backfillFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestedAt"))
  {
    m_requestedAt = jsonValue.GetString("RequestedAt");

    m_requestedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletedAt"))
  {
    m_completedAt = jsonValue.GetString("CompletedAt");

    m_completedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackfillStatus"))
  {
    m_backfillStatus = CostAllocationTagBackfillStatusMapper::GetCostAllocationTagBackfillStatusForName(jsonValue.GetString("BackfillStatus"));

    m_backfillStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue CostAllocationTagBackfillRequest::Jsonize() const
{
  JsonValue payload;

  if(m_backfillFromHasBeenSet)
  {
   payload.WithString("BackfillFrom", m_backfillFrom);

  }

  if(m_requestedAtHasBeenSet)
  {
   payload.WithString("RequestedAt", m_requestedAt);

  }

  if(m_completedAtHasBeenSet)
  {
   payload.WithString("CompletedAt", m_completedAt);

  }

  if(m_backfillStatusHasBeenSet)
  {
   payload.WithString("BackfillStatus", CostAllocationTagBackfillStatusMapper::GetNameForCostAllocationTagBackfillStatus(m_backfillStatus));
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("LastUpdatedAt", m_lastUpdatedAt);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
