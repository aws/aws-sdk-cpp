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
    AWS_COMPREHENDMEDICAL_API ICD10CMAttribute();
    AWS_COMPREHENDMEDICAL_API ICD10CMAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API ICD10CMAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of attribute. InferICD10CM detects entities of the type
     * <code>DX_NAME</code>. </p>
     */
    inline const ICD10CMAttributeType& GetType() const{ return m_type; }

    /**
     * <p>The type of attribute. InferICD10CM detects entities of the type
     * <code>DX_NAME</code>. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of attribute. InferICD10CM detects entities of the type
     * <code>DX_NAME</code>. </p>
     */
    inline void SetType(const ICD10CMAttributeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of attribute. InferICD10CM detects entities of the type
     * <code>DX_NAME</code>. </p>
     */
    inline void SetType(ICD10CMAttributeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of attribute. InferICD10CM detects entities of the type
     * <code>DX_NAME</code>. </p>
     */
    inline ICD10CMAttribute& WithType(const ICD10CMAttributeType& value) { SetType(value); return *this;}

    /**
     * <p>The type of attribute. InferICD10CM detects entities of the type
     * <code>DX_NAME</code>. </p>
     */
    inline ICD10CMAttribute& WithType(ICD10CMAttributeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the segment
     * of text is correctly recognized as an attribute.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the segment
     * of text is correctly recognized as an attribute.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the segment
     * of text is correctly recognized as an attribute.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the segment
     * of text is correctly recognized as an attribute.</p>
     */
    inline ICD10CMAttribute& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that this
     * attribute is correctly related to this entity.</p>
     */
    inline double GetRelationshipScore() const{ return m_relationshipScore; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that this
     * attribute is correctly related to this entity.</p>
     */
    inline bool RelationshipScoreHasBeenSet() const { return m_relationshipScoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that this
     * attribute is correctly related to this entity.</p>
     */
    inline void SetRelationshipScore(double value) { m_relationshipScoreHasBeenSet = true; m_relationshipScore = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that this
     * attribute is correctly related to this entity.</p>
     */
    inline ICD10CMAttribute& WithRelationshipScore(double value) { SetRelationshipScore(value); return *this;}


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
    inline ICD10CMAttribute& WithId(int value) { SetId(value); return *this;}


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
    inline ICD10CMAttribute& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


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
    inline ICD10CMAttribute& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p>The segment of input text which contains the detected attribute.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The segment of input text which contains the detected attribute.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The segment of input text which contains the detected attribute.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The segment of input text which contains the detected attribute.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The segment of input text which contains the detected attribute.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The segment of input text which contains the detected attribute.</p>
     */
    inline ICD10CMAttribute& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The segment of input text which contains the detected attribute.</p>
     */
    inline ICD10CMAttribute& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The segment of input text which contains the detected attribute.</p>
     */
    inline ICD10CMAttribute& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The contextual information for the attribute. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION</code>.</p>
     */
    inline const Aws::Vector<ICD10CMTrait>& GetTraits() const{ return m_traits; }

    /**
     * <p>The contextual information for the attribute. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION</code>.</p>
     */
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }

    /**
     * <p>The contextual information for the attribute. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION</code>.</p>
     */
    inline void SetTraits(const Aws::Vector<ICD10CMTrait>& value) { m_traitsHasBeenSet = true; m_traits = value; }

    /**
     * <p>The contextual information for the attribute. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION</code>.</p>
     */
    inline void SetTraits(Aws::Vector<ICD10CMTrait>&& value) { m_traitsHasBeenSet = true; m_traits = std::move(value); }

    /**
     * <p>The contextual information for the attribute. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION</code>.</p>
     */
    inline ICD10CMAttribute& WithTraits(const Aws::Vector<ICD10CMTrait>& value) { SetTraits(value); return *this;}

    /**
     * <p>The contextual information for the attribute. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION</code>.</p>
     */
    inline ICD10CMAttribute& WithTraits(Aws::Vector<ICD10CMTrait>&& value) { SetTraits(std::move(value)); return *this;}

    /**
     * <p>The contextual information for the attribute. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION</code>.</p>
     */
    inline ICD10CMAttribute& AddTraits(const ICD10CMTrait& value) { m_traitsHasBeenSet = true; m_traits.push_back(value); return *this; }

    /**
     * <p>The contextual information for the attribute. The traits recognized by
     * InferICD10CM are <code>DIAGNOSIS</code>, <code>SIGN</code>,
     * <code>SYMPTOM</code>, and <code>NEGATION</code>.</p>
     */
    inline ICD10CMAttribute& AddTraits(ICD10CMTrait&& value) { m_traitsHasBeenSet = true; m_traits.push_back(std::move(value)); return *this; }


    /**
     * <p>The category of attribute. Can be either of <code>DX_NAME</code> or
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline const ICD10CMEntityType& GetCategory() const{ return m_category; }

    /**
     * <p>The category of attribute. Can be either of <code>DX_NAME</code> or
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of attribute. Can be either of <code>DX_NAME</code> or
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline void SetCategory(const ICD10CMEntityType& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of attribute. Can be either of <code>DX_NAME</code> or
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline void SetCategory(ICD10CMEntityType&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of attribute. Can be either of <code>DX_NAME</code> or
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline ICD10CMAttribute& WithCategory(const ICD10CMEntityType& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of attribute. Can be either of <code>DX_NAME</code> or
     * <code>TIME_EXPRESSION</code>.</p>
     */
    inline ICD10CMAttribute& WithCategory(ICD10CMEntityType&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>The type of relationship between the entity and attribute. Type for the
     * relationship can be either of <code>OVERLAP</code> or
     * <code>SYSTEM_ORGAN_SITE</code>.</p>
     */
    inline const ICD10CMRelationshipType& GetRelationshipType() const{ return m_relationshipType; }

    /**
     * <p>The type of relationship between the entity and attribute. Type for the
     * relationship can be either of <code>OVERLAP</code> or
     * <code>SYSTEM_ORGAN_SITE</code>.</p>
     */
    inline bool RelationshipTypeHasBeenSet() const { return m_relationshipTypeHasBeenSet; }

    /**
     * <p>The type of relationship between the entity and attribute. Type for the
     * relationship can be either of <code>OVERLAP</code> or
     * <code>SYSTEM_ORGAN_SITE</code>.</p>
     */
    inline void SetRelationshipType(const ICD10CMRelationshipType& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = value; }

    /**
     * <p>The type of relationship between the entity and attribute. Type for the
     * relationship can be either of <code>OVERLAP</code> or
     * <code>SYSTEM_ORGAN_SITE</code>.</p>
     */
    inline void SetRelationshipType(ICD10CMRelationshipType&& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = std::move(value); }

    /**
     * <p>The type of relationship between the entity and attribute. Type for the
     * relationship can be either of <code>OVERLAP</code> or
     * <code>SYSTEM_ORGAN_SITE</code>.</p>
     */
    inline ICD10CMAttribute& WithRelationshipType(const ICD10CMRelationshipType& value) { SetRelationshipType(value); return *this;}

    /**
     * <p>The type of relationship between the entity and attribute. Type for the
     * relationship can be either of <code>OVERLAP</code> or
     * <code>SYSTEM_ORGAN_SITE</code>.</p>
     */
    inline ICD10CMAttribute& WithRelationshipType(ICD10CMRelationshipType&& value) { SetRelationshipType(std::move(value)); return *this;}

  private:

    ICD10CMAttributeType m_type;
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

    Aws::Vector<ICD10CMTrait> m_traits;
    bool m_traitsHasBeenSet = false;

    ICD10CMEntityType m_category;
    bool m_categoryHasBeenSet = false;

    ICD10CMRelationshipType m_relationshipType;
    bool m_relationshipTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
