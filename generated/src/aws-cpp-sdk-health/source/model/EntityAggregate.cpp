/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/EntityAggregate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

EntityAggregate::EntityAggregate() : 
    m_eventArnHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_statusesHasBeenSet(false)
{
}

EntityAggregate::EntityAggregate(JsonView jsonValue) : 
    m_eventArnHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_statusesHasBeenSet(false)
{
  *this = jsonValue;
}

EntityAggregate& EntityAggregate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventArn"))
  {
    m_eventArn = jsonValue.GetString("eventArn");

    m_eventArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statuses"))
  {
    Aws::Map<Aws::String, JsonView> statusesJsonMap = jsonValue.GetObject("statuses").GetAllObjects();
    for(auto& statusesItem : statusesJsonMap)
    {
      m_statuses[EntityStatusCodeMapper::GetEntityStatusCodeForName(statusesItem.first)] = statusesItem.second.AsInteger();
    }
    m_statusesHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityAggregate::Jsonize() const
{
  JsonValue payload;

  if(m_eventArnHasBeenSet)
  {
   payload.WithString("eventArn", m_eventArn);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_statusesHasBeenSet)
  {
   JsonValue statusesJsonMap;
   for(auto& statusesItem : m_statuses)
   {
     statusesJsonMap.WithInteger(EntityStatusCodeMapper::GetNameForEntityStatusCode(statusesItem.first), statusesItem.second);
   }
   payload.WithObject("statuses", std::move(statusesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws
