/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/JobFilter.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class DescribeRecommendationExportJobsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API DescribeRecommendationExportJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRecommendationExportJobs"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identification numbers of the export jobs to return.</p> <p>An export job
     * ID is returned when you create an export using the
     * <a>ExportAutoScalingGroupRecommendations</a> or
     * <a>ExportEC2InstanceRecommendations</a> actions.</p> <p>All export jobs created
     * in the last seven days are returned if this parameter is omitted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobIds() const { return m_jobIds; }
    inline bool JobIdsHasBeenSet() const { return m_jobIdsHasBeenSet; }
    template<typename JobIdsT = Aws::Vector<Aws::String>>
    void SetJobIds(JobIdsT&& value) { m_jobIdsHasBeenSet = true; m_jobIds = std::forward<JobIdsT>(value); }
    template<typename JobIdsT = Aws::Vector<Aws::String>>
    DescribeRecommendationExportJobsRequest& WithJobIds(JobIdsT&& value) { SetJobIds(std::forward<JobIdsT>(value)); return *this;}
    template<typename JobIdsT = Aws::String>
    DescribeRecommendationExportJobsRequest& AddJobIds(JobIdsT&& value) { m_jobIdsHasBeenSet = true; m_jobIds.emplace_back(std::forward<JobIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * export jobs.</p>
     */
    inline const Aws::Vector<JobFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<JobFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<JobFilter>>
    DescribeRecommendationExportJobsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = JobFilter>
    DescribeRecommendationExportJobsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of export jobs.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRecommendationExportJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of export jobs to return with a single request.</p> <p>To
     * retrieve the remaining results, make another request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeRecommendationExportJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_jobIds;
    bool m_jobIdsHasBeenSet = false;

    Aws::Vector<JobFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
