/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/TargetedSentimentEntityType.h>
#include <aws/comprehend/model/MentionSentiment.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Information about one mention of an entity. The mention information includes
   * the location of the mention in the text and the sentiment of the mention.</p>
   * <p>For more information about targeted sentiment, see <a
   * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html">Targeted
   * sentiment</a> in the <i>Amazon Comprehend Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/TargetedSentimentMention">AWS
   * API Reference</a></p>
   */
  class TargetedSentimentMention
  {
  public:
    AWS_COMPREHEND_API TargetedSentimentMention() = default;
    AWS_COMPREHEND_API TargetedSentimentMention(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API TargetedSentimentMention& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Model confidence that the entity is relevant. Value range is zero to one,
     * where one is highest confidence.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline TargetedSentimentMention& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence that all the entities mentioned in the group relate to the
     * same entity.</p>
     */
    inline double GetGroupScore() const { return m_groupScore; }
    inline bool GroupScoreHasBeenSet() const { return m_groupScoreHasBeenSet; }
    inline void SetGroupScore(double value) { m_groupScoreHasBeenSet = true; m_groupScore = value; }
    inline TargetedSentimentMention& WithGroupScore(double value) { SetGroupScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text in the document that identifies the entity.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    TargetedSentimentMention& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the entity. Amazon Comprehend supports a variety of <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html#how-targeted-sentiment-entities">entity
     * types</a>.</p>
     */
    inline TargetedSentimentEntityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TargetedSentimentEntityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TargetedSentimentMention& WithType(TargetedSentimentEntityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the sentiment and sentiment score for the mention.</p>
     */
    inline const MentionSentiment& GetMentionSentiment() const { return m_mentionSentiment; }
    inline bool MentionSentimentHasBeenSet() const { return m_mentionSentimentHasBeenSet; }
    template<typename MentionSentimentT = MentionSentiment>
    void SetMentionSentiment(MentionSentimentT&& value) { m_mentionSentimentHasBeenSet = true; m_mentionSentiment = std::forward<MentionSentimentT>(value); }
    template<typename MentionSentimentT = MentionSentiment>
    TargetedSentimentMention& WithMentionSentiment(MentionSentimentT&& value) { SetMentionSentiment(std::forward<MentionSentimentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offset into the document text where the mention begins.</p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline TargetedSentimentMention& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offset into the document text where the mention ends.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline TargetedSentimentMention& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}
  private:

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    double m_groupScore{0.0};
    bool m_groupScoreHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    TargetedSentimentEntityType m_type{TargetedSentimentEntityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    MentionSentiment m_mentionSentiment;
    bool m_mentionSentimentHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
