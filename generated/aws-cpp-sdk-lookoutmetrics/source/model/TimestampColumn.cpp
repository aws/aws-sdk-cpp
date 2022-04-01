/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/TimestampColumn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

TimestampColumn::TimestampColumn() : 
    m_columnNameHasBeenSet(false),
    m_columnFormatHasBeenSet(false)
{
}

TimestampColumn::TimestampColumn(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_columnFormatHasBeenSet(false)
{
  *this = jsonValue;
}

TimestampColumn& TimestampColumn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnFormat"))
  {
    m_columnFormat = jsonValue.GetString("ColumnFormat");

    m_columnFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestampColumn::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_columnFormatHasBeenSet)
  {
   payload.WithString("ColumnFormat", m_columnFormat);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
