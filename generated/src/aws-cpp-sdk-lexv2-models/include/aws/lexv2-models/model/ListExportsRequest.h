/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ExportSortBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/ExportFilter.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListExportsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListExportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExports"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier that Amazon Lex assigned to the bot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the bot.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the bot.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the bot.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the bot.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the bot.</p>
     */
    inline ListExportsRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the bot.</p>
     */
    inline ListExportsRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the bot.</p>
     */
    inline ListExportsRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot to list exports for. </p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot to list exports for. </p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot to list exports for. </p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot to list exports for. </p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot to list exports for. </p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot to list exports for. </p>
     */
    inline ListExportsRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot to list exports for. </p>
     */
    inline ListExportsRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot to list exports for. </p>
     */
    inline ListExportsRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>Determines the field that the list of exports is sorted by. You can sort by
     * the <code>LastUpdatedDateTime</code> field in ascending or descending order.</p>
     */
    inline const ExportSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Determines the field that the list of exports is sorted by. You can sort by
     * the <code>LastUpdatedDateTime</code> field in ascending or descending order.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Determines the field that the list of exports is sorted by. You can sort by
     * the <code>LastUpdatedDateTime</code> field in ascending or descending order.</p>
     */
    inline void SetSortBy(const ExportSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Determines the field that the list of exports is sorted by. You can sort by
     * the <code>LastUpdatedDateTime</code> field in ascending or descending order.</p>
     */
    inline void SetSortBy(ExportSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Determines the field that the list of exports is sorted by. You can sort by
     * the <code>LastUpdatedDateTime</code> field in ascending or descending order.</p>
     */
    inline ListExportsRequest& WithSortBy(const ExportSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Determines the field that the list of exports is sorted by. You can sort by
     * the <code>LastUpdatedDateTime</code> field in ascending or descending order.</p>
     */
    inline ListExportsRequest& WithSortBy(ExportSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Provides the specification of a filter used to limit the exports in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline const Aws::Vector<ExportFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Provides the specification of a filter used to limit the exports in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Provides the specification of a filter used to limit the exports in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline void SetFilters(const Aws::Vector<ExportFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Provides the specification of a filter used to limit the exports in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline void SetFilters(Aws::Vector<ExportFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Provides the specification of a filter used to limit the exports in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline ListExportsRequest& WithFilters(const Aws::Vector<ExportFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Provides the specification of a filter used to limit the exports in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline ListExportsRequest& WithFilters(Aws::Vector<ExportFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Provides the specification of a filter used to limit the exports in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline ListExportsRequest& AddFilters(const ExportFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Provides the specification of a filter used to limit the exports in the
     * response to only those that match the filter specification. You can only specify
     * one filter and one string to filter on.</p>
     */
    inline ListExportsRequest& AddFilters(ExportFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of exports to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of exports to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of exports to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of exports to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline ListExportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response from the <code>ListExports</code> operation contains more
     * results that specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. </p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListExports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListExports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response from the <code>ListExports</code> operation contains more
     * results that specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. </p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListExports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListExports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response from the <code>ListExports</code> operation contains more
     * results that specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. </p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListExports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListExports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response from the <code>ListExports</code> operation contains more
     * results that specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. </p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListExports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListExports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response from the <code>ListExports</code> operation contains more
     * results that specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. </p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListExports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListExports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response from the <code>ListExports</code> operation contains more
     * results that specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. </p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListExports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListExports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline ListExportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response from the <code>ListExports</code> operation contains more
     * results that specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. </p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListExports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListExports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline ListExportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response from the <code>ListExports</code> operation contains more
     * results that specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. </p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListExports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListExports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline ListExportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the resources that should be exported. If you don't specify a
     * resource type in the <code>filters</code> parameter, both bot locales and custom
     * vocabularies are exported.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>Specifies the resources that should be exported. If you don't specify a
     * resource type in the <code>filters</code> parameter, both bot locales and custom
     * vocabularies are exported.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>Specifies the resources that should be exported. If you don't specify a
     * resource type in the <code>filters</code> parameter, both bot locales and custom
     * vocabularies are exported.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>Specifies the resources that should be exported. If you don't specify a
     * resource type in the <code>filters</code> parameter, both bot locales and custom
     * vocabularies are exported.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>Specifies the resources that should be exported. If you don't specify a
     * resource type in the <code>filters</code> parameter, both bot locales and custom
     * vocabularies are exported.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>Specifies the resources that should be exported. If you don't specify a
     * resource type in the <code>filters</code> parameter, both bot locales and custom
     * vocabularies are exported.</p>
     */
    inline ListExportsRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>Specifies the resources that should be exported. If you don't specify a
     * resource type in the <code>filters</code> parameter, both bot locales and custom
     * vocabularies are exported.</p>
     */
    inline ListExportsRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>Specifies the resources that should be exported. If you don't specify a
     * resource type in the <code>filters</code> parameter, both bot locales and custom
     * vocabularies are exported.</p>
     */
    inline ListExportsRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    ExportSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::Vector<ExportFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
