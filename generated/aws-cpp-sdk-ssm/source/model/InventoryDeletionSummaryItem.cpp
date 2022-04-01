/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InventoryDeletionSummaryItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InventoryDeletionSummaryItem::InventoryDeletionSummaryItem() : 
    m_versionHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_remainingCount(0),
    m_remainingCountHasBeenSet(false)
{
}

InventoryDeletionSummaryItem::InventoryDeletionSummaryItem(JsonView jsonValue) : 
    m_versionHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_remainingCount(0),
    m_remainingCountHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryDeletionSummaryItem& InventoryDeletionSummaryItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemainingCount"))
  {
    m_remainingCount = jsonValue.GetInteger("RemainingCount");

    m_remainingCountHasBeenSet = true;
  }

  return *this;
}

JsonValue InventoryDeletionSummaryItem::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  if(m_remainingCountHasBeenSet)
  {
   payload.WithInteger("RemainingCount", m_remainingCount);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
