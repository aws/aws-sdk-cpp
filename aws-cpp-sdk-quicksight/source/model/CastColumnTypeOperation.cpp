/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CastColumnTypeOperation.h>
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

CastColumnTypeOperation::CastColumnTypeOperation() : 
    m_columnNameHasBeenSet(false),
    m_newColumnType(ColumnDataType::NOT_SET),
    m_newColumnTypeHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

CastColumnTypeOperation::CastColumnTypeOperation(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_newColumnType(ColumnDataType::NOT_SET),
    m_newColumnTypeHasBeenSet(false),
    m_formatHasBeenSet(false)
{
  *this = jsonValue;
}

CastColumnTypeOperation& CastColumnTypeOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewColumnType"))
  {
    m_newColumnType = ColumnDataTypeMapper::GetColumnDataTypeForName(jsonValue.GetString("NewColumnType"));

    m_newColumnTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");

    m_formatHasBeenSet = true;
  }

  return *this;
}

JsonValue CastColumnTypeOperation::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_newColumnTypeHasBeenSet)
  {
   payload.WithString("NewColumnType", ColumnDataTypeMapper::GetNameForColumnDataType(m_newColumnType));
  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
