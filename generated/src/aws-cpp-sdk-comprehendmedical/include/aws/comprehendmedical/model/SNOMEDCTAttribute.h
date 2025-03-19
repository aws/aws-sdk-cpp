/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/model/SNOMEDCTEntityCategory.h>
#include <aws/comprehendmedical/model/SNOMEDCTAttributeType.h>
#include <aws/comprehendmedical/model/SNOMEDCTRelationshipType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> The extracted attributes that relate to an entity. An extracted segment of
   * the text that is an attribute of an entity, or otherwise related to an entity,
   * such as the dosage of a medication taken. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/SNOMEDCTAttribute">AWS
   * API Reference</a></p>
   */
  class SNOMEDCTAttribute
  {
  public:
    AWS_COMPREHENDMEDICAL_API SNOMEDCTAttribute() = default;
    AWS_COMPREHENDMEDICAL_API SNOMEDCTAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API SNOMEDCTAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The category of the detected attribute. Possible categories include
     * MEDICAL_CONDITION, ANATOMY, and TEST_TREATMENT_PROCEDURE. </p>
     */
    inline SNOMEDCTEntityCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(SNOMEDCTEntityCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline SNOMEDCTAttribute& WithCategory(SNOMEDCTEntityCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of attribute. Possible types include DX_NAME, ACUITY, DIRECTION,
     * SYSTEM_ORGAN_SITE,TEST_NAME, TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, and
     * TREATMENT_NAME. </p>
     */
    inline SNOMEDCTAttributeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SNOMEDCTAttributeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SNOMEDCTAttribute& WithType(SNOMEDCTAttributeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The level of confidence that Amazon Comprehend Medical has that the segment
     * of text is correctly recognized as an attribute. </p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline SNOMEDCTAttribute& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The level of confidence that Amazon Comprehend Medical has that this
     * attribute is correctly related to this entity. </p>
     */
    inline double GetRelationshipScore() const { return m_relationshipScore; }
    inline bool RelationshipScoreHasBeenSet() const { return m_relationshipScoreHasBeenSet; }
    inline void SetRelationshipScore(double value) { m_relationshipScoreHasBeenSet = true; m_relationshipScore = value; }
    inline SNOMEDCTAttribute& WithRelationshipScore(double value) { SetRelationshipScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of relationship that exists between the entity and the related
     * attribute. </p>
     */
    inline SNOMEDCTRelationshipType GetRelationshipType() const { return m_relationshipType; }
    inline bool RelationshipTypeHasBeenSet() const { return m_relationshipTypeHasBeenSet; }
    inline void SetRelationshipType(SNOMEDCTRelationshipType value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = value; }
    inline SNOMEDCTAttribute& WithRelationshipType(SNOMEDCTRelationshipType value) { SetRelationshipType(value); return *this;}
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
    inline SNOMEDCTAttribute& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline SNOMEDCTAttribute& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 0-based character offset in the input text that shows where the
     * attribute ends. The offset returns the UTF-8 code point in the string. </p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline SNOMEDCTAttribute& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The segment of input text extracted as this attribute. </p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    SNOMEDCTAttribute& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contextual information for an attribute. Examples include signs, symptoms,
     * diagnosis, and negation. </p>
     */
    inline const Aws::Vector<SNOMEDCTTrait>& GetTraits() const { return m_traits; }
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }
    template<typename TraitsT = Aws::Vector<SNOMEDCTTrait>>
    void SetTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits = std::forward<TraitsT>(value); }
    template<typename TraitsT = Aws::Vector<SNOMEDCTTrait>>
    SNOMEDCTAttribute& WithTraits(TraitsT&& value) { SetTraits(std::forward<TraitsT>(value)); return *this;}
    template<typename TraitsT = SNOMEDCTTrait>
    SNOMEDCTAttribute& AddTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits.emplace_back(std::forward<TraitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The SNOMED-CT concepts specific to an attribute, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline const Aws::Vector<SNOMEDCTConcept>& GetSNOMEDCTConcepts() const { return m_sNOMEDCTConcepts; }
    inline bool SNOMEDCTConceptsHasBeenSet() const { return m_sNOMEDCTConceptsHasBeenSet; }
    template<typename SNOMEDCTConceptsT = Aws::Vector<SNOMEDCTConcept>>
    void SetSNOMEDCTConcepts(SNOMEDCTConceptsT&& value) { m_sNOMEDCTConceptsHasBeenSet = true; m_sNOMEDCTConcepts = std::forward<SNOMEDCTConceptsT>(value); }
    template<typename SNOMEDCTConceptsT = Aws::Vector<SNOMEDCTConcept>>
    SNOMEDCTAttribute& WithSNOMEDCTConcepts(SNOMEDCTConceptsT&& value) { SetSNOMEDCTConcepts(std::forward<SNOMEDCTConceptsT>(value)); return *this;}
    template<typename SNOMEDCTConceptsT = SNOMEDCTConcept>
    SNOMEDCTAttribute& AddSNOMEDCTConcepts(SNOMEDCTConceptsT&& value) { m_sNOMEDCTConceptsHasBeenSet = true; m_sNOMEDCTConcepts.emplace_back(std::forward<SNOMEDCTConceptsT>(value)); return *this; }
    ///@}
  private:

    SNOMEDCTEntityCategory m_category{SNOMEDCTEntityCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    SNOMEDCTAttributeType m_type{SNOMEDCTAttributeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    double m_relationshipScore{0.0};
    bool m_relationshipScoreHasBeenSet = false;

    SNOMEDCTRelationshipType m_relationshipType{SNOMEDCTRelationshipType::NOT_SET};
    bool m_relationshipTypeHasBeenSet = false;

    int m_id{0};
    bool m_idHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Vector<SNOMEDCTTrait> m_traits;
    bool m_traitsHasBeenSet = false;

    Aws::Vector<SNOMEDCTConcept> m_sNOMEDCTConcepts;
    bool m_sNOMEDCTConceptsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
