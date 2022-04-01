/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/UpdateRowData.h>
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

UpdateRowData::UpdateRowData() : 
    m_rowIdHasBeenSet(false),
    m_cellsToUpdateHasBeenSet(false)
{
}

UpdateRowData::UpdateRowData(JsonView jsonValue) : 
    m_rowIdHasBeenSet(false),
    m_cellsToUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateRowData& UpdateRowData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rowId"))
  {
    m_rowId = jsonValue.GetString("rowId");

    m_rowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cellsToUpdate"))
  {
    Aws::Map<Aws::String, JsonView> cellsToUpdateJsonMap = jsonValue.GetObject("cellsToUpdate").GetAllObjects();
    for(auto& cellsToUpdateItem : cellsToUpdateJsonMap)
    {
      m_cellsToUpdate[cellsToUpdateItem.first] = cellsToUpdateItem.second.AsObject();
    }
    m_cellsToUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateRowData::Jsonize() const
{
  JsonValue payload;

  if(m_rowIdHasBeenSet)
  {
   payload.WithString("rowId", m_rowId);

  }

  if(m_cellsToUpdateHasBeenSet)
  {
   JsonValue cellsToUpdateJsonMap;
   for(auto& cellsToUpdateItem : m_cellsToUpdate)
   {
     cellsToUpdateJsonMap.WithObject(cellsToUpdateItem.first, cellsToUpdateItem.second.Jsonize());
   }
   payload.WithObject("cellsToUpdate", std::move(cellsToUpdateJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
