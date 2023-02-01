/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/FilterCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

FilterCondition::FilterCondition() : 
    m_field(FieldNameString::NOT_SET),
    m_fieldHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_stringValueListHasBeenSet(false)
{
}

FilterCondition::FilterCondition(JsonView jsonValue) : 
    m_field(FieldNameString::NOT_SET),
    m_fieldHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_stringValueListHasBeenSet(false)
{
  *this = jsonValue;
}

FilterCondition& FilterCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Field"))
  {
    m_field = FieldNameStringMapper::GetFieldNameStringForName(jsonValue.GetString("Field"));

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("ComparisonOperator"));

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StringValueList"))
  {
    Aws::Utils::Array<JsonView> stringValueListJsonList = jsonValue.GetArray("StringValueList");
    for(unsigned stringValueListIndex = 0; stringValueListIndex < stringValueListJsonList.GetLength(); ++stringValueListIndex)
    {
      m_stringValueList.push_back(stringValueListJsonList[stringValueListIndex].AsString());
    }
    m_stringValueListHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterCondition::Jsonize() const
{
  JsonValue payload;

  if(m_fieldHasBeenSet)
  {
   payload.WithString("Field", FieldNameStringMapper::GetNameForFieldNameString(m_field));
  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  if(m_stringValueListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringValueListJsonList(m_stringValueList.size());
   for(unsigned stringValueListIndex = 0; stringValueListIndex < stringValueListJsonList.GetLength(); ++stringValueListIndex)
   {
     stringValueListJsonList[stringValueListIndex].AsString(m_stringValueList[stringValueListIndex]);
   }
   payload.WithArray("StringValueList", std::move(stringValueListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
