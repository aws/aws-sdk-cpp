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
    AWS_COMPREHEND_API TargetedSentimentMention();
    AWS_COMPREHEND_API TargetedSentimentMention(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API TargetedSentimentMention& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Model confidence that the entity is relevant. Value range is zero to one,
     * where one is highest confidence.</p>
     */
    inline double GetScore() const{ return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline TargetedSentimentMention& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence that all the entities mentioned in the group relate to the
     * same entity.</p>
     */
    inline double GetGroupScore() const{ return m_groupScore; }
    inline bool GroupScoreHasBeenSet() const { return m_groupScoreHasBeenSet; }
    inline void SetGroupScore(double value) { m_groupScoreHasBeenSet = true; m_groupScore = value; }
    inline TargetedSentimentMention& WithGroupScore(double value) { SetGroupScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text in the document that identifies the entity.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline TargetedSentimentMention& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline TargetedSentimentMention& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline TargetedSentimentMention& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the entity. Amazon Comprehend supports a variety of <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html#how-targeted-sentiment-entities">entity
     * types</a>.</p>
     */
    inline const TargetedSentimentEntityType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TargetedSentimentEntityType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TargetedSentimentEntityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TargetedSentimentMention& WithType(const TargetedSentimentEntityType& value) { SetType(value); return *this;}
    inline TargetedSentimentMention& WithType(TargetedSentimentEntityType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the sentiment and sentiment score for the mention.</p>
     */
    inline const MentionSentiment& GetMentionSentiment() const{ return m_mentionSentiment; }
    inline bool MentionSentimentHasBeenSet() const { return m_mentionSentimentHasBeenSet; }
    inline void SetMentionSentiment(const MentionSentiment& value) { m_mentionSentimentHasBeenSet = true; m_mentionSentiment = value; }
    inline void SetMentionSentiment(MentionSentiment&& value) { m_mentionSentimentHasBeenSet = true; m_mentionSentiment = std::move(value); }
    inline TargetedSentimentMention& WithMentionSentiment(const MentionSentiment& value) { SetMentionSentiment(value); return *this;}
    inline TargetedSentimentMention& WithMentionSentiment(MentionSentiment&& value) { SetMentionSentiment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offset into the document text where the mention begins.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline TargetedSentimentMention& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offset into the document text where the mention ends.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline TargetedSentimentMention& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}
  private:

    double m_score;
    bool m_scoreHasBeenSet = false;

    double m_groupScore;
    bool m_groupScoreHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    TargetedSentimentEntityType m_type;
    bool m_typeHasBeenSet = false;

    MentionSentiment m_mentionSentiment;
    bool m_mentionSentimentHasBeenSet = false;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
    bool m_endOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
