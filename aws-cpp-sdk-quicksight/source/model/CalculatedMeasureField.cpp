/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CalculatedMeasureField.h>
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

CalculatedMeasureField::CalculatedMeasureField() : 
    m_fieldIdHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

CalculatedMeasureField::CalculatedMeasureField(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
  *this = jsonValue;
}

CalculatedMeasureField& CalculatedMeasureField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculatedMeasureField::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
