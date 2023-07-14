/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/TableColumn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

TableColumn::TableColumn() : 
    m_tableColumnIdHasBeenSet(false),
    m_tableColumnNameHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false)
{
}

TableColumn::TableColumn(JsonView jsonValue) : 
    m_tableColumnIdHasBeenSet(false),
    m_tableColumnNameHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false)
{
  *this = jsonValue;
}

TableColumn& TableColumn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tableColumnId"))
  {
    m_tableColumnId = jsonValue.GetString("tableColumnId");

    m_tableColumnIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tableColumnName"))
  {
    m_tableColumnName = jsonValue.GetString("tableColumnName");

    m_tableColumnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  return *this;
}

JsonValue TableColumn::Jsonize() const
{
  JsonValue payload;

  if(m_tableColumnIdHasBeenSet)
  {
   payload.WithString("tableColumnId", m_tableColumnId);

  }

  if(m_tableColumnNameHasBeenSet)
  {
   payload.WithString("tableColumnName", m_tableColumnName);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", FormatMapper::GetNameForFormat(m_format));
  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
