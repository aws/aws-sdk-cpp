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
    AWS_COMPREHENDMEDICAL_API ICD10CMEntity();
    AWS_COMPREHENDMEDICAL_API ICD10CMEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API ICD10CMEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The numeric identifier for the entity. This is a monotonically increasing id
     * unique within this response rather than a global unique identifier.</p>
     */
    inline int GetId() const{ return m_id; }

    /**
     * <p>The numeric identifier for the entity. This is a monotonically increasing id
     * unique within this response rather than a global unique identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The numeric identifier for the entity. This is a monotonically increasing id
     * unique within this response rather than a global unique identifier.</p>
     */
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The numeric identifier for the entity. This is a monotonically increasing id
     * unique within this response rather than a global unique identifier.</p>
     */
    inline ICD10CMEntity& WithId(int value) { SetId(value); return *this;}


    /**
     * <p>The segment of input text that is matched to the detected entity.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The segment of input text that is matched to the detected entity.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The segment of input text that is matched to the detected entity.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The segment of input text that is matched to the detected entity.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The segment of input text that is matched to the detected entity.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The segment of input text that is matched to the detected entity.</p>
     */
    inline ICD10CMEntity& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The segment of input text that is matched to the detected entity.</p>
     */
    inline ICD10CMEntity& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The segment of input text that is matched to the detected entity.</p>
     */
    inline ICD10CMEntity& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p> The category of the entity. InferICD10CM detects entities in the
     * <code>MEDICAL_CONDITION</code> category. </p>
     */
    inline const ICD10CMEntityCategory& GetCategory() const{ return m_category; }

    /**
     * <p> The category of the entity. InferICD10CM detects entities in the
     * <code>MEDICAL_CONDITION</code> category. </p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p> The category of the entity. InferICD10CM detects entities in the
     * <code>MEDICAL_CONDITION</code> category. </p>
     */
    inline void SetCategory(const ICD10CMEntityCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p> The category of the entity. InferICD10CM detects entities in the
     * <code>MEDICAL_CONDITION</code> category. </p>
     */
    inline void SetCategory(ICD10CMEntityCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p> The category of the entity. InferICD10CM detects entities in the
     * <code>MEDICAL_CONDITION</code> category. </p>
     */
    inline ICD10CMEntity& WithCategory(const ICD10CMEntityCategory& value) { SetCategory(value); return *this;}

    /**
     * <p> The category of the entity. InferICD10CM detects entities in the
     * <code>MEDICAL_CONDITION</code> category. </p>
     */
    inline ICD10CMEntity& WithCategory(ICD10CMEntityCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>Describes the specific type of entity with category of entities. InferICD10CM
     * detects entities of the type <code>DX_NAME</code> and
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline const ICD10CMEntityType& GetType() const{ return m_type; }

    /**
     * <p>Describes the specific type of entity with category of entities. InferICD10CM
     * detects entities of the type <code>DX_NAME</code> and
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Describes the specific type of entity with category of entities. InferICD10CM
     * detects entities of the type <code>DX_NAME</code> and
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline void SetType(const ICD10CMEntityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Describes the specific type of entity with category of entities. InferICD10CM
     * detects entities of the type <code>DX_NAME</code> and
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline void SetType(ICD10CMEntityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Describes the specific type of entity with category of entities. InferICD10CM
     * detects entities of the type <code>DX_NAME</code> and
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline ICD10CMEntity& WithType(const ICD10CMEntityType& value) { SetType(value); return *this;}

    /**
     * <p>Describes the specific type of entity with category of entities. InferICD10CM
     * detects entities of the type <code>DX_NAME</code> and
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline ICD10CMEntity& WithType(ICD10CMEntityType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detection.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detection.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detection.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detection.</p>
     */
    inline ICD10CMEntity& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p>The 0-based character offset in the input text that shows where the entity
     * begins. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p>The 0-based character offset in the input text that shows where the entity
     * begins. The offset returns the UTF-8 code point in the string.</p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p>The 0-based character offset in the input text that shows where the entity
     * begins. The offset returns the UTF-8 code point in the string.</p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p>The 0-based character offset in the input text that shows where the entity
     * begins. The offset returns the UTF-8 code point in the string.</p>
     */
    inline ICD10CMEntity& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p>The 0-based character offset in the input text that shows where the entity
     * ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p>The 0-based character offset in the input text that shows where the entity
     * ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p>The 0-based character offset in the input text that shows where the entity
     * ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p>The 0-based character offset in the input text that shows where the entity
     * ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline ICD10CMEntity& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p>The detected attributes that relate to the entity. An extracted segment of
     * the text that is an attribute of an entity, or otherwise related to an entity,
     * such as the nature of a medical condition.</p>
     */
    inline const Aws::Vector<ICD10CMAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The detected attributes that relate to the entity. An extracted segment of
     * the text that is an attribute of an entity, or otherwise related to an entity,
     * such as the nature of a medical condition.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The detected attributes that relate to the entity. An extracted segment of
     * the text that is an attribute of an entity, or otherwise related to an entity,
     * such as the nature of a medical condition.</p>
     */
    inline void SetAttributes(const Aws::Vector<ICD10CMAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The detected attributes that relate to the entity. An extracted segment of
     * the text that is an attribute of an entity, or otherwise related to an entity,
     * such as the nature of a medical condition.</p>
     */
    inline void SetAttributes(Aws::Vector<ICD10CMAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The detected attributes that relate to the entity. An extracted segment of
     * the text that is an attribute of an entity, or otherwise related to an entity,
     * such as the nature of a medical condition.</p>
     */
    inline ICD10CMEntity& WithAttributes(const Aws::Vector<ICD10CMAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The detected attributes that relate to the entity. An extracted segment of
     * the text that is an attribute of an entity, or otherwise related to an entity,
     * such as the nature of a medical condition.</p>
     */
    inline ICD10CMEntity& WithAttributes(Aws::Vector<ICD10CMAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The detected attributes that relate to the entity. An extracted segment of
     * the text that is an attribute of an entity, or otherwise related to an entity,
     * such as the nature of a medical condition.</p>
     */
    inline ICD10CMEntity& AddAttributes(const ICD10CMAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The detected attributes that relate to the entity. An extracted segment of
     * the text that is an attribute of an entity, or otherwise related to an entity,
     * such as the nature of a medical condition.</p>
     */
    inline ICD10CMEntity& AddAttributes(ICD10CMAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides Contextual information for the entity. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION.</code> </p>
     */
    inline const Aws::Vector<ICD10CMTrait>& GetTraits() const{ return m_traits; }

    /**
     * <p>Provides Contextual information for the entity. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION.</code> </p>
     */
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }

    /**
     * <p>Provides Contextual information for the entity. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION.</code> </p>
     */
    inline void SetTraits(const Aws::Vector<ICD10CMTrait>& value) { m_traitsHasBeenSet = true; m_traits = value; }

    /**
     * <p>Provides Contextual information for the entity. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION.</code> </p>
     */
    inline void SetTraits(Aws::Vector<ICD10CMTrait>&& value) { m_traitsHasBeenSet = true; m_traits = std::move(value); }

    /**
     * <p>Provides Contextual information for the entity. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION.</code> </p>
     */
    inline ICD10CMEntity& WithTraits(const Aws::Vector<ICD10CMTrait>& value) { SetTraits(value); return *this;}

    /**
     * <p>Provides Contextual information for the entity. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION.</code> </p>
     */
    inline ICD10CMEntity& WithTraits(Aws::Vector<ICD10CMTrait>&& value) { SetTraits(std::move(value)); return *this;}

    /**
     * <p>Provides Contextual information for the entity. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION.</code> </p>
     */
    inline ICD10CMEntity& AddTraits(const ICD10CMTrait& value) { m_traitsHasBeenSet = true; m_traits.push_back(value); return *this; }

    /**
     * <p>Provides Contextual information for the entity. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION.</code> </p>
     */
    inline ICD10CMEntity& AddTraits(ICD10CMTrait&& value) { m_traitsHasBeenSet = true; m_traits.push_back(std::move(value)); return *this; }


    /**
     * <p>The ICD-10-CM concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline const Aws::Vector<ICD10CMConcept>& GetICD10CMConcepts() const{ return m_iCD10CMConcepts; }

    /**
     * <p>The ICD-10-CM concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline bool ICD10CMConceptsHasBeenSet() const { return m_iCD10CMConceptsHasBeenSet; }

    /**
     * <p>The ICD-10-CM concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline void SetICD10CMConcepts(const Aws::Vector<ICD10CMConcept>& value) { m_iCD10CMConceptsHasBeenSet = true; m_iCD10CMConcepts = value; }

    /**
     * <p>The ICD-10-CM concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline void SetICD10CMConcepts(Aws::Vector<ICD10CMConcept>&& value) { m_iCD10CMConceptsHasBeenSet = true; m_iCD10CMConcepts = std::move(value); }

    /**
     * <p>The ICD-10-CM concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline ICD10CMEntity& WithICD10CMConcepts(const Aws::Vector<ICD10CMConcept>& value) { SetICD10CMConcepts(value); return *this;}

    /**
     * <p>The ICD-10-CM concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline ICD10CMEntity& WithICD10CMConcepts(Aws::Vector<ICD10CMConcept>&& value) { SetICD10CMConcepts(std::move(value)); return *this;}

    /**
     * <p>The ICD-10-CM concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline ICD10CMEntity& AddICD10CMConcepts(const ICD10CMConcept& value) { m_iCD10CMConceptsHasBeenSet = true; m_iCD10CMConcepts.push_back(value); return *this; }

    /**
     * <p>The ICD-10-CM concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline ICD10CMEntity& AddICD10CMConcepts(ICD10CMConcept&& value) { m_iCD10CMConceptsHasBeenSet = true; m_iCD10CMConcepts.push_back(std::move(value)); return *this; }

  private:

    int m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    ICD10CMEntityCategory m_category;
    bool m_categoryHasBeenSet = false;

    ICD10CMEntityType m_type;
    bool m_typeHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
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
