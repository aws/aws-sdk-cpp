/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RowLevelPermissionTagRule.h>
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

RowLevelPermissionTagRule::RowLevelPermissionTagRule() : 
    m_tagKeyHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_tagMultiValueDelimiterHasBeenSet(false),
    m_matchAllValueHasBeenSet(false)
{
}

RowLevelPermissionTagRule::RowLevelPermissionTagRule(JsonView jsonValue) : 
    m_tagKeyHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_tagMultiValueDelimiterHasBeenSet(false),
    m_matchAllValueHasBeenSet(false)
{
  *this = jsonValue;
}

RowLevelPermissionTagRule& RowLevelPermissionTagRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TagKey"))
  {
    m_tagKey = jsonValue.GetString("TagKey");

    m_tagKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagMultiValueDelimiter"))
  {
    m_tagMultiValueDelimiter = jsonValue.GetString("TagMultiValueDelimiter");

    m_tagMultiValueDelimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchAllValue"))
  {
    m_matchAllValue = jsonValue.GetString("MatchAllValue");

    m_matchAllValueHasBeenSet = true;
  }

  return *this;
}

JsonValue RowLevelPermissionTagRule::Jsonize() const
{
  JsonValue payload;

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("TagKey", m_tagKey);

  }

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_tagMultiValueDelimiterHasBeenSet)
  {
   payload.WithString("TagMultiValueDelimiter", m_tagMultiValueDelimiter);

  }

  if(m_matchAllValueHasBeenSet)
  {
   payload.WithString("MatchAllValue", m_matchAllValue);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
