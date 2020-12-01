/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/CreateRowData.h>
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

CreateRowData::CreateRowData() : 
    m_batchItemIdHasBeenSet(false),
    m_cellsToCreateHasBeenSet(false)
{
}

CreateRowData::CreateRowData(JsonView jsonValue) : 
    m_batchItemIdHasBeenSet(false),
    m_cellsToCreateHasBeenSet(false)
{
  *this = jsonValue;
}

CreateRowData& CreateRowData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("batchItemId"))
  {
    m_batchItemId = jsonValue.GetString("batchItemId");

    m_batchItemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cellsToCreate"))
  {
    Aws::Map<Aws::String, JsonView> cellsToCreateJsonMap = jsonValue.GetObject("cellsToCreate").GetAllObjects();
    for(auto& cellsToCreateItem : cellsToCreateJsonMap)
    {
      m_cellsToCreate[cellsToCreateItem.first] = cellsToCreateItem.second.AsObject();
    }
    m_cellsToCreateHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateRowData::Jsonize() const
{
  JsonValue payload;

  if(m_batchItemIdHasBeenSet)
  {
   payload.WithString("batchItemId", m_batchItemId);

  }

  if(m_cellsToCreateHasBeenSet)
  {
   JsonValue cellsToCreateJsonMap;
   for(auto& cellsToCreateItem : m_cellsToCreate)
   {
     cellsToCreateJsonMap.WithObject(cellsToCreateItem.first, cellsToCreateItem.second.Jsonize());
   }
   payload.WithObject("cellsToCreate", std::move(cellsToCreateJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
