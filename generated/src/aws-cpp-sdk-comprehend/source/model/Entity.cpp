/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/Entity.h>
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

Entity::Entity() : 
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_type(EntityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_blockReferencesHasBeenSet(false)
{
}

Entity::Entity(JsonView jsonValue) : 
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_type(EntityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_blockReferencesHasBeenSet(false)
{
  *this = jsonValue;
}

Entity& Entity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = EntityTypeMapper::GetEntityTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
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

  if(jsonValue.ValueExists("BlockReferences"))
  {
    Aws::Utils::Array<JsonView> blockReferencesJsonList = jsonValue.GetArray("BlockReferences");
    for(unsigned blockReferencesIndex = 0; blockReferencesIndex < blockReferencesJsonList.GetLength(); ++blockReferencesIndex)
    {
      m_blockReferences.push_back(blockReferencesJsonList[blockReferencesIndex].AsObject());
    }
    m_blockReferencesHasBeenSet = true;
  }

  return *this;
}

JsonValue Entity::Jsonize() const
{
  JsonValue payload;

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EntityTypeMapper::GetNameForEntityType(m_type));
  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_beginOffsetHasBeenSet)
  {
   payload.WithInteger("BeginOffset", m_beginOffset);

  }

  if(m_endOffsetHasBeenSet)
  {
   payload.WithInteger("EndOffset", m_endOffset);

  }

  if(m_blockReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockReferencesJsonList(m_blockReferences.size());
   for(unsigned blockReferencesIndex = 0; blockReferencesIndex < blockReferencesJsonList.GetLength(); ++blockReferencesIndex)
   {
     blockReferencesJsonList[blockReferencesIndex].AsObject(m_blockReferences[blockReferencesIndex].Jsonize());
   }
   payload.WithArray("BlockReferences", std::move(blockReferencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
