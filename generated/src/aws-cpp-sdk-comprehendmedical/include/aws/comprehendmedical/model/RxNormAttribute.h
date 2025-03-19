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
    AWS_COMPREHENDMEDICAL_API RxNormAttribute() = default;
    AWS_COMPREHENDMEDICAL_API RxNormAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API RxNormAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of attribute. The types of attributes recognized by InferRxNorm are
     * <code>BRAND_NAME</code> and <code>GENERIC_NAME</code>.</p>
     */
    inline RxNormAttributeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RxNormAttributeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RxNormAttribute& WithType(RxNormAttributeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the segment
     * of text is correctly recognized as an attribute.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline RxNormAttribute& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the attribute
     * is accurately linked to an entity.</p>
     */
    inline double GetRelationshipScore() const { return m_relationshipScore; }
    inline bool RelationshipScoreHasBeenSet() const { return m_relationshipScoreHasBeenSet; }
    inline void SetRelationshipScore(double value) { m_relationshipScoreHasBeenSet = true; m_relationshipScore = value; }
    inline RxNormAttribute& WithRelationshipScore(double value) { SetRelationshipScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric identifier for this attribute. This is a monotonically increasing
     * id unique within this response rather than a global unique identifier.</p>
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline RxNormAttribute& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 0-based character offset in the input text that shows where the attribute
     * begins. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline RxNormAttribute& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 0-based character offset in the input text that shows where the attribute
     * ends. The offset returns the UTF-8 code point in the string.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline RxNormAttribute& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment of input text which corresponds to the detected attribute.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    RxNormAttribute& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contextual information for the attribute. InferRxNorm recognizes the trait
     * <code>NEGATION</code> for attributes, i.e. that the patient is not taking a
     * specific dose or form of a medication.</p>
     */
    inline const Aws::Vector<RxNormTrait>& GetTraits() const { return m_traits; }
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }
    template<typename TraitsT = Aws::Vector<RxNormTrait>>
    void SetTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits = std::forward<TraitsT>(value); }
    template<typename TraitsT = Aws::Vector<RxNormTrait>>
    RxNormAttribute& WithTraits(TraitsT&& value) { SetTraits(std::forward<TraitsT>(value)); return *this;}
    template<typename TraitsT = RxNormTrait>
    RxNormAttribute& AddTraits(TraitsT&& value) { m_traitsHasBeenSet = true; m_traits.emplace_back(std::forward<TraitsT>(value)); return *this; }
    ///@}
  private:

    RxNormAttributeType m_type{RxNormAttributeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    double m_relationshipScore{0.0};
    bool m_relationshipScoreHasBeenSet = false;

    int m_id{0};
    bool m_idHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Vector<RxNormTrait> m_traits;
    bool m_traitsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
