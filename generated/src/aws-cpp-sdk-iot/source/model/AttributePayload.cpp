/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AttributePayload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AttributePayload::AttributePayload() : 
    m_attributesHasBeenSet(false),
    m_merge(false),
    m_mergeHasBeenSet(false)
{
}

AttributePayload::AttributePayload(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_merge(false),
    m_mergeHasBeenSet(false)
{
  *this = jsonValue;
}

AttributePayload& AttributePayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("merge"))
  {
    m_merge = jsonValue.GetBool("merge");

    m_mergeHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributePayload::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_mergeHasBeenSet)
  {
   payload.WithBool("merge", m_merge);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
