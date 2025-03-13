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
    AWS_COMPREHENDMEDICAL_API RxNormEntity() = default;
    AWS_COMPREHENDMEDICAL_API RxNormEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API RxNormEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The numeric identifier for the entity. This is a monotonically increasing id
     * unique within this response rather than a global unique identifier.</p>
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline RxNormEntity& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment of input text extracted from which the entity was detected.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    RxNormEntity& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the entity. The recognized categories are
     * <code>GENERIC</code> or <code>BRAND_NAME</code>.</p>
     */
    inline RxNormEntityCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(RxNormEntityCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline RxNormEntity& WithCategory(RxNormEntityCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the specific type of entity. For InferRxNorm, the recognized
     * entity type is <code>MEDICATION</code>.</p>
     */
    inline RxNormEntityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RxNormEntityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RxNormEntity& WithType(RxNormEntityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detected entity.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline RxNormEntity& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 0-based character offset in the input text that shows where the entity
     * begins. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline RxNormEntity& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 0-based character offset in the input text that shows where the entity
     * ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline RxNormEntity& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extracted attributes that relate to the entity. The attributes recognized
     * by InferRxNorm are <code>DOSAGE</code>, <code>DURATION</code>,
     * <code>FORM</code>, <code>FREQUENCY</code>, <code>RATE</code>,
     * <code>ROUTE_OR_MODE</code>, and <code>STRENGTH</code>.</p>
     */
    inline const Aws::Vector<RxNormAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<RxNormAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<RxNormAttribute>>
    RxNormEntity& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = RxNormAttribute>
    RxNormEntity& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contextual information for the entity.</p>
     */
    inline const Aws::Vector<RxNormTrait>& GetTraits() const { return m_traits; }
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }
    template<typename TraitsT = Aws::Vector<RxNormTrait>>
    void SetTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits = std::forward<TraitsT>(value); }
    template<typename TraitsT = Aws::Vector<RxNormTrait>>
    RxNormEntity& WithTraits(TraitsT&& value) { SetTraits(std::forward<TraitsT>(value)); return *this;}
    template<typename TraitsT = RxNormTrait>
    RxNormEntity& AddTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits.emplace_back(std::forward<TraitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The RxNorm concepts that the entity could refer to, along with a score
     * indicating the likelihood of the match.</p>
     */
    inline const Aws::Vector<RxNormConcept>& GetRxNormConcepts() const { return m_rxNormConcepts; }
    inline bool RxNormConceptsHasBeenSet() const { return m_rxNormConceptsHasBeenSet; }
    template<typename RxNormConceptsT = Aws::Vector<RxNormConcept>>
    void SetRxNormConcepts(RxNormConceptsT&& value) { m_rxNormConceptsHasBeenSet = true; m_rxNormConcepts = std::forward<RxNormConceptsT>(value); }
    template<typename RxNormConceptsT = Aws::Vector<RxNormConcept>>
    RxNormEntity& WithRxNormConcepts(RxNormConceptsT&& value) { SetRxNormConcepts(std::forward<RxNormConceptsT>(value)); return *this;}
    template<typename RxNormConceptsT = RxNormConcept>
    RxNormEntity& AddRxNormConcepts(RxNormConceptsT&& value) { m_rxNormConceptsHasBeenSet = true; m_rxNormConcepts.emplace_back(std::forward<RxNormConceptsT>(value)); return *this; }
    ///@}
  private:

    int m_id{0};
    bool m_idHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    RxNormEntityCategory m_category{RxNormEntityCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    RxNormEntityType m_type{RxNormEntityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
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
