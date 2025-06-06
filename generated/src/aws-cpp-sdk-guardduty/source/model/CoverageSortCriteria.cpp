﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageSortCriteria.h>
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

CoverageSortCriteria::CoverageSortCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

CoverageSortCriteria& CoverageSortCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributeName"))
  {
    m_attributeName = CoverageSortKeyMapper::GetCoverageSortKeyForName(jsonValue.GetString("attributeName"));
    m_attributeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("orderBy"))
  {
    m_orderBy = OrderByMapper::GetOrderByForName(jsonValue.GetString("orderBy"));
    m_orderByHasBeenSet = true;
  }
  return *this;
}

JsonValue CoverageSortCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("attributeName", CoverageSortKeyMapper::GetNameForCoverageSortKey(m_attributeName));
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
