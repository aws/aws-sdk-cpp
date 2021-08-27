/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SortCriterion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

SortCriterion::SortCriterion() : 
    m_fieldNameHasBeenSet(false),
    m_sort(Sort::NOT_SET),
    m_sortHasBeenSet(false)
{
}

SortCriterion::SortCriterion(JsonView jsonValue) : 
    m_fieldNameHasBeenSet(false),
    m_sort(Sort::NOT_SET),
    m_sortHasBeenSet(false)
{
  *this = jsonValue;
}

SortCriterion& SortCriterion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = jsonValue.GetString("FieldName");

    m_fieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sort"))
  {
    m_sort = SortMapper::GetSortForName(jsonValue.GetString("Sort"));

    m_sortHasBeenSet = true;
  }

  return *this;
}

JsonValue SortCriterion::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", m_fieldName);

  }

  if(m_sortHasBeenSet)
  {
   payload.WithString("Sort", SortMapper::GetNameForSort(m_sort));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
