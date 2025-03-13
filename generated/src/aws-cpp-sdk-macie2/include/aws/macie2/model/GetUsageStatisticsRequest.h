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
    AWS_MACIE2_API GetUsageStatisticsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUsageStatistics"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of objects, one for each condition to use to filter the query
     * results. If you specify more than one condition, Amazon Macie uses an AND
     * operator to join the conditions.</p>
     */
    inline const Aws::Vector<UsageStatisticsFilter>& GetFilterBy() const { return m_filterBy; }
    inline bool FilterByHasBeenSet() const { return m_filterByHasBeenSet; }
    template<typename FilterByT = Aws::Vector<UsageStatisticsFilter>>
    void SetFilterBy(FilterByT&& value) { m_filterByHasBeenSet = true; m_filterBy = std::forward<FilterByT>(value); }
    template<typename FilterByT = Aws::Vector<UsageStatisticsFilter>>
    GetUsageStatisticsRequest& WithFilterBy(FilterByT&& value) { SetFilterBy(std::forward<FilterByT>(value)); return *this;}
    template<typename FilterByT = UsageStatisticsFilter>
    GetUsageStatisticsRequest& AddFilterBy(FilterByT&& value) { m_filterByHasBeenSet = true; m_filterBy.emplace_back(std::forward<FilterByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetUsageStatisticsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetUsageStatisticsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline const UsageStatisticsSortBy& GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    template<typename SortByT = UsageStatisticsSortBy>
    void SetSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy = std::forward<SortByT>(value); }
    template<typename SortByT = UsageStatisticsSortBy>
    GetUsageStatisticsRequest& WithSortBy(SortByT&& value) { SetSortBy(std::forward<SortByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive time period to query usage data for. Valid values are:
     * MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS, for
     * the preceding 30 days. If you don't specify a value, Amazon Macie provides usage
     * data for the preceding 30 days.</p>
     */
    inline TimeRange GetTimeRange() const { return m_timeRange; }
    inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }
    inline void SetTimeRange(TimeRange value) { m_timeRangeHasBeenSet = true; m_timeRange = value; }
    inline GetUsageStatisticsRequest& WithTimeRange(TimeRange value) { SetTimeRange(value); return *this;}
    ///@}
  private:

    Aws::Vector<UsageStatisticsFilter> m_filterBy;
    bool m_filterByHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    UsageStatisticsSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    TimeRange m_timeRange{TimeRange::NOT_SET};
    bool m_timeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
