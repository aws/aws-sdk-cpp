/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/SNOMEDCTEntityCategory.h>
#include <aws/comprehendmedical/model/SNOMEDCTEntityType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehendmedical/model/SNOMEDCTAttribute.h>
#include <aws/comprehendmedical/model/SNOMEDCTTrait.h>
#include <aws/comprehendmedical/model/SNOMEDCTConcept.h>
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
   * <p> The collection of medical entities extracted from the input text and their
   * associated information. For each entity, the response provides the entity text,
   * the entity category, where the entity text begins and ends, and the level of
   * confidence that Amazon Comprehend Medical has in the detection and analysis.
   * Attributes and traits of the entity are also returned. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/SNOMEDCTEntity">AWS
   * API Reference</a></p>
   */
  class SNOMEDCTEntity
  {
  public:
    AWS_COMPREHENDMEDICAL_API SNOMEDCTEntity() = default;
    AWS_COMPREHENDMEDICAL_API SNOMEDCTEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API SNOMEDCTEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The numeric identifier for the entity. This is a monotonically increasing id
     * unique within this response rather than a global unique identifier. </p>
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline SNOMEDCTEntity& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The segment of input text extracted as this entity. </p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    SNOMEDCTEntity& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The category of the detected entity. Possible categories are
     * MEDICAL_CONDITION, ANATOMY, or TEST_TREATMENT_PROCEDURE. </p>
     */
    inline SNOMEDCTEntityCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(SNOMEDCTEntityCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline SNOMEDCTEntity& WithCategory(SNOMEDCTEntityCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the specific type of entity with category of entities. Possible
     * types include DX_NAME, ACUITY, DIRECTION, SYSTEM_ORGAN_SITE, TEST_NAME,
     * TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, or TREATMENT_NAME. </p>
     */
    inline SNOMEDCTEntityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SNOMEDCTEntityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SNOMEDCTEntity& WithType(SNOMEDCTEntityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The level of confidence that Amazon Comprehend Medical has in the accuracy
     * of the detected entity. </p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline SNOMEDCTEntity& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 0-based character offset in the input text that shows where the entity
     * begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline SNOMEDCTEntity& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 0-based character offset in the input text that shows where the entity
     * ends. The offset returns the UTF-8 code point in the string. </p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline SNOMEDCTEntity& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An extracted segment of the text that is an attribute of an entity, or
     * otherwise related to an entity, such as the dosage of a medication taken. </p>
     */
    inline const Aws::Vector<SNOMEDCTAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<SNOMEDCTAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<SNOMEDCTAttribute>>
    SNOMEDCTEntity& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = SNOMEDCTAttribute>
    SNOMEDCTEntity& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contextual information for the entity. </p>
     */
    inline const Aws::Vector<SNOMEDCTTrait>& GetTraits() const { return m_traits; }
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }
    template<typename TraitsT = Aws::Vector<SNOMEDCTTrait>>
    void SetTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits = std::forward<TraitsT>(value); }
    template<typename TraitsT = Aws::Vector<SNOMEDCTTrait>>
    SNOMEDCTEntity& WithTraits(TraitsT&& value) { SetTraits(std::forward<TraitsT>(value)); return *this;}
    template<typename TraitsT = SNOMEDCTTrait>
    SNOMEDCTEntity& AddTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits.emplace_back(std::forward<TraitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The SNOMED concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline const Aws::Vector<SNOMEDCTConcept>& GetSNOMEDCTConcepts() const { return m_sNOMEDCTConcepts; }
    inline bool SNOMEDCTConceptsHasBeenSet() const { return m_sNOMEDCTConceptsHasBeenSet; }
    template<typename SNOMEDCTConceptsT = Aws::Vector<SNOMEDCTConcept>>
    void SetSNOMEDCTConcepts(SNOMEDCTConceptsT&& value) { m_sNOMEDCTConceptsHasBeenSet = true; m_sNOMEDCTConcepts = std::forward<SNOMEDCTConceptsT>(value); }
    template<typename SNOMEDCTConceptsT = Aws::Vector<SNOMEDCTConcept>>
    SNOMEDCTEntity& WithSNOMEDCTConcepts(SNOMEDCTConceptsT&& value) { SetSNOMEDCTConcepts(std::forward<SNOMEDCTConceptsT>(value)); return *this;}
    template<typename SNOMEDCTConceptsT = SNOMEDCTConcept>
    SNOMEDCTEntity& AddSNOMEDCTConcepts(SNOMEDCTConceptsT&& value) { m_sNOMEDCTConceptsHasBeenSet = true; m_sNOMEDCTConcepts.emplace_back(std::forward<SNOMEDCTConceptsT>(value)); return *this; }
    ///@}
  private:

    int m_id{0};
    bool m_idHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    SNOMEDCTEntityCategory m_category{SNOMEDCTEntityCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    SNOMEDCTEntityType m_type{SNOMEDCTEntityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;

    Aws::Vector<SNOMEDCTAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<SNOMEDCTTrait> m_traits;
    bool m_traitsHasBeenSet = false;

    Aws::Vector<SNOMEDCTConcept> m_sNOMEDCTConcepts;
    bool m_sNOMEDCTConceptsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
