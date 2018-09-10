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
    Array<JsonView> aggregatorsJsonList = jsonValue.GetArray("Aggregators");
    for(unsigned aggregatorsIndex = 0; aggregatorsIndex < aggregatorsJsonList.GetLength(); ++aggregatorsIndex)
    {
      m_aggregators.push_back(aggregatorsJsonList[aggregatorsIndex].AsObject());
    }
    m_aggregatorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Groups"))
  {
    Array<JsonView> groupsJsonList = jsonValue.GetArray("Groups");
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
   Array<JsonValue> aggregatorsJsonList(m_aggregators.size());
   for(unsigned aggregatorsIndex = 0; aggregatorsIndex < aggregatorsJsonList.GetLength(); ++aggregatorsIndex)
   {
     aggregatorsJsonList[aggregatorsIndex].AsObject(m_aggregators[aggregatorsIndex].Jsonize());
   }
   payload.WithArray("Aggregators", std::move(aggregatorsJsonList));

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

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
