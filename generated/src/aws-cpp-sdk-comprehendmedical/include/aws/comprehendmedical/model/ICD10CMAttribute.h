/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/model/ICD10CMAttributeType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehendmedical/model/ICD10CMEntityType.h>
#include <aws/comprehendmedical/model/ICD10CMRelationshipType.h>
#include <aws/comprehendmedical/model/ICD10CMTrait.h>
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
   * <p>The detected attributes that relate to an entity. This includes an extracted
   * segment of the text that is an attribute of an entity, or otherwise related to
   * an entity. InferICD10CM detects the following attributes:
   * <code>Direction</code>, <code>System, Organ or Site</code>, and
   * <code>Acuity</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ICD10CMAttribute">AWS
   * API Reference</a></p>
   */
  class ICD10CMAttribute
  {
  public:
    AWS_COMPREHENDMEDICAL_API ICD10CMAttribute() = default;
    AWS_COMPREHENDMEDICAL_API ICD10CMAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API ICD10CMAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of attribute. InferICD10CM detects entities of the type
     * <code>DX_NAME</code>. </p>
     */
    inline ICD10CMAttributeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ICD10CMAttributeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ICD10CMAttribute& WithType(ICD10CMAttributeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the segment
     * of text is correctly recognized as an attribute.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline ICD10CMAttribute& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that this
     * attribute is correctly related to this entity.</p>
     */
    inline double GetRelationshipScore() const { return m_relationshipScore; }
    inline bool RelationshipScoreHasBeenSet() const { return m_relationshipScoreHasBeenSet; }
    inline void SetRelationshipScore(double value) { m_relationshipScoreHasBeenSet = true; m_relationshipScore = value; }
    inline ICD10CMAttribute& WithRelationshipScore(double value) { SetRelationshipScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric identifier for this attribute. This is a monotonically increasing
     * id unique within this response rather than a global unique identifier.</p>
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline ICD10CMAttribute& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 0-based character offset in the input text that shows where the attribute
     * begins. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline ICD10CMAttribute& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 0-based character offset in the input text that shows where the attribute
     * ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline ICD10CMAttribute& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment of input text which contains the detected attribute.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    ICD10CMAttribute& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contextual information for the attribute. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION</code>.</p>
     */
    inline const Aws::Vector<ICD10CMTrait>& GetTraits() const { return m_traits; }
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }
    template<typename TraitsT = Aws::Vector<ICD10CMTrait>>
    void SetTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits = std::forward<TraitsT>(value); }
    template<typename TraitsT = Aws::Vector<ICD10CMTrait>>
    ICD10CMAttribute& WithTraits(TraitsT&& value) { SetTraits(std::forward<TraitsT>(value)); return *this;}
    template<typename TraitsT = ICD10CMTrait>
    ICD10CMAttribute& AddTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits.emplace_back(std::forward<TraitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The category of attribute. Can be either of <code>DX_NAME</code> or
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline ICD10CMEntityType GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(ICD10CMEntityType value) { m_categoryHasBeenSet = true; m_category = value; }
    inline ICD10CMAttribute& WithCategory(ICD10CMEntityType value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of relationship between the entity and attribute. Type for the
     * relationship can be either of <code>OVERLAP</code> or
     * <code>SYSTEM_ORGAN_SITE</code>.</p>
     */
    inline ICD10CMRelationshipType GetRelationshipType() const { return m_relationshipType; }
    inline bool RelationshipTypeHasBeenSet() const { return m_relationshipTypeHasBeenSet; }
    inline void SetRelationshipType(ICD10CMRelationshipType value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = value; }
    inline ICD10CMAttribute& WithRelationshipType(ICD10CMRelationshipType value) { SetRelationshipType(value); return *this;}
    ///@}
  private:

    ICD10CMAttributeType m_type{ICD10CMAttributeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    double m_relationshipScore{0.0};
    bool m_relationshipScoreHasBeenSet = false;

    int m_id{0};
    bool m_idHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Vector<ICD10CMTrait> m_traits;
    bool m_traitsHasBeenSet = false;

    ICD10CMEntityType m_category{ICD10CMEntityType::NOT_SET};
    bool m_categoryHasBeenSet = false;

    ICD10CMRelationshipType m_relationshipType{ICD10CMRelationshipType::NOT_SET};
    bool m_relationshipTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
