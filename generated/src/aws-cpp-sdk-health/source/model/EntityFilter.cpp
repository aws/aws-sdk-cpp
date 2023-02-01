/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/EntityFilter.h>
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

EntityFilter::EntityFilter() : 
    m_eventArnsHasBeenSet(false),
    m_entityArnsHasBeenSet(false),
    m_entityValuesHasBeenSet(false),
    m_lastUpdatedTimesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_statusCodesHasBeenSet(false)
{
}

EntityFilter::EntityFilter(JsonView jsonValue) : 
    m_eventArnsHasBeenSet(false),
    m_entityArnsHasBeenSet(false),
    m_entityValuesHasBeenSet(false),
    m_lastUpdatedTimesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_statusCodesHasBeenSet(false)
{
  *this = jsonValue;
}

EntityFilter& EntityFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventArns"))
  {
    Aws::Utils::Array<JsonView> eventArnsJsonList = jsonValue.GetArray("eventArns");
    for(unsigned eventArnsIndex = 0; eventArnsIndex < eventArnsJsonList.GetLength(); ++eventArnsIndex)
    {
      m_eventArns.push_back(eventArnsJsonList[eventArnsIndex].AsString());
    }
    m_eventArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityArns"))
  {
    Aws::Utils::Array<JsonView> entityArnsJsonList = jsonValue.GetArray("entityArns");
    for(unsigned entityArnsIndex = 0; entityArnsIndex < entityArnsJsonList.GetLength(); ++entityArnsIndex)
    {
      m_entityArns.push_back(entityArnsJsonList[entityArnsIndex].AsString());
    }
    m_entityArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityValues"))
  {
    Aws::Utils::Array<JsonView> entityValuesJsonList = jsonValue.GetArray("entityValues");
    for(unsigned entityValuesIndex = 0; entityValuesIndex < entityValuesJsonList.GetLength(); ++entityValuesIndex)
    {
      m_entityValues.push_back(entityValuesJsonList[entityValuesIndex].AsString());
    }
    m_entityValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTimes"))
  {
    Aws::Utils::Array<JsonView> lastUpdatedTimesJsonList = jsonValue.GetArray("lastUpdatedTimes");
    for(unsigned lastUpdatedTimesIndex = 0; lastUpdatedTimesIndex < lastUpdatedTimesJsonList.GetLength(); ++lastUpdatedTimesIndex)
    {
      m_lastUpdatedTimes.push_back(lastUpdatedTimesJsonList[lastUpdatedTimesIndex].AsObject());
    }
    m_lastUpdatedTimesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
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

  if(jsonValue.ValueExists("statusCodes"))
  {
    Aws::Utils::Array<JsonView> statusCodesJsonList = jsonValue.GetArray("statusCodes");
    for(unsigned statusCodesIndex = 0; statusCodesIndex < statusCodesJsonList.GetLength(); ++statusCodesIndex)
    {
      m_statusCodes.push_back(EntityStatusCodeMapper::GetEntityStatusCodeForName(statusCodesJsonList[statusCodesIndex].AsString()));
    }
    m_statusCodesHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityFilter::Jsonize() const
{
  JsonValue payload;

  if(m_eventArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventArnsJsonList(m_eventArns.size());
   for(unsigned eventArnsIndex = 0; eventArnsIndex < eventArnsJsonList.GetLength(); ++eventArnsIndex)
   {
     eventArnsJsonList[eventArnsIndex].AsString(m_eventArns[eventArnsIndex]);
   }
   payload.WithArray("eventArns", std::move(eventArnsJsonList));

  }

  if(m_entityArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityArnsJsonList(m_entityArns.size());
   for(unsigned entityArnsIndex = 0; entityArnsIndex < entityArnsJsonList.GetLength(); ++entityArnsIndex)
   {
     entityArnsJsonList[entityArnsIndex].AsString(m_entityArns[entityArnsIndex]);
   }
   payload.WithArray("entityArns", std::move(entityArnsJsonList));

  }

  if(m_entityValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityValuesJsonList(m_entityValues.size());
   for(unsigned entityValuesIndex = 0; entityValuesIndex < entityValuesJsonList.GetLength(); ++entityValuesIndex)
   {
     entityValuesJsonList[entityValuesIndex].AsString(m_entityValues[entityValuesIndex]);
   }
   payload.WithArray("entityValues", std::move(entityValuesJsonList));

  }

  if(m_lastUpdatedTimesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lastUpdatedTimesJsonList(m_lastUpdatedTimes.size());
   for(unsigned lastUpdatedTimesIndex = 0; lastUpdatedTimesIndex < lastUpdatedTimesJsonList.GetLength(); ++lastUpdatedTimesIndex)
   {
     lastUpdatedTimesJsonList[lastUpdatedTimesIndex].AsObject(m_lastUpdatedTimes[lastUpdatedTimesIndex].Jsonize());
   }
   payload.WithArray("lastUpdatedTimes", std::move(lastUpdatedTimesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
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

  if(m_statusCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusCodesJsonList(m_statusCodes.size());
   for(unsigned statusCodesIndex = 0; statusCodesIndex < statusCodesJsonList.GetLength(); ++statusCodesIndex)
   {
     statusCodesJsonList[statusCodesIndex].AsString(EntityStatusCodeMapper::GetNameForEntityStatusCode(m_statusCodes[statusCodesIndex]));
   }
   payload.WithArray("statusCodes", std::move(statusCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws
