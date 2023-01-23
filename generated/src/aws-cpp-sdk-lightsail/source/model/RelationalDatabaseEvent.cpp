/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RelationalDatabaseEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

RelationalDatabaseEvent::RelationalDatabaseEvent() : 
    m_resourceHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false)
{
}

RelationalDatabaseEvent::RelationalDatabaseEvent(JsonView jsonValue) : 
    m_resourceHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false)
{
  *this = jsonValue;
}

RelationalDatabaseEvent& RelationalDatabaseEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventCategories"))
  {
    Aws::Utils::Array<JsonView> eventCategoriesJsonList = jsonValue.GetArray("eventCategories");
    for(unsigned eventCategoriesIndex = 0; eventCategoriesIndex < eventCategoriesJsonList.GetLength(); ++eventCategoriesIndex)
    {
      m_eventCategories.push_back(eventCategoriesJsonList[eventCategoriesIndex].AsString());
    }
    m_eventCategoriesHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationalDatabaseEvent::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_eventCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventCategoriesJsonList(m_eventCategories.size());
   for(unsigned eventCategoriesIndex = 0; eventCategoriesIndex < eventCategoriesJsonList.GetLength(); ++eventCategoriesIndex)
   {
     eventCategoriesJsonList[eventCategoriesIndex].AsString(m_eventCategories[eventCategoriesIndex]);
   }
   payload.WithArray("eventCategories", std::move(eventCategoriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
