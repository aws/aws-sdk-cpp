/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/StartTimeRange.h>
#include <aws/devops-guru/model/ListAnomaliesForInsightFilters.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class ListAnomaliesForInsightRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API ListAnomaliesForInsightRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAnomaliesForInsight"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The ID of the insight. The returned anomalies belong to this insight. </p>
     */
    inline const Aws::String& GetInsightId() const{ return m_insightId; }
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }
    inline void SetInsightId(const Aws::String& value) { m_insightIdHasBeenSet = true; m_insightId = value; }
    inline void SetInsightId(Aws::String&& value) { m_insightIdHasBeenSet = true; m_insightId = std::move(value); }
    inline void SetInsightId(const char* value) { m_insightIdHasBeenSet = true; m_insightId.assign(value); }
    inline ListAnomaliesForInsightRequest& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}
    inline ListAnomaliesForInsightRequest& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}
    inline ListAnomaliesForInsightRequest& WithInsightId(const char* value) { SetInsightId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A time range used to specify when the requested anomalies started. All
     * returned anomalies started during this time range. </p>
     */
    inline const StartTimeRange& GetStartTimeRange() const{ return m_startTimeRange; }
    inline bool StartTimeRangeHasBeenSet() const { return m_startTimeRangeHasBeenSet; }
    inline void SetStartTimeRange(const StartTimeRange& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = value; }
    inline void SetStartTimeRange(StartTimeRange&& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = std::move(value); }
    inline ListAnomaliesForInsightRequest& WithStartTimeRange(const StartTimeRange& value) { SetStartTimeRange(value); return *this;}
    inline ListAnomaliesForInsightRequest& WithStartTimeRange(StartTimeRange&& value) { SetStartTimeRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAnomaliesForInsightRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAnomaliesForInsightRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAnomaliesForInsightRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAnomaliesForInsightRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ListAnomaliesForInsightRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ListAnomaliesForInsightRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ListAnomaliesForInsightRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies one or more service names that are used to list anomalies. </p>
     */
    inline const ListAnomaliesForInsightFilters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const ListAnomaliesForInsightFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(ListAnomaliesForInsightFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListAnomaliesForInsightRequest& WithFilters(const ListAnomaliesForInsightFilters& value) { SetFilters(value); return *this;}
    inline ListAnomaliesForInsightRequest& WithFilters(ListAnomaliesForInsightFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    StartTimeRange m_startTimeRange;
    bool m_startTimeRangeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    ListAnomaliesForInsightFilters m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
