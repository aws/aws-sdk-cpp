﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/model/EntitySubType.h>
#include <aws/comprehendmedical/model/RelationshipType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/EntityType.h>
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
  class Attribute
  {
  public:
    AWS_COMPREHENDMEDICAL_API Attribute();
    AWS_COMPREHENDMEDICAL_API Attribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Attribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of attribute. </p>
     */
    inline const EntitySubType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const EntitySubType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(EntitySubType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Attribute& WithType(const EntitySubType& value) { SetType(value); return *this;}
    inline Attribute& WithType(EntitySubType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The level of confidence that Amazon Comprehend Medical has that the segment
     * of text is correctly recognized as an attribute. </p>
     */
    inline double GetScore() const{ return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline Attribute& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The level of confidence that Amazon Comprehend Medical has that this
     * attribute is correctly related to this entity. </p>
     */
    inline double GetRelationshipScore() const{ return m_relationshipScore; }
    inline bool RelationshipScoreHasBeenSet() const { return m_relationshipScoreHasBeenSet; }
    inline void SetRelationshipScore(double value) { m_relationshipScoreHasBeenSet = true; m_relationshipScore = value; }
    inline Attribute& WithRelationshipScore(double value) { SetRelationshipScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of relationship between the entity and attribute. Type for the
     * relationship is <code>OVERLAP</code>, indicating that the entity occurred at the
     * same time as the <code>Date_Expression</code>. </p>
     */
    inline const RelationshipType& GetRelationshipType() const{ return m_relationshipType; }
    inline bool RelationshipTypeHasBeenSet() const { return m_relationshipTypeHasBeenSet; }
    inline void SetRelationshipType(const RelationshipType& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = value; }
    inline void SetRelationshipType(RelationshipType&& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = std::move(value); }
    inline Attribute& WithRelationshipType(const RelationshipType& value) { SetRelationshipType(value); return *this;}
    inline Attribute& WithRelationshipType(RelationshipType&& value) { SetRelationshipType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The numeric identifier for this attribute. This is a monotonically
     * increasing id unique within this response rather than a global unique
     * identifier. </p>
     */
    inline int GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline Attribute& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline Attribute& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline Attribute& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The segment of input text extracted as this attribute.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline Attribute& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline Attribute& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline Attribute& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The category of attribute. </p>
     */
    inline const EntityType& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const EntityType& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(EntityType&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline Attribute& WithCategory(const EntityType& value) { SetCategory(value); return *this;}
    inline Attribute& WithCategory(EntityType&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contextual information for this attribute. </p>
     */
    inline const Aws::Vector<Trait>& GetTraits() const{ return m_traits; }
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }
    inline void SetTraits(const Aws::Vector<Trait>& value) { m_traitsHasBeenSet = true; m_traits = value; }
    inline void SetTraits(Aws::Vector<Trait>&& value) { m_traitsHasBeenSet = true; m_traits = std::move(value); }
    inline Attribute& WithTraits(const Aws::Vector<Trait>& value) { SetTraits(value); return *this;}
    inline Attribute& WithTraits(Aws::Vector<Trait>&& value) { SetTraits(std::move(value)); return *this;}
    inline Attribute& AddTraits(const Trait& value) { m_traitsHasBeenSet = true; m_traits.push_back(value); return *this; }
    inline Attribute& AddTraits(Trait&& value) { m_traitsHasBeenSet = true; m_traits.push_back(std::move(value)); return *this; }
    ///@}
  private:

    EntitySubType m_type;
    bool m_typeHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    double m_relationshipScore;
    bool m_relationshipScoreHasBeenSet = false;

    RelationshipType m_relationshipType;
    bool m_relationshipTypeHasBeenSet = false;

    int m_id;
    bool m_idHasBeenSet = false;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
    bool m_endOffsetHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    EntityType m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<Trait> m_traits;
    bool m_traitsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
