/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/UsageStatisticsSortBy.h>
#include <aws/macie2/model/TimeRange.h>
#include <aws/macie2/model/UsageStatisticsFilter.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class GetUsageStatisticsRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API GetUsageStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUsageStatistics"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>An array of objects, one for each condition to use to filter the query
     * results. If you specify more than one condition, Amazon Macie uses an AND
     * operator to join the conditions.</p>
     */
    inline const Aws::Vector<UsageStatisticsFilter>& GetFilterBy() const{ return m_filterBy; }

    /**
     * <p>An array of objects, one for each condition to use to filter the query
     * results. If you specify more than one condition, Amazon Macie uses an AND
     * operator to join the conditions.</p>
     */
    inline bool FilterByHasBeenSet() const { return m_filterByHasBeenSet; }

    /**
     * <p>An array of objects, one for each condition to use to filter the query
     * results. If you specify more than one condition, Amazon Macie uses an AND
     * operator to join the conditions.</p>
     */
    inline void SetFilterBy(const Aws::Vector<UsageStatisticsFilter>& value) { m_filterByHasBeenSet = true; m_filterBy = value; }

    /**
     * <p>An array of objects, one for each condition to use to filter the query
     * results. If you specify more than one condition, Amazon Macie uses an AND
     * operator to join the conditions.</p>
     */
    inline void SetFilterBy(Aws::Vector<UsageStatisticsFilter>&& value) { m_filterByHasBeenSet = true; m_filterBy = std::move(value); }

    /**
     * <p>An array of objects, one for each condition to use to filter the query
     * results. If you specify more than one condition, Amazon Macie uses an AND
     * operator to join the conditions.</p>
     */
    inline GetUsageStatisticsRequest& WithFilterBy(const Aws::Vector<UsageStatisticsFilter>& value) { SetFilterBy(value); return *this;}

    /**
     * <p>An array of objects, one for each condition to use to filter the query
     * results. If you specify more than one condition, Amazon Macie uses an AND
     * operator to join the conditions.</p>
     */
    inline GetUsageStatisticsRequest& WithFilterBy(Aws::Vector<UsageStatisticsFilter>&& value) { SetFilterBy(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each condition to use to filter the query
     * results. If you specify more than one condition, Amazon Macie uses an AND
     * operator to join the conditions.</p>
     */
    inline GetUsageStatisticsRequest& AddFilterBy(const UsageStatisticsFilter& value) { m_filterByHasBeenSet = true; m_filterBy.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each condition to use to filter the query
     * results. If you specify more than one condition, Amazon Macie uses an AND
     * operator to join the conditions.</p>
     */
    inline GetUsageStatisticsRequest& AddFilterBy(UsageStatisticsFilter&& value) { m_filterByHasBeenSet = true; m_filterBy.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline GetUsageStatisticsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline GetUsageStatisticsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline GetUsageStatisticsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline GetUsageStatisticsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline const UsageStatisticsSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline void SetSortBy(const UsageStatisticsSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline void SetSortBy(UsageStatisticsSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline GetUsageStatisticsRequest& WithSortBy(const UsageStatisticsSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline GetUsageStatisticsRequest& WithSortBy(UsageStatisticsSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The inclusive time period to query usage data for. Valid values are:
     * MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS, for
     * the preceding 30 days. If you don't specify a value, Amazon Macie provides usage
     * data for the preceding 30 days.</p>
     */
    inline const TimeRange& GetTimeRange() const{ return m_timeRange; }

    /**
     * <p>The inclusive time period to query usage data for. Valid values are:
     * MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS, for
     * the preceding 30 days. If you don't specify a value, Amazon Macie provides usage
     * data for the preceding 30 days.</p>
     */
    inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }

    /**
     * <p>The inclusive time period to query usage data for. Valid values are:
     * MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS, for
     * the preceding 30 days. If you don't specify a value, Amazon Macie provides usage
     * data for the preceding 30 days.</p>
     */
    inline void SetTimeRange(const TimeRange& value) { m_timeRangeHasBeenSet = true; m_timeRange = value; }

    /**
     * <p>The inclusive time period to query usage data for. Valid values are:
     * MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS, for
     * the preceding 30 days. If you don't specify a value, Amazon Macie provides usage
     * data for the preceding 30 days.</p>
     */
    inline void SetTimeRange(TimeRange&& value) { m_timeRangeHasBeenSet = true; m_timeRange = std::move(value); }

    /**
     * <p>The inclusive time period to query usage data for. Valid values are:
     * MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS, for
     * the preceding 30 days. If you don't specify a value, Amazon Macie provides usage
     * data for the preceding 30 days.</p>
     */
    inline GetUsageStatisticsRequest& WithTimeRange(const TimeRange& value) { SetTimeRange(value); return *this;}

    /**
     * <p>The inclusive time period to query usage data for. Valid values are:
     * MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS, for
     * the preceding 30 days. If you don't specify a value, Amazon Macie provides usage
     * data for the preceding 30 days.</p>
     */
    inline GetUsageStatisticsRequest& WithTimeRange(TimeRange&& value) { SetTimeRange(std::move(value)); return *this;}

  private:

    Aws::Vector<UsageStatisticsFilter> m_filterBy;
    bool m_filterByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    UsageStatisticsSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    TimeRange m_timeRange;
    bool m_timeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
