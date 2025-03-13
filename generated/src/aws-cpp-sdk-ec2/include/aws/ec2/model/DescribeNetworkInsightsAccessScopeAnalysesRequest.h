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
  class DescribeNetworkInsightsAccessScopeAnalysesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeNetworkInsightsAccessScopeAnalysesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkInsightsAccessScopeAnalyses"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the Network Access Scope analyses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInsightsAccessScopeAnalysisIds() const { return m_networkInsightsAccessScopeAnalysisIds; }
    inline bool NetworkInsightsAccessScopeAnalysisIdsHasBeenSet() const { return m_networkInsightsAccessScopeAnalysisIdsHasBeenSet; }
    template<typename NetworkInsightsAccessScopeAnalysisIdsT = Aws::Vector<Aws::String>>
    void SetNetworkInsightsAccessScopeAnalysisIds(NetworkInsightsAccessScopeAnalysisIdsT&& value) { m_networkInsightsAccessScopeAnalysisIdsHasBeenSet = true; m_networkInsightsAccessScopeAnalysisIds = std::forward<NetworkInsightsAccessScopeAnalysisIdsT>(value); }
    template<typename NetworkInsightsAccessScopeAnalysisIdsT = Aws::Vector<Aws::String>>
    DescribeNetworkInsightsAccessScopeAnalysesRequest& WithNetworkInsightsAccessScopeAnalysisIds(NetworkInsightsAccessScopeAnalysisIdsT&& value) { SetNetworkInsightsAccessScopeAnalysisIds(std::forward<NetworkInsightsAccessScopeAnalysisIdsT>(value)); return *this;}
    template<typename NetworkInsightsAccessScopeAnalysisIdsT = Aws::String>
    DescribeNetworkInsightsAccessScopeAnalysesRequest& AddNetworkInsightsAccessScopeAnalysisIds(NetworkInsightsAccessScopeAnalysisIdsT&& value) { m_networkInsightsAccessScopeAnalysisIdsHasBeenSet = true; m_networkInsightsAccessScopeAnalysisIds.emplace_back(std::forward<NetworkInsightsAccessScopeAnalysisIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeId() const { return m_networkInsightsAccessScopeId; }
    inline bool NetworkInsightsAccessScopeIdHasBeenSet() const { return m_networkInsightsAccessScopeIdHasBeenSet; }
    template<typename NetworkInsightsAccessScopeIdT = Aws::String>
    void SetNetworkInsightsAccessScopeId(NetworkInsightsAccessScopeIdT&& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = std::forward<NetworkInsightsAccessScopeIdT>(value); }
    template<typename NetworkInsightsAccessScopeIdT = Aws::String>
    DescribeNetworkInsightsAccessScopeAnalysesRequest& WithNetworkInsightsAccessScopeId(NetworkInsightsAccessScopeIdT&& value) { SetNetworkInsightsAccessScopeId(std::forward<NetworkInsightsAccessScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalysisStartTimeBegin() const { return m_analysisStartTimeBegin; }
    inline bool AnalysisStartTimeBeginHasBeenSet() const { return m_analysisStartTimeBeginHasBeenSet; }
    template<typename AnalysisStartTimeBeginT = Aws::Utils::DateTime>
    void SetAnalysisStartTimeBegin(AnalysisStartTimeBeginT&& value) { m_analysisStartTimeBeginHasBeenSet = true; m_analysisStartTimeBegin = std::forward<AnalysisStartTimeBeginT>(value); }
    template<typename AnalysisStartTimeBeginT = Aws::Utils::DateTime>
    DescribeNetworkInsightsAccessScopeAnalysesRequest& WithAnalysisStartTimeBegin(AnalysisStartTimeBeginT&& value) { SetAnalysisStartTimeBegin(std::forward<AnalysisStartTimeBeginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalysisStartTimeEnd() const { return m_analysisStartTimeEnd; }
    inline bool AnalysisStartTimeEndHasBeenSet() const { return m_analysisStartTimeEndHasBeenSet; }
    template<typename AnalysisStartTimeEndT = Aws::Utils::DateTime>
    void SetAnalysisStartTimeEnd(AnalysisStartTimeEndT&& value) { m_analysisStartTimeEndHasBeenSet = true; m_analysisStartTimeEnd = std::forward<AnalysisStartTimeEndT>(value); }
    template<typename AnalysisStartTimeEndT = Aws::Utils::DateTime>
    DescribeNetworkInsightsAccessScopeAnalysesRequest& WithAnalysisStartTimeEnd(AnalysisStartTimeEndT&& value) { SetAnalysisStartTimeEnd(std::forward<AnalysisStartTimeEndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There are no supported filters.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeNetworkInsightsAccessScopeAnalysesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeNetworkInsightsAccessScopeAnalysesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
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
    DescribeNetworkInsightsAccessScopeAnalysesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_networkInsightsAccessScopeAnalysisIds;
    bool m_networkInsightsAccessScopeAnalysisIdsHasBeenSet = false;

    Aws::String m_networkInsightsAccessScopeId;
    bool m_networkInsightsAccessScopeIdHasBeenSet = false;

    Aws::Utils::DateTime m_analysisStartTimeBegin{};
    bool m_analysisStartTimeBeginHasBeenSet = false;

    Aws::Utils::DateTime m_analysisStartTimeEnd{};
    bool m_analysisStartTimeEndHasBeenSet = false;

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
