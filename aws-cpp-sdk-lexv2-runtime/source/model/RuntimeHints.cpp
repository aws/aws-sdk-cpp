/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/RuntimeHints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

RuntimeHints::RuntimeHints() : 
    m_slotHintsHasBeenSet(false)
{
}

RuntimeHints::RuntimeHints(JsonView jsonValue) : 
    m_slotHintsHasBeenSet(false)
{
  *this = jsonValue;
}

RuntimeHints& RuntimeHints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("slotHints"))
  {
    Aws::Map<Aws::String, JsonView> slotHintsJsonMap = jsonValue.GetObject("slotHints").GetAllObjects();
    for(auto& slotHintsItem : slotHintsJsonMap)
    {
      Aws::Map<Aws::String, JsonView> slotHintsSlotMapJsonMap = slotHintsItem.second.GetAllObjects();
      Aws::Map<Aws::String, RuntimeHintDetails> slotHintsSlotMapMap;
      for(auto& slotHintsSlotMapItem : slotHintsSlotMapJsonMap)
      {
        slotHintsSlotMapMap[slotHintsSlotMapItem.first] = slotHintsSlotMapItem.second.AsObject();
      }
      m_slotHints[slotHintsItem.first] = std::move(slotHintsSlotMapMap);
    }
    m_slotHintsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuntimeHints::Jsonize() const
{
  JsonValue payload;

  if(m_slotHintsHasBeenSet)
  {
   JsonValue slotHintsJsonMap;
   for(auto& slotHintsItem : m_slotHints)
   {
     JsonValue slotHintsSlotMapJsonMap;
     for(auto& slotHintsSlotMapItem : slotHintsItem.second)
     {
       slotHintsSlotMapJsonMap.WithObject(slotHintsSlotMapItem.first, slotHintsSlotMapItem.second.Jsonize());
     }
     slotHintsJsonMap.WithObject(slotHintsItem.first, std::move(slotHintsSlotMapJsonMap));
   }
   payload.WithObject("slotHints", std::move(slotHintsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
