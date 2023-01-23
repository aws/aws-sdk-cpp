/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CoverageByTime.h>
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

CoverageByTime::CoverageByTime() : 
    m_timePeriodHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoverageByTime::CoverageByTime(JsonView jsonValue) : 
    m_timePeriodHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_totalHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageByTime& CoverageByTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimePeriod"))
  {
    m_timePeriod = jsonValue.GetObject("TimePeriod");

    m_timePeriodHasBeenSet = true;
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

  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetObject("Total");

    m_totalHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageByTime::Jsonize() const
{
  JsonValue payload;

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("TimePeriod", m_timePeriod.Jsonize());

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

  if(m_totalHasBeenSet)
  {
   payload.WithObject("Total", m_total.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
