/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SearchGroupedFilterExpressions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

SearchGroupedFilterExpressions::SearchGroupedFilterExpressions() : 
    m_filtersHasBeenSet(false),
    m_operator(LogicalOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

SearchGroupedFilterExpressions::SearchGroupedFilterExpressions(JsonView jsonValue) : 
    m_filtersHasBeenSet(false),
    m_operator(LogicalOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

SearchGroupedFilterExpressions& SearchGroupedFilterExpressions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = LogicalOperatorMapper::GetLogicalOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchGroupedFilterExpressions::Jsonize() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", LogicalOperatorMapper::GetNameForLogicalOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
