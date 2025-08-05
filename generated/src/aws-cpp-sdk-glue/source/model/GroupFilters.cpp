/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GroupFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

GroupFilters::GroupFilters(JsonView jsonValue)
{
  *this = jsonValue;
}

GroupFilters& GroupFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");
    m_groupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("Filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogicalOperator"))
  {
    m_logicalOperator = FilterLogicalOperatorMapper::GetFilterLogicalOperatorForName(jsonValue.GetString("LogicalOperator"));
    m_logicalOperatorHasBeenSet = true;
  }
  return *this;
}

JsonValue GroupFilters::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_logicalOperatorHasBeenSet)
  {
   payload.WithString("LogicalOperator", FilterLogicalOperatorMapper::GetNameForFilterLogicalOperator(m_logicalOperator));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
