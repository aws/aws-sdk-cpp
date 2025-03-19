/**
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
    AWS_COMPREHENDMEDICAL_API Attribute() = default;
    AWS_COMPREHENDMEDICAL_API Attribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Attribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of attribute. </p>
     */
    inline EntitySubType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EntitySubType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Attribute& WithType(EntitySubType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The level of confidence that Amazon Comprehend Medical has that the segment
     * of text is correctly recognized as an attribute. </p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline Attribute& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The level of confidence that Amazon Comprehend Medical has that this
     * attribute is correctly related to this entity. </p>
     */
    inline double GetRelationshipScore() const { return m_relationshipScore; }
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
    inline RelationshipType GetRelationshipType() const { return m_relationshipType; }
    inline bool RelationshipTypeHasBeenSet() const { return m_relationshipTypeHasBeenSet; }
    inline void SetRelationshipType(RelationshipType value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = value; }
    inline Attribute& WithRelationshipType(RelationshipType value) { SetRelationshipType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The numeric identifier for this attribute. This is a monotonically
     * increasing id unique within this response rather than a global unique
     * identifier. </p>
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline Attribute& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline Attribute& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline Attribute& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The segment of input text extracted as this attribute.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    Attribute& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The category of attribute. </p>
     */
    inline EntityType GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(EntityType value) { m_categoryHasBeenSet = true; m_category = value; }
    inline Attribute& WithCategory(EntityType value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contextual information for this attribute. </p>
     */
    inline const Aws::Vector<Trait>& GetTraits() const { return m_traits; }
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }
    template<typename TraitsT = Aws::Vector<Trait>>
    void SetTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits = std::forward<TraitsT>(value); }
    template<typename TraitsT = Aws::Vector<Trait>>
    Attribute& WithTraits(TraitsT&& value) { SetTraits(std::forward<TraitsT>(value)); return *this;}
    template<typename TraitsT = Trait>
    Attribute& AddTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits.emplace_back(std::forward<TraitsT>(value)); return *this; }
    ///@}
  private:

    EntitySubType m_type{EntitySubType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    double m_relationshipScore{0.0};
    bool m_relationshipScoreHasBeenSet = false;

    RelationshipType m_relationshipType{RelationshipType::NOT_SET};
    bool m_relationshipTypeHasBeenSet = false;

    int m_id{0};
    bool m_idHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    EntityType m_category{EntityType::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::Vector<Trait> m_traits;
    bool m_traitsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
