/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentOverride.h>
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

IntentOverride::IntentOverride() : 
    m_nameHasBeenSet(false),
    m_slotsHasBeenSet(false)
{
}

IntentOverride::IntentOverride(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_slotsHasBeenSet(false)
{
  *this = jsonValue;
}

IntentOverride& IntentOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slots"))
  {
    Aws::Map<Aws::String, JsonView> slotsJsonMap = jsonValue.GetObject("slots").GetAllObjects();
    for(auto& slotsItem : slotsJsonMap)
    {
      m_slots[slotsItem.first] = slotsItem.second.AsObject();
    }
    m_slotsHasBeenSet = true;
  }

  return *this;
}

JsonValue IntentOverride::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_slotsHasBeenSet)
  {
   JsonValue slotsJsonMap;
   for(auto& slotsItem : m_slots)
   {
     slotsJsonMap.WithObject(slotsItem.first, slotsItem.second.Jsonize());
   }
   payload.WithObject("slots", std::move(slotsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
