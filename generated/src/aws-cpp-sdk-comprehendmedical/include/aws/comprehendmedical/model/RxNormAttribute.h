/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/model/RxNormAttributeType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehendmedical/model/RxNormTrait.h>
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
   * <p>The extracted attributes that relate to this entity. The attributes
   * recognized by InferRxNorm are <code>DOSAGE</code>, <code>DURATION</code>,
   * <code>FORM</code>, <code>FREQUENCY</code>, <code>RATE</code>,
   * <code>ROUTE_OR_MODE</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/RxNormAttribute">AWS
   * API Reference</a></p>
   */
  class RxNormAttribute
  {
  public:
    AWS_COMPREHENDMEDICAL_API RxNormAttribute();
    AWS_COMPREHENDMEDICAL_API RxNormAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API RxNormAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of attribute. The types of attributes recognized by InferRxNorm are
     * <code>BRAND_NAME</code> and <code>GENERIC_NAME</code>.</p>
     */
    inline const RxNormAttributeType& GetType() const{ return m_type; }

    /**
     * <p>The type of attribute. The types of attributes recognized by InferRxNorm are
     * <code>BRAND_NAME</code> and <code>GENERIC_NAME</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of attribute. The types of attributes recognized by InferRxNorm are
     * <code>BRAND_NAME</code> and <code>GENERIC_NAME</code>.</p>
     */
    inline void SetType(const RxNormAttributeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of attribute. The types of attributes recognized by InferRxNorm are
     * <code>BRAND_NAME</code> and <code>GENERIC_NAME</code>.</p>
     */
    inline void SetType(RxNormAttributeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of attribute. The types of attributes recognized by InferRxNorm are
     * <code>BRAND_NAME</code> and <code>GENERIC_NAME</code>.</p>
     */
    inline RxNormAttribute& WithType(const RxNormAttributeType& value) { SetType(value); return *this;}

    /**
     * <p>The type of attribute. The types of attributes recognized by InferRxNorm are
     * <code>BRAND_NAME</code> and <code>GENERIC_NAME</code>.</p>
     */
    inline RxNormAttribute& WithType(RxNormAttributeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The level of confidence that Comprehend Medical has that the segment of text
     * is correctly recognized as an attribute.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of confidence that Comprehend Medical has that the segment of text
     * is correctly recognized as an attribute.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of confidence that Comprehend Medical has that the segment of text
     * is correctly recognized as an attribute.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of confidence that Comprehend Medical has that the segment of text
     * is correctly recognized as an attribute.</p>
     */
    inline RxNormAttribute& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the attribute
     * is accurately linked to an entity.</p>
     */
    inline double GetRelationshipScore() const{ return m_relationshipScore; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the attribute
     * is accurately linked to an entity.</p>
     */
    inline bool RelationshipScoreHasBeenSet() const { return m_relationshipScoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the attribute
     * is accurately linked to an entity.</p>
     */
    inline void SetRelationshipScore(double value) { m_relationshipScoreHasBeenSet = true; m_relationshipScore = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the attribute
     * is accurately linked to an entity.</p>
     */
    inline RxNormAttribute& WithRelationshipScore(double value) { SetRelationshipScore(value); return *this;}


    /**
     * <p>The numeric identifier for this attribute. This is a monotonically increasing
     * id unique within this response rather than a global unique identifier.</p>
     */
    inline int GetId() const{ return m_id; }

    /**
     * <p>The numeric identifier for this attribute. This is a monotonically increasing
     * id unique within this response rather than a global unique identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The numeric identifier for this attribute. This is a monotonically increasing
     * id unique within this response rather than a global unique identifier.</p>
     */
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The numeric identifier for this attribute. This is a monotonically increasing
     * id unique within this response rather than a global unique identifier.</p>
     */
    inline RxNormAttribute& WithId(int value) { SetId(value); return *this;}


    /**
     * <p>The 0-based character offset in the input text that shows where the attribute
     * begins. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p>The 0-based character offset in the input text that shows where the attribute
     * begins. The offset returns the UTF-8 code point in the string.</p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p>The 0-based character offset in the input text that shows where the attribute
     * begins. The offset returns the UTF-8 code point in the string.</p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p>The 0-based character offset in the input text that shows where the attribute
     * begins. The offset returns the UTF-8 code point in the string.</p>
     */
    inline RxNormAttribute& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p>The 0-based character offset in the input text that shows where the attribute
     * ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p>The 0-based character offset in the input text that shows where the attribute
     * ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p>The 0-based character offset in the input text that shows where the attribute
     * ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p>The 0-based character offset in the input text that shows where the attribute
     * ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline RxNormAttribute& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p>The segment of input text which corresponds to the detected attribute.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The segment of input text which corresponds to the detected attribute.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The segment of input text which corresponds to the detected attribute.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The segment of input text which corresponds to the detected attribute.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The segment of input text which corresponds to the detected attribute.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The segment of input text which corresponds to the detected attribute.</p>
     */
    inline RxNormAttribute& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The segment of input text which corresponds to the detected attribute.</p>
     */
    inline RxNormAttribute& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The segment of input text which corresponds to the detected attribute.</p>
     */
    inline RxNormAttribute& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>Contextual information for the attribute. InferRxNorm recognizes the trait
     * <code>NEGATION</code> for attributes, i.e. that the patient is not taking a
     * specific dose or form of a medication.</p>
     */
    inline const Aws::Vector<RxNormTrait>& GetTraits() const{ return m_traits; }

    /**
     * <p>Contextual information for the attribute. InferRxNorm recognizes the trait
     * <code>NEGATION</code> for attributes, i.e. that the patient is not taking a
     * specific dose or form of a medication.</p>
     */
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }

    /**
     * <p>Contextual information for the attribute. InferRxNorm recognizes the trait
     * <code>NEGATION</code> for attributes, i.e. that the patient is not taking a
     * specific dose or form of a medication.</p>
     */
    inline void SetTraits(const Aws::Vector<RxNormTrait>& value) { m_traitsHasBeenSet = true; m_traits = value; }

    /**
     * <p>Contextual information for the attribute. InferRxNorm recognizes the trait
     * <code>NEGATION</code> for attributes, i.e. that the patient is not taking a
     * specific dose or form of a medication.</p>
     */
    inline void SetTraits(Aws::Vector<RxNormTrait>&& value) { m_traitsHasBeenSet = true; m_traits = std::move(value); }

    /**
     * <p>Contextual information for the attribute. InferRxNorm recognizes the trait
     * <code>NEGATION</code> for attributes, i.e. that the patient is not taking a
     * specific dose or form of a medication.</p>
     */
    inline RxNormAttribute& WithTraits(const Aws::Vector<RxNormTrait>& value) { SetTraits(value); return *this;}

    /**
     * <p>Contextual information for the attribute. InferRxNorm recognizes the trait
     * <code>NEGATION</code> for attributes, i.e. that the patient is not taking a
     * specific dose or form of a medication.</p>
     */
    inline RxNormAttribute& WithTraits(Aws::Vector<RxNormTrait>&& value) { SetTraits(std::move(value)); return *this;}

    /**
     * <p>Contextual information for the attribute. InferRxNorm recognizes the trait
     * <code>NEGATION</code> for attributes, i.e. that the patient is not taking a
     * specific dose or form of a medication.</p>
     */
    inline RxNormAttribute& AddTraits(const RxNormTrait& value) { m_traitsHasBeenSet = true; m_traits.push_back(value); return *this; }

    /**
     * <p>Contextual information for the attribute. InferRxNorm recognizes the trait
     * <code>NEGATION</code> for attributes, i.e. that the patient is not taking a
     * specific dose or form of a medication.</p>
     */
    inline RxNormAttribute& AddTraits(RxNormTrait&& value) { m_traitsHasBeenSet = true; m_traits.push_back(std::move(value)); return *this; }

  private:

    RxNormAttributeType m_type;
    bool m_typeHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    double m_relationshipScore;
    bool m_relationshipScoreHasBeenSet = false;

    int m_id;
    bool m_idHasBeenSet = false;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
    bool m_endOffsetHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Vector<RxNormTrait> m_traits;
    bool m_traitsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
