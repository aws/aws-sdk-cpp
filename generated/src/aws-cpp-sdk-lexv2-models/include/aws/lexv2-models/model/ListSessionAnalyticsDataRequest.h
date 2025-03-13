/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/SessionDataSortBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AnalyticsSessionFilter.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListSessionAnalyticsDataRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListSessionAnalyticsDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSessionAnalyticsData"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the bot for which you want to retrieve session
     * analytics.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    ListSessionAnalyticsDataRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see session analytics.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const { return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    void SetStartDateTime(StartDateTimeT&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::forward<StartDateTimeT>(value); }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    ListSessionAnalyticsDataRequest& WithStartDateTime(StartDateTimeT&& value) { SetStartDateTime(std::forward<StartDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see session analytics.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const { return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    void SetEndDateTime(EndDateTimeT&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::forward<EndDateTimeT>(value); }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    ListSessionAnalyticsDataRequest& WithEndDateTime(EndDateTimeT&& value) { SetEndDateTime(std::forward<EndDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object specifying the measure and method by which to sort the session
     * analytics data.</p>
     */
    inline const SessionDataSortBy& GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    template<typename SortByT = SessionDataSortBy>
    void SetSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy = std::forward<SortByT>(value); }
    template<typename SortByT = SessionDataSortBy>
    ListSessionAnalyticsDataRequest& WithSortBy(SortByT&& value) { SetSortBy(std::forward<SortByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline const Aws::Vector<AnalyticsSessionFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<AnalyticsSessionFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<AnalyticsSessionFilter>>
    ListSessionAnalyticsDataRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = AnalyticsSessionFilter>
    ListSessionAnalyticsDataRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in each page of results. If there are
     * fewer results than the maximum page size, only the actual number of results are
     * returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSessionAnalyticsDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response from the ListSessionAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListSessionAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListSessionAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSessionAnalyticsDataRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::Utils::DateTime m_startDateTime{};
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime{};
    bool m_endDateTimeHasBeenSet = false;

    SessionDataSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::Vector<AnalyticsSessionFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
