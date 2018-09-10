﻿/*
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

#include <aws/health/model/EventFilter.h>
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

EventFilter::EventFilter() : 
    m_eventArnsHasBeenSet(false),
    m_eventTypeCodesHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_startTimesHasBeenSet(false),
    m_endTimesHasBeenSet(false),
    m_lastUpdatedTimesHasBeenSet(false),
    m_entityArnsHasBeenSet(false),
    m_entityValuesHasBeenSet(false),
    m_eventTypeCategoriesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_eventStatusCodesHasBeenSet(false)
{
}

EventFilter::EventFilter(JsonView jsonValue) : 
    m_eventArnsHasBeenSet(false),
    m_eventTypeCodesHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_startTimesHasBeenSet(false),
    m_endTimesHasBeenSet(false),
    m_lastUpdatedTimesHasBeenSet(false),
    m_entityArnsHasBeenSet(false),
    m_entityValuesHasBeenSet(false),
    m_eventTypeCategoriesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_eventStatusCodesHasBeenSet(false)
{
  *this = jsonValue;
}

EventFilter& EventFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventArns"))
  {
    Array<JsonView> eventArnsJsonList = jsonValue.GetArray("eventArns");
    for(unsigned eventArnsIndex = 0; eventArnsIndex < eventArnsJsonList.GetLength(); ++eventArnsIndex)
    {
      m_eventArns.push_back(eventArnsJsonList[eventArnsIndex].AsString());
    }
    m_eventArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTypeCodes"))
  {
    Array<JsonView> eventTypeCodesJsonList = jsonValue.GetArray("eventTypeCodes");
    for(unsigned eventTypeCodesIndex = 0; eventTypeCodesIndex < eventTypeCodesJsonList.GetLength(); ++eventTypeCodesIndex)
    {
      m_eventTypeCodes.push_back(eventTypeCodesJsonList[eventTypeCodesIndex].AsString());
    }
    m_eventTypeCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("services"))
  {
    Array<JsonView> servicesJsonList = jsonValue.GetArray("services");
    for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
    {
      m_services.push_back(servicesJsonList[servicesIndex].AsString());
    }
    m_servicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regions"))
  {
    Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZones"))
  {
    Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("availabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimes"))
  {
    Array<JsonView> startTimesJsonList = jsonValue.GetArray("startTimes");
    for(unsigned startTimesIndex = 0; startTimesIndex < startTimesJsonList.GetLength(); ++startTimesIndex)
    {
      m_startTimes.push_back(startTimesJsonList[startTimesIndex].AsObject());
    }
    m_startTimesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTimes"))
  {
    Array<JsonView> endTimesJsonList = jsonValue.GetArray("endTimes");
    for(unsigned endTimesIndex = 0; endTimesIndex < endTimesJsonList.GetLength(); ++endTimesIndex)
    {
      m_endTimes.push_back(endTimesJsonList[endTimesIndex].AsObject());
    }
    m_endTimesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTimes"))
  {
    Array<JsonView> lastUpdatedTimesJsonList = jsonValue.GetArray("lastUpdatedTimes");
    for(unsigned lastUpdatedTimesIndex = 0; lastUpdatedTimesIndex < lastUpdatedTimesJsonList.GetLength(); ++lastUpdatedTimesIndex)
    {
      m_lastUpdatedTimes.push_back(lastUpdatedTimesJsonList[lastUpdatedTimesIndex].AsObject());
    }
    m_lastUpdatedTimesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityArns"))
  {
    Array<JsonView> entityArnsJsonList = jsonValue.GetArray("entityArns");
    for(unsigned entityArnsIndex = 0; entityArnsIndex < entityArnsJsonList.GetLength(); ++entityArnsIndex)
    {
      m_entityArns.push_back(entityArnsJsonList[entityArnsIndex].AsString());
    }
    m_entityArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityValues"))
  {
    Array<JsonView> entityValuesJsonList = jsonValue.GetArray("entityValues");
    for(unsigned entityValuesIndex = 0; entityValuesIndex < entityValuesJsonList.GetLength(); ++entityValuesIndex)
    {
      m_entityValues.push_back(entityValuesJsonList[entityValuesIndex].AsString());
    }
    m_entityValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTypeCategories"))
  {
    Array<JsonView> eventTypeCategoriesJsonList = jsonValue.GetArray("eventTypeCategories");
    for(unsigned eventTypeCategoriesIndex = 0; eventTypeCategoriesIndex < eventTypeCategoriesJsonList.GetLength(); ++eventTypeCategoriesIndex)
    {
      m_eventTypeCategories.push_back(EventTypeCategoryMapper::GetEventTypeCategoryForName(eventTypeCategoriesJsonList[eventTypeCategoriesIndex].AsString()));
    }
    m_eventTypeCategoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      Aws::Map<Aws::String, JsonView> tagSetJsonMap = tagsJsonList[tagsIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> tagSetMap;
      for(auto& tagSetItem : tagSetJsonMap)
      {
        tagSetMap[tagSetItem.first] = tagSetItem.second.AsString();
      }
      m_tags.push_back(std::move(tagSetMap));
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventStatusCodes"))
  {
    Array<JsonView> eventStatusCodesJsonList = jsonValue.GetArray("eventStatusCodes");
    for(unsigned eventStatusCodesIndex = 0; eventStatusCodesIndex < eventStatusCodesJsonList.GetLength(); ++eventStatusCodesIndex)
    {
      m_eventStatusCodes.push_back(EventStatusCodeMapper::GetEventStatusCodeForName(eventStatusCodesJsonList[eventStatusCodesIndex].AsString()));
    }
    m_eventStatusCodesHasBeenSet = true;
  }

  return *this;
}

JsonValue EventFilter::Jsonize() const
{
  JsonValue payload;

  if(m_eventArnsHasBeenSet)
  {
   Array<JsonValue> eventArnsJsonList(m_eventArns.size());
   for(unsigned eventArnsIndex = 0; eventArnsIndex < eventArnsJsonList.GetLength(); ++eventArnsIndex)
   {
     eventArnsJsonList[eventArnsIndex].AsString(m_eventArns[eventArnsIndex]);
   }
   payload.WithArray("eventArns", std::move(eventArnsJsonList));

  }

  if(m_eventTypeCodesHasBeenSet)
  {
   Array<JsonValue> eventTypeCodesJsonList(m_eventTypeCodes.size());
   for(unsigned eventTypeCodesIndex = 0; eventTypeCodesIndex < eventTypeCodesJsonList.GetLength(); ++eventTypeCodesIndex)
   {
     eventTypeCodesJsonList[eventTypeCodesIndex].AsString(m_eventTypeCodes[eventTypeCodesIndex]);
   }
   payload.WithArray("eventTypeCodes", std::move(eventTypeCodesJsonList));

  }

  if(m_servicesHasBeenSet)
  {
   Array<JsonValue> servicesJsonList(m_services.size());
   for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
   {
     servicesJsonList[servicesIndex].AsString(m_services[servicesIndex]);
   }
   payload.WithArray("services", std::move(servicesJsonList));

  }

  if(m_regionsHasBeenSet)
  {
   Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("regions", std::move(regionsJsonList));

  }

  if(m_availabilityZonesHasBeenSet)
  {
   Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("availabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_startTimesHasBeenSet)
  {
   Array<JsonValue> startTimesJsonList(m_startTimes.size());
   for(unsigned startTimesIndex = 0; startTimesIndex < startTimesJsonList.GetLength(); ++startTimesIndex)
   {
     startTimesJsonList[startTimesIndex].AsObject(m_startTimes[startTimesIndex].Jsonize());
   }
   payload.WithArray("startTimes", std::move(startTimesJsonList));

  }

  if(m_endTimesHasBeenSet)
  {
   Array<JsonValue> endTimesJsonList(m_endTimes.size());
   for(unsigned endTimesIndex = 0; endTimesIndex < endTimesJsonList.GetLength(); ++endTimesIndex)
   {
     endTimesJsonList[endTimesIndex].AsObject(m_endTimes[endTimesIndex].Jsonize());
   }
   payload.WithArray("endTimes", std::move(endTimesJsonList));

  }

  if(m_lastUpdatedTimesHasBeenSet)
  {
   Array<JsonValue> lastUpdatedTimesJsonList(m_lastUpdatedTimes.size());
   for(unsigned lastUpdatedTimesIndex = 0; lastUpdatedTimesIndex < lastUpdatedTimesJsonList.GetLength(); ++lastUpdatedTimesIndex)
   {
     lastUpdatedTimesJsonList[lastUpdatedTimesIndex].AsObject(m_lastUpdatedTimes[lastUpdatedTimesIndex].Jsonize());
   }
   payload.WithArray("lastUpdatedTimes", std::move(lastUpdatedTimesJsonList));

  }

  if(m_entityArnsHasBeenSet)
  {
   Array<JsonValue> entityArnsJsonList(m_entityArns.size());
   for(unsigned entityArnsIndex = 0; entityArnsIndex < entityArnsJsonList.GetLength(); ++entityArnsIndex)
   {
     entityArnsJsonList[entityArnsIndex].AsString(m_entityArns[entityArnsIndex]);
   }
   payload.WithArray("entityArns", std::move(entityArnsJsonList));

  }

  if(m_entityValuesHasBeenSet)
  {
   Array<JsonValue> entityValuesJsonList(m_entityValues.size());
   for(unsigned entityValuesIndex = 0; entityValuesIndex < entityValuesJsonList.GetLength(); ++entityValuesIndex)
   {
     entityValuesJsonList[entityValuesIndex].AsString(m_entityValues[entityValuesIndex]);
   }
   payload.WithArray("entityValues", std::move(entityValuesJsonList));

  }

  if(m_eventTypeCategoriesHasBeenSet)
  {
   Array<JsonValue> eventTypeCategoriesJsonList(m_eventTypeCategories.size());
   for(unsigned eventTypeCategoriesIndex = 0; eventTypeCategoriesIndex < eventTypeCategoriesJsonList.GetLength(); ++eventTypeCategoriesIndex)
   {
     eventTypeCategoriesJsonList[eventTypeCategoriesIndex].AsString(EventTypeCategoryMapper::GetNameForEventTypeCategory(m_eventTypeCategories[eventTypeCategoriesIndex]));
   }
   payload.WithArray("eventTypeCategories", std::move(eventTypeCategoriesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     JsonValue tagSetJsonMap;
     for(auto& tagSetItem : m_tags[tagsIndex])
     {
       tagSetJsonMap.WithString(tagSetItem.first, tagSetItem.second);
     }
     tagsJsonList[tagsIndex].AsObject(std::move(tagSetJsonMap));
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_eventStatusCodesHasBeenSet)
  {
   Array<JsonValue> eventStatusCodesJsonList(m_eventStatusCodes.size());
   for(unsigned eventStatusCodesIndex = 0; eventStatusCodesIndex < eventStatusCodesJsonList.GetLength(); ++eventStatusCodesIndex)
   {
     eventStatusCodesJsonList[eventStatusCodesIndex].AsString(EventStatusCodeMapper::GetNameForEventStatusCode(m_eventStatusCodes[eventStatusCodesIndex]));
   }
   payload.WithArray("eventStatusCodes", std::move(eventStatusCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws
