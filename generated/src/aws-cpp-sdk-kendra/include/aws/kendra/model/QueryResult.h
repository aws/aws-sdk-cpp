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
    AWS_KENDRA_API QueryResult();
    AWS_KENDRA_API QueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API QueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the search. You also use <code>QueryId</code> to identify
     * the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">SubmitFeedback</a>
     * API.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The identifier for the search. You also use <code>QueryId</code> to identify
     * the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">SubmitFeedback</a>
     * API.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryId = value; }

    /**
     * <p>The identifier for the search. You also use <code>QueryId</code> to identify
     * the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">SubmitFeedback</a>
     * API.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryId = std::move(value); }

    /**
     * <p>The identifier for the search. You also use <code>QueryId</code> to identify
     * the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">SubmitFeedback</a>
     * API.</p>
     */
    inline void SetQueryId(const char* value) { m_queryId.assign(value); }

    /**
     * <p>The identifier for the search. You also use <code>QueryId</code> to identify
     * the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">SubmitFeedback</a>
     * API.</p>
     */
    inline QueryResult& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The identifier for the search. You also use <code>QueryId</code> to identify
     * the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">SubmitFeedback</a>
     * API.</p>
     */
    inline QueryResult& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the search. You also use <code>QueryId</code> to identify
     * the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">SubmitFeedback</a>
     * API.</p>
     */
    inline QueryResult& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>The results of the search.</p>
     */
    inline const Aws::Vector<QueryResultItem>& GetResultItems() const{ return m_resultItems; }

    /**
     * <p>The results of the search.</p>
     */
    inline void SetResultItems(const Aws::Vector<QueryResultItem>& value) { m_resultItems = value; }

    /**
     * <p>The results of the search.</p>
     */
    inline void SetResultItems(Aws::Vector<QueryResultItem>&& value) { m_resultItems = std::move(value); }

    /**
     * <p>The results of the search.</p>
     */
    inline QueryResult& WithResultItems(const Aws::Vector<QueryResultItem>& value) { SetResultItems(value); return *this;}

    /**
     * <p>The results of the search.</p>
     */
    inline QueryResult& WithResultItems(Aws::Vector<QueryResultItem>&& value) { SetResultItems(std::move(value)); return *this;}

    /**
     * <p>The results of the search.</p>
     */
    inline QueryResult& AddResultItems(const QueryResultItem& value) { m_resultItems.push_back(value); return *this; }

    /**
     * <p>The results of the search.</p>
     */
    inline QueryResult& AddResultItems(QueryResultItem&& value) { m_resultItems.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each field/attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline const Aws::Vector<FacetResult>& GetFacetResults() const{ return m_facetResults; }

    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each field/attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline void SetFacetResults(const Aws::Vector<FacetResult>& value) { m_facetResults = value; }

    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each field/attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline void SetFacetResults(Aws::Vector<FacetResult>&& value) { m_facetResults = std::move(value); }

    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each field/attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline QueryResult& WithFacetResults(const Aws::Vector<FacetResult>& value) { SetFacetResults(value); return *this;}

    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each field/attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline QueryResult& WithFacetResults(Aws::Vector<FacetResult>&& value) { SetFacetResults(std::move(value)); return *this;}

    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each field/attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline QueryResult& AddFacetResults(const FacetResult& value) { m_facetResults.push_back(value); return *this; }

    /**
     * <p>Contains the facet results. A <code>FacetResult</code> contains the counts
     * for each field/attribute key that was specified in the <code>Facets</code> input
     * parameter.</p>
     */
    inline QueryResult& AddFacetResults(FacetResult&& value) { m_facetResults.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of items found by the search. However, you can only retrieve
     * up to 100 items. For example, if the search found 192 items, you can only
     * retrieve the first 100 of the items.</p>
     */
    inline int GetTotalNumberOfResults() const{ return m_totalNumberOfResults; }

    /**
     * <p>The total number of items found by the search. However, you can only retrieve
     * up to 100 items. For example, if the search found 192 items, you can only
     * retrieve the first 100 of the items.</p>
     */
    inline void SetTotalNumberOfResults(int value) { m_totalNumberOfResults = value; }

    /**
     * <p>The total number of items found by the search. However, you can only retrieve
     * up to 100 items. For example, if the search found 192 items, you can only
     * retrieve the first 100 of the items.</p>
     */
    inline QueryResult& WithTotalNumberOfResults(int value) { SetTotalNumberOfResults(value); return *this;}


    /**
     * <p>A list of warning codes and their messages on problems with your query.</p>
     * <p>Amazon Kendra currently only supports one type of warning, which is a warning
     * on invalid syntax used in the query. For examples of invalid query syntax, see
     * <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/searching-example.html#searching-index-query-syntax">Searching
     * with advanced query syntax</a>.</p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>A list of warning codes and their messages on problems with your query.</p>
     * <p>Amazon Kendra currently only supports one type of warning, which is a warning
     * on invalid syntax used in the query. For examples of invalid query syntax, see
     * <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/searching-example.html#searching-index-query-syntax">Searching
     * with advanced query syntax</a>.</p>
     */
    inline void SetWarnings(const Aws::Vector<Warning>& value) { m_warnings = value; }

    /**
     * <p>A list of warning codes and their messages on problems with your query.</p>
     * <p>Amazon Kendra currently only supports one type of warning, which is a warning
     * on invalid syntax used in the query. For examples of invalid query syntax, see
     * <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/searching-example.html#searching-index-query-syntax">Searching
     * with advanced query syntax</a>.</p>
     */
    inline void SetWarnings(Aws::Vector<Warning>&& value) { m_warnings = std::move(value); }

    /**
     * <p>A list of warning codes and their messages on problems with your query.</p>
     * <p>Amazon Kendra currently only supports one type of warning, which is a warning
     * on invalid syntax used in the query. For examples of invalid query syntax, see
     * <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/searching-example.html#searching-index-query-syntax">Searching
     * with advanced query syntax</a>.</p>
     */
    inline QueryResult& WithWarnings(const Aws::Vector<Warning>& value) { SetWarnings(value); return *this;}

    /**
     * <p>A list of warning codes and their messages on problems with your query.</p>
     * <p>Amazon Kendra currently only supports one type of warning, which is a warning
     * on invalid syntax used in the query. For examples of invalid query syntax, see
     * <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/searching-example.html#searching-index-query-syntax">Searching
     * with advanced query syntax</a>.</p>
     */
    inline QueryResult& WithWarnings(Aws::Vector<Warning>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>A list of warning codes and their messages on problems with your query.</p>
     * <p>Amazon Kendra currently only supports one type of warning, which is a warning
     * on invalid syntax used in the query. For examples of invalid query syntax, see
     * <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/searching-example.html#searching-index-query-syntax">Searching
     * with advanced query syntax</a>.</p>
     */
    inline QueryResult& AddWarnings(const Warning& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>A list of warning codes and their messages on problems with your query.</p>
     * <p>Amazon Kendra currently only supports one type of warning, which is a warning
     * on invalid syntax used in the query. For examples of invalid query syntax, see
     * <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/searching-example.html#searching-index-query-syntax">Searching
     * with advanced query syntax</a>.</p>
     */
    inline QueryResult& AddWarnings(Warning&& value) { m_warnings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of information related to suggested spell corrections for a query.</p>
     */
    inline const Aws::Vector<SpellCorrectedQuery>& GetSpellCorrectedQueries() const{ return m_spellCorrectedQueries; }

    /**
     * <p>A list of information related to suggested spell corrections for a query.</p>
     */
    inline void SetSpellCorrectedQueries(const Aws::Vector<SpellCorrectedQuery>& value) { m_spellCorrectedQueries = value; }

    /**
     * <p>A list of information related to suggested spell corrections for a query.</p>
     */
    inline void SetSpellCorrectedQueries(Aws::Vector<SpellCorrectedQuery>&& value) { m_spellCorrectedQueries = std::move(value); }

    /**
     * <p>A list of information related to suggested spell corrections for a query.</p>
     */
    inline QueryResult& WithSpellCorrectedQueries(const Aws::Vector<SpellCorrectedQuery>& value) { SetSpellCorrectedQueries(value); return *this;}

    /**
     * <p>A list of information related to suggested spell corrections for a query.</p>
     */
    inline QueryResult& WithSpellCorrectedQueries(Aws::Vector<SpellCorrectedQuery>&& value) { SetSpellCorrectedQueries(std::move(value)); return *this;}

    /**
     * <p>A list of information related to suggested spell corrections for a query.</p>
     */
    inline QueryResult& AddSpellCorrectedQueries(const SpellCorrectedQuery& value) { m_spellCorrectedQueries.push_back(value); return *this; }

    /**
     * <p>A list of information related to suggested spell corrections for a query.</p>
     */
    inline QueryResult& AddSpellCorrectedQueries(SpellCorrectedQuery&& value) { m_spellCorrectedQueries.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of featured result items. Featured results are displayed at the top
     * of the search results page, placed above all other results for certain queries.
     * If there's an exact match of a query, then certain documents are featured in the
     * search results.</p>
     */
    inline const Aws::Vector<FeaturedResultsItem>& GetFeaturedResultsItems() const{ return m_featuredResultsItems; }

    /**
     * <p>The list of featured result items. Featured results are displayed at the top
     * of the search results page, placed above all other results for certain queries.
     * If there's an exact match of a query, then certain documents are featured in the
     * search results.</p>
     */
    inline void SetFeaturedResultsItems(const Aws::Vector<FeaturedResultsItem>& value) { m_featuredResultsItems = value; }

    /**
     * <p>The list of featured result items. Featured results are displayed at the top
     * of the search results page, placed above all other results for certain queries.
     * If there's an exact match of a query, then certain documents are featured in the
     * search results.</p>
     */
    inline void SetFeaturedResultsItems(Aws::Vector<FeaturedResultsItem>&& value) { m_featuredResultsItems = std::move(value); }

    /**
     * <p>The list of featured result items. Featured results are displayed at the top
     * of the search results page, placed above all other results for certain queries.
     * If there's an exact match of a query, then certain documents are featured in the
     * search results.</p>
     */
    inline QueryResult& WithFeaturedResultsItems(const Aws::Vector<FeaturedResultsItem>& value) { SetFeaturedResultsItems(value); return *this;}

    /**
     * <p>The list of featured result items. Featured results are displayed at the top
     * of the search results page, placed above all other results for certain queries.
     * If there's an exact match of a query, then certain documents are featured in the
     * search results.</p>
     */
    inline QueryResult& WithFeaturedResultsItems(Aws::Vector<FeaturedResultsItem>&& value) { SetFeaturedResultsItems(std::move(value)); return *this;}

    /**
     * <p>The list of featured result items. Featured results are displayed at the top
     * of the search results page, placed above all other results for certain queries.
     * If there's an exact match of a query, then certain documents are featured in the
     * search results.</p>
     */
    inline QueryResult& AddFeaturedResultsItems(const FeaturedResultsItem& value) { m_featuredResultsItems.push_back(value); return *this; }

    /**
     * <p>The list of featured result items. Featured results are displayed at the top
     * of the search results page, placed above all other results for certain queries.
     * If there's an exact match of a query, then certain documents are featured in the
     * search results.</p>
     */
    inline QueryResult& AddFeaturedResultsItems(FeaturedResultsItem&& value) { m_featuredResultsItems.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline QueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline QueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline QueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_queryId;

    Aws::Vector<QueryResultItem> m_resultItems;

    Aws::Vector<FacetResult> m_facetResults;

    int m_totalNumberOfResults;

    Aws::Vector<Warning> m_warnings;

    Aws::Vector<SpellCorrectedQuery> m_spellCorrectedQueries;

    Aws::Vector<FeaturedResultsItem> m_featuredResultsItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
