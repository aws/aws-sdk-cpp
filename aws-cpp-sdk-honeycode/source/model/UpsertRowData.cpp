/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/UpsertRowData.h>
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

UpsertRowData::UpsertRowData() : 
    m_batchItemIdHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_cellsToUpdateHasBeenSet(false)
{
}

UpsertRowData::UpsertRowData(JsonView jsonValue) : 
    m_batchItemIdHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_cellsToUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

UpsertRowData& UpsertRowData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("batchItemId"))
  {
    m_batchItemId = jsonValue.GetString("batchItemId");

    m_batchItemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filter"))
  {
    m_filter = jsonValue.GetObject("filter");

    m_filterHasBeenSet = true;
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

JsonValue UpsertRowData::Jsonize() const
{
  JsonValue payload;

  if(m_batchItemIdHasBeenSet)
  {
   payload.WithString("batchItemId", m_batchItemId);

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

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
