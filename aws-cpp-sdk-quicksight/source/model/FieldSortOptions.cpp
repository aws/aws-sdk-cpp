/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FieldSortOptions.h>
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

FieldSortOptions::FieldSortOptions() : 
    m_fieldSortHasBeenSet(false),
    m_columnSortHasBeenSet(false)
{
}

FieldSortOptions::FieldSortOptions(JsonView jsonValue) : 
    m_fieldSortHasBeenSet(false),
    m_columnSortHasBeenSet(false)
{
  *this = jsonValue;
}

FieldSortOptions& FieldSortOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldSort"))
  {
    m_fieldSort = jsonValue.GetObject("FieldSort");

    m_fieldSortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnSort"))
  {
    m_columnSort = jsonValue.GetObject("ColumnSort");

    m_columnSortHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldSortOptions::Jsonize() const
{
  JsonValue payload;

  if(m_fieldSortHasBeenSet)
  {
   payload.WithObject("FieldSort", m_fieldSort.Jsonize());

  }

  if(m_columnSortHasBeenSet)
  {
   payload.WithObject("ColumnSort", m_columnSort.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
