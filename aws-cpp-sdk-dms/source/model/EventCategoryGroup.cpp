/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/EventCategoryGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

EventCategoryGroup::EventCategoryGroup() : 
    m_sourceTypeHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false)
{
}

EventCategoryGroup::EventCategoryGroup(JsonView jsonValue) : 
    m_sourceTypeHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false)
{
  *this = jsonValue;
}

EventCategoryGroup& EventCategoryGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventCategories"))
  {
    Aws::Utils::Array<JsonView> eventCategoriesJsonList = jsonValue.GetArray("EventCategories");
    for(unsigned eventCategoriesIndex = 0; eventCategoriesIndex < eventCategoriesJsonList.GetLength(); ++eventCategoriesIndex)
    {
      m_eventCategories.push_back(eventCategoriesJsonList[eventCategoriesIndex].AsString());
    }
    m_eventCategoriesHasBeenSet = true;
  }

  return *this;
}

JsonValue EventCategoryGroup::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_eventCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventCategoriesJsonList(m_eventCategories.size());
   for(unsigned eventCategoriesIndex = 0; eventCategoriesIndex < eventCategoriesJsonList.GetLength(); ++eventCategoriesIndex)
   {
     eventCategoriesJsonList[eventCategoriesIndex].AsString(m_eventCategories[eventCategoriesIndex]);
   }
   payload.WithArray("EventCategories", std::move(eventCategoriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
