/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TemplateAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

TemplateAttributes::TemplateAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

TemplateAttributes& TemplateAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomAttributes"))
  {
    Aws::Map<Aws::String, JsonView> customAttributesJsonMap = jsonValue.GetObject("CustomAttributes").GetAllObjects();
    for(auto& customAttributesItem : customAttributesJsonMap)
    {
      m_customAttributes[customAttributesItem.first] = customAttributesItem.second.AsString();
    }
    m_customAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomerProfileAttributes"))
  {
    m_customerProfileAttributes = jsonValue.GetString("CustomerProfileAttributes");
    m_customerProfileAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue TemplateAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_customAttributesHasBeenSet)
  {
   JsonValue customAttributesJsonMap;
   for(auto& customAttributesItem : m_customAttributes)
   {
     customAttributesJsonMap.WithString(customAttributesItem.first, customAttributesItem.second);
   }
   payload.WithObject("CustomAttributes", std::move(customAttributesJsonMap));

  }

  if(m_customerProfileAttributesHasBeenSet)
  {
   payload.WithString("CustomerProfileAttributes", m_customerProfileAttributes);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
