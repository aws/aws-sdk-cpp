/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UserTurnInputSpecification.h>
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

UserTurnInputSpecification::UserTurnInputSpecification() : 
    m_utteranceInputHasBeenSet(false),
    m_requestAttributesHasBeenSet(false),
    m_sessionStateHasBeenSet(false)
{
}

UserTurnInputSpecification::UserTurnInputSpecification(JsonView jsonValue) : 
    m_utteranceInputHasBeenSet(false),
    m_requestAttributesHasBeenSet(false),
    m_sessionStateHasBeenSet(false)
{
  *this = jsonValue;
}

UserTurnInputSpecification& UserTurnInputSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("utteranceInput"))
  {
    m_utteranceInput = jsonValue.GetObject("utteranceInput");

    m_utteranceInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestAttributes"))
  {
    Aws::Map<Aws::String, JsonView> requestAttributesJsonMap = jsonValue.GetObject("requestAttributes").GetAllObjects();
    for(auto& requestAttributesItem : requestAttributesJsonMap)
    {
      m_requestAttributes[requestAttributesItem.first] = requestAttributesItem.second.AsString();
    }
    m_requestAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionState"))
  {
    m_sessionState = jsonValue.GetObject("sessionState");

    m_sessionStateHasBeenSet = true;
  }

  return *this;
}

JsonValue UserTurnInputSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_utteranceInputHasBeenSet)
  {
   payload.WithObject("utteranceInput", m_utteranceInput.Jsonize());

  }

  if(m_requestAttributesHasBeenSet)
  {
   JsonValue requestAttributesJsonMap;
   for(auto& requestAttributesItem : m_requestAttributes)
   {
     requestAttributesJsonMap.WithString(requestAttributesItem.first, requestAttributesItem.second);
   }
   payload.WithObject("requestAttributes", std::move(requestAttributesJsonMap));

  }

  if(m_sessionStateHasBeenSet)
  {
   payload.WithObject("sessionState", m_sessionState.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
