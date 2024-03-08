/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyDetailExclusionRules.h>
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

LifecyclePolicyDetailExclusionRules::LifecyclePolicyDetailExclusionRules() : 
    m_tagMapHasBeenSet(false),
    m_amisHasBeenSet(false)
{
}

LifecyclePolicyDetailExclusionRules::LifecyclePolicyDetailExclusionRules(JsonView jsonValue) : 
    m_tagMapHasBeenSet(false),
    m_amisHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyDetailExclusionRules& LifecyclePolicyDetailExclusionRules::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tagMap"))
  {
    Aws::Map<Aws::String, JsonView> tagMapJsonMap = jsonValue.GetObject("tagMap").GetAllObjects();
    for(auto& tagMapItem : tagMapJsonMap)
    {
      m_tagMap[tagMapItem.first] = tagMapItem.second.AsString();
    }
    m_tagMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amis"))
  {
    m_amis = jsonValue.GetObject("amis");

    m_amisHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicyDetailExclusionRules::Jsonize() const
{
  JsonValue payload;

  if(m_tagMapHasBeenSet)
  {
   JsonValue tagMapJsonMap;
   for(auto& tagMapItem : m_tagMap)
   {
     tagMapJsonMap.WithString(tagMapItem.first, tagMapItem.second);
   }
   payload.WithObject("tagMap", std::move(tagMapJsonMap));

  }

  if(m_amisHasBeenSet)
  {
   payload.WithObject("amis", m_amis.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
