/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    Array<JsonView> stringValueListJsonList = jsonValue.GetArray("StringValueList");
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
   Array<JsonValue> stringValueListJsonList(m_stringValueList.size());
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
