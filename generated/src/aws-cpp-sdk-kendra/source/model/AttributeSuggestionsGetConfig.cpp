/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AttributeSuggestionsGetConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

AttributeSuggestionsGetConfig::AttributeSuggestionsGetConfig() : 
    m_suggestionAttributesHasBeenSet(false),
    m_additionalResponseAttributesHasBeenSet(false),
    m_attributeFilterHasBeenSet(false),
    m_userContextHasBeenSet(false)
{
}

AttributeSuggestionsGetConfig::AttributeSuggestionsGetConfig(JsonView jsonValue) : 
    m_suggestionAttributesHasBeenSet(false),
    m_additionalResponseAttributesHasBeenSet(false),
    m_attributeFilterHasBeenSet(false),
    m_userContextHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeSuggestionsGetConfig& AttributeSuggestionsGetConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuggestionAttributes"))
  {
    Aws::Utils::Array<JsonView> suggestionAttributesJsonList = jsonValue.GetArray("SuggestionAttributes");
    for(unsigned suggestionAttributesIndex = 0; suggestionAttributesIndex < suggestionAttributesJsonList.GetLength(); ++suggestionAttributesIndex)
    {
      m_suggestionAttributes.push_back(suggestionAttributesJsonList[suggestionAttributesIndex].AsString());
    }
    m_suggestionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalResponseAttributes"))
  {
    Aws::Utils::Array<JsonView> additionalResponseAttributesJsonList = jsonValue.GetArray("AdditionalResponseAttributes");
    for(unsigned additionalResponseAttributesIndex = 0; additionalResponseAttributesIndex < additionalResponseAttributesJsonList.GetLength(); ++additionalResponseAttributesIndex)
    {
      m_additionalResponseAttributes.push_back(additionalResponseAttributesJsonList[additionalResponseAttributesIndex].AsString());
    }
    m_additionalResponseAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeFilter"))
  {
    m_attributeFilter = jsonValue.GetObject("AttributeFilter");

    m_attributeFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserContext"))
  {
    m_userContext = jsonValue.GetObject("UserContext");

    m_userContextHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeSuggestionsGetConfig::Jsonize() const
{
  JsonValue payload;

  if(m_suggestionAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> suggestionAttributesJsonList(m_suggestionAttributes.size());
   for(unsigned suggestionAttributesIndex = 0; suggestionAttributesIndex < suggestionAttributesJsonList.GetLength(); ++suggestionAttributesIndex)
   {
     suggestionAttributesJsonList[suggestionAttributesIndex].AsString(m_suggestionAttributes[suggestionAttributesIndex]);
   }
   payload.WithArray("SuggestionAttributes", std::move(suggestionAttributesJsonList));

  }

  if(m_additionalResponseAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalResponseAttributesJsonList(m_additionalResponseAttributes.size());
   for(unsigned additionalResponseAttributesIndex = 0; additionalResponseAttributesIndex < additionalResponseAttributesJsonList.GetLength(); ++additionalResponseAttributesIndex)
   {
     additionalResponseAttributesJsonList[additionalResponseAttributesIndex].AsString(m_additionalResponseAttributes[additionalResponseAttributesIndex]);
   }
   payload.WithArray("AdditionalResponseAttributes", std::move(additionalResponseAttributesJsonList));

  }

  if(m_attributeFilterHasBeenSet)
  {
   payload.WithObject("AttributeFilter", m_attributeFilter.Jsonize());

  }

  if(m_userContextHasBeenSet)
  {
   payload.WithObject("UserContext", m_userContext.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
