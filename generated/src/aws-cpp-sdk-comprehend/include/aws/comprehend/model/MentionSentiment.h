/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/SentimentType.h>
#include <aws/comprehend/model/SentimentScore.h>
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
   * <p>Contains the sentiment and sentiment score for one mention of an entity.</p>
   * <p>For more information about targeted sentiment, see <a
   * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html">Targeted
   * sentiment</a> in the <i>Amazon Comprehend Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/MentionSentiment">AWS
   * API Reference</a></p>
   */
  class MentionSentiment
  {
  public:
    AWS_COMPREHEND_API MentionSentiment() = default;
    AWS_COMPREHEND_API MentionSentiment(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API MentionSentiment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sentiment of the mention. </p>
     */
    inline SentimentType GetSentiment() const { return m_sentiment; }
    inline bool SentimentHasBeenSet() const { return m_sentimentHasBeenSet; }
    inline void SetSentiment(SentimentType value) { m_sentimentHasBeenSet = true; m_sentiment = value; }
    inline MentionSentiment& WithSentiment(SentimentType value) { SetSentiment(value); return *this;}
    ///@}

    ///@{
    
    inline const SentimentScore& GetSentimentScore() const { return m_sentimentScore; }
    inline bool SentimentScoreHasBeenSet() const { return m_sentimentScoreHasBeenSet; }
    template<typename SentimentScoreT = SentimentScore>
    void SetSentimentScore(SentimentScoreT&& value) { m_sentimentScoreHasBeenSet = true; m_sentimentScore = std::forward<SentimentScoreT>(value); }
    template<typename SentimentScoreT = SentimentScore>
    MentionSentiment& WithSentimentScore(SentimentScoreT&& value) { SetSentimentScore(std::forward<SentimentScoreT>(value)); return *this;}
    ///@}
  private:

    SentimentType m_sentiment{SentimentType::NOT_SET};
    bool m_sentimentHasBeenSet = false;

    SentimentScore m_sentimentScore;
    bool m_sentimentScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
