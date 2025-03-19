/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Dimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

Dimension::Dimension(JsonView jsonValue)
{
  *this = jsonValue;
}

Dimension& Dimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProfileAttributes"))
  {
    m_profileAttributes = jsonValue.GetObject("ProfileAttributes");
    m_profileAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CalculatedAttributes"))
  {
    Aws::Map<Aws::String, JsonView> calculatedAttributesJsonMap = jsonValue.GetObject("CalculatedAttributes").GetAllObjects();
    for(auto& calculatedAttributesItem : calculatedAttributesJsonMap)
    {
      m_calculatedAttributes[calculatedAttributesItem.first] = calculatedAttributesItem.second.AsObject();
    }
    m_calculatedAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue Dimension::Jsonize() const
{
  JsonValue payload;

  if(m_profileAttributesHasBeenSet)
  {
   payload.WithObject("ProfileAttributes", m_profileAttributes.Jsonize());

  }

  if(m_calculatedAttributesHasBeenSet)
  {
   JsonValue calculatedAttributesJsonMap;
   for(auto& calculatedAttributesItem : m_calculatedAttributes)
   {
     calculatedAttributesJsonMap.WithObject(calculatedAttributesItem.first, calculatedAttributesItem.second.Jsonize());
   }
   payload.WithObject("CalculatedAttributes", std::move(calculatedAttributesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
