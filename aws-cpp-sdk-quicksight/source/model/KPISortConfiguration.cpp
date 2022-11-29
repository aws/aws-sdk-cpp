/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/KPISortConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

KPISortConfiguration::KPISortConfiguration() : 
    m_trendGroupSortHasBeenSet(false)
{
}

KPISortConfiguration::KPISortConfiguration(JsonView jsonValue) : 
    m_trendGroupSortHasBeenSet(false)
{
  *this = jsonValue;
}

KPISortConfiguration& KPISortConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrendGroupSort"))
  {
    Aws::Utils::Array<JsonView> trendGroupSortJsonList = jsonValue.GetArray("TrendGroupSort");
    for(unsigned trendGroupSortIndex = 0; trendGroupSortIndex < trendGroupSortJsonList.GetLength(); ++trendGroupSortIndex)
    {
      m_trendGroupSort.push_back(trendGroupSortJsonList[trendGroupSortIndex].AsObject());
    }
    m_trendGroupSortHasBeenSet = true;
  }

  return *this;
}

JsonValue KPISortConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_trendGroupSortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trendGroupSortJsonList(m_trendGroupSort.size());
   for(unsigned trendGroupSortIndex = 0; trendGroupSortIndex < trendGroupSortJsonList.GetLength(); ++trendGroupSortIndex)
   {
     trendGroupSortJsonList[trendGroupSortIndex].AsObject(m_trendGroupSort[trendGroupSortIndex].Jsonize());
   }
   payload.WithArray("TrendGroupSort", std::move(trendGroupSortJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
