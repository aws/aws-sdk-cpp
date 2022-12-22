/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotLocaleSortBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/BotLocaleFilter.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListBotLocalesRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListBotLocalesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBotLocales"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline ListBotLocalesRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline ListBotLocalesRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline ListBotLocalesRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot to list locales for.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot to list locales for.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot to list locales for.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot to list locales for.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot to list locales for.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot to list locales for.</p>
     */
    inline ListBotLocalesRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot to list locales for.</p>
     */
    inline ListBotLocalesRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot to list locales for.</p>
     */
    inline ListBotLocalesRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>Specifies sorting parameters for the list of locales. You can sort by locale
     * name in ascending or descending order.</p>
     */
    inline const BotLocaleSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Specifies sorting parameters for the list of locales. You can sort by locale
     * name in ascending or descending order.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Specifies sorting parameters for the list of locales. You can sort by locale
     * name in ascending or descending order.</p>
     */
    inline void SetSortBy(const BotLocaleSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Specifies sorting parameters for the list of locales. You can sort by locale
     * name in ascending or descending order.</p>
     */
    inline void SetSortBy(BotLocaleSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Specifies sorting parameters for the list of locales. You can sort by locale
     * name in ascending or descending order.</p>
     */
    inline ListBotLocalesRequest& WithSortBy(const BotLocaleSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Specifies sorting parameters for the list of locales. You can sort by locale
     * name in ascending or descending order.</p>
     */
    inline ListBotLocalesRequest& WithSortBy(BotLocaleSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Provides the specification for a filter used to limit the response to only
     * those locales that match the filter specification. You can only specify one
     * filter and one value to filter on.</p>
     */
    inline const Aws::Vector<BotLocaleFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Provides the specification for a filter used to limit the response to only
     * those locales that match the filter specification. You can only specify one
     * filter and one value to filter on.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Provides the specification for a filter used to limit the response to only
     * those locales that match the filter specification. You can only specify one
     * filter and one value to filter on.</p>
     */
    inline void SetFilters(const Aws::Vector<BotLocaleFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Provides the specification for a filter used to limit the response to only
     * those locales that match the filter specification. You can only specify one
     * filter and one value to filter on.</p>
     */
    inline void SetFilters(Aws::Vector<BotLocaleFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Provides the specification for a filter used to limit the response to only
     * those locales that match the filter specification. You can only specify one
     * filter and one value to filter on.</p>
     */
    inline ListBotLocalesRequest& WithFilters(const Aws::Vector<BotLocaleFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Provides the specification for a filter used to limit the response to only
     * those locales that match the filter specification. You can only specify one
     * filter and one value to filter on.</p>
     */
    inline ListBotLocalesRequest& WithFilters(Aws::Vector<BotLocaleFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Provides the specification for a filter used to limit the response to only
     * those locales that match the filter specification. You can only specify one
     * filter and one value to filter on.</p>
     */
    inline ListBotLocalesRequest& AddFilters(const BotLocaleFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Provides the specification for a filter used to limit the response to only
     * those locales that match the filter specification. You can only specify one
     * filter and one value to filter on.</p>
     */
    inline ListBotLocalesRequest& AddFilters(BotLocaleFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of aliases to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of aliases to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of aliases to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of aliases to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline ListBotLocalesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response from the <code>ListBotLocales</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token as the <code>nextToken</code> parameter
     * to return the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response from the <code>ListBotLocales</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token as the <code>nextToken</code> parameter
     * to return the next page of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response from the <code>ListBotLocales</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token as the <code>nextToken</code> parameter
     * to return the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response from the <code>ListBotLocales</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token as the <code>nextToken</code> parameter
     * to return the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response from the <code>ListBotLocales</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token as the <code>nextToken</code> parameter
     * to return the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response from the <code>ListBotLocales</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token as the <code>nextToken</code> parameter
     * to return the next page of results. </p>
     */
    inline ListBotLocalesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response from the <code>ListBotLocales</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token as the <code>nextToken</code> parameter
     * to return the next page of results. </p>
     */
    inline ListBotLocalesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response from the <code>ListBotLocales</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token as the <code>nextToken</code> parameter
     * to return the next page of results. </p>
     */
    inline ListBotLocalesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    BotLocaleSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::Vector<BotLocaleFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
