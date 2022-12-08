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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{
  class DetectSentimentResult
  {
  public:
    AWS_COMPREHEND_API DetectSentimentResult();
    AWS_COMPREHEND_API DetectSentimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectSentimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The inferred sentiment that Amazon Comprehend has the highest level of
     * confidence in.</p>
     */
    inline const SentimentType& GetSentiment() const{ return m_sentiment; }

    /**
     * <p>The inferred sentiment that Amazon Comprehend has the highest level of
     * confidence in.</p>
     */
    inline void SetSentiment(const SentimentType& value) { m_sentiment = value; }

    /**
     * <p>The inferred sentiment that Amazon Comprehend has the highest level of
     * confidence in.</p>
     */
    inline void SetSentiment(SentimentType&& value) { m_sentiment = std::move(value); }

    /**
     * <p>The inferred sentiment that Amazon Comprehend has the highest level of
     * confidence in.</p>
     */
    inline DetectSentimentResult& WithSentiment(const SentimentType& value) { SetSentiment(value); return *this;}

    /**
     * <p>The inferred sentiment that Amazon Comprehend has the highest level of
     * confidence in.</p>
     */
    inline DetectSentimentResult& WithSentiment(SentimentType&& value) { SetSentiment(std::move(value)); return *this;}


    /**
     * <p>An object that lists the sentiments, and their corresponding confidence
     * levels.</p>
     */
    inline const SentimentScore& GetSentimentScore() const{ return m_sentimentScore; }

    /**
     * <p>An object that lists the sentiments, and their corresponding confidence
     * levels.</p>
     */
    inline void SetSentimentScore(const SentimentScore& value) { m_sentimentScore = value; }

    /**
     * <p>An object that lists the sentiments, and their corresponding confidence
     * levels.</p>
     */
    inline void SetSentimentScore(SentimentScore&& value) { m_sentimentScore = std::move(value); }

    /**
     * <p>An object that lists the sentiments, and their corresponding confidence
     * levels.</p>
     */
    inline DetectSentimentResult& WithSentimentScore(const SentimentScore& value) { SetSentimentScore(value); return *this;}

    /**
     * <p>An object that lists the sentiments, and their corresponding confidence
     * levels.</p>
     */
    inline DetectSentimentResult& WithSentimentScore(SentimentScore&& value) { SetSentimentScore(std::move(value)); return *this;}

  private:

    SentimentType m_sentiment;

    SentimentScore m_sentimentScore;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
