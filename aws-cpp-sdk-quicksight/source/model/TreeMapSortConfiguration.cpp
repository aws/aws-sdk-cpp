/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TreeMapSortConfiguration.h>
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

TreeMapSortConfiguration::TreeMapSortConfiguration() : 
    m_treeMapSortHasBeenSet(false),
    m_treeMapGroupItemsLimitConfigurationHasBeenSet(false)
{
}

TreeMapSortConfiguration::TreeMapSortConfiguration(JsonView jsonValue) : 
    m_treeMapSortHasBeenSet(false),
    m_treeMapGroupItemsLimitConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

TreeMapSortConfiguration& TreeMapSortConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TreeMapSort"))
  {
    Aws::Utils::Array<JsonView> treeMapSortJsonList = jsonValue.GetArray("TreeMapSort");
    for(unsigned treeMapSortIndex = 0; treeMapSortIndex < treeMapSortJsonList.GetLength(); ++treeMapSortIndex)
    {
      m_treeMapSort.push_back(treeMapSortJsonList[treeMapSortIndex].AsObject());
    }
    m_treeMapSortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TreeMapGroupItemsLimitConfiguration"))
  {
    m_treeMapGroupItemsLimitConfiguration = jsonValue.GetObject("TreeMapGroupItemsLimitConfiguration");

    m_treeMapGroupItemsLimitConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue TreeMapSortConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_treeMapSortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> treeMapSortJsonList(m_treeMapSort.size());
   for(unsigned treeMapSortIndex = 0; treeMapSortIndex < treeMapSortJsonList.GetLength(); ++treeMapSortIndex)
   {
     treeMapSortJsonList[treeMapSortIndex].AsObject(m_treeMapSort[treeMapSortIndex].Jsonize());
   }
   payload.WithArray("TreeMapSort", std::move(treeMapSortJsonList));

  }

  if(m_treeMapGroupItemsLimitConfigurationHasBeenSet)
  {
   payload.WithObject("TreeMapGroupItemsLimitConfiguration", m_treeMapGroupItemsLimitConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
