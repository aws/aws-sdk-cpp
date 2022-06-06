/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UserDataFilters.h>
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

UserDataFilters::UserDataFilters() : 
    m_queuesHasBeenSet(false),
    m_contactFilterHasBeenSet(false)
{
}

UserDataFilters::UserDataFilters(JsonView jsonValue) : 
    m_queuesHasBeenSet(false),
    m_contactFilterHasBeenSet(false)
{
  *this = jsonValue;
}

UserDataFilters& UserDataFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Queues"))
  {
    Array<JsonView> queuesJsonList = jsonValue.GetArray("Queues");
    for(unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex)
    {
      m_queues.push_back(queuesJsonList[queuesIndex].AsString());
    }
    m_queuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactFilter"))
  {
    m_contactFilter = jsonValue.GetObject("ContactFilter");

    m_contactFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue UserDataFilters::Jsonize() const
{
  JsonValue payload;

  if(m_queuesHasBeenSet)
  {
   Array<JsonValue> queuesJsonList(m_queues.size());
   for(unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex)
   {
     queuesJsonList[queuesIndex].AsString(m_queues[queuesIndex]);
   }
   payload.WithArray("Queues", std::move(queuesJsonList));

  }

  if(m_contactFilterHasBeenSet)
  {
   payload.WithObject("ContactFilter", m_contactFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
