/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/FilterExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

FilterExpression::FilterExpression() : 
    m_expressionHasBeenSet(false),
    m_type(FilterExpressionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

FilterExpression::FilterExpression(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_type(FilterExpressionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

FilterExpression& FilterExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = FilterExpressionTypeMapper::GetFilterExpressionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterExpression::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FilterExpressionTypeMapper::GetNameForFilterExpressionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
