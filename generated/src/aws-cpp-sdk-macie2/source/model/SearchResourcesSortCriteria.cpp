/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SearchResourcesSortCriteria.h>
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

SearchResourcesSortCriteria::SearchResourcesSortCriteria() : 
    m_attributeName(SearchResourcesSortAttributeName::NOT_SET),
    m_attributeNameHasBeenSet(false),
    m_orderBy(OrderBy::NOT_SET),
    m_orderByHasBeenSet(false)
{
}

SearchResourcesSortCriteria::SearchResourcesSortCriteria(JsonView jsonValue) : 
    m_attributeName(SearchResourcesSortAttributeName::NOT_SET),
    m_attributeNameHasBeenSet(false),
    m_orderBy(OrderBy::NOT_SET),
    m_orderByHasBeenSet(false)
{
  *this = jsonValue;
}

SearchResourcesSortCriteria& SearchResourcesSortCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributeName"))
  {
    m_attributeName = SearchResourcesSortAttributeNameMapper::GetSearchResourcesSortAttributeNameForName(jsonValue.GetString("attributeName"));

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orderBy"))
  {
    m_orderBy = OrderByMapper::GetOrderByForName(jsonValue.GetString("orderBy"));

    m_orderByHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchResourcesSortCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("attributeName", SearchResourcesSortAttributeNameMapper::GetNameForSearchResourcesSortAttributeName(m_attributeName));
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
