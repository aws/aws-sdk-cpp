/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/KeyspacesRow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{

KeyspacesRow::KeyspacesRow(JsonView jsonValue)
{
  *this = jsonValue;
}

KeyspacesRow& KeyspacesRow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("valueCells"))
  {
    Aws::Map<Aws::String, JsonView> valueCellsJsonMap = jsonValue.GetObject("valueCells").GetAllObjects();
    for(auto& valueCellsItem : valueCellsJsonMap)
    {
      m_valueCells[valueCellsItem.first] = valueCellsItem.second.AsObject();
    }
    m_valueCellsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("staticCells"))
  {
    Aws::Map<Aws::String, JsonView> staticCellsJsonMap = jsonValue.GetObject("staticCells").GetAllObjects();
    for(auto& staticCellsItem : staticCellsJsonMap)
    {
      m_staticCells[staticCellsItem.first] = staticCellsItem.second.AsObject();
    }
    m_staticCellsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rowMetadata"))
  {
    m_rowMetadata = jsonValue.GetObject("rowMetadata");
    m_rowMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyspacesRow::Jsonize() const
{
  JsonValue payload;

  if(m_valueCellsHasBeenSet)
  {
   JsonValue valueCellsJsonMap;
   for(auto& valueCellsItem : m_valueCells)
   {
     valueCellsJsonMap.WithObject(valueCellsItem.first, valueCellsItem.second.Jsonize());
   }
   payload.WithObject("valueCells", std::move(valueCellsJsonMap));

  }

  if(m_staticCellsHasBeenSet)
  {
   JsonValue staticCellsJsonMap;
   for(auto& staticCellsItem : m_staticCells)
   {
     staticCellsJsonMap.WithObject(staticCellsItem.first, staticCellsItem.second.Jsonize());
   }
   payload.WithObject("staticCells", std::move(staticCellsJsonMap));

  }

  if(m_rowMetadataHasBeenSet)
  {
   payload.WithObject("rowMetadata", m_rowMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
