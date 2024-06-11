﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/SentimentType.h>
#include <aws/comprehend/model/SentimentScore.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>The inferred sentiment that Amazon Comprehend has the highest level of
     * confidence in.</p>
     */
    inline const SentimentType& GetSentiment() const{ return m_sentiment; }
    inline void SetSentiment(const SentimentType& value) { m_sentiment = value; }
    inline void SetSentiment(SentimentType&& value) { m_sentiment = std::move(value); }
    inline DetectSentimentResult& WithSentiment(const SentimentType& value) { SetSentiment(value); return *this;}
    inline DetectSentimentResult& WithSentiment(SentimentType&& value) { SetSentiment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that lists the sentiments, and their corresponding confidence
     * levels.</p>
     */
    inline const SentimentScore& GetSentimentScore() const{ return m_sentimentScore; }
    inline void SetSentimentScore(const SentimentScore& value) { m_sentimentScore = value; }
    inline void SetSentimentScore(SentimentScore&& value) { m_sentimentScore = std::move(value); }
    inline DetectSentimentResult& WithSentimentScore(const SentimentScore& value) { SetSentimentScore(value); return *this;}
    inline DetectSentimentResult& WithSentimentScore(SentimentScore&& value) { SetSentimentScore(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DetectSentimentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DetectSentimentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DetectSentimentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SentimentType m_sentiment;

    SentimentScore m_sentimentScore;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
