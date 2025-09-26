/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchContactsTimestampCondition.h>
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

SearchContactsTimestampCondition::SearchContactsTimestampCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchContactsTimestampCondition& SearchContactsTimestampCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = SearchContactsTimeRangeTypeMapper::GetSearchContactsTimeRangeTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConditionType"))
  {
    m_conditionType = SearchContactsTimeRangeConditionTypeMapper::GetSearchContactsTimeRangeConditionTypeForName(jsonValue.GetString("ConditionType"));
    m_conditionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchContactsTimestampCondition::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SearchContactsTimeRangeTypeMapper::GetNameForSearchContactsTimeRangeType(m_type));
  }

  if(m_conditionTypeHasBeenSet)
  {
   payload.WithString("ConditionType", SearchContactsTimeRangeConditionTypeMapper::GetNameForSearchContactsTimeRangeConditionType(m_conditionType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
