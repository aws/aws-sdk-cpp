/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ColumnRowFilter.h>
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

ColumnRowFilter::ColumnRowFilter() : 
    m_columnNameHasBeenSet(false),
    m_rowFilterExpressionHasBeenSet(false)
{
}

ColumnRowFilter::ColumnRowFilter(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_rowFilterExpressionHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnRowFilter& ColumnRowFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowFilterExpression"))
  {
    m_rowFilterExpression = jsonValue.GetString("RowFilterExpression");

    m_rowFilterExpressionHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnRowFilter::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_rowFilterExpressionHasBeenSet)
  {
   payload.WithString("RowFilterExpression", m_rowFilterExpression);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
