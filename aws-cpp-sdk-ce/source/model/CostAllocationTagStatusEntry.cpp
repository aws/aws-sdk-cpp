/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostAllocationTagStatusEntry.h>
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

CostAllocationTagStatusEntry::CostAllocationTagStatusEntry() : 
    m_tagKeyHasBeenSet(false),
    m_status(CostAllocationTagStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

CostAllocationTagStatusEntry::CostAllocationTagStatusEntry(JsonView jsonValue) : 
    m_tagKeyHasBeenSet(false),
    m_status(CostAllocationTagStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

CostAllocationTagStatusEntry& CostAllocationTagStatusEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TagKey"))
  {
    m_tagKey = jsonValue.GetString("TagKey");

    m_tagKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CostAllocationTagStatusMapper::GetCostAllocationTagStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue CostAllocationTagStatusEntry::Jsonize() const
{
  JsonValue payload;

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("TagKey", m_tagKey);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CostAllocationTagStatusMapper::GetNameForCostAllocationTagStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
