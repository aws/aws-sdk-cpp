/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ExpectedAttributeValue.h>
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

ExpectedAttributeValue::ExpectedAttributeValue() : 
    m_valueHasBeenSet(false),
    m_exists(false),
    m_existsHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_attributeValueListHasBeenSet(false)
{
}

ExpectedAttributeValue::ExpectedAttributeValue(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_exists(false),
    m_existsHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_attributeValueListHasBeenSet(false)
{
  *this = jsonValue;
}

ExpectedAttributeValue& ExpectedAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Exists"))
  {
    m_exists = jsonValue.GetBool("Exists");

    m_existsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("ComparisonOperator"));

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeValueList"))
  {
    Aws::Utils::Array<JsonView> attributeValueListJsonList = jsonValue.GetArray("AttributeValueList");
    for(unsigned attributeValueListIndex = 0; attributeValueListIndex < attributeValueListJsonList.GetLength(); ++attributeValueListIndex)
    {
      m_attributeValueList.push_back(attributeValueListJsonList[attributeValueListIndex].AsObject());
    }
    m_attributeValueListHasBeenSet = true;
  }

  return *this;
}

JsonValue ExpectedAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  if(m_existsHasBeenSet)
  {
   payload.WithBool("Exists", m_exists);

  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  if(m_attributeValueListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeValueListJsonList(m_attributeValueList.size());
   for(unsigned attributeValueListIndex = 0; attributeValueListIndex < attributeValueListJsonList.GetLength(); ++attributeValueListIndex)
   {
     attributeValueListJsonList[attributeValueListIndex].AsObject(m_attributeValueList[attributeValueListIndex].Jsonize());
   }
   payload.WithArray("AttributeValueList", std::move(attributeValueListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
