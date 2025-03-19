/**
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
    AWS_COMPREHEND_API DetectSentimentResult() = default;
    AWS_COMPREHEND_API DetectSentimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectSentimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The inferred sentiment that Amazon Comprehend has the highest level of
     * confidence in.</p>
     */
    inline SentimentType GetSentiment() const { return m_sentiment; }
    inline void SetSentiment(SentimentType value) { m_sentimentHasBeenSet = true; m_sentiment = value; }
    inline DetectSentimentResult& WithSentiment(SentimentType value) { SetSentiment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that lists the sentiments, and their corresponding confidence
     * levels.</p>
     */
    inline const SentimentScore& GetSentimentScore() const { return m_sentimentScore; }
    template<typename SentimentScoreT = SentimentScore>
    void SetSentimentScore(SentimentScoreT&& value) { m_sentimentScoreHasBeenSet = true; m_sentimentScore = std::forward<SentimentScoreT>(value); }
    template<typename SentimentScoreT = SentimentScore>
    DetectSentimentResult& WithSentimentScore(SentimentScoreT&& value) { SetSentimentScore(std::forward<SentimentScoreT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectSentimentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SentimentType m_sentiment{SentimentType::NOT_SET};
    bool m_sentimentHasBeenSet = false;

    SentimentScore m_sentimentScore;
    bool m_sentimentScoreHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
