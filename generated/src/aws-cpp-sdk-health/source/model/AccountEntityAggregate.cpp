/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/AccountEntityAggregate.h>
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

AccountEntityAggregate::AccountEntityAggregate() : 
    m_accountIdHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_statusesHasBeenSet(false)
{
}

AccountEntityAggregate::AccountEntityAggregate(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_statusesHasBeenSet(false)
{
  *this = jsonValue;
}

AccountEntityAggregate& AccountEntityAggregate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
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

JsonValue AccountEntityAggregate::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

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
