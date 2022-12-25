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
    AWS_COMPUTEOPTIMIZER_API DescribeRecommendationExportJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRecommendationExportJobs"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identification numbers of the export jobs to return.</p> <p>An export job
     * ID is returned when you create an export using the
     * <a>ExportAutoScalingGroupRecommendations</a> or
     * <a>ExportEC2InstanceRecommendations</a> actions.</p> <p>All export jobs created
     * in the last seven days are returned if this parameter is omitted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobIds() const{ return m_jobIds; }

    /**
     * <p>The identification numbers of the export jobs to return.</p> <p>An export job
     * ID is returned when you create an export using the
     * <a>ExportAutoScalingGroupRecommendations</a> or
     * <a>ExportEC2InstanceRecommendations</a> actions.</p> <p>All export jobs created
     * in the last seven days are returned if this parameter is omitted.</p>
     */
    inline bool JobIdsHasBeenSet() const { return m_jobIdsHasBeenSet; }

    /**
     * <p>The identification numbers of the export jobs to return.</p> <p>An export job
     * ID is returned when you create an export using the
     * <a>ExportAutoScalingGroupRecommendations</a> or
     * <a>ExportEC2InstanceRecommendations</a> actions.</p> <p>All export jobs created
     * in the last seven days are returned if this parameter is omitted.</p>
     */
    inline void SetJobIds(const Aws::Vector<Aws::String>& value) { m_jobIdsHasBeenSet = true; m_jobIds = value; }

    /**
     * <p>The identification numbers of the export jobs to return.</p> <p>An export job
     * ID is returned when you create an export using the
     * <a>ExportAutoScalingGroupRecommendations</a> or
     * <a>ExportEC2InstanceRecommendations</a> actions.</p> <p>All export jobs created
     * in the last seven days are returned if this parameter is omitted.</p>
     */
    inline void SetJobIds(Aws::Vector<Aws::String>&& value) { m_jobIdsHasBeenSet = true; m_jobIds = std::move(value); }

    /**
     * <p>The identification numbers of the export jobs to return.</p> <p>An export job
     * ID is returned when you create an export using the
     * <a>ExportAutoScalingGroupRecommendations</a> or
     * <a>ExportEC2InstanceRecommendations</a> actions.</p> <p>All export jobs created
     * in the last seven days are returned if this parameter is omitted.</p>
     */
    inline DescribeRecommendationExportJobsRequest& WithJobIds(const Aws::Vector<Aws::String>& value) { SetJobIds(value); return *this;}

    /**
     * <p>The identification numbers of the export jobs to return.</p> <p>An export job
     * ID is returned when you create an export using the
     * <a>ExportAutoScalingGroupRecommendations</a> or
     * <a>ExportEC2InstanceRecommendations</a> actions.</p> <p>All export jobs created
     * in the last seven days are returned if this parameter is omitted.</p>
     */
    inline DescribeRecommendationExportJobsRequest& WithJobIds(Aws::Vector<Aws::String>&& value) { SetJobIds(std::move(value)); return *this;}

    /**
     * <p>The identification numbers of the export jobs to return.</p> <p>An export job
     * ID is returned when you create an export using the
     * <a>ExportAutoScalingGroupRecommendations</a> or
     * <a>ExportEC2InstanceRecommendations</a> actions.</p> <p>All export jobs created
     * in the last seven days are returned if this parameter is omitted.</p>
     */
    inline DescribeRecommendationExportJobsRequest& AddJobIds(const Aws::String& value) { m_jobIdsHasBeenSet = true; m_jobIds.push_back(value); return *this; }

    /**
     * <p>The identification numbers of the export jobs to return.</p> <p>An export job
     * ID is returned when you create an export using the
     * <a>ExportAutoScalingGroupRecommendations</a> or
     * <a>ExportEC2InstanceRecommendations</a> actions.</p> <p>All export jobs created
     * in the last seven days are returned if this parameter is omitted.</p>
     */
    inline DescribeRecommendationExportJobsRequest& AddJobIds(Aws::String&& value) { m_jobIdsHasBeenSet = true; m_jobIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identification numbers of the export jobs to return.</p> <p>An export job
     * ID is returned when you create an export using the
     * <a>ExportAutoScalingGroupRecommendations</a> or
     * <a>ExportEC2InstanceRecommendations</a> actions.</p> <p>All export jobs created
     * in the last seven days are returned if this parameter is omitted.</p>
     */
    inline DescribeRecommendationExportJobsRequest& AddJobIds(const char* value) { m_jobIdsHasBeenSet = true; m_jobIds.push_back(value); return *this; }


    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * export jobs.</p>
     */
    inline const Aws::Vector<JobFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * export jobs.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * export jobs.</p>
     */
    inline void SetFilters(const Aws::Vector<JobFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * export jobs.</p>
     */
    inline void SetFilters(Aws::Vector<JobFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * export jobs.</p>
     */
    inline DescribeRecommendationExportJobsRequest& WithFilters(const Aws::Vector<JobFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * export jobs.</p>
     */
    inline DescribeRecommendationExportJobsRequest& WithFilters(Aws::Vector<JobFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * export jobs.</p>
     */
    inline DescribeRecommendationExportJobsRequest& AddFilters(const JobFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * export jobs.</p>
     */
    inline DescribeRecommendationExportJobsRequest& AddFilters(JobFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of export jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to advance to the next page of export jobs.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to advance to the next page of export jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to advance to the next page of export jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of export jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to advance to the next page of export jobs.</p>
     */
    inline DescribeRecommendationExportJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of export jobs.</p>
     */
    inline DescribeRecommendationExportJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of export jobs.</p>
     */
    inline DescribeRecommendationExportJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of export jobs to return with a single request.</p> <p>To
     * retrieve the remaining results, make another request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of export jobs to return with a single request.</p> <p>To
     * retrieve the remaining results, make another request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of export jobs to return with a single request.</p> <p>To
     * retrieve the remaining results, make another request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of export jobs to return with a single request.</p> <p>To
     * retrieve the remaining results, make another request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline DescribeRecommendationExportJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_jobIds;
    bool m_jobIdsHasBeenSet = false;

    Aws::Vector<JobFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
