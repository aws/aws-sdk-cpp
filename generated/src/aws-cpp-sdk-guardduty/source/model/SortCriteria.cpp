/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/SortCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

SortCriteria::SortCriteria() : 
    m_attributeNameHasBeenSet(false),
    m_orderBy(OrderBy::NOT_SET),
    m_orderByHasBeenSet(false)
{
}

SortCriteria::SortCriteria(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_orderBy(OrderBy::NOT_SET),
    m_orderByHasBeenSet(false)
{
  *this = jsonValue;
}

SortCriteria& SortCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributeName"))
  {
    m_attributeName = jsonValue.GetString("attributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orderBy"))
  {
    m_orderBy = OrderByMapper::GetOrderByForName(jsonValue.GetString("orderBy"));

    m_orderByHasBeenSet = true;
  }

  return *this;
}

JsonValue SortCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("attributeName", m_attributeName);

  }

  if(m_orderByHasBeenSet)
  {
   payload.WithString("orderBy", OrderByMapper::GetNameForOrderBy(m_orderBy));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
