/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Expression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Expression::Expression(JsonView jsonValue)
{
  *this = jsonValue;
}

Expression& Expression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeCondition"))
  {
    m_attributeCondition = jsonValue.GetObject("AttributeCondition");
    m_attributeConditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AndExpression"))
  {
    Aws::Utils::Array<JsonView> andExpressionJsonList = jsonValue.GetArray("AndExpression");
    for(unsigned andExpressionIndex = 0; andExpressionIndex < andExpressionJsonList.GetLength(); ++andExpressionIndex)
    {
      m_andExpression.push_back(andExpressionJsonList[andExpressionIndex].AsObject());
    }
    m_andExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrExpression"))
  {
    Aws::Utils::Array<JsonView> orExpressionJsonList = jsonValue.GetArray("OrExpression");
    for(unsigned orExpressionIndex = 0; orExpressionIndex < orExpressionJsonList.GetLength(); ++orExpressionIndex)
    {
      m_orExpression.push_back(orExpressionJsonList[orExpressionIndex].AsObject());
    }
    m_orExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotAttributeCondition"))
  {
    m_notAttributeCondition = jsonValue.GetObject("NotAttributeCondition");
    m_notAttributeConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue Expression::Jsonize() const
{
  JsonValue payload;

  if(m_attributeConditionHasBeenSet)
  {
   payload.WithObject("AttributeCondition", m_attributeCondition.Jsonize());

  }

  if(m_andExpressionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> andExpressionJsonList(m_andExpression.size());
   for(unsigned andExpressionIndex = 0; andExpressionIndex < andExpressionJsonList.GetLength(); ++andExpressionIndex)
   {
     andExpressionJsonList[andExpressionIndex].AsObject(m_andExpression[andExpressionIndex].Jsonize());
   }
   payload.WithArray("AndExpression", std::move(andExpressionJsonList));

  }

  if(m_orExpressionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orExpressionJsonList(m_orExpression.size());
   for(unsigned orExpressionIndex = 0; orExpressionIndex < orExpressionJsonList.GetLength(); ++orExpressionIndex)
   {
     orExpressionJsonList[orExpressionIndex].AsObject(m_orExpression[orExpressionIndex].Jsonize());
   }
   payload.WithArray("OrExpression", std::move(orExpressionJsonList));

  }

  if(m_notAttributeConditionHasBeenSet)
  {
   payload.WithObject("NotAttributeCondition", m_notAttributeCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
