/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/EventTypeFilter.h>
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

EventTypeFilter::EventTypeFilter() : 
    m_eventTypeCodesHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_eventTypeCategoriesHasBeenSet(false)
{
}

EventTypeFilter::EventTypeFilter(JsonView jsonValue) : 
    m_eventTypeCodesHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_eventTypeCategoriesHasBeenSet(false)
{
  *this = jsonValue;
}

EventTypeFilter& EventTypeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventTypeCodes"))
  {
    Aws::Utils::Array<JsonView> eventTypeCodesJsonList = jsonValue.GetArray("eventTypeCodes");
    for(unsigned eventTypeCodesIndex = 0; eventTypeCodesIndex < eventTypeCodesJsonList.GetLength(); ++eventTypeCodesIndex)
    {
      m_eventTypeCodes.push_back(eventTypeCodesJsonList[eventTypeCodesIndex].AsString());
    }
    m_eventTypeCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("services"))
  {
    Aws::Utils::Array<JsonView> servicesJsonList = jsonValue.GetArray("services");
    for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
    {
      m_services.push_back(servicesJsonList[servicesIndex].AsString());
    }
    m_servicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTypeCategories"))
  {
    Aws::Utils::Array<JsonView> eventTypeCategoriesJsonList = jsonValue.GetArray("eventTypeCategories");
    for(unsigned eventTypeCategoriesIndex = 0; eventTypeCategoriesIndex < eventTypeCategoriesJsonList.GetLength(); ++eventTypeCategoriesIndex)
    {
      m_eventTypeCategories.push_back(EventTypeCategoryMapper::GetEventTypeCategoryForName(eventTypeCategoriesJsonList[eventTypeCategoriesIndex].AsString()));
    }
    m_eventTypeCategoriesHasBeenSet = true;
  }

  return *this;
}

JsonValue EventTypeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventTypeCodesJsonList(m_eventTypeCodes.size());
   for(unsigned eventTypeCodesIndex = 0; eventTypeCodesIndex < eventTypeCodesJsonList.GetLength(); ++eventTypeCodesIndex)
   {
     eventTypeCodesJsonList[eventTypeCodesIndex].AsString(m_eventTypeCodes[eventTypeCodesIndex]);
   }
   payload.WithArray("eventTypeCodes", std::move(eventTypeCodesJsonList));

  }

  if(m_servicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> servicesJsonList(m_services.size());
   for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
   {
     servicesJsonList[servicesIndex].AsString(m_services[servicesIndex]);
   }
   payload.WithArray("services", std::move(servicesJsonList));

  }

  if(m_eventTypeCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventTypeCategoriesJsonList(m_eventTypeCategories.size());
   for(unsigned eventTypeCategoriesIndex = 0; eventTypeCategoriesIndex < eventTypeCategoriesJsonList.GetLength(); ++eventTypeCategoriesIndex)
   {
     eventTypeCategoriesJsonList[eventTypeCategoriesIndex].AsString(EventTypeCategoryMapper::GetNameForEventTypeCategory(m_eventTypeCategories[eventTypeCategoriesIndex]));
   }
   payload.WithArray("eventTypeCategories", std::move(eventTypeCategoriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws
