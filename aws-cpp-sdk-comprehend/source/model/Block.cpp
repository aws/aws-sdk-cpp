/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/Block.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

Block::Block() : 
    m_idHasBeenSet(false),
    m_blockType(BlockType::NOT_SET),
    m_blockTypeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_page(0),
    m_pageHasBeenSet(false),
    m_geometryHasBeenSet(false),
    m_relationshipsHasBeenSet(false)
{
}

Block::Block(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_blockType(BlockType::NOT_SET),
    m_blockTypeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_page(0),
    m_pageHasBeenSet(false),
    m_geometryHasBeenSet(false),
    m_relationshipsHasBeenSet(false)
{
  *this = jsonValue;
}

Block& Block::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlockType"))
  {
    m_blockType = BlockTypeMapper::GetBlockTypeForName(jsonValue.GetString("BlockType"));

    m_blockTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Page"))
  {
    m_page = jsonValue.GetInteger("Page");

    m_pageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");

    m_geometryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Relationships"))
  {
    Aws::Utils::Array<JsonView> relationshipsJsonList = jsonValue.GetArray("Relationships");
    for(unsigned relationshipsIndex = 0; relationshipsIndex < relationshipsJsonList.GetLength(); ++relationshipsIndex)
    {
      m_relationships.push_back(relationshipsJsonList[relationshipsIndex].AsObject());
    }
    m_relationshipsHasBeenSet = true;
  }

  return *this;
}

JsonValue Block::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_blockTypeHasBeenSet)
  {
   payload.WithString("BlockType", BlockTypeMapper::GetNameForBlockType(m_blockType));
  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_pageHasBeenSet)
  {
   payload.WithInteger("Page", m_page);

  }

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  if(m_relationshipsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relationshipsJsonList(m_relationships.size());
   for(unsigned relationshipsIndex = 0; relationshipsIndex < relationshipsJsonList.GetLength(); ++relationshipsIndex)
   {
     relationshipsJsonList[relationshipsIndex].AsObject(m_relationships[relationshipsIndex].Jsonize());
   }
   payload.WithArray("Relationships", std::move(relationshipsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
