/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/RecommendationSummary.h>
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
  class ListRecommendationsResult
  {
  public:
    AWS_CODEGURUREVIEWER_API ListRecommendationsResult() = default;
    AWS_CODEGURUREVIEWER_API ListRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API ListRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of recommendations for the requested code review.</p>
     */
    inline const Aws::Vector<RecommendationSummary>& GetRecommendationSummaries() const { return m_recommendationSummaries; }
    template<typename RecommendationSummariesT = Aws::Vector<RecommendationSummary>>
    void SetRecommendationSummaries(RecommendationSummariesT&& value) { m_recommendationSummariesHasBeenSet = true; m_recommendationSummaries = std::forward<RecommendationSummariesT>(value); }
    template<typename RecommendationSummariesT = Aws::Vector<RecommendationSummary>>
    ListRecommendationsResult& WithRecommendationSummaries(RecommendationSummariesT&& value) { SetRecommendationSummaries(std::forward<RecommendationSummariesT>(value)); return *this;}
    template<typename RecommendationSummariesT = RecommendationSummary>
    ListRecommendationsResult& AddRecommendationSummaries(RecommendationSummariesT&& value) { m_recommendationSummariesHasBeenSet = true; m_recommendationSummaries.emplace_back(std::forward<RecommendationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RecommendationSummary> m_recommendationSummaries;
    bool m_recommendationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
