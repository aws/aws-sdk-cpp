/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyResourceSelection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LifecyclePolicyResourceSelection::LifecyclePolicyResourceSelection() : 
    m_recipesHasBeenSet(false),
    m_tagMapHasBeenSet(false)
{
}

LifecyclePolicyResourceSelection::LifecyclePolicyResourceSelection(JsonView jsonValue) : 
    m_recipesHasBeenSet(false),
    m_tagMapHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyResourceSelection& LifecyclePolicyResourceSelection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recipes"))
  {
    Aws::Utils::Array<JsonView> recipesJsonList = jsonValue.GetArray("recipes");
    for(unsigned recipesIndex = 0; recipesIndex < recipesJsonList.GetLength(); ++recipesIndex)
    {
      m_recipes.push_back(recipesJsonList[recipesIndex].AsObject());
    }
    m_recipesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagMap"))
  {
    Aws::Map<Aws::String, JsonView> tagMapJsonMap = jsonValue.GetObject("tagMap").GetAllObjects();
    for(auto& tagMapItem : tagMapJsonMap)
    {
      m_tagMap[tagMapItem.first] = tagMapItem.second.AsString();
    }
    m_tagMapHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicyResourceSelection::Jsonize() const
{
  JsonValue payload;

  if(m_recipesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recipesJsonList(m_recipes.size());
   for(unsigned recipesIndex = 0; recipesIndex < recipesJsonList.GetLength(); ++recipesIndex)
   {
     recipesJsonList[recipesIndex].AsObject(m_recipes[recipesIndex].Jsonize());
   }
   payload.WithArray("recipes", std::move(recipesJsonList));

  }

  if(m_tagMapHasBeenSet)
  {
   JsonValue tagMapJsonMap;
   for(auto& tagMapItem : m_tagMap)
   {
     tagMapJsonMap.WithString(tagMapItem.first, tagMapItem.second);
   }
   payload.WithObject("tagMap", std::move(tagMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
