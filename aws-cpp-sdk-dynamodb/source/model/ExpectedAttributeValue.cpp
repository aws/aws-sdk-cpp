/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

ExpectedAttributeValue::ExpectedAttributeValue(const JsonValue& jsonValue) : 
    m_valueHasBeenSet(false),
    m_exists(false),
    m_existsHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_attributeValueListHasBeenSet(false)
{
  *this = jsonValue;
}

ExpectedAttributeValue& ExpectedAttributeValue::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> attributeValueListJsonList = jsonValue.GetArray("AttributeValueList");
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
   Array<JsonValue> attributeValueListJsonList(m_attributeValueList.size());
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