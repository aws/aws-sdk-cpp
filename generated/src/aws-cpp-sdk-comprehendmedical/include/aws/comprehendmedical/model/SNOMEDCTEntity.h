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
   * confidence that Comprehend Medical has in the detection and analysis. Attributes
   * and traits of the entity are also returned. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/SNOMEDCTEntity">AWS
   * API Reference</a></p>
   */
  class SNOMEDCTEntity
  {
  public:
    AWS_COMPREHENDMEDICAL_API SNOMEDCTEntity();
    AWS_COMPREHENDMEDICAL_API SNOMEDCTEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API SNOMEDCTEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline SNOMEDCTEntity& WithId(int value) { SetId(value); return *this;}


    /**
     * <p> The segment of input text extracted as this entity. </p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p> The segment of input text extracted as this entity. </p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p> The segment of input text extracted as this entity. </p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p> The segment of input text extracted as this entity. </p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p> The segment of input text extracted as this entity. </p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p> The segment of input text extracted as this entity. </p>
     */
    inline SNOMEDCTEntity& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p> The segment of input text extracted as this entity. </p>
     */
    inline SNOMEDCTEntity& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p> The segment of input text extracted as this entity. </p>
     */
    inline SNOMEDCTEntity& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p> The category of the detected entity. Possible categories are
     * MEDICAL_CONDITION, ANATOMY, or TEST_TREATMENT_PROCEDURE. </p>
     */
    inline const SNOMEDCTEntityCategory& GetCategory() const{ return m_category; }

    /**
     * <p> The category of the detected entity. Possible categories are
     * MEDICAL_CONDITION, ANATOMY, or TEST_TREATMENT_PROCEDURE. </p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p> The category of the detected entity. Possible categories are
     * MEDICAL_CONDITION, ANATOMY, or TEST_TREATMENT_PROCEDURE. </p>
     */
    inline void SetCategory(const SNOMEDCTEntityCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p> The category of the detected entity. Possible categories are
     * MEDICAL_CONDITION, ANATOMY, or TEST_TREATMENT_PROCEDURE. </p>
     */
    inline void SetCategory(SNOMEDCTEntityCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p> The category of the detected entity. Possible categories are
     * MEDICAL_CONDITION, ANATOMY, or TEST_TREATMENT_PROCEDURE. </p>
     */
    inline SNOMEDCTEntity& WithCategory(const SNOMEDCTEntityCategory& value) { SetCategory(value); return *this;}

    /**
     * <p> The category of the detected entity. Possible categories are
     * MEDICAL_CONDITION, ANATOMY, or TEST_TREATMENT_PROCEDURE. </p>
     */
    inline SNOMEDCTEntity& WithCategory(SNOMEDCTEntityCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p> Describes the specific type of entity with category of entities. Possible
     * types include DX_NAME, ACUITY, DIRECTION, SYSTEM_ORGAN_SITE, TEST_NAME,
     * TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, or TREATMENT_NAME. </p>
     */
    inline const SNOMEDCTEntityType& GetType() const{ return m_type; }

    /**
     * <p> Describes the specific type of entity with category of entities. Possible
     * types include DX_NAME, ACUITY, DIRECTION, SYSTEM_ORGAN_SITE, TEST_NAME,
     * TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, or TREATMENT_NAME. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> Describes the specific type of entity with category of entities. Possible
     * types include DX_NAME, ACUITY, DIRECTION, SYSTEM_ORGAN_SITE, TEST_NAME,
     * TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, or TREATMENT_NAME. </p>
     */
    inline void SetType(const SNOMEDCTEntityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> Describes the specific type of entity with category of entities. Possible
     * types include DX_NAME, ACUITY, DIRECTION, SYSTEM_ORGAN_SITE, TEST_NAME,
     * TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, or TREATMENT_NAME. </p>
     */
    inline void SetType(SNOMEDCTEntityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> Describes the specific type of entity with category of entities. Possible
     * types include DX_NAME, ACUITY, DIRECTION, SYSTEM_ORGAN_SITE, TEST_NAME,
     * TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, or TREATMENT_NAME. </p>
     */
    inline SNOMEDCTEntity& WithType(const SNOMEDCTEntityType& value) { SetType(value); return *this;}

    /**
     * <p> Describes the specific type of entity with category of entities. Possible
     * types include DX_NAME, ACUITY, DIRECTION, SYSTEM_ORGAN_SITE, TEST_NAME,
     * TEST_VALUE, TEST_UNIT, PROCEDURE_NAME, or TREATMENT_NAME. </p>
     */
    inline SNOMEDCTEntity& WithType(SNOMEDCTEntityType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> The level of confidence that Comprehend Medical has in the accuracy of the
     * detected entity. </p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p> The level of confidence that Comprehend Medical has in the accuracy of the
     * detected entity. </p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p> The level of confidence that Comprehend Medical has in the accuracy of the
     * detected entity. </p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p> The level of confidence that Comprehend Medical has in the accuracy of the
     * detected entity. </p>
     */
    inline SNOMEDCTEntity& WithScore(double value) { SetScore(value); return *this;}


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
    inline SNOMEDCTEntity& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


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
    inline SNOMEDCTEntity& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p> An extracted segment of the text that is an attribute of an entity, or
     * otherwise related to an entity, such as the dosage of a medication taken. </p>
     */
    inline const Aws::Vector<SNOMEDCTAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p> An extracted segment of the text that is an attribute of an entity, or
     * otherwise related to an entity, such as the dosage of a medication taken. </p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p> An extracted segment of the text that is an attribute of an entity, or
     * otherwise related to an entity, such as the dosage of a medication taken. </p>
     */
    inline void SetAttributes(const Aws::Vector<SNOMEDCTAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p> An extracted segment of the text that is an attribute of an entity, or
     * otherwise related to an entity, such as the dosage of a medication taken. </p>
     */
    inline void SetAttributes(Aws::Vector<SNOMEDCTAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p> An extracted segment of the text that is an attribute of an entity, or
     * otherwise related to an entity, such as the dosage of a medication taken. </p>
     */
    inline SNOMEDCTEntity& WithAttributes(const Aws::Vector<SNOMEDCTAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p> An extracted segment of the text that is an attribute of an entity, or
     * otherwise related to an entity, such as the dosage of a medication taken. </p>
     */
    inline SNOMEDCTEntity& WithAttributes(Aws::Vector<SNOMEDCTAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p> An extracted segment of the text that is an attribute of an entity, or
     * otherwise related to an entity, such as the dosage of a medication taken. </p>
     */
    inline SNOMEDCTEntity& AddAttributes(const SNOMEDCTAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p> An extracted segment of the text that is an attribute of an entity, or
     * otherwise related to an entity, such as the dosage of a medication taken. </p>
     */
    inline SNOMEDCTEntity& AddAttributes(SNOMEDCTAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p> Contextual information for the entity. </p>
     */
    inline const Aws::Vector<SNOMEDCTTrait>& GetTraits() const{ return m_traits; }

    /**
     * <p> Contextual information for the entity. </p>
     */
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }

    /**
     * <p> Contextual information for the entity. </p>
     */
    inline void SetTraits(const Aws::Vector<SNOMEDCTTrait>& value) { m_traitsHasBeenSet = true; m_traits = value; }

    /**
     * <p> Contextual information for the entity. </p>
     */
    inline void SetTraits(Aws::Vector<SNOMEDCTTrait>&& value) { m_traitsHasBeenSet = true; m_traits = std::move(value); }

    /**
     * <p> Contextual information for the entity. </p>
     */
    inline SNOMEDCTEntity& WithTraits(const Aws::Vector<SNOMEDCTTrait>& value) { SetTraits(value); return *this;}

    /**
     * <p> Contextual information for the entity. </p>
     */
    inline SNOMEDCTEntity& WithTraits(Aws::Vector<SNOMEDCTTrait>&& value) { SetTraits(std::move(value)); return *this;}

    /**
     * <p> Contextual information for the entity. </p>
     */
    inline SNOMEDCTEntity& AddTraits(const SNOMEDCTTrait& value) { m_traitsHasBeenSet = true; m_traits.push_back(value); return *this; }

    /**
     * <p> Contextual information for the entity. </p>
     */
    inline SNOMEDCTEntity& AddTraits(SNOMEDCTTrait&& value) { m_traitsHasBeenSet = true; m_traits.push_back(std::move(value)); return *this; }


    /**
     * <p> The SNOMED concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline const Aws::Vector<SNOMEDCTConcept>& GetSNOMEDCTConcepts() const{ return m_sNOMEDCTConcepts; }

    /**
     * <p> The SNOMED concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline bool SNOMEDCTConceptsHasBeenSet() const { return m_sNOMEDCTConceptsHasBeenSet; }

    /**
     * <p> The SNOMED concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline void SetSNOMEDCTConcepts(const Aws::Vector<SNOMEDCTConcept>& value) { m_sNOMEDCTConceptsHasBeenSet = true; m_sNOMEDCTConcepts = value; }

    /**
     * <p> The SNOMED concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline void SetSNOMEDCTConcepts(Aws::Vector<SNOMEDCTConcept>&& value) { m_sNOMEDCTConceptsHasBeenSet = true; m_sNOMEDCTConcepts = std::move(value); }

    /**
     * <p> The SNOMED concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline SNOMEDCTEntity& WithSNOMEDCTConcepts(const Aws::Vector<SNOMEDCTConcept>& value) { SetSNOMEDCTConcepts(value); return *this;}

    /**
     * <p> The SNOMED concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline SNOMEDCTEntity& WithSNOMEDCTConcepts(Aws::Vector<SNOMEDCTConcept>&& value) { SetSNOMEDCTConcepts(std::move(value)); return *this;}

    /**
     * <p> The SNOMED concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline SNOMEDCTEntity& AddSNOMEDCTConcepts(const SNOMEDCTConcept& value) { m_sNOMEDCTConceptsHasBeenSet = true; m_sNOMEDCTConcepts.push_back(value); return *this; }

    /**
     * <p> The SNOMED concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match. </p>
     */
    inline SNOMEDCTEntity& AddSNOMEDCTConcepts(SNOMEDCTConcept&& value) { m_sNOMEDCTConceptsHasBeenSet = true; m_sNOMEDCTConcepts.push_back(std::move(value)); return *this; }

  private:

    int m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    SNOMEDCTEntityCategory m_category;
    bool m_categoryHasBeenSet = false;

    SNOMEDCTEntityType m_type;
    bool m_typeHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
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
