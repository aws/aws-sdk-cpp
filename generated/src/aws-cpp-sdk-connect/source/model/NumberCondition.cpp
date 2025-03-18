/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NumberCondition.h>
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

NumberCondition::NumberCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

NumberCondition& NumberCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = jsonValue.GetString("FieldName");
    m_fieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinValue"))
  {
    m_minValue = jsonValue.GetInteger("MinValue");
    m_minValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxValue"))
  {
    m_maxValue = jsonValue.GetInteger("MaxValue");
    m_maxValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComparisonType"))
  {
    m_comparisonType = NumberComparisonTypeMapper::GetNumberComparisonTypeForName(jsonValue.GetString("ComparisonType"));
    m_comparisonTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue NumberCondition::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", m_fieldName);

  }

  if(m_minValueHasBeenSet)
  {
   payload.WithInteger("MinValue", m_minValue);

  }

  if(m_maxValueHasBeenSet)
  {
   payload.WithInteger("MaxValue", m_maxValue);

  }

  if(m_comparisonTypeHasBeenSet)
  {
   payload.WithString("ComparisonType", NumberComparisonTypeMapper::GetNameForNumberComparisonType(m_comparisonType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
