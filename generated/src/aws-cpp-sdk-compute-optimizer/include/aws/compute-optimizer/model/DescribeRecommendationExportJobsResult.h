/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/RecommendationExportJob.h>
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
  class DescribeRecommendationExportJobsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API DescribeRecommendationExportJobsResult() = default;
    AWS_COMPUTEOPTIMIZER_API DescribeRecommendationExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API DescribeRecommendationExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe recommendation export jobs.</p>
     */
    inline const Aws::Vector<RecommendationExportJob>& GetRecommendationExportJobs() const { return m_recommendationExportJobs; }
    template<typename RecommendationExportJobsT = Aws::Vector<RecommendationExportJob>>
    void SetRecommendationExportJobs(RecommendationExportJobsT&& value) { m_recommendationExportJobsHasBeenSet = true; m_recommendationExportJobs = std::forward<RecommendationExportJobsT>(value); }
    template<typename RecommendationExportJobsT = Aws::Vector<RecommendationExportJob>>
    DescribeRecommendationExportJobsResult& WithRecommendationExportJobs(RecommendationExportJobsT&& value) { SetRecommendationExportJobs(std::forward<RecommendationExportJobsT>(value)); return *this;}
    template<typename RecommendationExportJobsT = RecommendationExportJob>
    DescribeRecommendationExportJobsResult& AddRecommendationExportJobs(RecommendationExportJobsT&& value) { m_recommendationExportJobsHasBeenSet = true; m_recommendationExportJobs.emplace_back(std::forward<RecommendationExportJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to advance to the next page of export jobs.</p> <p>This
     * value is null when there are no more pages of export jobs to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRecommendationExportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRecommendationExportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RecommendationExportJob> m_recommendationExportJobs;
    bool m_recommendationExportJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
