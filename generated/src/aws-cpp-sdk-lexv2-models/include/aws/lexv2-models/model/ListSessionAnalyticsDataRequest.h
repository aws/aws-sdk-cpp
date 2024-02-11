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
    AWS_LEXMODELSV2_API ListSessionAnalyticsDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSessionAnalyticsData"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the bot for which you want to retrieve session
     * analytics.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier for the bot for which you want to retrieve session
     * analytics.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier for the bot for which you want to retrieve session
     * analytics.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier for the bot for which you want to retrieve session
     * analytics.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier for the bot for which you want to retrieve session
     * analytics.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier for the bot for which you want to retrieve session
     * analytics.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier for the bot for which you want to retrieve session
     * analytics.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the bot for which you want to retrieve session
     * analytics.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see session analytics.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see session analytics.</p>
     */
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see session analytics.</p>
     */
    inline void SetStartDateTime(const Aws::Utils::DateTime& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see session analytics.</p>
     */
    inline void SetStartDateTime(Aws::Utils::DateTime&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see session analytics.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithStartDateTime(const Aws::Utils::DateTime& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see session analytics.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithStartDateTime(Aws::Utils::DateTime&& value) { SetStartDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see session analytics.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see session analytics.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see session analytics.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see session analytics.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see session analytics.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see session analytics.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}


    /**
     * <p>An object specifying the measure and method by which to sort the session
     * analytics data.</p>
     */
    inline const SessionDataSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>An object specifying the measure and method by which to sort the session
     * analytics data.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>An object specifying the measure and method by which to sort the session
     * analytics data.</p>
     */
    inline void SetSortBy(const SessionDataSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>An object specifying the measure and method by which to sort the session
     * analytics data.</p>
     */
    inline void SetSortBy(SessionDataSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>An object specifying the measure and method by which to sort the session
     * analytics data.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithSortBy(const SessionDataSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>An object specifying the measure and method by which to sort the session
     * analytics data.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithSortBy(SessionDataSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline const Aws::Vector<AnalyticsSessionFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline void SetFilters(const Aws::Vector<AnalyticsSessionFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline void SetFilters(Aws::Vector<AnalyticsSessionFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithFilters(const Aws::Vector<AnalyticsSessionFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithFilters(Aws::Vector<AnalyticsSessionFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline ListSessionAnalyticsDataRequest& AddFilters(const AnalyticsSessionFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A list of objects, each of which describes a condition by which you want to
     * filter the results.</p>
     */
    inline ListSessionAnalyticsDataRequest& AddFilters(AnalyticsSessionFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return in each page of results. If there are
     * fewer results than the maximum page size, only the actual number of results are
     * returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in each page of results. If there are
     * fewer results than the maximum page size, only the actual number of results are
     * returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in each page of results. If there are
     * fewer results than the maximum page size, only the actual number of results are
     * returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in each page of results. If there are
     * fewer results than the maximum page size, only the actual number of results are
     * returned.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response from the ListSessionAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListSessionAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListSessionAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response from the ListSessionAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListSessionAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListSessionAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response from the ListSessionAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListSessionAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListSessionAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response from the ListSessionAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListSessionAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListSessionAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response from the ListSessionAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListSessionAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListSessionAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response from the ListSessionAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListSessionAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListSessionAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response from the ListSessionAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListSessionAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListSessionAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response from the ListSessionAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListSessionAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListSessionAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline ListSessionAnalyticsDataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::Utils::DateTime m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;

    SessionDataSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::Vector<AnalyticsSessionFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
