/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/Entity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{

Entity::Entity() : 
    m_id(0),
    m_idHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_textHasBeenSet(false),
    m_category(EntityType::NOT_SET),
    m_categoryHasBeenSet(false),
    m_type(EntitySubType::NOT_SET),
    m_typeHasBeenSet(false),
    m_traitsHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

Entity::Entity(JsonView jsonValue) : 
    m_id(0),
    m_idHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_textHasBeenSet(false),
    m_category(EntityType::NOT_SET),
    m_categoryHasBeenSet(false),
    m_type(EntitySubType::NOT_SET),
    m_typeHasBeenSet(false),
    m_traitsHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

Entity& Entity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetInteger("Id");

    m_idHasBeenSet = true;
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

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Category"))
  {
    m_category = EntityTypeMapper::GetEntityTypeForName(jsonValue.GetString("Category"));

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = EntitySubTypeMapper::GetEntitySubTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Traits"))
  {
    Aws::Utils::Array<JsonView> traitsJsonList = jsonValue.GetArray("Traits");
    for(unsigned traitsIndex = 0; traitsIndex < traitsJsonList.GetLength(); ++traitsIndex)
    {
      m_traits.push_back(traitsJsonList[traitsIndex].AsObject());
    }
    m_traitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("Attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue Entity::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithInteger("Id", m_id);

  }

  if(m_beginOffsetHasBeenSet)
  {
   payload.WithInteger("BeginOffset", m_beginOffset);

  }

  if(m_endOffsetHasBeenSet)
  {
   payload.WithInteger("EndOffset", m_endOffset);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", EntityTypeMapper::GetNameForEntityType(m_category));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EntitySubTypeMapper::GetNameForEntitySubType(m_type));
  }

  if(m_traitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> traitsJsonList(m_traits.size());
   for(unsigned traitsIndex = 0; traitsIndex < traitsJsonList.GetLength(); ++traitsIndex)
   {
     traitsJsonList[traitsIndex].AsObject(m_traits[traitsIndex].Jsonize());
   }
   payload.WithArray("Traits", std::move(traitsJsonList));

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
