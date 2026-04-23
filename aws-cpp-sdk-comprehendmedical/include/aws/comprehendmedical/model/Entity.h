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

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/EntityType.h>
#include <aws/comprehendmedical/model/EntitySubType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehendmedical/model/Trait.h>
#include <aws/comprehendmedical/model/Attribute.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ComprehendMedical
{
namespace Model
{

  /**
   * <p> Provides information about an extracted medical entity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/Entity">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHENDMEDICAL_API Entity
  {
  public:
    Entity();
    Entity(Aws::Utils::Json::JsonView jsonValue);
    Entity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The numeric identifier for the entity. This is a monotonically increasing id
     * unique within this response rather than a global unique identifier. </p>
     */
    inline int GetId() const{ return m_id; }

    /**
     * <p> The numeric identifier for the entity. This is a monotonically increasing id
     * unique within this response rather than a global unique identifier. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The numeric identifier for the entity. This is a monotonically increasing id
     * unique within this response rather than a global unique identifier. </p>
     */
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The numeric identifier for the entity. This is a monotonically increasing id
     * unique within this response rather than a global unique identifier. </p>
     */
    inline Entity& WithId(int value) { SetId(value); return *this;}


    /**
     * <p> The 0-based character offset in the input text that shows where the entity
     * begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p> The 0-based character offset in the input text that shows where the entity
     * begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p> The 0-based character offset in the input text that shows where the entity
     * begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p> The 0-based character offset in the input text that shows where the entity
     * begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline Entity& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p> The 0-based character offset in the input text that shows where the entity
     * ends. The offset returns the UTF-8 code point in the string. </p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p> The 0-based character offset in the input text that shows where the entity
     * ends. The offset returns the UTF-8 code point in the string. </p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p> The 0-based character offset in the input text that shows where the entity
     * ends. The offset returns the UTF-8 code point in the string. </p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p> The 0-based character offset in the input text that shows where the entity
     * ends. The offset returns the UTF-8 code point in the string. </p>
     */
    inline Entity& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p>The level of confidence that Comprehend Medical has in the accuracy of the
     * detection.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of confidence that Comprehend Medical has in the accuracy of the
     * detection.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of confidence that Comprehend Medical has in the accuracy of the
     * detection.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of confidence that Comprehend Medical has in the accuracy of the
     * detection.</p>
     */
    inline Entity& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p> The segment of input text extracted as this entity.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p> The segment of input text extracted as this entity.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p> The segment of input text extracted as this entity.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p> The segment of input text extracted as this entity.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p> The segment of input text extracted as this entity.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p> The segment of input text extracted as this entity.</p>
     */
    inline Entity& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p> The segment of input text extracted as this entity.</p>
     */
    inline Entity& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p> The segment of input text extracted as this entity.</p>
     */
    inline Entity& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p> The category of the entity.</p>
     */
    inline const EntityType& GetCategory() const{ return m_category; }

    /**
     * <p> The category of the entity.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p> The category of the entity.</p>
     */
    inline void SetCategory(const EntityType& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p> The category of the entity.</p>
     */
    inline void SetCategory(EntityType&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p> The category of the entity.</p>
     */
    inline Entity& WithCategory(const EntityType& value) { SetCategory(value); return *this;}

    /**
     * <p> The category of the entity.</p>
     */
    inline Entity& WithCategory(EntityType&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p> Describes the specific type of entity with category of entities. </p>
     */
    inline const EntitySubType& GetType() const{ return m_type; }

    /**
     * <p> Describes the specific type of entity with category of entities. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> Describes the specific type of entity with category of entities. </p>
     */
    inline void SetType(const EntitySubType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> Describes the specific type of entity with category of entities. </p>
     */
    inline void SetType(EntitySubType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> Describes the specific type of entity with category of entities. </p>
     */
    inline Entity& WithType(const EntitySubType& value) { SetType(value); return *this;}

    /**
     * <p> Describes the specific type of entity with category of entities. </p>
     */
    inline Entity& WithType(EntitySubType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Contextual information for the entity</p>
     */
    inline const Aws::Vector<Trait>& GetTraits() const{ return m_traits; }

    /**
     * <p>Contextual information for the entity</p>
     */
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }

    /**
     * <p>Contextual information for the entity</p>
     */
    inline void SetTraits(const Aws::Vector<Trait>& value) { m_traitsHasBeenSet = true; m_traits = value; }

    /**
     * <p>Contextual information for the entity</p>
     */
    inline void SetTraits(Aws::Vector<Trait>&& value) { m_traitsHasBeenSet = true; m_traits = std::move(value); }

    /**
     * <p>Contextual information for the entity</p>
     */
    inline Entity& WithTraits(const Aws::Vector<Trait>& value) { SetTraits(value); return *this;}

    /**
     * <p>Contextual information for the entity</p>
     */
    inline Entity& WithTraits(Aws::Vector<Trait>&& value) { SetTraits(std::move(value)); return *this;}

    /**
     * <p>Contextual information for the entity</p>
     */
    inline Entity& AddTraits(const Trait& value) { m_traitsHasBeenSet = true; m_traits.push_back(value); return *this; }

    /**
     * <p>Contextual information for the entity</p>
     */
    inline Entity& AddTraits(Trait&& value) { m_traitsHasBeenSet = true; m_traits.push_back(std::move(value)); return *this; }


    /**
     * <p> The extracted attributes that relate to this entity.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p> The extracted attributes that relate to this entity.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p> The extracted attributes that relate to this entity.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p> The extracted attributes that relate to this entity.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p> The extracted attributes that relate to this entity.</p>
     */
    inline Entity& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p> The extracted attributes that relate to this entity.</p>
     */
    inline Entity& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p> The extracted attributes that relate to this entity.</p>
     */
    inline Entity& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p> The extracted attributes that relate to this entity.</p>
     */
    inline Entity& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    int m_id;
    bool m_idHasBeenSet;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet;

    int m_endOffset;
    bool m_endOffsetHasBeenSet;

    double m_score;
    bool m_scoreHasBeenSet;

    Aws::String m_text;
    bool m_textHasBeenSet;

    EntityType m_category;
    bool m_categoryHasBeenSet;

    EntitySubType m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<Trait> m_traits;
    bool m_traitsHasBeenSet;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
