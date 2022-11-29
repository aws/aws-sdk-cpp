/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FunnelChartSortConfiguration.h>
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

FunnelChartSortConfiguration::FunnelChartSortConfiguration() : 
    m_categorySortHasBeenSet(false),
    m_categoryItemsLimitHasBeenSet(false)
{
}

FunnelChartSortConfiguration::FunnelChartSortConfiguration(JsonView jsonValue) : 
    m_categorySortHasBeenSet(false),
    m_categoryItemsLimitHasBeenSet(false)
{
  *this = jsonValue;
}

FunnelChartSortConfiguration& FunnelChartSortConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CategorySort"))
  {
    Aws::Utils::Array<JsonView> categorySortJsonList = jsonValue.GetArray("CategorySort");
    for(unsigned categorySortIndex = 0; categorySortIndex < categorySortJsonList.GetLength(); ++categorySortIndex)
    {
      m_categorySort.push_back(categorySortJsonList[categorySortIndex].AsObject());
    }
    m_categorySortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryItemsLimit"))
  {
    m_categoryItemsLimit = jsonValue.GetObject("CategoryItemsLimit");

    m_categoryItemsLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue FunnelChartSortConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_categorySortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categorySortJsonList(m_categorySort.size());
   for(unsigned categorySortIndex = 0; categorySortIndex < categorySortJsonList.GetLength(); ++categorySortIndex)
   {
     categorySortJsonList[categorySortIndex].AsObject(m_categorySort[categorySortIndex].Jsonize());
   }
   payload.WithArray("CategorySort", std::move(categorySortJsonList));

  }

  if(m_categoryItemsLimitHasBeenSet)
  {
   payload.WithObject("CategoryItemsLimit", m_categoryItemsLimit.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
