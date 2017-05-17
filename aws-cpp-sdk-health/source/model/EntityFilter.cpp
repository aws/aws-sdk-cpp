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

EntityFilter::EntityFilter(const JsonValue& jsonValue) : 
    m_eventArnsHasBeenSet(false),
    m_entityArnsHasBeenSet(false),
    m_entityValuesHasBeenSet(false),
    m_lastUpdatedTimesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_statusCodesHasBeenSet(false)
{
  *this = jsonValue;
}

EntityFilter& EntityFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("eventArns"))
  {
    Array<JsonValue> eventArnsJsonList = jsonValue.GetArray("eventArns");
    for(unsigned eventArnsIndex = 0; eventArnsIndex < eventArnsJsonList.GetLength(); ++eventArnsIndex)
    {
      m_eventArns.push_back(eventArnsJsonList[eventArnsIndex].AsString());
    }
    m_eventArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityArns"))
  {
    Array<JsonValue> entityArnsJsonList = jsonValue.GetArray("entityArns");
    for(unsigned entityArnsIndex = 0; entityArnsIndex < entityArnsJsonList.GetLength(); ++entityArnsIndex)
    {
      m_entityArns.push_back(entityArnsJsonList[entityArnsIndex].AsString());
    }
    m_entityArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityValues"))
  {
    Array<JsonValue> entityValuesJsonList = jsonValue.GetArray("entityValues");
    for(unsigned entityValuesIndex = 0; entityValuesIndex < entityValuesJsonList.GetLength(); ++entityValuesIndex)
    {
      m_entityValues.push_back(entityValuesJsonList[entityValuesIndex].AsString());
    }
    m_entityValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTimes"))
  {
    Array<JsonValue> lastUpdatedTimesJsonList = jsonValue.GetArray("lastUpdatedTimes");
    for(unsigned lastUpdatedTimesIndex = 0; lastUpdatedTimesIndex < lastUpdatedTimesJsonList.GetLength(); ++lastUpdatedTimesIndex)
    {
      m_lastUpdatedTimes.push_back(lastUpdatedTimesJsonList[lastUpdatedTimesIndex].AsObject());
    }
    m_lastUpdatedTimesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonValue> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      Aws::Map<Aws::String, JsonValue> tagSetJsonMap = tagsJsonList[tagsIndex].GetAllObjects();
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
    Array<JsonValue> statusCodesJsonList = jsonValue.GetArray("statusCodes");
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
   Array<JsonValue> eventArnsJsonList(m_eventArns.size());
   for(unsigned eventArnsIndex = 0; eventArnsIndex < eventArnsJsonList.GetLength(); ++eventArnsIndex)
   {
     eventArnsJsonList[eventArnsIndex].AsString(m_eventArns[eventArnsIndex]);
   }
   payload.WithArray("eventArns", std::move(eventArnsJsonList));

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

  if(m_lastUpdatedTimesHasBeenSet)
  {
   Array<JsonValue> lastUpdatedTimesJsonList(m_lastUpdatedTimes.size());
   for(unsigned lastUpdatedTimesIndex = 0; lastUpdatedTimesIndex < lastUpdatedTimesJsonList.GetLength(); ++lastUpdatedTimesIndex)
   {
     lastUpdatedTimesJsonList[lastUpdatedTimesIndex].AsObject(m_lastUpdatedTimes[lastUpdatedTimesIndex].Jsonize());
   }
   payload.WithArray("lastUpdatedTimes", std::move(lastUpdatedTimesJsonList));

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

  if(m_statusCodesHasBeenSet)
  {
   Array<JsonValue> statusCodesJsonList(m_statusCodes.size());
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