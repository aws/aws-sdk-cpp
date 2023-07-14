/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/FindingStatisticsSortCriteria.h>
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

FindingStatisticsSortCriteria::FindingStatisticsSortCriteria() : 
    m_attributeName(FindingStatisticsSortAttributeName::NOT_SET),
    m_attributeNameHasBeenSet(false),
    m_orderBy(OrderBy::NOT_SET),
    m_orderByHasBeenSet(false)
{
}

FindingStatisticsSortCriteria::FindingStatisticsSortCriteria(JsonView jsonValue) : 
    m_attributeName(FindingStatisticsSortAttributeName::NOT_SET),
    m_attributeNameHasBeenSet(false),
    m_orderBy(OrderBy::NOT_SET),
    m_orderByHasBeenSet(false)
{
  *this = jsonValue;
}

FindingStatisticsSortCriteria& FindingStatisticsSortCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributeName"))
  {
    m_attributeName = FindingStatisticsSortAttributeNameMapper::GetFindingStatisticsSortAttributeNameForName(jsonValue.GetString("attributeName"));

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orderBy"))
  {
    m_orderBy = OrderByMapper::GetOrderByForName(jsonValue.GetString("orderBy"));

    m_orderByHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingStatisticsSortCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("attributeName", FindingStatisticsSortAttributeNameMapper::GetNameForFindingStatisticsSortAttributeName(m_attributeName));
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
