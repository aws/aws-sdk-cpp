/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/BlockReference.h>
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

BlockReference::BlockReference() : 
    m_blockIdHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_childBlocksHasBeenSet(false)
{
}

BlockReference::BlockReference(JsonView jsonValue) : 
    m_blockIdHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_childBlocksHasBeenSet(false)
{
  *this = jsonValue;
}

BlockReference& BlockReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockId"))
  {
    m_blockId = jsonValue.GetString("BlockId");

    m_blockIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BeginOffset"))
  {
    m_beginOffset = jsonValue.GetInteger("BeginOffset");

    m_beginOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndOffset"))
  {
    m_endOffset = jsonValue.GetInteger("EndOffset");

    m_endOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChildBlocks"))
  {
    Aws::Utils::Array<JsonView> childBlocksJsonList = jsonValue.GetArray("ChildBlocks");
    for(unsigned childBlocksIndex = 0; childBlocksIndex < childBlocksJsonList.GetLength(); ++childBlocksIndex)
    {
      m_childBlocks.push_back(childBlocksJsonList[childBlocksIndex].AsObject());
    }
    m_childBlocksHasBeenSet = true;
  }

  return *this;
}

JsonValue BlockReference::Jsonize() const
{
  JsonValue payload;

  if(m_blockIdHasBeenSet)
  {
   payload.WithString("BlockId", m_blockId);

  }

  if(m_beginOffsetHasBeenSet)
  {
   payload.WithInteger("BeginOffset", m_beginOffset);

  }

  if(m_endOffsetHasBeenSet)
  {
   payload.WithInteger("EndOffset", m_endOffset);

  }

  if(m_childBlocksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> childBlocksJsonList(m_childBlocks.size());
   for(unsigned childBlocksIndex = 0; childBlocksIndex < childBlocksJsonList.GetLength(); ++childBlocksIndex)
   {
     childBlocksJsonList[childBlocksIndex].AsObject(m_childBlocks[childBlocksIndex].Jsonize());
   }
   payload.WithArray("ChildBlocks", std::move(childBlocksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
