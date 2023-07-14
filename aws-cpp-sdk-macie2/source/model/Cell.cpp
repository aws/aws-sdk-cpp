/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Cell.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

Cell::Cell() : 
    m_cellReferenceHasBeenSet(false),
    m_column(0),
    m_columnHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_row(0),
    m_rowHasBeenSet(false)
{
}

Cell::Cell(JsonView jsonValue) : 
    m_cellReferenceHasBeenSet(false),
    m_column(0),
    m_columnHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_row(0),
    m_rowHasBeenSet(false)
{
  *this = jsonValue;
}

Cell& Cell::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cellReference"))
  {
    m_cellReference = jsonValue.GetString("cellReference");

    m_cellReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("column"))
  {
    m_column = jsonValue.GetInt64("column");

    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("columnName"))
  {
    m_columnName = jsonValue.GetString("columnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("row"))
  {
    m_row = jsonValue.GetInt64("row");

    m_rowHasBeenSet = true;
  }

  return *this;
}

JsonValue Cell::Jsonize() const
{
  JsonValue payload;

  if(m_cellReferenceHasBeenSet)
  {
   payload.WithString("cellReference", m_cellReference);

  }

  if(m_columnHasBeenSet)
  {
   payload.WithInt64("column", m_column);

  }

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("columnName", m_columnName);

  }

  if(m_rowHasBeenSet)
  {
   payload.WithInt64("row", m_row);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
