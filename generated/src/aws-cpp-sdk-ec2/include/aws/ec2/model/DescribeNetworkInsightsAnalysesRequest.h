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
    AWS_EC2_API DescribeNetworkInsightsAnalysesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkInsightsAnalyses"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the network insights analyses. You must specify either analysis IDs
     * or a path ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInsightsAnalysisIds() const { return m_networkInsightsAnalysisIds; }
    inline bool NetworkInsightsAnalysisIdsHasBeenSet() const { return m_networkInsightsAnalysisIdsHasBeenSet; }
    template<typename NetworkInsightsAnalysisIdsT = Aws::Vector<Aws::String>>
    void SetNetworkInsightsAnalysisIds(NetworkInsightsAnalysisIdsT&& value) { m_networkInsightsAnalysisIdsHasBeenSet = true; m_networkInsightsAnalysisIds = std::forward<NetworkInsightsAnalysisIdsT>(value); }
    template<typename NetworkInsightsAnalysisIdsT = Aws::Vector<Aws::String>>
    DescribeNetworkInsightsAnalysesRequest& WithNetworkInsightsAnalysisIds(NetworkInsightsAnalysisIdsT&& value) { SetNetworkInsightsAnalysisIds(std::forward<NetworkInsightsAnalysisIdsT>(value)); return *this;}
    template<typename NetworkInsightsAnalysisIdsT = Aws::String>
    DescribeNetworkInsightsAnalysesRequest& AddNetworkInsightsAnalysisIds(NetworkInsightsAnalysisIdsT&& value) { m_networkInsightsAnalysisIdsHasBeenSet = true; m_networkInsightsAnalysisIds.emplace_back(std::forward<NetworkInsightsAnalysisIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the path. You must specify either a path ID or analysis IDs.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathId() const { return m_networkInsightsPathId; }
    inline bool NetworkInsightsPathIdHasBeenSet() const { return m_networkInsightsPathIdHasBeenSet; }
    template<typename NetworkInsightsPathIdT = Aws::String>
    void SetNetworkInsightsPathId(NetworkInsightsPathIdT&& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = std::forward<NetworkInsightsPathIdT>(value); }
    template<typename NetworkInsightsPathIdT = Aws::String>
    DescribeNetworkInsightsAnalysesRequest& WithNetworkInsightsPathId(NetworkInsightsPathIdT&& value) { SetNetworkInsightsPathId(std::forward<NetworkInsightsPathIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the network insights analyses started.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalysisStartTime() const { return m_analysisStartTime; }
    inline bool AnalysisStartTimeHasBeenSet() const { return m_analysisStartTimeHasBeenSet; }
    template<typename AnalysisStartTimeT = Aws::Utils::DateTime>
    void SetAnalysisStartTime(AnalysisStartTimeT&& value) { m_analysisStartTimeHasBeenSet = true; m_analysisStartTime = std::forward<AnalysisStartTimeT>(value); }
    template<typename AnalysisStartTimeT = Aws::Utils::DateTime>
    DescribeNetworkInsightsAnalysesRequest& WithAnalysisStartTime(AnalysisStartTimeT&& value) { SetAnalysisStartTime(std::forward<AnalysisStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the network insights analyses ended.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalysisEndTime() const { return m_analysisEndTime; }
    inline bool AnalysisEndTimeHasBeenSet() const { return m_analysisEndTimeHasBeenSet; }
    template<typename AnalysisEndTimeT = Aws::Utils::DateTime>
    void SetAnalysisEndTime(AnalysisEndTimeT&& value) { m_analysisEndTimeHasBeenSet = true; m_analysisEndTime = std::forward<AnalysisEndTimeT>(value); }
    template<typename AnalysisEndTimeT = Aws::Utils::DateTime>
    DescribeNetworkInsightsAnalysesRequest& WithAnalysisEndTime(AnalysisEndTimeT&& value) { SetAnalysisEndTime(std::forward<AnalysisEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters. The following are the possible values:</p> <ul> <li>
     * <p>path-found - A Boolean value that indicates whether a feasible path is
     * found.</p> </li> <li> <p>status - The status of the analysis (running |
     * succeeded | failed).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeNetworkInsightsAnalysesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeNetworkInsightsAnalysesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeNetworkInsightsAnalysesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeNetworkInsightsAnalysesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeNetworkInsightsAnalysesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_networkInsightsAnalysisIds;
    bool m_networkInsightsAnalysisIdsHasBeenSet = false;

    Aws::String m_networkInsightsPathId;
    bool m_networkInsightsPathIdHasBeenSet = false;

    Aws::Utils::DateTime m_analysisStartTime{};
    bool m_analysisStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_analysisEndTime{};
    bool m_analysisEndTimeHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
