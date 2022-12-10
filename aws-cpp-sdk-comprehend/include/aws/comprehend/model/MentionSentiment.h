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
   * sentiment</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/MentionSentiment">AWS
   * API Reference</a></p>
   */
  class MentionSentiment
  {
  public:
    AWS_COMPREHEND_API MentionSentiment();
    AWS_COMPREHEND_API MentionSentiment(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API MentionSentiment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sentiment of the mention. </p>
     */
    inline const SentimentType& GetSentiment() const{ return m_sentiment; }

    /**
     * <p>The sentiment of the mention. </p>
     */
    inline bool SentimentHasBeenSet() const { return m_sentimentHasBeenSet; }

    /**
     * <p>The sentiment of the mention. </p>
     */
    inline void SetSentiment(const SentimentType& value) { m_sentimentHasBeenSet = true; m_sentiment = value; }

    /**
     * <p>The sentiment of the mention. </p>
     */
    inline void SetSentiment(SentimentType&& value) { m_sentimentHasBeenSet = true; m_sentiment = std::move(value); }

    /**
     * <p>The sentiment of the mention. </p>
     */
    inline MentionSentiment& WithSentiment(const SentimentType& value) { SetSentiment(value); return *this;}

    /**
     * <p>The sentiment of the mention. </p>
     */
    inline MentionSentiment& WithSentiment(SentimentType&& value) { SetSentiment(std::move(value)); return *this;}


    
    inline const SentimentScore& GetSentimentScore() const{ return m_sentimentScore; }

    
    inline bool SentimentScoreHasBeenSet() const { return m_sentimentScoreHasBeenSet; }

    
    inline void SetSentimentScore(const SentimentScore& value) { m_sentimentScoreHasBeenSet = true; m_sentimentScore = value; }

    
    inline void SetSentimentScore(SentimentScore&& value) { m_sentimentScoreHasBeenSet = true; m_sentimentScore = std::move(value); }

    
    inline MentionSentiment& WithSentimentScore(const SentimentScore& value) { SetSentimentScore(value); return *this;}

    
    inline MentionSentiment& WithSentimentScore(SentimentScore&& value) { SetSentimentScore(std::move(value)); return *this;}

  private:

    SentimentType m_sentiment;
    bool m_sentimentHasBeenSet = false;

    SentimentScore m_sentimentScore;
    bool m_sentimentScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
