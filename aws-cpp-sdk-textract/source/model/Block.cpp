/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/textract/model/Block.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

Block::Block() : 
    m_blockType(BlockType::NOT_SET),
    m_blockTypeHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_textHasBeenSet(false),
    m_rowIndex(0),
    m_rowIndexHasBeenSet(false),
    m_columnIndex(0),
    m_columnIndexHasBeenSet(false),
    m_rowSpan(0),
    m_rowSpanHasBeenSet(false),
    m_columnSpan(0),
    m_columnSpanHasBeenSet(false),
    m_geometryHasBeenSet(false),
    m_idHasBeenSet(false),
    m_relationshipsHasBeenSet(false),
    m_entityTypesHasBeenSet(false),
    m_selectionStatus(SelectionStatus::NOT_SET),
    m_selectionStatusHasBeenSet(false),
    m_page(0),
    m_pageHasBeenSet(false)
{
}

Block::Block(JsonView jsonValue) : 
    m_blockType(BlockType::NOT_SET),
    m_blockTypeHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_textHasBeenSet(false),
    m_rowIndex(0),
    m_rowIndexHasBeenSet(false),
    m_columnIndex(0),
    m_columnIndexHasBeenSet(false),
    m_rowSpan(0),
    m_rowSpanHasBeenSet(false),
    m_columnSpan(0),
    m_columnSpanHasBeenSet(false),
    m_geometryHasBeenSet(false),
    m_idHasBeenSet(false),
    m_relationshipsHasBeenSet(false),
    m_entityTypesHasBeenSet(false),
    m_selectionStatus(SelectionStatus::NOT_SET),
    m_selectionStatusHasBeenSet(false),
    m_page(0),
    m_pageHasBeenSet(false)
{
  *this = jsonValue;
}

Block& Block::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockType"))
  {
    m_blockType = BlockTypeMapper::GetBlockTypeForName(jsonValue.GetString("BlockType"));

    m_blockTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowIndex"))
  {
    m_rowIndex = jsonValue.GetInteger("RowIndex");

    m_rowIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnIndex"))
  {
    m_columnIndex = jsonValue.GetInteger("ColumnIndex");

    m_columnIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowSpan"))
  {
    m_rowSpan = jsonValue.GetInteger("RowSpan");

    m_rowSpanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnSpan"))
  {
    m_columnSpan = jsonValue.GetInteger("ColumnSpan");

    m_columnSpanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");

    m_geometryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Relationships"))
  {
    Array<JsonView> relationshipsJsonList = jsonValue.GetArray("Relationships");
    for(unsigned relationshipsIndex = 0; relationshipsIndex < relationshipsJsonList.GetLength(); ++relationshipsIndex)
    {
      m_relationships.push_back(relationshipsJsonList[relationshipsIndex].AsObject());
    }
    m_relationshipsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityTypes"))
  {
    Array<JsonView> entityTypesJsonList = jsonValue.GetArray("EntityTypes");
    for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
    {
      m_entityTypes.push_back(EntityTypeMapper::GetEntityTypeForName(entityTypesJsonList[entityTypesIndex].AsString()));
    }
    m_entityTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectionStatus"))
  {
    m_selectionStatus = SelectionStatusMapper::GetSelectionStatusForName(jsonValue.GetString("SelectionStatus"));

    m_selectionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Page"))
  {
    m_page = jsonValue.GetInteger("Page");

    m_pageHasBeenSet = true;
  }

  return *this;
}

JsonValue Block::Jsonize() const
{
  JsonValue payload;

  if(m_blockTypeHasBeenSet)
  {
   payload.WithString("BlockType", BlockTypeMapper::GetNameForBlockType(m_blockType));
  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_rowIndexHasBeenSet)
  {
   payload.WithInteger("RowIndex", m_rowIndex);

  }

  if(m_columnIndexHasBeenSet)
  {
   payload.WithInteger("ColumnIndex", m_columnIndex);

  }

  if(m_rowSpanHasBeenSet)
  {
   payload.WithInteger("RowSpan", m_rowSpan);

  }

  if(m_columnSpanHasBeenSet)
  {
   payload.WithInteger("ColumnSpan", m_columnSpan);

  }

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_relationshipsHasBeenSet)
  {
   Array<JsonValue> relationshipsJsonList(m_relationships.size());
   for(unsigned relationshipsIndex = 0; relationshipsIndex < relationshipsJsonList.GetLength(); ++relationshipsIndex)
   {
     relationshipsJsonList[relationshipsIndex].AsObject(m_relationships[relationshipsIndex].Jsonize());
   }
   payload.WithArray("Relationships", std::move(relationshipsJsonList));

  }

  if(m_entityTypesHasBeenSet)
  {
   Array<JsonValue> entityTypesJsonList(m_entityTypes.size());
   for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
   {
     entityTypesJsonList[entityTypesIndex].AsString(EntityTypeMapper::GetNameForEntityType(m_entityTypes[entityTypesIndex]));
   }
   payload.WithArray("EntityTypes", std::move(entityTypesJsonList));

  }

  if(m_selectionStatusHasBeenSet)
  {
   payload.WithString("SelectionStatus", SelectionStatusMapper::GetNameForSelectionStatus(m_selectionStatus));
  }

  if(m_pageHasBeenSet)
  {
   payload.WithInteger("Page", m_page);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
