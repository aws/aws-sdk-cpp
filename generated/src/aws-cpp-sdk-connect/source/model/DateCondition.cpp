/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DateCondition.h>
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

DateCondition::DateCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

DateCondition& DateCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = jsonValue.GetString("FieldName");
    m_fieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComparisonType"))
  {
    m_comparisonType = DateComparisonTypeMapper::GetDateComparisonTypeForName(jsonValue.GetString("ComparisonType"));
    m_comparisonTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DateCondition::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", m_fieldName);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_comparisonTypeHasBeenSet)
  {
   payload.WithString("ComparisonType", DateComparisonTypeMapper::GetNameForDateComparisonType(m_comparisonType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
