/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SearchAllRelatedItemsSort.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

SearchAllRelatedItemsSort::SearchAllRelatedItemsSort(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchAllRelatedItemsSort& SearchAllRelatedItemsSort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sortProperty"))
  {
    m_sortProperty = SearchAllRelatedItemsSortPropertyMapper::GetSearchAllRelatedItemsSortPropertyForName(jsonValue.GetString("sortProperty"));
    m_sortPropertyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = OrderMapper::GetOrderForName(jsonValue.GetString("sortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchAllRelatedItemsSort::Jsonize() const
{
  JsonValue payload;

  if(m_sortPropertyHasBeenSet)
  {
   payload.WithString("sortProperty", SearchAllRelatedItemsSortPropertyMapper::GetNameForSearchAllRelatedItemsSortProperty(m_sortProperty));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", OrderMapper::GetNameForOrder(m_sortOrder));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
