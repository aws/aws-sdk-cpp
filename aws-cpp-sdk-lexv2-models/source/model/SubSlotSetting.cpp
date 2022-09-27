/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SubSlotSetting.h>
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

SubSlotSetting::SubSlotSetting() : 
    m_expressionHasBeenSet(false),
    m_slotSpecificationsHasBeenSet(false)
{
}

SubSlotSetting::SubSlotSetting(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_slotSpecificationsHasBeenSet(false)
{
  *this = jsonValue;
}

SubSlotSetting& SubSlotSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotSpecifications"))
  {
    Aws::Map<Aws::String, JsonView> slotSpecificationsJsonMap = jsonValue.GetObject("slotSpecifications").GetAllObjects();
    for(auto& slotSpecificationsItem : slotSpecificationsJsonMap)
    {
      m_slotSpecifications[slotSpecificationsItem.first] = slotSpecificationsItem.second.AsObject();
    }
    m_slotSpecificationsHasBeenSet = true;
  }

  return *this;
}

JsonValue SubSlotSetting::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  if(m_slotSpecificationsHasBeenSet)
  {
   JsonValue slotSpecificationsJsonMap;
   for(auto& slotSpecificationsItem : m_slotSpecifications)
   {
     slotSpecificationsJsonMap.WithObject(slotSpecificationsItem.first, slotSpecificationsItem.second.Jsonize());
   }
   payload.WithObject("slotSpecifications", std::move(slotSpecificationsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
