/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/InputSessionStateSpecification.h>
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

InputSessionStateSpecification::InputSessionStateSpecification() : 
    m_sessionAttributesHasBeenSet(false),
    m_activeContextsHasBeenSet(false),
    m_runtimeHintsHasBeenSet(false)
{
}

InputSessionStateSpecification::InputSessionStateSpecification(JsonView jsonValue) : 
    m_sessionAttributesHasBeenSet(false),
    m_activeContextsHasBeenSet(false),
    m_runtimeHintsHasBeenSet(false)
{
  *this = jsonValue;
}

InputSessionStateSpecification& InputSessionStateSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionAttributes"))
  {
    Aws::Map<Aws::String, JsonView> sessionAttributesJsonMap = jsonValue.GetObject("sessionAttributes").GetAllObjects();
    for(auto& sessionAttributesItem : sessionAttributesJsonMap)
    {
      m_sessionAttributes[sessionAttributesItem.first] = sessionAttributesItem.second.AsString();
    }
    m_sessionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeContexts"))
  {
    Aws::Utils::Array<JsonView> activeContextsJsonList = jsonValue.GetArray("activeContexts");
    for(unsigned activeContextsIndex = 0; activeContextsIndex < activeContextsJsonList.GetLength(); ++activeContextsIndex)
    {
      m_activeContexts.push_back(activeContextsJsonList[activeContextsIndex].AsObject());
    }
    m_activeContextsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtimeHints"))
  {
    m_runtimeHints = jsonValue.GetObject("runtimeHints");

    m_runtimeHintsHasBeenSet = true;
  }

  return *this;
}

JsonValue InputSessionStateSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_sessionAttributesHasBeenSet)
  {
   JsonValue sessionAttributesJsonMap;
   for(auto& sessionAttributesItem : m_sessionAttributes)
   {
     sessionAttributesJsonMap.WithString(sessionAttributesItem.first, sessionAttributesItem.second);
   }
   payload.WithObject("sessionAttributes", std::move(sessionAttributesJsonMap));

  }

  if(m_activeContextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> activeContextsJsonList(m_activeContexts.size());
   for(unsigned activeContextsIndex = 0; activeContextsIndex < activeContextsJsonList.GetLength(); ++activeContextsIndex)
   {
     activeContextsJsonList[activeContextsIndex].AsObject(m_activeContexts[activeContextsIndex].Jsonize());
   }
   payload.WithArray("activeContexts", std::move(activeContextsJsonList));

  }

  if(m_runtimeHintsHasBeenSet)
  {
   payload.WithObject("runtimeHints", m_runtimeHints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
