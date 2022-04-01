/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotTypeStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

SlotTypeStatistics::SlotTypeStatistics() : 
    m_discoveredSlotTypeCount(0),
    m_discoveredSlotTypeCountHasBeenSet(false)
{
}

SlotTypeStatistics::SlotTypeStatistics(JsonView jsonValue) : 
    m_discoveredSlotTypeCount(0),
    m_discoveredSlotTypeCountHasBeenSet(false)
{
  *this = jsonValue;
}

SlotTypeStatistics& SlotTypeStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("discoveredSlotTypeCount"))
  {
    m_discoveredSlotTypeCount = jsonValue.GetInteger("discoveredSlotTypeCount");

    m_discoveredSlotTypeCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotTypeStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_discoveredSlotTypeCountHasBeenSet)
  {
   payload.WithInteger("discoveredSlotTypeCount", m_discoveredSlotTypeCount);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
