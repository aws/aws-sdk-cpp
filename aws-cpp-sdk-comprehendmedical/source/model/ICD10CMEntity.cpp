/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/ICD10CMEntity.h>
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

ICD10CMEntity::ICD10CMEntity() : 
    m_id(0),
    m_idHasBeenSet(false),
    m_textHasBeenSet(false),
    m_category(ICD10CMEntityCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_type(ICD10CMEntityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_traitsHasBeenSet(false),
    m_iCD10CMConceptsHasBeenSet(false)
{
}

ICD10CMEntity::ICD10CMEntity(JsonView jsonValue) : 
    m_id(0),
    m_idHasBeenSet(false),
    m_textHasBeenSet(false),
    m_category(ICD10CMEntityCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_type(ICD10CMEntityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_traitsHasBeenSet(false),
    m_iCD10CMConceptsHasBeenSet(false)
{
  *this = jsonValue;
}

ICD10CMEntity& ICD10CMEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetInteger("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Category"))
  {
    m_category = ICD10CMEntityCategoryMapper::GetICD10CMEntityCategoryForName(jsonValue.GetString("Category"));

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ICD10CMEntityTypeMapper::GetICD10CMEntityTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
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

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("Attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
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

  if(jsonValue.ValueExists("ICD10CMConcepts"))
  {
    Aws::Utils::Array<JsonView> iCD10CMConceptsJsonList = jsonValue.GetArray("ICD10CMConcepts");
    for(unsigned iCD10CMConceptsIndex = 0; iCD10CMConceptsIndex < iCD10CMConceptsJsonList.GetLength(); ++iCD10CMConceptsIndex)
    {
      m_iCD10CMConcepts.push_back(iCD10CMConceptsJsonList[iCD10CMConceptsIndex].AsObject());
    }
    m_iCD10CMConceptsHasBeenSet = true;
  }

  return *this;
}

JsonValue ICD10CMEntity::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithInteger("Id", m_id);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", ICD10CMEntityCategoryMapper::GetNameForICD10CMEntityCategory(m_category));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ICD10CMEntityTypeMapper::GetNameForICD10CMEntityType(m_type));
  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  if(m_beginOffsetHasBeenSet)
  {
   payload.WithInteger("BeginOffset", m_beginOffset);

  }

  if(m_endOffsetHasBeenSet)
  {
   payload.WithInteger("EndOffset", m_endOffset);

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

  if(m_traitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> traitsJsonList(m_traits.size());
   for(unsigned traitsIndex = 0; traitsIndex < traitsJsonList.GetLength(); ++traitsIndex)
   {
     traitsJsonList[traitsIndex].AsObject(m_traits[traitsIndex].Jsonize());
   }
   payload.WithArray("Traits", std::move(traitsJsonList));

  }

  if(m_iCD10CMConceptsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> iCD10CMConceptsJsonList(m_iCD10CMConcepts.size());
   for(unsigned iCD10CMConceptsIndex = 0; iCD10CMConceptsIndex < iCD10CMConceptsJsonList.GetLength(); ++iCD10CMConceptsIndex)
   {
     iCD10CMConceptsJsonList[iCD10CMConceptsIndex].AsObject(m_iCD10CMConcepts[iCD10CMConceptsIndex].Jsonize());
   }
   payload.WithArray("ICD10CMConcepts", std::move(iCD10CMConceptsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
