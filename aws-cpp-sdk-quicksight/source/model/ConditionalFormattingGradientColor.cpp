/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ConditionalFormattingGradientColor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ConditionalFormattingGradientColor::ConditionalFormattingGradientColor() : 
    m_expressionHasBeenSet(false),
    m_colorHasBeenSet(false)
{
}

ConditionalFormattingGradientColor::ConditionalFormattingGradientColor(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_colorHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionalFormattingGradientColor& ConditionalFormattingGradientColor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetObject("Color");

    m_colorHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionalFormattingGradientColor::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_colorHasBeenSet)
  {
   payload.WithObject("Color", m_color.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
