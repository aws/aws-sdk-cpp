/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/RecommendationPreferencesDetail.h>
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
namespace ComputeOptimizer
{
namespace Model
{
  class GetRecommendationPreferencesResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetRecommendationPreferencesResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetRecommendationPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetRecommendationPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to advance to the next page of recommendation
     * preferences.</p> <p>This value is null when there are no more pages of
     * recommendation preferences to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetRecommendationPreferencesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe recommendation preferences.</p>
     */
    inline const Aws::Vector<RecommendationPreferencesDetail>& GetRecommendationPreferencesDetails() const { return m_recommendationPreferencesDetails; }
    template<typename RecommendationPreferencesDetailsT = Aws::Vector<RecommendationPreferencesDetail>>
    void SetRecommendationPreferencesDetails(RecommendationPreferencesDetailsT&& value) { m_recommendationPreferencesDetailsHasBeenSet = true; m_recommendationPreferencesDetails = std::forward<RecommendationPreferencesDetailsT>(value); }
    template<typename RecommendationPreferencesDetailsT = Aws::Vector<RecommendationPreferencesDetail>>
    GetRecommendationPreferencesResult& WithRecommendationPreferencesDetails(RecommendationPreferencesDetailsT&& value) { SetRecommendationPreferencesDetails(std::forward<RecommendationPreferencesDetailsT>(value)); return *this;}
    template<typename RecommendationPreferencesDetailsT = RecommendationPreferencesDetail>
    GetRecommendationPreferencesResult& AddRecommendationPreferencesDetails(RecommendationPreferencesDetailsT&& value) { m_recommendationPreferencesDetailsHasBeenSet = true; m_recommendationPreferencesDetails.emplace_back(std::forward<RecommendationPreferencesDetailsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecommendationPreferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RecommendationPreferencesDetail> m_recommendationPreferencesDetails;
    bool m_recommendationPreferencesDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
