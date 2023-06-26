/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DialogState.h>
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

DialogState::DialogState() : 
    m_dialogActionHasBeenSet(false),
    m_intentHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false)
{
}

DialogState::DialogState(JsonView jsonValue) : 
    m_dialogActionHasBeenSet(false),
    m_intentHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

DialogState& DialogState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dialogAction"))
  {
    m_dialogAction = jsonValue.GetObject("dialogAction");

    m_dialogActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intent"))
  {
    m_intent = jsonValue.GetObject("intent");

    m_intentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionAttributes"))
  {
    Aws::Map<Aws::String, JsonView> sessionAttributesJsonMap = jsonValue.GetObject("sessionAttributes").GetAllObjects();
    for(auto& sessionAttributesItem : sessionAttributesJsonMap)
    {
      m_sessionAttributes[sessionAttributesItem.first] = sessionAttributesItem.second.AsString();
    }
    m_sessionAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue DialogState::Jsonize() const
{
  JsonValue payload;

  if(m_dialogActionHasBeenSet)
  {
   payload.WithObject("dialogAction", m_dialogAction.Jsonize());

  }

  if(m_intentHasBeenSet)
  {
   payload.WithObject("intent", m_intent.Jsonize());

  }

  if(m_sessionAttributesHasBeenSet)
  {
   JsonValue sessionAttributesJsonMap;
   for(auto& sessionAttributesItem : m_sessionAttributes)
   {
     sessionAttributesJsonMap.WithString(sessionAttributesItem.first, sessionAttributesItem.second);
   }
   payload.WithObject("sessionAttributes", std::move(sessionAttributesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
