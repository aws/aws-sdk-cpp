/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotValueSelectionSetting.h>
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

SlotValueSelectionSetting::SlotValueSelectionSetting() : 
    m_resolutionStrategy(SlotValueResolutionStrategy::NOT_SET),
    m_resolutionStrategyHasBeenSet(false),
    m_regexFilterHasBeenSet(false),
    m_advancedRecognitionSettingHasBeenSet(false)
{
}

SlotValueSelectionSetting::SlotValueSelectionSetting(JsonView jsonValue) : 
    m_resolutionStrategy(SlotValueResolutionStrategy::NOT_SET),
    m_resolutionStrategyHasBeenSet(false),
    m_regexFilterHasBeenSet(false),
    m_advancedRecognitionSettingHasBeenSet(false)
{
  *this = jsonValue;
}

SlotValueSelectionSetting& SlotValueSelectionSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resolutionStrategy"))
  {
    m_resolutionStrategy = SlotValueResolutionStrategyMapper::GetSlotValueResolutionStrategyForName(jsonValue.GetString("resolutionStrategy"));

    m_resolutionStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regexFilter"))
  {
    m_regexFilter = jsonValue.GetObject("regexFilter");

    m_regexFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("advancedRecognitionSetting"))
  {
    m_advancedRecognitionSetting = jsonValue.GetObject("advancedRecognitionSetting");

    m_advancedRecognitionSettingHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotValueSelectionSetting::Jsonize() const
{
  JsonValue payload;

  if(m_resolutionStrategyHasBeenSet)
  {
   payload.WithString("resolutionStrategy", SlotValueResolutionStrategyMapper::GetNameForSlotValueResolutionStrategy(m_resolutionStrategy));
  }

  if(m_regexFilterHasBeenSet)
  {
   payload.WithObject("regexFilter", m_regexFilter.Jsonize());

  }

  if(m_advancedRecognitionSettingHasBeenSet)
  {
   payload.WithObject("advancedRecognitionSetting", m_advancedRecognitionSetting.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
