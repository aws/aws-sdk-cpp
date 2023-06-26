/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeNetworkInsightsAnalysesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeNetworkInsightsAnalysesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkInsightsAnalyses"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the network insights analyses. You must specify either analysis IDs
     * or a path ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInsightsAnalysisIds() const{ return m_networkInsightsAnalysisIds; }

    /**
     * <p>The ID of the network insights analyses. You must specify either analysis IDs
     * or a path ID.</p>
     */
    inline bool NetworkInsightsAnalysisIdsHasBeenSet() const { return m_networkInsightsAnalysisIdsHasBeenSet; }

    /**
     * <p>The ID of the network insights analyses. You must specify either analysis IDs
     * or a path ID.</p>
     */
    inline void SetNetworkInsightsAnalysisIds(const Aws::Vector<Aws::String>& value) { m_networkInsightsAnalysisIdsHasBeenSet = true; m_networkInsightsAnalysisIds = value; }

    /**
     * <p>The ID of the network insights analyses. You must specify either analysis IDs
     * or a path ID.</p>
     */
    inline void SetNetworkInsightsAnalysisIds(Aws::Vector<Aws::String>&& value) { m_networkInsightsAnalysisIdsHasBeenSet = true; m_networkInsightsAnalysisIds = std::move(value); }

    /**
     * <p>The ID of the network insights analyses. You must specify either analysis IDs
     * or a path ID.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithNetworkInsightsAnalysisIds(const Aws::Vector<Aws::String>& value) { SetNetworkInsightsAnalysisIds(value); return *this;}

    /**
     * <p>The ID of the network insights analyses. You must specify either analysis IDs
     * or a path ID.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithNetworkInsightsAnalysisIds(Aws::Vector<Aws::String>&& value) { SetNetworkInsightsAnalysisIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the network insights analyses. You must specify either analysis IDs
     * or a path ID.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& AddNetworkInsightsAnalysisIds(const Aws::String& value) { m_networkInsightsAnalysisIdsHasBeenSet = true; m_networkInsightsAnalysisIds.push_back(value); return *this; }

    /**
     * <p>The ID of the network insights analyses. You must specify either analysis IDs
     * or a path ID.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& AddNetworkInsightsAnalysisIds(Aws::String&& value) { m_networkInsightsAnalysisIdsHasBeenSet = true; m_networkInsightsAnalysisIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the network insights analyses. You must specify either analysis IDs
     * or a path ID.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& AddNetworkInsightsAnalysisIds(const char* value) { m_networkInsightsAnalysisIdsHasBeenSet = true; m_networkInsightsAnalysisIds.push_back(value); return *this; }


    /**
     * <p>The ID of the path. You must specify either a path ID or analysis IDs.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathId() const{ return m_networkInsightsPathId; }

    /**
     * <p>The ID of the path. You must specify either a path ID or analysis IDs.</p>
     */
    inline bool NetworkInsightsPathIdHasBeenSet() const { return m_networkInsightsPathIdHasBeenSet; }

    /**
     * <p>The ID of the path. You must specify either a path ID or analysis IDs.</p>
     */
    inline void SetNetworkInsightsPathId(const Aws::String& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = value; }

    /**
     * <p>The ID of the path. You must specify either a path ID or analysis IDs.</p>
     */
    inline void SetNetworkInsightsPathId(Aws::String&& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = std::move(value); }

    /**
     * <p>The ID of the path. You must specify either a path ID or analysis IDs.</p>
     */
    inline void SetNetworkInsightsPathId(const char* value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId.assign(value); }

    /**
     * <p>The ID of the path. You must specify either a path ID or analysis IDs.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithNetworkInsightsPathId(const Aws::String& value) { SetNetworkInsightsPathId(value); return *this;}

    /**
     * <p>The ID of the path. You must specify either a path ID or analysis IDs.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithNetworkInsightsPathId(Aws::String&& value) { SetNetworkInsightsPathId(std::move(value)); return *this;}

    /**
     * <p>The ID of the path. You must specify either a path ID or analysis IDs.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithNetworkInsightsPathId(const char* value) { SetNetworkInsightsPathId(value); return *this;}


    /**
     * <p>The time when the network insights analyses started.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalysisStartTime() const{ return m_analysisStartTime; }

    /**
     * <p>The time when the network insights analyses started.</p>
     */
    inline bool AnalysisStartTimeHasBeenSet() const { return m_analysisStartTimeHasBeenSet; }

    /**
     * <p>The time when the network insights analyses started.</p>
     */
    inline void SetAnalysisStartTime(const Aws::Utils::DateTime& value) { m_analysisStartTimeHasBeenSet = true; m_analysisStartTime = value; }

    /**
     * <p>The time when the network insights analyses started.</p>
     */
    inline void SetAnalysisStartTime(Aws::Utils::DateTime&& value) { m_analysisStartTimeHasBeenSet = true; m_analysisStartTime = std::move(value); }

    /**
     * <p>The time when the network insights analyses started.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithAnalysisStartTime(const Aws::Utils::DateTime& value) { SetAnalysisStartTime(value); return *this;}

    /**
     * <p>The time when the network insights analyses started.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithAnalysisStartTime(Aws::Utils::DateTime&& value) { SetAnalysisStartTime(std::move(value)); return *this;}


    /**
     * <p>The time when the network insights analyses ended.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalysisEndTime() const{ return m_analysisEndTime; }

    /**
     * <p>The time when the network insights analyses ended.</p>
     */
    inline bool AnalysisEndTimeHasBeenSet() const { return m_analysisEndTimeHasBeenSet; }

    /**
     * <p>The time when the network insights analyses ended.</p>
     */
    inline void SetAnalysisEndTime(const Aws::Utils::DateTime& value) { m_analysisEndTimeHasBeenSet = true; m_analysisEndTime = value; }

    /**
     * <p>The time when the network insights analyses ended.</p>
     */
    inline void SetAnalysisEndTime(Aws::Utils::DateTime&& value) { m_analysisEndTimeHasBeenSet = true; m_analysisEndTime = std::move(value); }

    /**
     * <p>The time when the network insights analyses ended.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithAnalysisEndTime(const Aws::Utils::DateTime& value) { SetAnalysisEndTime(value); return *this;}

    /**
     * <p>The time when the network insights analyses ended.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithAnalysisEndTime(Aws::Utils::DateTime&& value) { SetAnalysisEndTime(std::move(value)); return *this;}


    /**
     * <p>The filters. The following are the possible values:</p> <ul> <li>
     * <p>path-found - A Boolean value that indicates whether a feasible path is
     * found.</p> </li> <li> <p>status - The status of the analysis (running |
     * succeeded | failed).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters. The following are the possible values:</p> <ul> <li>
     * <p>path-found - A Boolean value that indicates whether a feasible path is
     * found.</p> </li> <li> <p>status - The status of the analysis (running |
     * succeeded | failed).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters. The following are the possible values:</p> <ul> <li>
     * <p>path-found - A Boolean value that indicates whether a feasible path is
     * found.</p> </li> <li> <p>status - The status of the analysis (running |
     * succeeded | failed).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters. The following are the possible values:</p> <ul> <li>
     * <p>path-found - A Boolean value that indicates whether a feasible path is
     * found.</p> </li> <li> <p>status - The status of the analysis (running |
     * succeeded | failed).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters. The following are the possible values:</p> <ul> <li>
     * <p>path-found - A Boolean value that indicates whether a feasible path is
     * found.</p> </li> <li> <p>status - The status of the analysis (running |
     * succeeded | failed).</p> </li> </ul>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters. The following are the possible values:</p> <ul> <li>
     * <p>path-found - A Boolean value that indicates whether a feasible path is
     * found.</p> </li> <li> <p>status - The status of the analysis (running |
     * succeeded | failed).</p> </li> </ul>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters. The following are the possible values:</p> <ul> <li>
     * <p>path-found - A Boolean value that indicates whether a feasible path is
     * found.</p> </li> <li> <p>status - The status of the analysis (running |
     * succeeded | failed).</p> </li> </ul>
     */
    inline DescribeNetworkInsightsAnalysesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters. The following are the possible values:</p> <ul> <li>
     * <p>path-found - A Boolean value that indicates whether a feasible path is
     * found.</p> </li> <li> <p>status - The status of the analysis (running |
     * succeeded | failed).</p> </li> </ul>
     */
    inline DescribeNetworkInsightsAnalysesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeNetworkInsightsAnalysesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_networkInsightsAnalysisIds;
    bool m_networkInsightsAnalysisIdsHasBeenSet = false;

    Aws::String m_networkInsightsPathId;
    bool m_networkInsightsPathIdHasBeenSet = false;

    Aws::Utils::DateTime m_analysisStartTime;
    bool m_analysisStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_analysisEndTime;
    bool m_analysisEndTimeHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
