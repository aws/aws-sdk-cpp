﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/RecommendationFeedbackSummary.h>
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
namespace CodeGuruReviewer
{
namespace Model
{
  class ListRecommendationFeedbackResult
  {
  public:
    AWS_CODEGURUREVIEWER_API ListRecommendationFeedbackResult();
    AWS_CODEGURUREVIEWER_API ListRecommendationFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API ListRecommendationFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Recommendation feedback summaries corresponding to the code review ARN.</p>
     */
    inline const Aws::Vector<RecommendationFeedbackSummary>& GetRecommendationFeedbackSummaries() const{ return m_recommendationFeedbackSummaries; }
    inline void SetRecommendationFeedbackSummaries(const Aws::Vector<RecommendationFeedbackSummary>& value) { m_recommendationFeedbackSummaries = value; }
    inline void SetRecommendationFeedbackSummaries(Aws::Vector<RecommendationFeedbackSummary>&& value) { m_recommendationFeedbackSummaries = std::move(value); }
    inline ListRecommendationFeedbackResult& WithRecommendationFeedbackSummaries(const Aws::Vector<RecommendationFeedbackSummary>& value) { SetRecommendationFeedbackSummaries(value); return *this;}
    inline ListRecommendationFeedbackResult& WithRecommendationFeedbackSummaries(Aws::Vector<RecommendationFeedbackSummary>&& value) { SetRecommendationFeedbackSummaries(std::move(value)); return *this;}
    inline ListRecommendationFeedbackResult& AddRecommendationFeedbackSummaries(const RecommendationFeedbackSummary& value) { m_recommendationFeedbackSummaries.push_back(value); return *this; }
    inline ListRecommendationFeedbackResult& AddRecommendationFeedbackSummaries(RecommendationFeedbackSummary&& value) { m_recommendationFeedbackSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRecommendationFeedbackResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecommendationFeedbackResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecommendationFeedbackResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRecommendationFeedbackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRecommendationFeedbackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRecommendationFeedbackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RecommendationFeedbackSummary> m_recommendationFeedbackSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
