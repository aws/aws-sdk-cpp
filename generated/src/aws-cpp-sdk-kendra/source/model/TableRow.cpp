/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/TableRow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

TableRow::TableRow() : 
    m_cellsHasBeenSet(false)
{
}

TableRow::TableRow(JsonView jsonValue) : 
    m_cellsHasBeenSet(false)
{
  *this = jsonValue;
}

TableRow& TableRow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cells"))
  {
    Aws::Utils::Array<JsonView> cellsJsonList = jsonValue.GetArray("Cells");
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

  if(m_cellsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cellsJsonList(m_cells.size());
   for(unsigned cellsIndex = 0; cellsIndex < cellsJsonList.GetLength(); ++cellsIndex)
   {
     cellsJsonList[cellsIndex].AsObject(m_cells[cellsIndex].Jsonize());
   }
   payload.WithArray("Cells", std::move(cellsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
