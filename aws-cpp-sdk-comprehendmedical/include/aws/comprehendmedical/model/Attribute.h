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
#include <aws/comprehendmedical/model/EntitySubType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehendmedical/model/Trait.h>
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
   * <p> An extracted segment of the text that is an attribute of an entity, or
   * otherwise related to an entity, such as the dosage of a medication taken. It
   * contains information about the attribute such as id, begin and end offset within
   * the input text, and the segment of the input text. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/Attribute">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHENDMEDICAL_API Attribute
  {
  public:
    Attribute();
    Attribute(Aws::Utils::Json::JsonView jsonValue);
    Attribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of attribute. </p>
     */
    inline const EntitySubType& GetType() const{ return m_type; }

    /**
     * <p> The type of attribute. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of attribute. </p>
     */
    inline void SetType(const EntitySubType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of attribute. </p>
     */
    inline void SetType(EntitySubType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of attribute. </p>
     */
    inline Attribute& WithType(const EntitySubType& value) { SetType(value); return *this;}

    /**
     * <p> The type of attribute. </p>
     */
    inline Attribute& WithType(EntitySubType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> The level of confidence that Comprehend Medical has that the segment of text
     * is correctly recognized as an attribute. </p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p> The level of confidence that Comprehend Medical has that the segment of text
     * is correctly recognized as an attribute. </p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p> The level of confidence that Comprehend Medical has that the segment of text
     * is correctly recognized as an attribute. </p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p> The level of confidence that Comprehend Medical has that the segment of text
     * is correctly recognized as an attribute. </p>
     */
    inline Attribute& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p> The level of confidence that Comprehend Medical has that this attribute is
     * correctly related to this entity. </p>
     */
    inline double GetRelationshipScore() const{ return m_relationshipScore; }

    /**
     * <p> The level of confidence that Comprehend Medical has that this attribute is
     * correctly related to this entity. </p>
     */
    inline bool RelationshipScoreHasBeenSet() const { return m_relationshipScoreHasBeenSet; }

    /**
     * <p> The level of confidence that Comprehend Medical has that this attribute is
     * correctly related to this entity. </p>
     */
    inline void SetRelationshipScore(double value) { m_relationshipScoreHasBeenSet = true; m_relationshipScore = value; }

    /**
     * <p> The level of confidence that Comprehend Medical has that this attribute is
     * correctly related to this entity. </p>
     */
    inline Attribute& WithRelationshipScore(double value) { SetRelationshipScore(value); return *this;}


    /**
     * <p> The numeric identifier for this attribute. This is a monotonically
     * increasing id unique within this response rather than a global unique
     * identifier. </p>
     */
    inline int GetId() const{ return m_id; }

    /**
     * <p> The numeric identifier for this attribute. This is a monotonically
     * increasing id unique within this response rather than a global unique
     * identifier. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The numeric identifier for this attribute. This is a monotonically
     * increasing id unique within this response rather than a global unique
     * identifier. </p>
     */
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The numeric identifier for this attribute. This is a monotonically
     * increasing id unique within this response rather than a global unique
     * identifier. </p>
     */
    inline Attribute& WithId(int value) { SetId(value); return *this;}


    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline Attribute& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute ends. The offset returns the UTF-8 code point in the string. </p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute ends. The offset returns the UTF-8 code point in the string. </p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute ends. The offset returns the UTF-8 code point in the string. </p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute ends. The offset returns the UTF-8 code point in the string. </p>
     */
    inline Attribute& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p> The segment of input text extracted as this attribute.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p> The segment of input text extracted as this attribute.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p> The segment of input text extracted as this attribute.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p> The segment of input text extracted as this attribute.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p> The segment of input text extracted as this attribute.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p> The segment of input text extracted as this attribute.</p>
     */
    inline Attribute& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p> The segment of input text extracted as this attribute.</p>
     */
    inline Attribute& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p> The segment of input text extracted as this attribute.</p>
     */
    inline Attribute& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p> Contextual information for this attribute. </p>
     */
    inline const Aws::Vector<Trait>& GetTraits() const{ return m_traits; }

    /**
     * <p> Contextual information for this attribute. </p>
     */
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }

    /**
     * <p> Contextual information for this attribute. </p>
     */
    inline void SetTraits(const Aws::Vector<Trait>& value) { m_traitsHasBeenSet = true; m_traits = value; }

    /**
     * <p> Contextual information for this attribute. </p>
     */
    inline void SetTraits(Aws::Vector<Trait>&& value) { m_traitsHasBeenSet = true; m_traits = std::move(value); }

    /**
     * <p> Contextual information for this attribute. </p>
     */
    inline Attribute& WithTraits(const Aws::Vector<Trait>& value) { SetTraits(value); return *this;}

    /**
     * <p> Contextual information for this attribute. </p>
     */
    inline Attribute& WithTraits(Aws::Vector<Trait>&& value) { SetTraits(std::move(value)); return *this;}

    /**
     * <p> Contextual information for this attribute. </p>
     */
    inline Attribute& AddTraits(const Trait& value) { m_traitsHasBeenSet = true; m_traits.push_back(value); return *this; }

    /**
     * <p> Contextual information for this attribute. </p>
     */
    inline Attribute& AddTraits(Trait&& value) { m_traitsHasBeenSet = true; m_traits.push_back(std::move(value)); return *this; }

  private:

    EntitySubType m_type;
    bool m_typeHasBeenSet;

    double m_score;
    bool m_scoreHasBeenSet;

    double m_relationshipScore;
    bool m_relationshipScoreHasBeenSet;

    int m_id;
    bool m_idHasBeenSet;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet;

    int m_endOffset;
    bool m_endOffsetHasBeenSet;

    Aws::String m_text;
    bool m_textHasBeenSet;

    Aws::Vector<Trait> m_traits;
    bool m_traitsHasBeenSet;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
