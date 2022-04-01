/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Cell.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Cell::Cell() : 
    m_column(0),
    m_columnHasBeenSet(false),
    m_row(0),
    m_rowHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_cellReferenceHasBeenSet(false)
{
}

Cell::Cell(JsonView jsonValue) : 
    m_column(0),
    m_columnHasBeenSet(false),
    m_row(0),
    m_rowHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_cellReferenceHasBeenSet(false)
{
  *this = jsonValue;
}

Cell& Cell::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetInt64("Column");

    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Row"))
  {
    m_row = jsonValue.GetInt64("Row");

    m_rowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CellReference"))
  {
    m_cellReference = jsonValue.GetString("CellReference");

    m_cellReferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue Cell::Jsonize() const
{
  JsonValue payload;

  if(m_columnHasBeenSet)
  {
   payload.WithInt64("Column", m_column);

  }

  if(m_rowHasBeenSet)
  {
   payload.WithInt64("Row", m_row);

  }

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_cellReferenceHasBeenSet)
  {
   payload.WithString("CellReference", m_cellReference);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
