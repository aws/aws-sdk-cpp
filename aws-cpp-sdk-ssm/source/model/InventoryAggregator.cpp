/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InventoryAggregator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InventoryAggregator::InventoryAggregator() : 
    m_expressionHasBeenSet(false),
    m_aggregatorsHasBeenSet(false),
    m_groupsHasBeenSet(false)
{
}

InventoryAggregator::InventoryAggregator(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_aggregatorsHasBeenSet(false),
    m_groupsHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryAggregator& InventoryAggregator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aggregators"))
  {
    Aws::Utils::Array<JsonView> aggregatorsJsonList = jsonValue.GetArray("Aggregators");
    for(unsigned aggregatorsIndex = 0; aggregatorsIndex < aggregatorsJsonList.GetLength(); ++aggregatorsIndex)
    {
      m_aggregators.push_back(aggregatorsJsonList[aggregatorsIndex].AsObject());
    }
    m_aggregatorsHasBeenSet = true;
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

  return *this;
}

JsonValue InventoryAggregator::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_aggregatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregatorsJsonList(m_aggregators.size());
   for(unsigned aggregatorsIndex = 0; aggregatorsIndex < aggregatorsJsonList.GetLength(); ++aggregatorsIndex)
   {
     aggregatorsJsonList[aggregatorsIndex].AsObject(m_aggregators[aggregatorsIndex].Jsonize());
   }
   payload.WithArray("Aggregators", std::move(aggregatorsJsonList));

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

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
