/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Sort.h>
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

Sort::Sort() : 
    m_fieldName(SortableFieldName::NOT_SET),
    m_fieldNameHasBeenSet(false),
    m_order(SortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
}

Sort::Sort(JsonView jsonValue) : 
    m_fieldName(SortableFieldName::NOT_SET),
    m_fieldNameHasBeenSet(false),
    m_order(SortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

Sort& Sort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = SortableFieldNameMapper::GetSortableFieldNameForName(jsonValue.GetString("FieldName"));

    m_fieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Order"))
  {
    m_order = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("Order"));

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue Sort::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", SortableFieldNameMapper::GetNameForSortableFieldName(m_fieldName));
  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("Order", SortOrderMapper::GetNameForSortOrder(m_order));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
