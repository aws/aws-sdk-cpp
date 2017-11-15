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
    m_aggregatorsHasBeenSet(false)
{
}

InventoryAggregator::InventoryAggregator(const JsonValue& jsonValue) : 
    m_expressionHasBeenSet(false),
    m_aggregatorsHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryAggregator& InventoryAggregator::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aggregators"))
  {
    Array<JsonValue> aggregatorsJsonList = jsonValue.GetArray("Aggregators");
    for(unsigned aggregatorsIndex = 0; aggregatorsIndex < aggregatorsJsonList.GetLength(); ++aggregatorsIndex)
    {
      m_aggregators.push_back(aggregatorsJsonList[aggregatorsIndex].AsObject());
    }
    m_aggregatorsHasBeenSet = true;
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

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
