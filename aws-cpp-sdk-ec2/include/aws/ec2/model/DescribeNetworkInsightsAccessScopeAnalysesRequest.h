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
    AWS_EC2_API DescribeNetworkInsightsAccessScopeAnalysesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkInsightsAccessScopeAnalyses"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IDs of the Network Access Scope analyses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInsightsAccessScopeAnalysisIds() const{ return m_networkInsightsAccessScopeAnalysisIds; }

    /**
     * <p>The IDs of the Network Access Scope analyses.</p>
     */
    inline bool NetworkInsightsAccessScopeAnalysisIdsHasBeenSet() const { return m_networkInsightsAccessScopeAnalysisIdsHasBeenSet; }

    /**
     * <p>The IDs of the Network Access Scope analyses.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysisIds(const Aws::Vector<Aws::String>& value) { m_networkInsightsAccessScopeAnalysisIdsHasBeenSet = true; m_networkInsightsAccessScopeAnalysisIds = value; }

    /**
     * <p>The IDs of the Network Access Scope analyses.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysisIds(Aws::Vector<Aws::String>&& value) { m_networkInsightsAccessScopeAnalysisIdsHasBeenSet = true; m_networkInsightsAccessScopeAnalysisIds = std::move(value); }

    /**
     * <p>The IDs of the Network Access Scope analyses.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithNetworkInsightsAccessScopeAnalysisIds(const Aws::Vector<Aws::String>& value) { SetNetworkInsightsAccessScopeAnalysisIds(value); return *this;}

    /**
     * <p>The IDs of the Network Access Scope analyses.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithNetworkInsightsAccessScopeAnalysisIds(Aws::Vector<Aws::String>&& value) { SetNetworkInsightsAccessScopeAnalysisIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Network Access Scope analyses.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& AddNetworkInsightsAccessScopeAnalysisIds(const Aws::String& value) { m_networkInsightsAccessScopeAnalysisIdsHasBeenSet = true; m_networkInsightsAccessScopeAnalysisIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Network Access Scope analyses.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& AddNetworkInsightsAccessScopeAnalysisIds(Aws::String&& value) { m_networkInsightsAccessScopeAnalysisIdsHasBeenSet = true; m_networkInsightsAccessScopeAnalysisIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Network Access Scope analyses.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& AddNetworkInsightsAccessScopeAnalysisIds(const char* value) { m_networkInsightsAccessScopeAnalysisIdsHasBeenSet = true; m_networkInsightsAccessScopeAnalysisIds.push_back(value); return *this; }


    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeId() const{ return m_networkInsightsAccessScopeId; }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline bool NetworkInsightsAccessScopeIdHasBeenSet() const { return m_networkInsightsAccessScopeIdHasBeenSet; }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeId(const Aws::String& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = value; }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeId(Aws::String&& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = std::move(value); }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeId(const char* value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId.assign(value); }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithNetworkInsightsAccessScopeId(const Aws::String& value) { SetNetworkInsightsAccessScopeId(value); return *this;}

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithNetworkInsightsAccessScopeId(Aws::String&& value) { SetNetworkInsightsAccessScopeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithNetworkInsightsAccessScopeId(const char* value) { SetNetworkInsightsAccessScopeId(value); return *this;}


    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalysisStartTimeBegin() const{ return m_analysisStartTimeBegin; }

    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or after this time.</p>
     */
    inline bool AnalysisStartTimeBeginHasBeenSet() const { return m_analysisStartTimeBeginHasBeenSet; }

    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or after this time.</p>
     */
    inline void SetAnalysisStartTimeBegin(const Aws::Utils::DateTime& value) { m_analysisStartTimeBeginHasBeenSet = true; m_analysisStartTimeBegin = value; }

    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or after this time.</p>
     */
    inline void SetAnalysisStartTimeBegin(Aws::Utils::DateTime&& value) { m_analysisStartTimeBeginHasBeenSet = true; m_analysisStartTimeBegin = std::move(value); }

    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or after this time.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithAnalysisStartTimeBegin(const Aws::Utils::DateTime& value) { SetAnalysisStartTimeBegin(value); return *this;}

    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or after this time.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithAnalysisStartTimeBegin(Aws::Utils::DateTime&& value) { SetAnalysisStartTimeBegin(std::move(value)); return *this;}


    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalysisStartTimeEnd() const{ return m_analysisStartTimeEnd; }

    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or before this time.</p>
     */
    inline bool AnalysisStartTimeEndHasBeenSet() const { return m_analysisStartTimeEndHasBeenSet; }

    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or before this time.</p>
     */
    inline void SetAnalysisStartTimeEnd(const Aws::Utils::DateTime& value) { m_analysisStartTimeEndHasBeenSet = true; m_analysisStartTimeEnd = value; }

    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or before this time.</p>
     */
    inline void SetAnalysisStartTimeEnd(Aws::Utils::DateTime&& value) { m_analysisStartTimeEndHasBeenSet = true; m_analysisStartTimeEnd = std::move(value); }

    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or before this time.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithAnalysisStartTimeEnd(const Aws::Utils::DateTime& value) { SetAnalysisStartTimeEnd(value); return *this;}

    /**
     * <p>Filters the results based on the start time. The analysis must have started
     * on or before this time.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithAnalysisStartTimeEnd(Aws::Utils::DateTime&& value) { SetAnalysisStartTimeEnd(std::move(value)); return *this;}


    /**
     * <p>There are no supported filters.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>There are no supported filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>There are no supported filters.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>There are no supported filters.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>There are no supported filters.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>There are no supported filters.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>There are no supported filters.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>There are no supported filters.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


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
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_networkInsightsAccessScopeAnalysisIds;
    bool m_networkInsightsAccessScopeAnalysisIdsHasBeenSet = false;

    Aws::String m_networkInsightsAccessScopeId;
    bool m_networkInsightsAccessScopeIdHasBeenSet = false;

    Aws::Utils::DateTime m_analysisStartTimeBegin;
    bool m_analysisStartTimeBeginHasBeenSet = false;

    Aws::Utils::DateTime m_analysisStartTimeEnd;
    bool m_analysisStartTimeEndHasBeenSet = false;

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
