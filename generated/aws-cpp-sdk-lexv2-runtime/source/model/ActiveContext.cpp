/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/ActiveContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

ActiveContext::ActiveContext() : 
    m_nameHasBeenSet(false),
    m_timeToLiveHasBeenSet(false),
    m_contextAttributesHasBeenSet(false)
{
}

ActiveContext::ActiveContext(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_timeToLiveHasBeenSet(false),
    m_contextAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

ActiveContext& ActiveContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeToLive"))
  {
    m_timeToLive = jsonValue.GetObject("timeToLive");

    m_timeToLiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contextAttributes"))
  {
    Aws::Map<Aws::String, JsonView> contextAttributesJsonMap = jsonValue.GetObject("contextAttributes").GetAllObjects();
    for(auto& contextAttributesItem : contextAttributesJsonMap)
    {
      m_contextAttributes[contextAttributesItem.first] = contextAttributesItem.second.AsString();
    }
    m_contextAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue ActiveContext::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_timeToLiveHasBeenSet)
  {
   payload.WithObject("timeToLive", m_timeToLive.Jsonize());

  }

  if(m_contextAttributesHasBeenSet)
  {
   JsonValue contextAttributesJsonMap;
   for(auto& contextAttributesItem : m_contextAttributes)
   {
     contextAttributesJsonMap.WithString(contextAttributesItem.first, contextAttributesItem.second);
   }
   payload.WithObject("contextAttributes", std::move(contextAttributesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
