/**
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
    AWS_CODEGURUREVIEWER_API ListRecommendationFeedbackResult() = default;
    AWS_CODEGURUREVIEWER_API ListRecommendationFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API ListRecommendationFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Recommendation feedback summaries corresponding to the code review ARN.</p>
     */
    inline const Aws::Vector<RecommendationFeedbackSummary>& GetRecommendationFeedbackSummaries() const { return m_recommendationFeedbackSummaries; }
    template<typename RecommendationFeedbackSummariesT = Aws::Vector<RecommendationFeedbackSummary>>
    void SetRecommendationFeedbackSummaries(RecommendationFeedbackSummariesT&& value) { m_recommendationFeedbackSummariesHasBeenSet = true; m_recommendationFeedbackSummaries = std::forward<RecommendationFeedbackSummariesT>(value); }
    template<typename RecommendationFeedbackSummariesT = Aws::Vector<RecommendationFeedbackSummary>>
    ListRecommendationFeedbackResult& WithRecommendationFeedbackSummaries(RecommendationFeedbackSummariesT&& value) { SetRecommendationFeedbackSummaries(std::forward<RecommendationFeedbackSummariesT>(value)); return *this;}
    template<typename RecommendationFeedbackSummariesT = RecommendationFeedbackSummary>
    ListRecommendationFeedbackResult& AddRecommendationFeedbackSummaries(RecommendationFeedbackSummariesT&& value) { m_recommendationFeedbackSummariesHasBeenSet = true; m_recommendationFeedbackSummaries.emplace_back(std::forward<RecommendationFeedbackSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecommendationFeedbackResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecommendationFeedbackResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RecommendationFeedbackSummary> m_recommendationFeedbackSummaries;
    bool m_recommendationFeedbackSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
