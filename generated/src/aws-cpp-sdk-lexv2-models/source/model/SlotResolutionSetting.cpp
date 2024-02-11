/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotResolutionSetting.h>
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

SlotResolutionSetting::SlotResolutionSetting() : 
    m_slotResolutionStrategy(SlotResolutionStrategy::NOT_SET),
    m_slotResolutionStrategyHasBeenSet(false)
{
}

SlotResolutionSetting::SlotResolutionSetting(JsonView jsonValue) : 
    m_slotResolutionStrategy(SlotResolutionStrategy::NOT_SET),
    m_slotResolutionStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

SlotResolutionSetting& SlotResolutionSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("slotResolutionStrategy"))
  {
    m_slotResolutionStrategy = SlotResolutionStrategyMapper::GetSlotResolutionStrategyForName(jsonValue.GetString("slotResolutionStrategy"));

    m_slotResolutionStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotResolutionSetting::Jsonize() const
{
  JsonValue payload;

  if(m_slotResolutionStrategyHasBeenSet)
  {
   payload.WithString("slotResolutionStrategy", SlotResolutionStrategyMapper::GetNameForSlotResolutionStrategy(m_slotResolutionStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
