/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/SentimentType.h>
#include <aws/lexv2-runtime/model/SentimentScore.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>Provides information about the sentiment expressed in a user's response in a
   * conversation. Sentiments are determined using Amazon Comprehend. Sentiments are
   * only returned if they are enabled for the bot.</p> <p>For more information, see
   * <a href="https://docs.aws.amazon.com/comprehend/latest/dg/how-sentiment.html">
   * Determine Sentiment </a> in the <i>Amazon Comprehend developer
   * guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/SentimentResponse">AWS
   * API Reference</a></p>
   */
  class SentimentResponse
  {
  public:
    AWS_LEXRUNTIMEV2_API SentimentResponse();
    AWS_LEXRUNTIMEV2_API SentimentResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API SentimentResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The overall sentiment expressed in the user's response. This is the sentiment
     * most likely expressed by the user based on the analysis by Amazon
     * Comprehend.</p>
     */
    inline const SentimentType& GetSentiment() const{ return m_sentiment; }

    /**
     * <p>The overall sentiment expressed in the user's response. This is the sentiment
     * most likely expressed by the user based on the analysis by Amazon
     * Comprehend.</p>
     */
    inline bool SentimentHasBeenSet() const { return m_sentimentHasBeenSet; }

    /**
     * <p>The overall sentiment expressed in the user's response. This is the sentiment
     * most likely expressed by the user based on the analysis by Amazon
     * Comprehend.</p>
     */
    inline void SetSentiment(const SentimentType& value) { m_sentimentHasBeenSet = true; m_sentiment = value; }

    /**
     * <p>The overall sentiment expressed in the user's response. This is the sentiment
     * most likely expressed by the user based on the analysis by Amazon
     * Comprehend.</p>
     */
    inline void SetSentiment(SentimentType&& value) { m_sentimentHasBeenSet = true; m_sentiment = std::move(value); }

    /**
     * <p>The overall sentiment expressed in the user's response. This is the sentiment
     * most likely expressed by the user based on the analysis by Amazon
     * Comprehend.</p>
     */
    inline SentimentResponse& WithSentiment(const SentimentType& value) { SetSentiment(value); return *this;}

    /**
     * <p>The overall sentiment expressed in the user's response. This is the sentiment
     * most likely expressed by the user based on the analysis by Amazon
     * Comprehend.</p>
     */
    inline SentimentResponse& WithSentiment(SentimentType&& value) { SetSentiment(std::move(value)); return *this;}


    
    inline const SentimentScore& GetSentimentScore() const{ return m_sentimentScore; }

    
    inline bool SentimentScoreHasBeenSet() const { return m_sentimentScoreHasBeenSet; }

    
    inline void SetSentimentScore(const SentimentScore& value) { m_sentimentScoreHasBeenSet = true; m_sentimentScore = value; }

    
    inline void SetSentimentScore(SentimentScore&& value) { m_sentimentScoreHasBeenSet = true; m_sentimentScore = std::move(value); }

    
    inline SentimentResponse& WithSentimentScore(const SentimentScore& value) { SetSentimentScore(value); return *this;}

    
    inline SentimentResponse& WithSentimentScore(SentimentScore&& value) { SetSentimentScore(std::move(value)); return *this;}

  private:

    SentimentType m_sentiment;
    bool m_sentimentHasBeenSet = false;

    SentimentScore m_sentimentScore;
    bool m_sentimentScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
