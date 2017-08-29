/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

EventCategoryGroup::EventCategoryGroup(const JsonValue& jsonValue) : 
    m_sourceTypeHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false)
{
  *this = jsonValue;
}

EventCategoryGroup& EventCategoryGroup::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventCategories"))
  {
    Array<JsonValue> eventCategoriesJsonList = jsonValue.GetArray("EventCategories");
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
   Array<JsonValue> eventCategoriesJsonList(m_eventCategories.size());
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
