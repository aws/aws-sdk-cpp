﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/SlotSortBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SlotFilter.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListSlotsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListSlotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSlots"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the bot that contains the slot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline ListSlotsRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline ListSlotsRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline ListSlotsRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that contains the slot.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline ListSlotsRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline ListSlotsRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline ListSlotsRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale of the slots to list. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline ListSlotsRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline ListSlotsRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline ListSlotsRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the intent that contains the slot.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }
    inline void SetIntentId(const Aws::String& value) { m_intentIdHasBeenSet = true; m_intentId = value; }
    inline void SetIntentId(Aws::String&& value) { m_intentIdHasBeenSet = true; m_intentId = std::move(value); }
    inline void SetIntentId(const char* value) { m_intentIdHasBeenSet = true; m_intentId.assign(value); }
    inline ListSlotsRequest& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}
    inline ListSlotsRequest& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}
    inline ListSlotsRequest& WithIntentId(const char* value) { SetIntentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the sort order for the response from the <code>ListSlots</code>
     * operation. You can choose to sort by the slot name or last updated date in
     * either ascending or descending order.</p>
     */
    inline const SlotSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SlotSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SlotSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListSlotsRequest& WithSortBy(const SlotSortBy& value) { SetSortBy(value); return *this;}
    inline ListSlotsRequest& WithSortBy(SlotSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the specification of a filter used to limit the slots in the
     * response to only those that match the filter specification. You can only specify
     * one filter and only one string to filter on.</p>
     */
    inline const Aws::Vector<SlotFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<SlotFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<SlotFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListSlotsRequest& WithFilters(const Aws::Vector<SlotFilter>& value) { SetFilters(value); return *this;}
    inline ListSlotsRequest& WithFilters(Aws::Vector<SlotFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListSlotsRequest& AddFilters(const SlotFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListSlotsRequest& AddFilters(SlotFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of slots to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSlotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response from the <code>ListSlots</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListSlotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSlotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSlotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_intentId;
    bool m_intentIdHasBeenSet = false;

    SlotSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::Vector<SlotFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
