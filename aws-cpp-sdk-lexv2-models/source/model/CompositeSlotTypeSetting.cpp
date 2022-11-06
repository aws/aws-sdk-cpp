/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CompositeSlotTypeSetting.h>
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

CompositeSlotTypeSetting::CompositeSlotTypeSetting() : 
    m_subSlotsHasBeenSet(false)
{
}

CompositeSlotTypeSetting::CompositeSlotTypeSetting(JsonView jsonValue) : 
    m_subSlotsHasBeenSet(false)
{
  *this = jsonValue;
}

CompositeSlotTypeSetting& CompositeSlotTypeSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("subSlots"))
  {
    Aws::Utils::Array<JsonView> subSlotsJsonList = jsonValue.GetArray("subSlots");
    for(unsigned subSlotsIndex = 0; subSlotsIndex < subSlotsJsonList.GetLength(); ++subSlotsIndex)
    {
      m_subSlots.push_back(subSlotsJsonList[subSlotsIndex].AsObject());
    }
    m_subSlotsHasBeenSet = true;
  }

  return *this;
}

JsonValue CompositeSlotTypeSetting::Jsonize() const
{
  JsonValue payload;

  if(m_subSlotsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subSlotsJsonList(m_subSlots.size());
   for(unsigned subSlotsIndex = 0; subSlotsIndex < subSlotsJsonList.GetLength(); ++subSlotsIndex)
   {
     subSlotsJsonList[subSlotsIndex].AsObject(m_subSlots[subSlotsIndex].Jsonize());
   }
   payload.WithArray("subSlots", std::move(subSlotsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
