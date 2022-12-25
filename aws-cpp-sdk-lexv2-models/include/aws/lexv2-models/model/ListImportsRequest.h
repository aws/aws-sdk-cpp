/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ImportSortBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/ImportFilter.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListImportsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListImportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImports"; }

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
    inline ListImportsRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the bot.</p>
     */
    inline ListImportsRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the bot.</p>
     */
    inline ListImportsRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot to list imports for.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot to list imports for.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot to list imports for.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot to list imports for.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot to list imports for.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot to list imports for.</p>
     */
    inline ListImportsRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot to list imports for.</p>
     */
    inline ListImportsRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot to list imports for.</p>
     */
    inline ListImportsRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>Determines the field that the list of imports is sorted by. You can sort by
     * the <code>LastUpdatedDateTime</code> field in ascending or descending order.</p>
     */
    inline const ImportSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Determines the field that the list of imports is sorted by. You can sort by
     * the <code>LastUpdatedDateTime</code> field in ascending or descending order.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Determines the field that the list of imports is sorted by. You can sort by
     * the <code>LastUpdatedDateTime</code> field in ascending or descending order.</p>
     */
    inline void SetSortBy(const ImportSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Determines the field that the list of imports is sorted by. You can sort by
     * the <code>LastUpdatedDateTime</code> field in ascending or descending order.</p>
     */
    inline void SetSortBy(ImportSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Determines the field that the list of imports is sorted by. You can sort by
     * the <code>LastUpdatedDateTime</code> field in ascending or descending order.</p>
     */
    inline ListImportsRequest& WithSortBy(const ImportSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Determines the field that the list of imports is sorted by. You can sort by
     * the <code>LastUpdatedDateTime</code> field in ascending or descending order.</p>
     */
    inline ListImportsRequest& WithSortBy(ImportSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Provides the specification of a filter used to limit the bots in the response
     * to only those that match the filter specification. You can only specify one
     * filter and one string to filter on.</p>
     */
    inline const Aws::Vector<ImportFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Provides the specification of a filter used to limit the bots in the response
     * to only those that match the filter specification. You can only specify one
     * filter and one string to filter on.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Provides the specification of a filter used to limit the bots in the response
     * to only those that match the filter specification. You can only specify one
     * filter and one string to filter on.</p>
     */
    inline void SetFilters(const Aws::Vector<ImportFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Provides the specification of a filter used to limit the bots in the response
     * to only those that match the filter specification. You can only specify one
     * filter and one string to filter on.</p>
     */
    inline void SetFilters(Aws::Vector<ImportFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Provides the specification of a filter used to limit the bots in the response
     * to only those that match the filter specification. You can only specify one
     * filter and one string to filter on.</p>
     */
    inline ListImportsRequest& WithFilters(const Aws::Vector<ImportFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Provides the specification of a filter used to limit the bots in the response
     * to only those that match the filter specification. You can only specify one
     * filter and one string to filter on.</p>
     */
    inline ListImportsRequest& WithFilters(Aws::Vector<ImportFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Provides the specification of a filter used to limit the bots in the response
     * to only those that match the filter specification. You can only specify one
     * filter and one string to filter on.</p>
     */
    inline ListImportsRequest& AddFilters(const ImportFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Provides the specification of a filter used to limit the bots in the response
     * to only those that match the filter specification. You can only specify one
     * filter and one string to filter on.</p>
     */
    inline ListImportsRequest& AddFilters(ImportFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of imports to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of imports to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of imports to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of imports to return in each page of results. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline ListImportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response from the <code>ListImports</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response.</p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListImports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListImports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response from the <code>ListImports</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response.</p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListImports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListImports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response from the <code>ListImports</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response.</p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListImports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListImports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response from the <code>ListImports</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response.</p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListImports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListImports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response from the <code>ListImports</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response.</p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListImports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListImports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response from the <code>ListImports</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response.</p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListImports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListImports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline ListImportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response from the <code>ListImports</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response.</p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListImports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListImports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline ListImportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response from the <code>ListImports</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response.</p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListImports</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListImports</code> operation until the <code>nextToken</code> returned in
     * the response is null.</p>
     */
    inline ListImportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the locale that should be present in the list. If you don't specify
     * a resource type in the <code>filters</code> parameter, the list contains both
     * bot locales and custom vocabularies.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>Specifies the locale that should be present in the list. If you don't specify
     * a resource type in the <code>filters</code> parameter, the list contains both
     * bot locales and custom vocabularies.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>Specifies the locale that should be present in the list. If you don't specify
     * a resource type in the <code>filters</code> parameter, the list contains both
     * bot locales and custom vocabularies.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>Specifies the locale that should be present in the list. If you don't specify
     * a resource type in the <code>filters</code> parameter, the list contains both
     * bot locales and custom vocabularies.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>Specifies the locale that should be present in the list. If you don't specify
     * a resource type in the <code>filters</code> parameter, the list contains both
     * bot locales and custom vocabularies.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>Specifies the locale that should be present in the list. If you don't specify
     * a resource type in the <code>filters</code> parameter, the list contains both
     * bot locales and custom vocabularies.</p>
     */
    inline ListImportsRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>Specifies the locale that should be present in the list. If you don't specify
     * a resource type in the <code>filters</code> parameter, the list contains both
     * bot locales and custom vocabularies.</p>
     */
    inline ListImportsRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>Specifies the locale that should be present in the list. If you don't specify
     * a resource type in the <code>filters</code> parameter, the list contains both
     * bot locales and custom vocabularies.</p>
     */
    inline ListImportsRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    ImportSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::Vector<ImportFilter> m_filters;
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
