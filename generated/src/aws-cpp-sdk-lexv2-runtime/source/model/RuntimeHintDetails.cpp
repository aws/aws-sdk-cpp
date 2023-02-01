/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/RuntimeHintDetails.h>
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

RuntimeHintDetails::RuntimeHintDetails() : 
    m_runtimeHintValuesHasBeenSet(false),
    m_subSlotHintsHasBeenSet(false)
{
}

RuntimeHintDetails::RuntimeHintDetails(JsonView jsonValue) : 
    m_runtimeHintValuesHasBeenSet(false),
    m_subSlotHintsHasBeenSet(false)
{
  *this = jsonValue;
}

RuntimeHintDetails& RuntimeHintDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("runtimeHintValues"))
  {
    Aws::Utils::Array<JsonView> runtimeHintValuesJsonList = jsonValue.GetArray("runtimeHintValues");
    for(unsigned runtimeHintValuesIndex = 0; runtimeHintValuesIndex < runtimeHintValuesJsonList.GetLength(); ++runtimeHintValuesIndex)
    {
      m_runtimeHintValues.push_back(runtimeHintValuesJsonList[runtimeHintValuesIndex].AsObject());
    }
    m_runtimeHintValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subSlotHints"))
  {
    Aws::Map<Aws::String, JsonView> subSlotHintsJsonMap = jsonValue.GetObject("subSlotHints").GetAllObjects();
    for(auto& subSlotHintsItem : subSlotHintsJsonMap)
    {
      m_subSlotHints[subSlotHintsItem.first] = subSlotHintsItem.second.AsObject();
    }
    m_subSlotHintsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuntimeHintDetails::Jsonize() const
{
  JsonValue payload;

  if(m_runtimeHintValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> runtimeHintValuesJsonList(m_runtimeHintValues.size());
   for(unsigned runtimeHintValuesIndex = 0; runtimeHintValuesIndex < runtimeHintValuesJsonList.GetLength(); ++runtimeHintValuesIndex)
   {
     runtimeHintValuesJsonList[runtimeHintValuesIndex].AsObject(m_runtimeHintValues[runtimeHintValuesIndex].Jsonize());
   }
   payload.WithArray("runtimeHintValues", std::move(runtimeHintValuesJsonList));

  }

  if(m_subSlotHintsHasBeenSet)
  {
   JsonValue subSlotHintsJsonMap;
   for(auto& subSlotHintsItem : m_subSlotHints)
   {
     subSlotHintsJsonMap.WithObject(subSlotHintsItem.first, subSlotHintsItem.second.Jsonize());
   }
   payload.WithObject("subSlotHints", std::move(subSlotHintsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
