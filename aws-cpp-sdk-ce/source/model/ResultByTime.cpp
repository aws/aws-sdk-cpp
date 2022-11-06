/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ResultByTime::ResultByTime(JsonView jsonValue) : 
    m_timePeriodHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_estimated(false),
    m_estimatedHasBeenSet(false)
{
  *this = jsonValue;
}

ResultByTime& ResultByTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimePeriod"))
  {
    m_timePeriod = jsonValue.GetObject("TimePeriod");

    m_timePeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Total"))
  {
    Aws::Map<Aws::String, JsonView> totalJsonMap = jsonValue.GetObject("Total").GetAllObjects();
    for(auto& totalItem : totalJsonMap)
    {
      m_total[totalItem.first] = totalItem.second.AsObject();
    }
    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("Groups");
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
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
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
