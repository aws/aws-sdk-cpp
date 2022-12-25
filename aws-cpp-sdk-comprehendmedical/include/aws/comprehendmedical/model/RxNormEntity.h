/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/RxNormEntityCategory.h>
#include <aws/comprehendmedical/model/RxNormEntityType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehendmedical/model/RxNormAttribute.h>
#include <aws/comprehendmedical/model/RxNormTrait.h>
#include <aws/comprehendmedical/model/RxNormConcept.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/RxNormEntity">AWS
   * API Reference</a></p>
   */
  class RxNormEntity
  {
  public:
    AWS_COMPREHENDMEDICAL_API RxNormEntity();
    AWS_COMPREHENDMEDICAL_API RxNormEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API RxNormEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline RxNormEntity& WithId(int value) { SetId(value); return *this;}


    /**
     * <p>The segment of input text extracted from which the entity was detected.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The segment of input text extracted from which the entity was detected.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The segment of input text extracted from which the entity was detected.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The segment of input text extracted from which the entity was detected.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The segment of input text extracted from which the entity was detected.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The segment of input text extracted from which the entity was detected.</p>
     */
    inline RxNormEntity& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The segment of input text extracted from which the entity was detected.</p>
     */
    inline RxNormEntity& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The segment of input text extracted from which the entity was detected.</p>
     */
    inline RxNormEntity& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The category of the entity. The recognized categories are
     * <code>GENERIC</code> or <code>BRAND_NAME</code>.</p>
     */
    inline const RxNormEntityCategory& GetCategory() const{ return m_category; }

    /**
     * <p>The category of the entity. The recognized categories are
     * <code>GENERIC</code> or <code>BRAND_NAME</code>.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of the entity. The recognized categories are
     * <code>GENERIC</code> or <code>BRAND_NAME</code>.</p>
     */
    inline void SetCategory(const RxNormEntityCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of the entity. The recognized categories are
     * <code>GENERIC</code> or <code>BRAND_NAME</code>.</p>
     */
    inline void SetCategory(RxNormEntityCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of the entity. The recognized categories are
     * <code>GENERIC</code> or <code>BRAND_NAME</code>.</p>
     */
    inline RxNormEntity& WithCategory(const RxNormEntityCategory& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of the entity. The recognized categories are
     * <code>GENERIC</code> or <code>BRAND_NAME</code>.</p>
     */
    inline RxNormEntity& WithCategory(RxNormEntityCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p> Describes the specific type of entity. For InferRxNorm, the recognized
     * entity type is <code>MEDICATION</code>.</p>
     */
    inline const RxNormEntityType& GetType() const{ return m_type; }

    /**
     * <p> Describes the specific type of entity. For InferRxNorm, the recognized
     * entity type is <code>MEDICATION</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> Describes the specific type of entity. For InferRxNorm, the recognized
     * entity type is <code>MEDICATION</code>.</p>
     */
    inline void SetType(const RxNormEntityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> Describes the specific type of entity. For InferRxNorm, the recognized
     * entity type is <code>MEDICATION</code>.</p>
     */
    inline void SetType(RxNormEntityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> Describes the specific type of entity. For InferRxNorm, the recognized
     * entity type is <code>MEDICATION</code>.</p>
     */
    inline RxNormEntity& WithType(const RxNormEntityType& value) { SetType(value); return *this;}

    /**
     * <p> Describes the specific type of entity. For InferRxNorm, the recognized
     * entity type is <code>MEDICATION</code>.</p>
     */
    inline RxNormEntity& WithType(RxNormEntityType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detected entity.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detected entity.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detected entity.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detected entity.</p>
     */
    inline RxNormEntity& WithScore(double value) { SetScore(value); return *this;}


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
    inline RxNormEntity& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


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
    inline RxNormEntity& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p>The extracted attributes that relate to the entity. The attributes recognized
     * by InferRxNorm are <code>DOSAGE</code>, <code>DURATION</code>,
     * <code>FORM</code>, <code>FREQUENCY</code>, <code>RATE</code>,
     * <code>ROUTE_OR_MODE</code>, and <code>STRENGTH</code>.</p>
     */
    inline const Aws::Vector<RxNormAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The extracted attributes that relate to the entity. The attributes recognized
     * by InferRxNorm are <code>DOSAGE</code>, <code>DURATION</code>,
     * <code>FORM</code>, <code>FREQUENCY</code>, <code>RATE</code>,
     * <code>ROUTE_OR_MODE</code>, and <code>STRENGTH</code>.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The extracted attributes that relate to the entity. The attributes recognized
     * by InferRxNorm are <code>DOSAGE</code>, <code>DURATION</code>,
     * <code>FORM</code>, <code>FREQUENCY</code>, <code>RATE</code>,
     * <code>ROUTE_OR_MODE</code>, and <code>STRENGTH</code>.</p>
     */
    inline void SetAttributes(const Aws::Vector<RxNormAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The extracted attributes that relate to the entity. The attributes recognized
     * by InferRxNorm are <code>DOSAGE</code>, <code>DURATION</code>,
     * <code>FORM</code>, <code>FREQUENCY</code>, <code>RATE</code>,
     * <code>ROUTE_OR_MODE</code>, and <code>STRENGTH</code>.</p>
     */
    inline void SetAttributes(Aws::Vector<RxNormAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The extracted attributes that relate to the entity. The attributes recognized
     * by InferRxNorm are <code>DOSAGE</code>, <code>DURATION</code>,
     * <code>FORM</code>, <code>FREQUENCY</code>, <code>RATE</code>,
     * <code>ROUTE_OR_MODE</code>, and <code>STRENGTH</code>.</p>
     */
    inline RxNormEntity& WithAttributes(const Aws::Vector<RxNormAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The extracted attributes that relate to the entity. The attributes recognized
     * by InferRxNorm are <code>DOSAGE</code>, <code>DURATION</code>,
     * <code>FORM</code>, <code>FREQUENCY</code>, <code>RATE</code>,
     * <code>ROUTE_OR_MODE</code>, and <code>STRENGTH</code>.</p>
     */
    inline RxNormEntity& WithAttributes(Aws::Vector<RxNormAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The extracted attributes that relate to the entity. The attributes recognized
     * by InferRxNorm are <code>DOSAGE</code>, <code>DURATION</code>,
     * <code>FORM</code>, <code>FREQUENCY</code>, <code>RATE</code>,
     * <code>ROUTE_OR_MODE</code>, and <code>STRENGTH</code>.</p>
     */
    inline RxNormEntity& AddAttributes(const RxNormAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The extracted attributes that relate to the entity. The attributes recognized
     * by InferRxNorm are <code>DOSAGE</code>, <code>DURATION</code>,
     * <code>FORM</code>, <code>FREQUENCY</code>, <code>RATE</code>,
     * <code>ROUTE_OR_MODE</code>, and <code>STRENGTH</code>.</p>
     */
    inline RxNormEntity& AddAttributes(RxNormAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p> Contextual information for the entity.</p>
     */
    inline const Aws::Vector<RxNormTrait>& GetTraits() const{ return m_traits; }

    /**
     * <p> Contextual information for the entity.</p>
     */
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }

    /**
     * <p> Contextual information for the entity.</p>
     */
    inline void SetTraits(const Aws::Vector<RxNormTrait>& value) { m_traitsHasBeenSet = true; m_traits = value; }

    /**
     * <p> Contextual information for the entity.</p>
     */
    inline void SetTraits(Aws::Vector<RxNormTrait>&& value) { m_traitsHasBeenSet = true; m_traits = std::move(value); }

    /**
     * <p> Contextual information for the entity.</p>
     */
    inline RxNormEntity& WithTraits(const Aws::Vector<RxNormTrait>& value) { SetTraits(value); return *this;}

    /**
     * <p> Contextual information for the entity.</p>
     */
    inline RxNormEntity& WithTraits(Aws::Vector<RxNormTrait>&& value) { SetTraits(std::move(value)); return *this;}

    /**
     * <p> Contextual information for the entity.</p>
     */
    inline RxNormEntity& AddTraits(const RxNormTrait& value) { m_traitsHasBeenSet = true; m_traits.push_back(value); return *this; }

    /**
     * <p> Contextual information for the entity.</p>
     */
    inline RxNormEntity& AddTraits(RxNormTrait&& value) { m_traitsHasBeenSet = true; m_traits.push_back(std::move(value)); return *this; }


    /**
     * <p> The RxNorm concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline const Aws::Vector<RxNormConcept>& GetRxNormConcepts() const{ return m_rxNormConcepts; }

    /**
     * <p> The RxNorm concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline bool RxNormConceptsHasBeenSet() const { return m_rxNormConceptsHasBeenSet; }

    /**
     * <p> The RxNorm concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline void SetRxNormConcepts(const Aws::Vector<RxNormConcept>& value) { m_rxNormConceptsHasBeenSet = true; m_rxNormConcepts = value; }

    /**
     * <p> The RxNorm concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline void SetRxNormConcepts(Aws::Vector<RxNormConcept>&& value) { m_rxNormConceptsHasBeenSet = true; m_rxNormConcepts = std::move(value); }

    /**
     * <p> The RxNorm concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline RxNormEntity& WithRxNormConcepts(const Aws::Vector<RxNormConcept>& value) { SetRxNormConcepts(value); return *this;}

    /**
     * <p> The RxNorm concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline RxNormEntity& WithRxNormConcepts(Aws::Vector<RxNormConcept>&& value) { SetRxNormConcepts(std::move(value)); return *this;}

    /**
     * <p> The RxNorm concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline RxNormEntity& AddRxNormConcepts(const RxNormConcept& value) { m_rxNormConceptsHasBeenSet = true; m_rxNormConcepts.push_back(value); return *this; }

    /**
     * <p> The RxNorm concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline RxNormEntity& AddRxNormConcepts(RxNormConcept&& value) { m_rxNormConceptsHasBeenSet = true; m_rxNormConcepts.push_back(std::move(value)); return *this; }

  private:

    int m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    RxNormEntityCategory m_category;
    bool m_categoryHasBeenSet = false;

    RxNormEntityType m_type;
    bool m_typeHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
    bool m_endOffsetHasBeenSet = false;

    Aws::Vector<RxNormAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<RxNormTrait> m_traits;
    bool m_traitsHasBeenSet = false;

    Aws::Vector<RxNormConcept> m_rxNormConcepts;
    bool m_rxNormConceptsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
