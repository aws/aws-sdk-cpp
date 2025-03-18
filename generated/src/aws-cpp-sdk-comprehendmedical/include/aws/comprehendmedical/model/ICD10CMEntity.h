/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/ICD10CMEntityCategory.h>
#include <aws/comprehendmedical/model/ICD10CMEntityType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehendmedical/model/ICD10CMAttribute.h>
#include <aws/comprehendmedical/model/ICD10CMTrait.h>
#include <aws/comprehendmedical/model/ICD10CMConcept.h>
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
   * <p>The collection of medical entities extracted from the input text and their
   * associated information. For each entity, the response provides the entity text,
   * the entity category, where the entity text begins and ends, and the level of
   * confidence that Amazon Comprehend Medical has in the detection and analysis.
   * Attributes and traits of the entity are also returned. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ICD10CMEntity">AWS
   * API Reference</a></p>
   */
  class ICD10CMEntity
  {
  public:
    AWS_COMPREHENDMEDICAL_API ICD10CMEntity() = default;
    AWS_COMPREHENDMEDICAL_API ICD10CMEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API ICD10CMEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The numeric identifier for the entity. This is a monotonically increasing id
     * unique within this response rather than a global unique identifier.</p>
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline ICD10CMEntity& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment of input text that is matched to the detected entity.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    ICD10CMEntity& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The category of the entity. InferICD10CM detects entities in the
     * <code>MEDICAL_CONDITION</code> category. </p>
     */
    inline ICD10CMEntityCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(ICD10CMEntityCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline ICD10CMEntity& WithCategory(ICD10CMEntityCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the specific type of entity with category of entities. InferICD10CM
     * detects entities of the type <code>DX_NAME</code> and
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline ICD10CMEntityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ICD10CMEntityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ICD10CMEntity& WithType(ICD10CMEntityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detection.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline ICD10CMEntity& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 0-based character offset in the input text that shows where the entity
     * begins. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline ICD10CMEntity& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 0-based character offset in the input text that shows where the entity
     * ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline ICD10CMEntity& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detected attributes that relate to the entity. An extracted segment of
     * the text that is an attribute of an entity, or otherwise related to an entity,
     * such as the nature of a medical condition.</p>
     */
    inline const Aws::Vector<ICD10CMAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<ICD10CMAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<ICD10CMAttribute>>
    ICD10CMEntity& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = ICD10CMAttribute>
    ICD10CMEntity& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides Contextual information for the entity. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION.</code> </p>
     */
    inline const Aws::Vector<ICD10CMTrait>& GetTraits() const { return m_traits; }
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }
    template<typename TraitsT = Aws::Vector<ICD10CMTrait>>
    void SetTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits = std::forward<TraitsT>(value); }
    template<typename TraitsT = Aws::Vector<ICD10CMTrait>>
    ICD10CMEntity& WithTraits(TraitsT&& value) { SetTraits(std::forward<TraitsT>(value)); return *this;}
    template<typename TraitsT = ICD10CMTrait>
    ICD10CMEntity& AddTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits.emplace_back(std::forward<TraitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ICD-10-CM concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline const Aws::Vector<ICD10CMConcept>& GetICD10CMConcepts() const { return m_iCD10CMConcepts; }
    inline bool ICD10CMConceptsHasBeenSet() const { return m_iCD10CMConceptsHasBeenSet; }
    template<typename ICD10CMConceptsT = Aws::Vector<ICD10CMConcept>>
    void SetICD10CMConcepts(ICD10CMConceptsT&& value) { m_iCD10CMConceptsHasBeenSet = true; m_iCD10CMConcepts = std::forward<ICD10CMConceptsT>(value); }
    template<typename ICD10CMConceptsT = Aws::Vector<ICD10CMConcept>>
    ICD10CMEntity& WithICD10CMConcepts(ICD10CMConceptsT&& value) { SetICD10CMConcepts(std::forward<ICD10CMConceptsT>(value)); return *this;}
    template<typename ICD10CMConceptsT = ICD10CMConcept>
    ICD10CMEntity& AddICD10CMConcepts(ICD10CMConceptsT&& value) { m_iCD10CMConceptsHasBeenSet = true; m_iCD10CMConcepts.emplace_back(std::forward<ICD10CMConceptsT>(value)); return *this; }
    ///@}
  private:

    int m_id{0};
    bool m_idHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    ICD10CMEntityCategory m_category{ICD10CMEntityCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    ICD10CMEntityType m_type{ICD10CMEntityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;

    Aws::Vector<ICD10CMAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<ICD10CMTrait> m_traits;
    bool m_traitsHasBeenSet = false;

    Aws::Vector<ICD10CMConcept> m_iCD10CMConcepts;
    bool m_iCD10CMConceptsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
