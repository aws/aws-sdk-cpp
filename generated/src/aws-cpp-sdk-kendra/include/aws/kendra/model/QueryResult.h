/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/QueryResultItem.h>
#include <aws/kendra/model/FacetResult.h>
#include <aws/kendra/model/Warning.h>
#include <aws/kendra/model/SpellCorrectedQuery.h>
#include <aws/kendra/model/FeaturedResultsItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{
  class QueryResult
  {
  public:
    AWS_KENDRA_API QueryResult() = default;
    AWS_KENDRA_API QueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API QueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the search. You also use <code>QueryId</code> to identify
     * the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">SubmitFeedback</a>
     * API.</p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    QueryResult& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the search.</p>
     */
    inline const Aws::Vector<QueryResultItem>& GetResultItems() const { return m_resultItems; }
    template<typename ResultItemsT = Aws::Vector<QueryResultItem>>
    void SetResultItems(ResultItemsT&& value) { m_resultItemsHasBeenSet = true; m_resultItems = std::forward<ResultItemsT>(value); }
    template<typename ResultItemsT = Aws::Vector<QueryResultItem>>
    QueryResult& WithResultItems(ResultItemsT&& value) { SetResultItems(std::forward<ResultItemsT>(value)); return *this;}
    template<typename ResultItemsT = QueryResultItem>
    QueryResult& AddResultItems(ResultItemsT&& value) { m_resultItemsHasBeenSet = true; m_resultItems.emplace_back(std::forward<ResultItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each field/attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline const Aws::Vector<FacetResult>& GetFacetResults() const { return m_facetResults; }
    template<typename FacetResultsT = Aws::Vector<FacetResult>>
    void SetFacetResults(FacetResultsT&& value) { m_facetResultsHasBeenSet = true; m_facetResults = std::forward<FacetResultsT>(value); }
    template<typename FacetResultsT = Aws::Vector<FacetResult>>
    QueryResult& WithFacetResults(FacetResultsT&& value) { SetFacetResults(std::forward<FacetResultsT>(value)); return *this;}
    template<typename FacetResultsT = FacetResult>
    QueryResult& AddFacetResults(FacetResultsT&& value) { m_facetResultsHasBeenSet = true; m_facetResults.emplace_back(std::forward<FacetResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of items found by the search. However, you can only retrieve
     * up to 100 items. For example, if the search found 192 items, you can only
     * retrieve the first 100 of the items.</p>
     */
    inline int GetTotalNumberOfResults() const { return m_totalNumberOfResults; }
    inline void SetTotalNumberOfResults(int value) { m_totalNumberOfResultsHasBeenSet = true; m_totalNumberOfResults = value; }
    inline QueryResult& WithTotalNumberOfResults(int value) { SetTotalNumberOfResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of warning codes and their messages on problems with your query.</p>
     * <p>Amazon Kendra currently only supports one type of warning, which is a warning
     * on invalid syntax used in the query. For examples of invalid query syntax, see
     * <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/searching-example.html#searching-index-query-syntax">Searching
     * with advanced query syntax</a>.</p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const { return m_warnings; }
    template<typename WarningsT = Aws::Vector<Warning>>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::Vector<Warning>>
    QueryResult& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    template<typename WarningsT = Warning>
    QueryResult& AddWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings.emplace_back(std::forward<WarningsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of information related to suggested spell corrections for a query.</p>
     */
    inline const Aws::Vector<SpellCorrectedQuery>& GetSpellCorrectedQueries() const { return m_spellCorrectedQueries; }
    template<typename SpellCorrectedQueriesT = Aws::Vector<SpellCorrectedQuery>>
    void SetSpellCorrectedQueries(SpellCorrectedQueriesT&& value) { m_spellCorrectedQueriesHasBeenSet = true; m_spellCorrectedQueries = std::forward<SpellCorrectedQueriesT>(value); }
    template<typename SpellCorrectedQueriesT = Aws::Vector<SpellCorrectedQuery>>
    QueryResult& WithSpellCorrectedQueries(SpellCorrectedQueriesT&& value) { SetSpellCorrectedQueries(std::forward<SpellCorrectedQueriesT>(value)); return *this;}
    template<typename SpellCorrectedQueriesT = SpellCorrectedQuery>
    QueryResult& AddSpellCorrectedQueries(SpellCorrectedQueriesT&& value) { m_spellCorrectedQueriesHasBeenSet = true; m_spellCorrectedQueries.emplace_back(std::forward<SpellCorrectedQueriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of featured result items. Featured results are displayed at the top
     * of the search results page, placed above all other results for certain queries.
     * If there's an exact match of a query, then certain documents are featured in the
     * search results.</p>
     */
    inline const Aws::Vector<FeaturedResultsItem>& GetFeaturedResultsItems() const { return m_featuredResultsItems; }
    template<typename FeaturedResultsItemsT = Aws::Vector<FeaturedResultsItem>>
    void SetFeaturedResultsItems(FeaturedResultsItemsT&& value) { m_featuredResultsItemsHasBeenSet = true; m_featuredResultsItems = std::forward<FeaturedResultsItemsT>(value); }
    template<typename FeaturedResultsItemsT = Aws::Vector<FeaturedResultsItem>>
    QueryResult& WithFeaturedResultsItems(FeaturedResultsItemsT&& value) { SetFeaturedResultsItems(std::forward<FeaturedResultsItemsT>(value)); return *this;}
    template<typename FeaturedResultsItemsT = FeaturedResultsItem>
    QueryResult& AddFeaturedResultsItems(FeaturedResultsItemsT&& value) { m_featuredResultsItemsHasBeenSet = true; m_featuredResultsItems.emplace_back(std::forward<FeaturedResultsItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    QueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::Vector<QueryResultItem> m_resultItems;
    bool m_resultItemsHasBeenSet = false;

    Aws::Vector<FacetResult> m_facetResults;
    bool m_facetResultsHasBeenSet = false;

    int m_totalNumberOfResults{0};
    bool m_totalNumberOfResultsHasBeenSet = false;

    Aws::Vector<Warning> m_warnings;
    bool m_warningsHasBeenSet = false;

    Aws::Vector<SpellCorrectedQuery> m_spellCorrectedQueries;
    bool m_spellCorrectedQueriesHasBeenSet = false;

    Aws::Vector<FeaturedResultsItem> m_featuredResultsItems;
    bool m_featuredResultsItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
