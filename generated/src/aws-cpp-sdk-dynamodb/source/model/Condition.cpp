/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/Condition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

Condition::Condition() : 
    m_attributeValueListHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false)
{
}

Condition::Condition(JsonView jsonValue) : 
    m_attributeValueListHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false)
{
  *this = jsonValue;
}

Condition& Condition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeValueList"))
  {
    Aws::Utils::Array<JsonView> attributeValueListJsonList = jsonValue.GetArray("AttributeValueList");
    for(unsigned attributeValueListIndex = 0; attributeValueListIndex < attributeValueListJsonList.GetLength(); ++attributeValueListIndex)
    {
      m_attributeValueList.push_back(attributeValueListJsonList[attributeValueListIndex].AsObject());
    }
    m_attributeValueListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("ComparisonOperator"));

    m_comparisonOperatorHasBeenSet = true;
  }

  return *this;
}

JsonValue Condition::Jsonize() const
{
  JsonValue payload;

  if(m_attributeValueListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeValueListJsonList(m_attributeValueList.size());
   for(unsigned attributeValueListIndex = 0; attributeValueListIndex < attributeValueListJsonList.GetLength(); ++attributeValueListIndex)
   {
     attributeValueListJsonList[attributeValueListIndex].AsObject(m_attributeValueList[attributeValueListIndex].Jsonize());
   }
   payload.WithArray("AttributeValueList", std::move(attributeValueListJsonList));

  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
