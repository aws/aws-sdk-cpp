/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UsageStatisticsSortBy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

UsageStatisticsSortBy::UsageStatisticsSortBy() : 
    m_key(UsageStatisticsSortKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_orderBy(OrderBy::NOT_SET),
    m_orderByHasBeenSet(false)
{
}

UsageStatisticsSortBy::UsageStatisticsSortBy(JsonView jsonValue) : 
    m_key(UsageStatisticsSortKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_orderBy(OrderBy::NOT_SET),
    m_orderByHasBeenSet(false)
{
  *this = jsonValue;
}

UsageStatisticsSortBy& UsageStatisticsSortBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = UsageStatisticsSortKeyMapper::GetUsageStatisticsSortKeyForName(jsonValue.GetString("key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orderBy"))
  {
    m_orderBy = OrderByMapper::GetOrderByForName(jsonValue.GetString("orderBy"));

    m_orderByHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageStatisticsSortBy::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", UsageStatisticsSortKeyMapper::GetNameForUsageStatisticsSortKey(m_key));
  }

  if(m_orderByHasBeenSet)
  {
   payload.WithString("orderBy", OrderByMapper::GetNameForOrderBy(m_orderBy));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
