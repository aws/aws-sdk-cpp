/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/WeeklyAutoScalingSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

WeeklyAutoScalingSchedule::WeeklyAutoScalingSchedule() : 
    m_mondayHasBeenSet(false),
    m_tuesdayHasBeenSet(false),
    m_wednesdayHasBeenSet(false),
    m_thursdayHasBeenSet(false),
    m_fridayHasBeenSet(false),
    m_saturdayHasBeenSet(false),
    m_sundayHasBeenSet(false)
{
}

WeeklyAutoScalingSchedule::WeeklyAutoScalingSchedule(const JsonValue& jsonValue) : 
    m_mondayHasBeenSet(false),
    m_tuesdayHasBeenSet(false),
    m_wednesdayHasBeenSet(false),
    m_thursdayHasBeenSet(false),
    m_fridayHasBeenSet(false),
    m_saturdayHasBeenSet(false),
    m_sundayHasBeenSet(false)
{
  *this = jsonValue;
}

WeeklyAutoScalingSchedule& WeeklyAutoScalingSchedule::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Monday"))
  {
    Aws::Map<Aws::String, JsonValue> mondayJsonMap = jsonValue.GetObject("Monday").GetAllObjects();
    for(auto& mondayItem : mondayJsonMap)
    {
      m_monday[mondayItem.first] = mondayItem.second.AsString();
    }
    m_mondayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tuesday"))
  {
    Aws::Map<Aws::String, JsonValue> tuesdayJsonMap = jsonValue.GetObject("Tuesday").GetAllObjects();
    for(auto& tuesdayItem : tuesdayJsonMap)
    {
      m_tuesday[tuesdayItem.first] = tuesdayItem.second.AsString();
    }
    m_tuesdayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Wednesday"))
  {
    Aws::Map<Aws::String, JsonValue> wednesdayJsonMap = jsonValue.GetObject("Wednesday").GetAllObjects();
    for(auto& wednesdayItem : wednesdayJsonMap)
    {
      m_wednesday[wednesdayItem.first] = wednesdayItem.second.AsString();
    }
    m_wednesdayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Thursday"))
  {
    Aws::Map<Aws::String, JsonValue> thursdayJsonMap = jsonValue.GetObject("Thursday").GetAllObjects();
    for(auto& thursdayItem : thursdayJsonMap)
    {
      m_thursday[thursdayItem.first] = thursdayItem.second.AsString();
    }
    m_thursdayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Friday"))
  {
    Aws::Map<Aws::String, JsonValue> fridayJsonMap = jsonValue.GetObject("Friday").GetAllObjects();
    for(auto& fridayItem : fridayJsonMap)
    {
      m_friday[fridayItem.first] = fridayItem.second.AsString();
    }
    m_fridayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Saturday"))
  {
    Aws::Map<Aws::String, JsonValue> saturdayJsonMap = jsonValue.GetObject("Saturday").GetAllObjects();
    for(auto& saturdayItem : saturdayJsonMap)
    {
      m_saturday[saturdayItem.first] = saturdayItem.second.AsString();
    }
    m_saturdayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sunday"))
  {
    Aws::Map<Aws::String, JsonValue> sundayJsonMap = jsonValue.GetObject("Sunday").GetAllObjects();
    for(auto& sundayItem : sundayJsonMap)
    {
      m_sunday[sundayItem.first] = sundayItem.second.AsString();
    }
    m_sundayHasBeenSet = true;
  }

  return *this;
}

JsonValue WeeklyAutoScalingSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_mondayHasBeenSet)
  {
   JsonValue mondayJsonMap;
   for(auto& mondayItem : m_monday)
   {
     mondayJsonMap.WithString(mondayItem.first, mondayItem.second);
   }
   payload.WithObject("Monday", std::move(mondayJsonMap));

  }

  if(m_tuesdayHasBeenSet)
  {
   JsonValue tuesdayJsonMap;
   for(auto& tuesdayItem : m_tuesday)
   {
     tuesdayJsonMap.WithString(tuesdayItem.first, tuesdayItem.second);
   }
   payload.WithObject("Tuesday", std::move(tuesdayJsonMap));

  }

  if(m_wednesdayHasBeenSet)
  {
   JsonValue wednesdayJsonMap;
   for(auto& wednesdayItem : m_wednesday)
   {
     wednesdayJsonMap.WithString(wednesdayItem.first, wednesdayItem.second);
   }
   payload.WithObject("Wednesday", std::move(wednesdayJsonMap));

  }

  if(m_thursdayHasBeenSet)
  {
   JsonValue thursdayJsonMap;
   for(auto& thursdayItem : m_thursday)
   {
     thursdayJsonMap.WithString(thursdayItem.first, thursdayItem.second);
   }
   payload.WithObject("Thursday", std::move(thursdayJsonMap));

  }

  if(m_fridayHasBeenSet)
  {
   JsonValue fridayJsonMap;
   for(auto& fridayItem : m_friday)
   {
     fridayJsonMap.WithString(fridayItem.first, fridayItem.second);
   }
   payload.WithObject("Friday", std::move(fridayJsonMap));

  }

  if(m_saturdayHasBeenSet)
  {
   JsonValue saturdayJsonMap;
   for(auto& saturdayItem : m_saturday)
   {
     saturdayJsonMap.WithString(saturdayItem.first, saturdayItem.second);
   }
   payload.WithObject("Saturday", std::move(saturdayJsonMap));

  }

  if(m_sundayHasBeenSet)
  {
   JsonValue sundayJsonMap;
   for(auto& sundayItem : m_sunday)
   {
     sundayJsonMap.WithString(sundayItem.first, sundayItem.second);
   }
   payload.WithObject("Sunday", std::move(sundayJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws