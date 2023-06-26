/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StringCondition.h>
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

StringCondition::StringCondition() : 
    m_fieldNameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_comparisonType(StringComparisonType::NOT_SET),
    m_comparisonTypeHasBeenSet(false)
{
}

StringCondition::StringCondition(JsonView jsonValue) : 
    m_fieldNameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_comparisonType(StringComparisonType::NOT_SET),
    m_comparisonTypeHasBeenSet(false)
{
  *this = jsonValue;
}

StringCondition& StringCondition::operator =(JsonView jsonValue)
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
    m_comparisonType = StringComparisonTypeMapper::GetStringComparisonTypeForName(jsonValue.GetString("ComparisonType"));

    m_comparisonTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue StringCondition::Jsonize() const
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
   payload.WithString("ComparisonType", StringComparisonTypeMapper::GetNameForStringComparisonType(m_comparisonType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
