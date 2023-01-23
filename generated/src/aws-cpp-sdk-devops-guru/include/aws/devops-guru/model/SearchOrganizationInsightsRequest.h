/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/StartTimeRange.h>
#include <aws/devops-guru/model/SearchOrganizationInsightsFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/InsightType.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class SearchOrganizationInsightsRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API SearchOrganizationInsightsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchOrganizationInsights"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline SearchOrganizationInsightsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline SearchOrganizationInsightsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline SearchOrganizationInsightsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline SearchOrganizationInsightsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline SearchOrganizationInsightsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    
    inline const StartTimeRange& GetStartTimeRange() const{ return m_startTimeRange; }

    
    inline bool StartTimeRangeHasBeenSet() const { return m_startTimeRangeHasBeenSet; }

    
    inline void SetStartTimeRange(const StartTimeRange& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = value; }

    
    inline void SetStartTimeRange(StartTimeRange&& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = std::move(value); }

    
    inline SearchOrganizationInsightsRequest& WithStartTimeRange(const StartTimeRange& value) { SetStartTimeRange(value); return *this;}

    
    inline SearchOrganizationInsightsRequest& WithStartTimeRange(StartTimeRange&& value) { SetStartTimeRange(std::move(value)); return *this;}


    /**
     * <p> A <code>SearchOrganizationInsightsFilters</code> object that is used to set
     * the severity and status filters on your insight search. </p>
     */
    inline const SearchOrganizationInsightsFilters& GetFilters() const{ return m_filters; }

    /**
     * <p> A <code>SearchOrganizationInsightsFilters</code> object that is used to set
     * the severity and status filters on your insight search. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p> A <code>SearchOrganizationInsightsFilters</code> object that is used to set
     * the severity and status filters on your insight search. </p>
     */
    inline void SetFilters(const SearchOrganizationInsightsFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p> A <code>SearchOrganizationInsightsFilters</code> object that is used to set
     * the severity and status filters on your insight search. </p>
     */
    inline void SetFilters(SearchOrganizationInsightsFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p> A <code>SearchOrganizationInsightsFilters</code> object that is used to set
     * the severity and status filters on your insight search. </p>
     */
    inline SearchOrganizationInsightsRequest& WithFilters(const SearchOrganizationInsightsFilters& value) { SetFilters(value); return *this;}

    /**
     * <p> A <code>SearchOrganizationInsightsFilters</code> object that is used to set
     * the severity and status filters on your insight search. </p>
     */
    inline SearchOrganizationInsightsRequest& WithFilters(SearchOrganizationInsightsFilters&& value) { SetFilters(std::move(value)); return *this;}


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
    inline SearchOrganizationInsightsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline SearchOrganizationInsightsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline SearchOrganizationInsightsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline SearchOrganizationInsightsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The type of insights you are searching for (<code>REACTIVE</code> or
     * <code>PROACTIVE</code>). </p>
     */
    inline const InsightType& GetType() const{ return m_type; }

    /**
     * <p> The type of insights you are searching for (<code>REACTIVE</code> or
     * <code>PROACTIVE</code>). </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of insights you are searching for (<code>REACTIVE</code> or
     * <code>PROACTIVE</code>). </p>
     */
    inline void SetType(const InsightType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of insights you are searching for (<code>REACTIVE</code> or
     * <code>PROACTIVE</code>). </p>
     */
    inline void SetType(InsightType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of insights you are searching for (<code>REACTIVE</code> or
     * <code>PROACTIVE</code>). </p>
     */
    inline SearchOrganizationInsightsRequest& WithType(const InsightType& value) { SetType(value); return *this;}

    /**
     * <p> The type of insights you are searching for (<code>REACTIVE</code> or
     * <code>PROACTIVE</code>). </p>
     */
    inline SearchOrganizationInsightsRequest& WithType(InsightType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    StartTimeRange m_startTimeRange;
    bool m_startTimeRangeHasBeenSet = false;

    SearchOrganizationInsightsFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    InsightType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
