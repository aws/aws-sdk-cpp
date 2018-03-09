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

#include <aws/ce/model/ResultByTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

ResultByTime::ResultByTime() : 
    m_timePeriodHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_estimated(false),
    m_estimatedHasBeenSet(false)
{
}

ResultByTime::ResultByTime(const JsonValue& jsonValue) : 
    m_timePeriodHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_estimated(false),
    m_estimatedHasBeenSet(false)
{
  *this = jsonValue;
}

ResultByTime& ResultByTime::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TimePeriod"))
  {
    m_timePeriod = jsonValue.GetObject("TimePeriod");

    m_timePeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Total"))
  {
    Aws::Map<Aws::String, JsonValue> totalJsonMap = jsonValue.GetObject("Total").GetAllObjects();
    for(auto& totalItem : totalJsonMap)
    {
      m_total[totalItem.first] = totalItem.second.AsObject();
    }
    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Groups"))
  {
    Array<JsonValue> groupsJsonList = jsonValue.GetArray("Groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsObject());
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Estimated"))
  {
    m_estimated = jsonValue.GetBool("Estimated");

    m_estimatedHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultByTime::Jsonize() const
{
  JsonValue payload;

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("TimePeriod", m_timePeriod.Jsonize());

  }

  if(m_totalHasBeenSet)
  {
   JsonValue totalJsonMap;
   for(auto& totalItem : m_total)
   {
     totalJsonMap.WithObject(totalItem.first, totalItem.second.Jsonize());
   }
   payload.WithObject("Total", std::move(totalJsonMap));

  }

  if(m_groupsHasBeenSet)
  {
   Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsObject(m_groups[groupsIndex].Jsonize());
   }
   payload.WithArray("Groups", std::move(groupsJsonList));

  }

  if(m_estimatedHasBeenSet)
  {
   payload.WithBool("Estimated", m_estimated);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
