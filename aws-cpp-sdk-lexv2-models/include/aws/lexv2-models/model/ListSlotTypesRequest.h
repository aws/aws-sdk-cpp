﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/SlotTypeSortBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SlotTypeFilter.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELSV2_API ListSlotTypesRequest : public LexModelsV2Request
  {
  public:
    ListSlotTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSlotTypes"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the bot that contains the slot types.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot that contains the slot types.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot that contains the slot types.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot that contains the slot types.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot that contains the slot types.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot that contains the slot types.</p>
     */
    inline ListSlotTypesRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot that contains the slot types.</p>
     */
    inline ListSlotTypesRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot that contains the slot types.</p>
     */
    inline ListSlotTypesRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that contains the slot type.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that contains the slot type.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot that contains the slot type.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot that contains the slot type.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that contains the slot type.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that contains the slot type.</p>
     */
    inline ListSlotTypesRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that contains the slot type.</p>
     */
    inline ListSlotTypesRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that contains the slot type.</p>
     */
    inline ListSlotTypesRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline ListSlotTypesRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline ListSlotTypesRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline ListSlotTypesRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>Determines the sort order for the response from the
     * <code>ListSlotTypes</code> operation. You can choose to sort by the slot type
     * name or last updated date in either ascending or descending order.</p>
     */
    inline const SlotTypeSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Determines the sort order for the response from the
     * <code>ListSlotTypes</code> operation. You can choose to sort by the slot type
     * name or last updated date in either ascending or descending order.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Determines the sort order for the response from the
     * <code>ListSlotTypes</code> operation. You can choose to sort by the slot type
     * name or last updated date in either ascending or descending order.</p>
     */
    inline void SetSortBy(const SlotTypeSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Determines the sort order for the response from the
     * <code>ListSlotTypes</code> operation. You can choose to sort by the slot type
     * name or last updated date in either ascending or descending order.</p>
     */
    inline void SetSortBy(SlotTypeSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Determines the sort order for the response from the
     * <code>ListSlotTypes</code> operation. You can choose to sort by the slot type
     * name or last updated date in either ascending or descending order.</p>
     */
    inline ListSlotTypesRequest& WithSortBy(const SlotTypeSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Determines the sort order for the response from the
     * <code>ListSlotTypes</code> operation. You can choose to sort by the slot type
     * name or last updated date in either ascending or descending order.</p>
     */
    inline ListSlotTypesRequest& WithSortBy(SlotTypeSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Provides the specification of a filter used to limit the slot types in the
     * response to only those that match the filter specification. You can only specify
     * one filter and only one string to filter on.</p>
     */
    inline const Aws::Vector<SlotTypeFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Provides the specification of a filter used to limit the slot types in the
     * response to only those that match the filter specification. You can only specify
     * one filter and only one string to filter on.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Provides the specification of a filter used to limit the slot types in the
     * response to only those that match the filter specification. You can only specify
     * one filter and only one string to filter on.</p>
     */
    inline void SetFilters(const Aws::Vector<SlotTypeFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Provides the specification of a filter used to limit the slot types in the
     * response to only those that match the filter specification. You can only specify
     * one filter and only one string to filter on.</p>
     */
    inline void SetFilters(Aws::Vector<SlotTypeFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Provides the specification of a filter used to limit the slot types in the
     * response to only those that match the filter specification. You can only specify
     * one filter and only one string to filter on.</p>
     */
    inline ListSlotTypesRequest& WithFilters(const Aws::Vector<SlotTypeFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Provides the specification of a filter used to limit the slot types in the
     * response to only those that match the filter specification. You can only specify
     * one filter and only one string to filter on.</p>
     */
    inline ListSlotTypesRequest& WithFilters(Aws::Vector<SlotTypeFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Provides the specification of a filter used to limit the slot types in the
     * response to only those that match the filter specification. You can only specify
     * one filter and only one string to filter on.</p>
     */
    inline ListSlotTypesRequest& AddFilters(const SlotTypeFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Provides the specification of a filter used to limit the slot types in the
     * response to only those that match the filter specification. You can only specify
     * one filter and only one string to filter on.</p>
     */
    inline ListSlotTypesRequest& AddFilters(SlotTypeFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of slot types to return in each page of results. If there
     * are fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of slot types to return in each page of results. If there
     * are fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of slot types to return in each page of results. If there
     * are fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of slot types to return in each page of results. If there
     * are fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline ListSlotTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response from the <code>ListSlotTypes</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response from the <code>ListSlotTypes</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response from the <code>ListSlotTypes</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response from the <code>ListSlotTypes</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response from the <code>ListSlotTypes</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response from the <code>ListSlotTypes</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline ListSlotTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response from the <code>ListSlotTypes</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline ListSlotTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response from the <code>ListSlotTypes</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline ListSlotTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet;

    SlotTypeSortBy m_sortBy;
    bool m_sortByHasBeenSet;

    Aws::Vector<SlotTypeFilter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
