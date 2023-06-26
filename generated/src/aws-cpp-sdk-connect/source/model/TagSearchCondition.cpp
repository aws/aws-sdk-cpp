/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TagSearchCondition.h>
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

TagSearchCondition::TagSearchCondition() : 
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_tagKeyComparisonType(StringComparisonType::NOT_SET),
    m_tagKeyComparisonTypeHasBeenSet(false),
    m_tagValueComparisonType(StringComparisonType::NOT_SET),
    m_tagValueComparisonTypeHasBeenSet(false)
{
}

TagSearchCondition::TagSearchCondition(JsonView jsonValue) : 
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_tagKeyComparisonType(StringComparisonType::NOT_SET),
    m_tagKeyComparisonTypeHasBeenSet(false),
    m_tagValueComparisonType(StringComparisonType::NOT_SET),
    m_tagValueComparisonTypeHasBeenSet(false)
{
  *this = jsonValue;
}

TagSearchCondition& TagSearchCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tagKey"))
  {
    m_tagKey = jsonValue.GetString("tagKey");

    m_tagKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagValue"))
  {
    m_tagValue = jsonValue.GetString("tagValue");

    m_tagValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagKeyComparisonType"))
  {
    m_tagKeyComparisonType = StringComparisonTypeMapper::GetStringComparisonTypeForName(jsonValue.GetString("tagKeyComparisonType"));

    m_tagKeyComparisonTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagValueComparisonType"))
  {
    m_tagValueComparisonType = StringComparisonTypeMapper::GetStringComparisonTypeForName(jsonValue.GetString("tagValueComparisonType"));

    m_tagValueComparisonTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue TagSearchCondition::Jsonize() const
{
  JsonValue payload;

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("tagKey", m_tagKey);

  }

  if(m_tagValueHasBeenSet)
  {
   payload.WithString("tagValue", m_tagValue);

  }

  if(m_tagKeyComparisonTypeHasBeenSet)
  {
   payload.WithString("tagKeyComparisonType", StringComparisonTypeMapper::GetNameForStringComparisonType(m_tagKeyComparisonType));
  }

  if(m_tagValueComparisonTypeHasBeenSet)
  {
   payload.WithString("tagValueComparisonType", StringComparisonTypeMapper::GetNameForStringComparisonType(m_tagValueComparisonType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
