/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COMPREHEND_API DetectSentimentResult
  {
  public:
    DetectSentimentResult();
    DetectSentimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectSentimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
