/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/OrganizationEntityAggregate.h>
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

OrganizationEntityAggregate::OrganizationEntityAggregate() : 
    m_eventArnHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_accountsHasBeenSet(false)
{
}

OrganizationEntityAggregate::OrganizationEntityAggregate(JsonView jsonValue) : 
    m_eventArnHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_accountsHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationEntityAggregate& OrganizationEntityAggregate::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("accounts"))
  {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsObject());
    }
    m_accountsHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationEntityAggregate::Jsonize() const
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

  if(m_accountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsObject(m_accounts[accountsIndex].Jsonize());
   }
   payload.WithArray("accounts", std::move(accountsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws
