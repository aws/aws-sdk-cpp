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
    AWS_COMPREHENDMEDICAL_API SNOMEDCTAttribute();
    AWS_COMPREHENDMEDICAL_API SNOMEDCTAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API SNOMEDCTAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The category of the detected attribute. Possible categories include
     * MEDICAL_CONDITION, ANATOMY, and TEST_TREATMENT_PROCEDURE. </p>
     */
    inline const SNOMEDCTEntityCategory& GetCategory() const{ return m_category; }

    /**
     * <p> The category of the detected attribute. Possible categories include
     * MEDICAL_CONDITION, ANATOMY, and TEST_TREATMENT_PROCEDURE. </p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p> The category of the detected attribute. Possible categories include
     * MEDICAL_CONDITION, ANATOMY, and TEST_TREATMENT_PROCEDURE. </p>
     */
    inline void SetCategory(const SNOMEDCTEntityCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p> The category of the detected attribute. Possible categories include
     * MEDICAL_CONDITION, ANATOMY, and TEST_TREATMENT_PROCEDURE. </p>
     */
    inline void SetCategory(SNOMEDCTEntityCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p> The category of the detected attribute. Possible categories include
     * MEDICAL_CONDITION, ANATOMY, and TEST_TREATMENT_PROCEDURE. </p>
     */
    inline SNOMEDCTAttribute& WithCategory(const SNOMEDCTEntityCategory& value) { SetCategory(value); return *this;}

    /**
     * <p> The category of the detected attribute. Possible categories include
     * MEDICAL_CONDITION, ANATOMY, and TEST_TREATMENT_PROCEDURE. </p>
     */
    inline SNOMEDCTAttribute& WithCategory(SNOMEDCTEntityCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p> The type of attribute. Possible types include DX_NAME, ACUITY, DIRECTION,
     * SYSTEM_ORGAN_SITE,TEST_NAME, TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, and
     * TREATMENT_NAME. </p>
     */
    inline const SNOMEDCTAttributeType& GetType() const{ return m_type; }

    /**
     * <p> The type of attribute. Possible types include DX_NAME, ACUITY, DIRECTION,
     * SYSTEM_ORGAN_SITE,TEST_NAME, TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, and
     * TREATMENT_NAME. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of attribute. Possible types include DX_NAME, ACUITY, DIRECTION,
     * SYSTEM_ORGAN_SITE,TEST_NAME, TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, and
     * TREATMENT_NAME. </p>
     */
    inline void SetType(const SNOMEDCTAttributeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of attribute. Possible types include DX_NAME, ACUITY, DIRECTION,
     * SYSTEM_ORGAN_SITE,TEST_NAME, TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, and
     * TREATMENT_NAME. </p>
     */
    inline void SetType(SNOMEDCTAttributeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of attribute. Possible types include DX_NAME, ACUITY, DIRECTION,
     * SYSTEM_ORGAN_SITE,TEST_NAME, TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, and
     * TREATMENT_NAME. </p>
     */
    inline SNOMEDCTAttribute& WithType(const SNOMEDCTAttributeType& value) { SetType(value); return *this;}

    /**
     * <p> The type of attribute. Possible types include DX_NAME, ACUITY, DIRECTION,
     * SYSTEM_ORGAN_SITE,TEST_NAME, TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, and
     * TREATMENT_NAME. </p>
     */
    inline SNOMEDCTAttribute& WithType(SNOMEDCTAttributeType&& value) { SetType(std::move(value)); return *this;}


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
    inline SNOMEDCTAttribute& WithScore(double value) { SetScore(value); return *this;}


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
    inline SNOMEDCTAttribute& WithRelationshipScore(double value) { SetRelationshipScore(value); return *this;}


    /**
     * <p> The type of relationship that exists between the entity and the related
     * attribute. </p>
     */
    inline const SNOMEDCTRelationshipType& GetRelationshipType() const{ return m_relationshipType; }

    /**
     * <p> The type of relationship that exists between the entity and the related
     * attribute. </p>
     */
    inline bool RelationshipTypeHasBeenSet() const { return m_relationshipTypeHasBeenSet; }

    /**
     * <p> The type of relationship that exists between the entity and the related
     * attribute. </p>
     */
    inline void SetRelationshipType(const SNOMEDCTRelationshipType& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = value; }

    /**
     * <p> The type of relationship that exists between the entity and the related
     * attribute. </p>
     */
    inline void SetRelationshipType(SNOMEDCTRelationshipType&& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = std::move(value); }

    /**
     * <p> The type of relationship that exists between the entity and the related
     * attribute. </p>
     */
    inline SNOMEDCTAttribute& WithRelationshipType(const SNOMEDCTRelationshipType& value) { SetRelationshipType(value); return *this;}

    /**
     * <p> The type of relationship that exists between the entity and the related
     * attribute. </p>
     */
    inline SNOMEDCTAttribute& WithRelationshipType(SNOMEDCTRelationshipType&& value) { SetRelationshipType(std::move(value)); return *this;}


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
    inline SNOMEDCTAttribute& WithId(int value) { SetId(value); return *this;}


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
    inline SNOMEDCTAttribute& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


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
    inline SNOMEDCTAttribute& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p> The segment of input text extracted as this attribute. </p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p> The segment of input text extracted as this attribute. </p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p> The segment of input text extracted as this attribute. </p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p> The segment of input text extracted as this attribute. </p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p> The segment of input text extracted as this attribute. </p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p> The segment of input text extracted as this attribute. </p>
     */
    inline SNOMEDCTAttribute& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p> The segment of input text extracted as this attribute. </p>
     */
    inline SNOMEDCTAttribute& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p> The segment of input text extracted as this attribute. </p>
     */
    inline SNOMEDCTAttribute& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p> Contextual information for an attribute. Examples include signs, symptoms,
     * diagnosis, and negation. </p>
     */
    inline const Aws::Vector<SNOMEDCTTrait>& GetTraits() const{ return m_traits; }

    /**
     * <p> Contextual information for an attribute. Examples include signs, symptoms,
     * diagnosis, and negation. </p>
     */
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }

    /**
     * <p> Contextual information for an attribute. Examples include signs, symptoms,
     * diagnosis, and negation. </p>
     */
    inline void SetTraits(const Aws::Vector<SNOMEDCTTrait>& value) { m_traitsHasBeenSet = true; m_traits = value; }

    /**
     * <p> Contextual information for an attribute. Examples include signs, symptoms,
     * diagnosis, and negation. </p>
     */
    inline void SetTraits(Aws::Vector<SNOMEDCTTrait>&& value) { m_traitsHasBeenSet = true; m_traits = std::move(value); }

    /**
     * <p> Contextual information for an attribute. Examples include signs, symptoms,
     * diagnosis, and negation. </p>
     */
    inline SNOMEDCTAttribute& WithTraits(const Aws::Vector<SNOMEDCTTrait>& value) { SetTraits(value); return *this;}

    /**
     * <p> Contextual information for an attribute. Examples include signs, symptoms,
     * diagnosis, and negation. </p>
     */
    inline SNOMEDCTAttribute& WithTraits(Aws::Vector<SNOMEDCTTrait>&& value) { SetTraits(std::move(value)); return *this;}

    /**
     * <p> Contextual information for an attribute. Examples include signs, symptoms,
     * diagnosis, and negation. </p>
     */
    inline SNOMEDCTAttribute& AddTraits(const SNOMEDCTTrait& value) { m_traitsHasBeenSet = true; m_traits.push_back(value); return *this; }

    /**
     * <p> Contextual information for an attribute. Examples include signs, symptoms,
     * diagnosis, and negation. </p>
     */
    inline SNOMEDCTAttribute& AddTraits(SNOMEDCTTrait&& value) { m_traitsHasBeenSet = true; m_traits.push_back(std::move(value)); return *this; }


    /**
     * <p> The SNOMED-CT concepts specific to an attribute, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline const Aws::Vector<SNOMEDCTConcept>& GetSNOMEDCTConcepts() const{ return m_sNOMEDCTConcepts; }

    /**
     * <p> The SNOMED-CT concepts specific to an attribute, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline bool SNOMEDCTConceptsHasBeenSet() const { return m_sNOMEDCTConceptsHasBeenSet; }

    /**
     * <p> The SNOMED-CT concepts specific to an attribute, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline void SetSNOMEDCTConcepts(const Aws::Vector<SNOMEDCTConcept>& value) { m_sNOMEDCTConceptsHasBeenSet = true; m_sNOMEDCTConcepts = value; }

    /**
     * <p> The SNOMED-CT concepts specific to an attribute, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline void SetSNOMEDCTConcepts(Aws::Vector<SNOMEDCTConcept>&& value) { m_sNOMEDCTConceptsHasBeenSet = true; m_sNOMEDCTConcepts = std::move(value); }

    /**
     * <p> The SNOMED-CT concepts specific to an attribute, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline SNOMEDCTAttribute& WithSNOMEDCTConcepts(const Aws::Vector<SNOMEDCTConcept>& value) { SetSNOMEDCTConcepts(value); return *this;}

    /**
     * <p> The SNOMED-CT concepts specific to an attribute, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline SNOMEDCTAttribute& WithSNOMEDCTConcepts(Aws::Vector<SNOMEDCTConcept>&& value) { SetSNOMEDCTConcepts(std::move(value)); return *this;}

    /**
     * <p> The SNOMED-CT concepts specific to an attribute, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline SNOMEDCTAttribute& AddSNOMEDCTConcepts(const SNOMEDCTConcept& value) { m_sNOMEDCTConceptsHasBeenSet = true; m_sNOMEDCTConcepts.push_back(value); return *this; }

    /**
     * <p> The SNOMED-CT concepts specific to an attribute, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline SNOMEDCTAttribute& AddSNOMEDCTConcepts(SNOMEDCTConcept&& value) { m_sNOMEDCTConceptsHasBeenSet = true; m_sNOMEDCTConcepts.push_back(std::move(value)); return *this; }

  private:

    SNOMEDCTEntityCategory m_category;
    bool m_categoryHasBeenSet = false;

    SNOMEDCTAttributeType m_type;
    bool m_typeHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    double m_relationshipScore;
    bool m_relationshipScoreHasBeenSet = false;

    SNOMEDCTRelationshipType m_relationshipType;
    bool m_relationshipTypeHasBeenSet = false;

    int m_id;
    bool m_idHasBeenSet = false;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
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
