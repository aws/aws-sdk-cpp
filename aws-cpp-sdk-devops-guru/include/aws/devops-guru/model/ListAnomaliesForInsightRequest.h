/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/StartTimeRange.h>
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


    /**
     * <p> The ID of the insight. The returned anomalies belong to this insight. </p>
     */
    inline const Aws::String& GetInsightId() const{ return m_insightId; }

    /**
     * <p> The ID of the insight. The returned anomalies belong to this insight. </p>
     */
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }

    /**
     * <p> The ID of the insight. The returned anomalies belong to this insight. </p>
     */
    inline void SetInsightId(const Aws::String& value) { m_insightIdHasBeenSet = true; m_insightId = value; }

    /**
     * <p> The ID of the insight. The returned anomalies belong to this insight. </p>
     */
    inline void SetInsightId(Aws::String&& value) { m_insightIdHasBeenSet = true; m_insightId = std::move(value); }

    /**
     * <p> The ID of the insight. The returned anomalies belong to this insight. </p>
     */
    inline void SetInsightId(const char* value) { m_insightIdHasBeenSet = true; m_insightId.assign(value); }

    /**
     * <p> The ID of the insight. The returned anomalies belong to this insight. </p>
     */
    inline ListAnomaliesForInsightRequest& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}

    /**
     * <p> The ID of the insight. The returned anomalies belong to this insight. </p>
     */
    inline ListAnomaliesForInsightRequest& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}

    /**
     * <p> The ID of the insight. The returned anomalies belong to this insight. </p>
     */
    inline ListAnomaliesForInsightRequest& WithInsightId(const char* value) { SetInsightId(value); return *this;}


    /**
     * <p> A time range used to specify when the requested anomalies started. All
     * returned anomalies started during this time range. </p>
     */
    inline const StartTimeRange& GetStartTimeRange() const{ return m_startTimeRange; }

    /**
     * <p> A time range used to specify when the requested anomalies started. All
     * returned anomalies started during this time range. </p>
     */
    inline bool StartTimeRangeHasBeenSet() const { return m_startTimeRangeHasBeenSet; }

    /**
     * <p> A time range used to specify when the requested anomalies started. All
     * returned anomalies started during this time range. </p>
     */
    inline void SetStartTimeRange(const StartTimeRange& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = value; }

    /**
     * <p> A time range used to specify when the requested anomalies started. All
     * returned anomalies started during this time range. </p>
     */
    inline void SetStartTimeRange(StartTimeRange&& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = std::move(value); }

    /**
     * <p> A time range used to specify when the requested anomalies started. All
     * returned anomalies started during this time range. </p>
     */
    inline ListAnomaliesForInsightRequest& WithStartTimeRange(const StartTimeRange& value) { SetStartTimeRange(value); return *this;}

    /**
     * <p> A time range used to specify when the requested anomalies started. All
     * returned anomalies started during this time range. </p>
     */
    inline ListAnomaliesForInsightRequest& WithStartTimeRange(StartTimeRange&& value) { SetStartTimeRange(std::move(value)); return *this;}


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
    inline ListAnomaliesForInsightRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListAnomaliesForInsightRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline ListAnomaliesForInsightRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline ListAnomaliesForInsightRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline ListAnomaliesForInsightRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline ListAnomaliesForInsightRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline ListAnomaliesForInsightRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

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
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
