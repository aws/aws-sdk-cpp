/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/TableRow.h>
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

TableRow::TableRow() : 
    m_rowIdHasBeenSet(false),
    m_cellsHasBeenSet(false)
{
}

TableRow::TableRow(JsonView jsonValue) : 
    m_rowIdHasBeenSet(false),
    m_cellsHasBeenSet(false)
{
  *this = jsonValue;
}

TableRow& TableRow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rowId"))
  {
    m_rowId = jsonValue.GetString("rowId");

    m_rowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cells"))
  {
    Aws::Utils::Array<JsonView> cellsJsonList = jsonValue.GetArray("cells");
    for(unsigned cellsIndex = 0; cellsIndex < cellsJsonList.GetLength(); ++cellsIndex)
    {
      m_cells.push_back(cellsJsonList[cellsIndex].AsObject());
    }
    m_cellsHasBeenSet = true;
  }

  return *this;
}

JsonValue TableRow::Jsonize() const
{
  JsonValue payload;

  if(m_rowIdHasBeenSet)
  {
   payload.WithString("rowId", m_rowId);

  }

  if(m_cellsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cellsJsonList(m_cells.size());
   for(unsigned cellsIndex = 0; cellsIndex < cellsJsonList.GetLength(); ++cellsIndex)
   {
     cellsJsonList[cellsIndex].AsObject(m_cells[cellsIndex].Jsonize());
   }
   payload.WithArray("cells", std::move(cellsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
