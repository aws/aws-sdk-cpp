/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/AttributeFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/QueryResultType.h>
#include <aws/kendra/model/SortingConfiguration.h>
#include <aws/kendra/model/UserContext.h>
#include <aws/kendra/model/SpellCorrectionConfiguration.h>
#include <aws/kendra/model/Facet.h>
#include <aws/kendra/model/DocumentRelevanceConfiguration.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class QueryRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API QueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Query"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index to search. The identifier is returned in the
     * response from the <code>CreateIndex</code> API.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index to search. The identifier is returned in the
     * response from the <code>CreateIndex</code> API.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index to search. The identifier is returned in the
     * response from the <code>CreateIndex</code> API.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index to search. The identifier is returned in the
     * response from the <code>CreateIndex</code> API.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index to search. The identifier is returned in the
     * response from the <code>CreateIndex</code> API.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index to search. The identifier is returned in the
     * response from the <code>CreateIndex</code> API.</p>
     */
    inline QueryRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index to search. The identifier is returned in the
     * response from the <code>CreateIndex</code> API.</p>
     */
    inline QueryRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index to search. The identifier is returned in the
     * response from the <code>CreateIndex</code> API.</p>
     */
    inline QueryRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The input query text for the search. Amazon Kendra truncates queries at 30
     * token words, which excludes punctuation and stop words. Truncation still applies
     * if you use Boolean or more advanced, complex queries. </p>
     */
    inline const Aws::String& GetQueryText() const{ return m_queryText; }

    /**
     * <p>The input query text for the search. Amazon Kendra truncates queries at 30
     * token words, which excludes punctuation and stop words. Truncation still applies
     * if you use Boolean or more advanced, complex queries. </p>
     */
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }

    /**
     * <p>The input query text for the search. Amazon Kendra truncates queries at 30
     * token words, which excludes punctuation and stop words. Truncation still applies
     * if you use Boolean or more advanced, complex queries. </p>
     */
    inline void SetQueryText(const Aws::String& value) { m_queryTextHasBeenSet = true; m_queryText = value; }

    /**
     * <p>The input query text for the search. Amazon Kendra truncates queries at 30
     * token words, which excludes punctuation and stop words. Truncation still applies
     * if you use Boolean or more advanced, complex queries. </p>
     */
    inline void SetQueryText(Aws::String&& value) { m_queryTextHasBeenSet = true; m_queryText = std::move(value); }

    /**
     * <p>The input query text for the search. Amazon Kendra truncates queries at 30
     * token words, which excludes punctuation and stop words. Truncation still applies
     * if you use Boolean or more advanced, complex queries. </p>
     */
    inline void SetQueryText(const char* value) { m_queryTextHasBeenSet = true; m_queryText.assign(value); }

    /**
     * <p>The input query text for the search. Amazon Kendra truncates queries at 30
     * token words, which excludes punctuation and stop words. Truncation still applies
     * if you use Boolean or more advanced, complex queries. </p>
     */
    inline QueryRequest& WithQueryText(const Aws::String& value) { SetQueryText(value); return *this;}

    /**
     * <p>The input query text for the search. Amazon Kendra truncates queries at 30
     * token words, which excludes punctuation and stop words. Truncation still applies
     * if you use Boolean or more advanced, complex queries. </p>
     */
    inline QueryRequest& WithQueryText(Aws::String&& value) { SetQueryText(std::move(value)); return *this;}

    /**
     * <p>The input query text for the search. Amazon Kendra truncates queries at 30
     * token words, which excludes punctuation and stop words. Truncation still applies
     * if you use Boolean or more advanced, complex queries. </p>
     */
    inline QueryRequest& WithQueryText(const char* value) { SetQueryText(value); return *this;}


    /**
     * <p>Enables filtered searches based on document attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter enables you
     * to create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>
     */
    inline const AttributeFilter& GetAttributeFilter() const{ return m_attributeFilter; }

    /**
     * <p>Enables filtered searches based on document attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter enables you
     * to create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>
     */
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }

    /**
     * <p>Enables filtered searches based on document attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter enables you
     * to create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>
     */
    inline void SetAttributeFilter(const AttributeFilter& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = value; }

    /**
     * <p>Enables filtered searches based on document attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter enables you
     * to create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>
     */
    inline void SetAttributeFilter(AttributeFilter&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::move(value); }

    /**
     * <p>Enables filtered searches based on document attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter enables you
     * to create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>
     */
    inline QueryRequest& WithAttributeFilter(const AttributeFilter& value) { SetAttributeFilter(value); return *this;}

    /**
     * <p>Enables filtered searches based on document attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter enables you
     * to create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>
     */
    inline QueryRequest& WithAttributeFilter(AttributeFilter&& value) { SetAttributeFilter(std::move(value)); return *this;}


    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. This helps your users narrow their search.</p>
     */
    inline const Aws::Vector<Facet>& GetFacets() const{ return m_facets; }

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. This helps your users narrow their search.</p>
     */
    inline bool FacetsHasBeenSet() const { return m_facetsHasBeenSet; }

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. This helps your users narrow their search.</p>
     */
    inline void SetFacets(const Aws::Vector<Facet>& value) { m_facetsHasBeenSet = true; m_facets = value; }

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. This helps your users narrow their search.</p>
     */
    inline void SetFacets(Aws::Vector<Facet>&& value) { m_facetsHasBeenSet = true; m_facets = std::move(value); }

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. This helps your users narrow their search.</p>
     */
    inline QueryRequest& WithFacets(const Aws::Vector<Facet>& value) { SetFacets(value); return *this;}

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. This helps your users narrow their search.</p>
     */
    inline QueryRequest& WithFacets(Aws::Vector<Facet>&& value) { SetFacets(std::move(value)); return *this;}

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. This helps your users narrow their search.</p>
     */
    inline QueryRequest& AddFacets(const Facet& value) { m_facetsHasBeenSet = true; m_facets.push_back(value); return *this; }

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. This helps your users narrow their search.</p>
     */
    inline QueryRequest& AddFacets(Facet&& value) { m_facetsHasBeenSet = true; m_facets.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of document attributes to include in the response. You can limit the
     * response to include certain document attributes. By default all document
     * attributes are included in the response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedDocumentAttributes() const{ return m_requestedDocumentAttributes; }

    /**
     * <p>An array of document attributes to include in the response. You can limit the
     * response to include certain document attributes. By default all document
     * attributes are included in the response.</p>
     */
    inline bool RequestedDocumentAttributesHasBeenSet() const { return m_requestedDocumentAttributesHasBeenSet; }

    /**
     * <p>An array of document attributes to include in the response. You can limit the
     * response to include certain document attributes. By default all document
     * attributes are included in the response.</p>
     */
    inline void SetRequestedDocumentAttributes(const Aws::Vector<Aws::String>& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes = value; }

    /**
     * <p>An array of document attributes to include in the response. You can limit the
     * response to include certain document attributes. By default all document
     * attributes are included in the response.</p>
     */
    inline void SetRequestedDocumentAttributes(Aws::Vector<Aws::String>&& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes = std::move(value); }

    /**
     * <p>An array of document attributes to include in the response. You can limit the
     * response to include certain document attributes. By default all document
     * attributes are included in the response.</p>
     */
    inline QueryRequest& WithRequestedDocumentAttributes(const Aws::Vector<Aws::String>& value) { SetRequestedDocumentAttributes(value); return *this;}

    /**
     * <p>An array of document attributes to include in the response. You can limit the
     * response to include certain document attributes. By default all document
     * attributes are included in the response.</p>
     */
    inline QueryRequest& WithRequestedDocumentAttributes(Aws::Vector<Aws::String>&& value) { SetRequestedDocumentAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of document attributes to include in the response. You can limit the
     * response to include certain document attributes. By default all document
     * attributes are included in the response.</p>
     */
    inline QueryRequest& AddRequestedDocumentAttributes(const Aws::String& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes.push_back(value); return *this; }

    /**
     * <p>An array of document attributes to include in the response. You can limit the
     * response to include certain document attributes. By default all document
     * attributes are included in the response.</p>
     */
    inline QueryRequest& AddRequestedDocumentAttributes(Aws::String&& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of document attributes to include in the response. You can limit the
     * response to include certain document attributes. By default all document
     * attributes are included in the response.</p>
     */
    inline QueryRequest& AddRequestedDocumentAttributes(const char* value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes.push_back(value); return *this; }


    /**
     * <p>Sets the type of query. Only results for the specified query type are
     * returned.</p>
     */
    inline const QueryResultType& GetQueryResultTypeFilter() const{ return m_queryResultTypeFilter; }

    /**
     * <p>Sets the type of query. Only results for the specified query type are
     * returned.</p>
     */
    inline bool QueryResultTypeFilterHasBeenSet() const { return m_queryResultTypeFilterHasBeenSet; }

    /**
     * <p>Sets the type of query. Only results for the specified query type are
     * returned.</p>
     */
    inline void SetQueryResultTypeFilter(const QueryResultType& value) { m_queryResultTypeFilterHasBeenSet = true; m_queryResultTypeFilter = value; }

    /**
     * <p>Sets the type of query. Only results for the specified query type are
     * returned.</p>
     */
    inline void SetQueryResultTypeFilter(QueryResultType&& value) { m_queryResultTypeFilterHasBeenSet = true; m_queryResultTypeFilter = std::move(value); }

    /**
     * <p>Sets the type of query. Only results for the specified query type are
     * returned.</p>
     */
    inline QueryRequest& WithQueryResultTypeFilter(const QueryResultType& value) { SetQueryResultTypeFilter(value); return *this;}

    /**
     * <p>Sets the type of query. Only results for the specified query type are
     * returned.</p>
     */
    inline QueryRequest& WithQueryResultTypeFilter(QueryResultType&& value) { SetQueryResultTypeFilter(std::move(value)); return *this;}


    /**
     * <p>Overrides relevance tuning configurations of fields or attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured at the index level, but you do not
     * use this API to override any relevance tuning in the index, then Amazon Kendra
     * uses the relevance tuning that is configured at the index level.</p> <p>If there
     * is relevance tuning configured for fields at the index level, but you use this
     * API to override only some of these fields, then for the fields you did not
     * override, the importance is set to 1.</p>
     */
    inline const Aws::Vector<DocumentRelevanceConfiguration>& GetDocumentRelevanceOverrideConfigurations() const{ return m_documentRelevanceOverrideConfigurations; }

    /**
     * <p>Overrides relevance tuning configurations of fields or attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured at the index level, but you do not
     * use this API to override any relevance tuning in the index, then Amazon Kendra
     * uses the relevance tuning that is configured at the index level.</p> <p>If there
     * is relevance tuning configured for fields at the index level, but you use this
     * API to override only some of these fields, then for the fields you did not
     * override, the importance is set to 1.</p>
     */
    inline bool DocumentRelevanceOverrideConfigurationsHasBeenSet() const { return m_documentRelevanceOverrideConfigurationsHasBeenSet; }

    /**
     * <p>Overrides relevance tuning configurations of fields or attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured at the index level, but you do not
     * use this API to override any relevance tuning in the index, then Amazon Kendra
     * uses the relevance tuning that is configured at the index level.</p> <p>If there
     * is relevance tuning configured for fields at the index level, but you use this
     * API to override only some of these fields, then for the fields you did not
     * override, the importance is set to 1.</p>
     */
    inline void SetDocumentRelevanceOverrideConfigurations(const Aws::Vector<DocumentRelevanceConfiguration>& value) { m_documentRelevanceOverrideConfigurationsHasBeenSet = true; m_documentRelevanceOverrideConfigurations = value; }

    /**
     * <p>Overrides relevance tuning configurations of fields or attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured at the index level, but you do not
     * use this API to override any relevance tuning in the index, then Amazon Kendra
     * uses the relevance tuning that is configured at the index level.</p> <p>If there
     * is relevance tuning configured for fields at the index level, but you use this
     * API to override only some of these fields, then for the fields you did not
     * override, the importance is set to 1.</p>
     */
    inline void SetDocumentRelevanceOverrideConfigurations(Aws::Vector<DocumentRelevanceConfiguration>&& value) { m_documentRelevanceOverrideConfigurationsHasBeenSet = true; m_documentRelevanceOverrideConfigurations = std::move(value); }

    /**
     * <p>Overrides relevance tuning configurations of fields or attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured at the index level, but you do not
     * use this API to override any relevance tuning in the index, then Amazon Kendra
     * uses the relevance tuning that is configured at the index level.</p> <p>If there
     * is relevance tuning configured for fields at the index level, but you use this
     * API to override only some of these fields, then for the fields you did not
     * override, the importance is set to 1.</p>
     */
    inline QueryRequest& WithDocumentRelevanceOverrideConfigurations(const Aws::Vector<DocumentRelevanceConfiguration>& value) { SetDocumentRelevanceOverrideConfigurations(value); return *this;}

    /**
     * <p>Overrides relevance tuning configurations of fields or attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured at the index level, but you do not
     * use this API to override any relevance tuning in the index, then Amazon Kendra
     * uses the relevance tuning that is configured at the index level.</p> <p>If there
     * is relevance tuning configured for fields at the index level, but you use this
     * API to override only some of these fields, then for the fields you did not
     * override, the importance is set to 1.</p>
     */
    inline QueryRequest& WithDocumentRelevanceOverrideConfigurations(Aws::Vector<DocumentRelevanceConfiguration>&& value) { SetDocumentRelevanceOverrideConfigurations(std::move(value)); return *this;}

    /**
     * <p>Overrides relevance tuning configurations of fields or attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured at the index level, but you do not
     * use this API to override any relevance tuning in the index, then Amazon Kendra
     * uses the relevance tuning that is configured at the index level.</p> <p>If there
     * is relevance tuning configured for fields at the index level, but you use this
     * API to override only some of these fields, then for the fields you did not
     * override, the importance is set to 1.</p>
     */
    inline QueryRequest& AddDocumentRelevanceOverrideConfigurations(const DocumentRelevanceConfiguration& value) { m_documentRelevanceOverrideConfigurationsHasBeenSet = true; m_documentRelevanceOverrideConfigurations.push_back(value); return *this; }

    /**
     * <p>Overrides relevance tuning configurations of fields or attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured at the index level, but you do not
     * use this API to override any relevance tuning in the index, then Amazon Kendra
     * uses the relevance tuning that is configured at the index level.</p> <p>If there
     * is relevance tuning configured for fields at the index level, but you use this
     * API to override only some of these fields, then for the fields you did not
     * override, the importance is set to 1.</p>
     */
    inline QueryRequest& AddDocumentRelevanceOverrideConfigurations(DocumentRelevanceConfiguration&& value) { m_documentRelevanceOverrideConfigurationsHasBeenSet = true; m_documentRelevanceOverrideConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Query results are returned in pages the size of the <code>PageSize</code>
     * parameter. By default, Amazon Kendra returns the first page of results. Use this
     * parameter to get result pages after the first one.</p>
     */
    inline int GetPageNumber() const{ return m_pageNumber; }

    /**
     * <p>Query results are returned in pages the size of the <code>PageSize</code>
     * parameter. By default, Amazon Kendra returns the first page of results. Use this
     * parameter to get result pages after the first one.</p>
     */
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }

    /**
     * <p>Query results are returned in pages the size of the <code>PageSize</code>
     * parameter. By default, Amazon Kendra returns the first page of results. Use this
     * parameter to get result pages after the first one.</p>
     */
    inline void SetPageNumber(int value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }

    /**
     * <p>Query results are returned in pages the size of the <code>PageSize</code>
     * parameter. By default, Amazon Kendra returns the first page of results. Use this
     * parameter to get result pages after the first one.</p>
     */
    inline QueryRequest& WithPageNumber(int value) { SetPageNumber(value); return *this;}


    /**
     * <p>Sets the number of results that are returned in each page of results. The
     * default page size is 10. The maximum number of results returned is 100. If you
     * ask for more than 100 results, only 100 are returned.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>Sets the number of results that are returned in each page of results. The
     * default page size is 10. The maximum number of results returned is 100. If you
     * ask for more than 100 results, only 100 are returned.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>Sets the number of results that are returned in each page of results. The
     * default page size is 10. The maximum number of results returned is 100. If you
     * ask for more than 100 results, only 100 are returned.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>Sets the number of results that are returned in each page of results. The
     * default page size is 10. The maximum number of results returned is 100. If you
     * ask for more than 100 results, only 100 are returned.</p>
     */
    inline QueryRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>Provides information that determines how the results of the query are sorted.
     * You can set the field that Amazon Kendra should sort the results on, and specify
     * whether the results should be sorted in ascending or descending order. In the
     * case of ties in sorting the results, the results are sorted by relevance.</p>
     * <p>If you don't provide sorting configuration, the results are sorted by the
     * relevance that Amazon Kendra determines for the result.</p>
     */
    inline const SortingConfiguration& GetSortingConfiguration() const{ return m_sortingConfiguration; }

    /**
     * <p>Provides information that determines how the results of the query are sorted.
     * You can set the field that Amazon Kendra should sort the results on, and specify
     * whether the results should be sorted in ascending or descending order. In the
     * case of ties in sorting the results, the results are sorted by relevance.</p>
     * <p>If you don't provide sorting configuration, the results are sorted by the
     * relevance that Amazon Kendra determines for the result.</p>
     */
    inline bool SortingConfigurationHasBeenSet() const { return m_sortingConfigurationHasBeenSet; }

    /**
     * <p>Provides information that determines how the results of the query are sorted.
     * You can set the field that Amazon Kendra should sort the results on, and specify
     * whether the results should be sorted in ascending or descending order. In the
     * case of ties in sorting the results, the results are sorted by relevance.</p>
     * <p>If you don't provide sorting configuration, the results are sorted by the
     * relevance that Amazon Kendra determines for the result.</p>
     */
    inline void SetSortingConfiguration(const SortingConfiguration& value) { m_sortingConfigurationHasBeenSet = true; m_sortingConfiguration = value; }

    /**
     * <p>Provides information that determines how the results of the query are sorted.
     * You can set the field that Amazon Kendra should sort the results on, and specify
     * whether the results should be sorted in ascending or descending order. In the
     * case of ties in sorting the results, the results are sorted by relevance.</p>
     * <p>If you don't provide sorting configuration, the results are sorted by the
     * relevance that Amazon Kendra determines for the result.</p>
     */
    inline void SetSortingConfiguration(SortingConfiguration&& value) { m_sortingConfigurationHasBeenSet = true; m_sortingConfiguration = std::move(value); }

    /**
     * <p>Provides information that determines how the results of the query are sorted.
     * You can set the field that Amazon Kendra should sort the results on, and specify
     * whether the results should be sorted in ascending or descending order. In the
     * case of ties in sorting the results, the results are sorted by relevance.</p>
     * <p>If you don't provide sorting configuration, the results are sorted by the
     * relevance that Amazon Kendra determines for the result.</p>
     */
    inline QueryRequest& WithSortingConfiguration(const SortingConfiguration& value) { SetSortingConfiguration(value); return *this;}

    /**
     * <p>Provides information that determines how the results of the query are sorted.
     * You can set the field that Amazon Kendra should sort the results on, and specify
     * whether the results should be sorted in ascending or descending order. In the
     * case of ties in sorting the results, the results are sorted by relevance.</p>
     * <p>If you don't provide sorting configuration, the results are sorted by the
     * relevance that Amazon Kendra determines for the result.</p>
     */
    inline QueryRequest& WithSortingConfiguration(SortingConfiguration&& value) { SetSortingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The user context token or user and group information.</p>
     */
    inline const UserContext& GetUserContext() const{ return m_userContext; }

    /**
     * <p>The user context token or user and group information.</p>
     */
    inline bool UserContextHasBeenSet() const { return m_userContextHasBeenSet; }

    /**
     * <p>The user context token or user and group information.</p>
     */
    inline void SetUserContext(const UserContext& value) { m_userContextHasBeenSet = true; m_userContext = value; }

    /**
     * <p>The user context token or user and group information.</p>
     */
    inline void SetUserContext(UserContext&& value) { m_userContextHasBeenSet = true; m_userContext = std::move(value); }

    /**
     * <p>The user context token or user and group information.</p>
     */
    inline QueryRequest& WithUserContext(const UserContext& value) { SetUserContext(value); return *this;}

    /**
     * <p>The user context token or user and group information.</p>
     */
    inline QueryRequest& WithUserContext(UserContext&& value) { SetUserContext(std::move(value)); return *this;}


    /**
     * <p>Provides an identifier for a specific user. The <code>VisitorId</code> should
     * be a unique identifier, such as a GUID. Don't use personally identifiable
     * information, such as the user's email address, as the
     * <code>VisitorId</code>.</p>
     */
    inline const Aws::String& GetVisitorId() const{ return m_visitorId; }

    /**
     * <p>Provides an identifier for a specific user. The <code>VisitorId</code> should
     * be a unique identifier, such as a GUID. Don't use personally identifiable
     * information, such as the user's email address, as the
     * <code>VisitorId</code>.</p>
     */
    inline bool VisitorIdHasBeenSet() const { return m_visitorIdHasBeenSet; }

    /**
     * <p>Provides an identifier for a specific user. The <code>VisitorId</code> should
     * be a unique identifier, such as a GUID. Don't use personally identifiable
     * information, such as the user's email address, as the
     * <code>VisitorId</code>.</p>
     */
    inline void SetVisitorId(const Aws::String& value) { m_visitorIdHasBeenSet = true; m_visitorId = value; }

    /**
     * <p>Provides an identifier for a specific user. The <code>VisitorId</code> should
     * be a unique identifier, such as a GUID. Don't use personally identifiable
     * information, such as the user's email address, as the
     * <code>VisitorId</code>.</p>
     */
    inline void SetVisitorId(Aws::String&& value) { m_visitorIdHasBeenSet = true; m_visitorId = std::move(value); }

    /**
     * <p>Provides an identifier for a specific user. The <code>VisitorId</code> should
     * be a unique identifier, such as a GUID. Don't use personally identifiable
     * information, such as the user's email address, as the
     * <code>VisitorId</code>.</p>
     */
    inline void SetVisitorId(const char* value) { m_visitorIdHasBeenSet = true; m_visitorId.assign(value); }

    /**
     * <p>Provides an identifier for a specific user. The <code>VisitorId</code> should
     * be a unique identifier, such as a GUID. Don't use personally identifiable
     * information, such as the user's email address, as the
     * <code>VisitorId</code>.</p>
     */
    inline QueryRequest& WithVisitorId(const Aws::String& value) { SetVisitorId(value); return *this;}

    /**
     * <p>Provides an identifier for a specific user. The <code>VisitorId</code> should
     * be a unique identifier, such as a GUID. Don't use personally identifiable
     * information, such as the user's email address, as the
     * <code>VisitorId</code>.</p>
     */
    inline QueryRequest& WithVisitorId(Aws::String&& value) { SetVisitorId(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier for a specific user. The <code>VisitorId</code> should
     * be a unique identifier, such as a GUID. Don't use personally identifiable
     * information, such as the user's email address, as the
     * <code>VisitorId</code>.</p>
     */
    inline QueryRequest& WithVisitorId(const char* value) { SetVisitorId(value); return *this;}


    /**
     * <p>Enables suggested spell corrections for queries.</p>
     */
    inline const SpellCorrectionConfiguration& GetSpellCorrectionConfiguration() const{ return m_spellCorrectionConfiguration; }

    /**
     * <p>Enables suggested spell corrections for queries.</p>
     */
    inline bool SpellCorrectionConfigurationHasBeenSet() const { return m_spellCorrectionConfigurationHasBeenSet; }

    /**
     * <p>Enables suggested spell corrections for queries.</p>
     */
    inline void SetSpellCorrectionConfiguration(const SpellCorrectionConfiguration& value) { m_spellCorrectionConfigurationHasBeenSet = true; m_spellCorrectionConfiguration = value; }

    /**
     * <p>Enables suggested spell corrections for queries.</p>
     */
    inline void SetSpellCorrectionConfiguration(SpellCorrectionConfiguration&& value) { m_spellCorrectionConfigurationHasBeenSet = true; m_spellCorrectionConfiguration = std::move(value); }

    /**
     * <p>Enables suggested spell corrections for queries.</p>
     */
    inline QueryRequest& WithSpellCorrectionConfiguration(const SpellCorrectionConfiguration& value) { SetSpellCorrectionConfiguration(value); return *this;}

    /**
     * <p>Enables suggested spell corrections for queries.</p>
     */
    inline QueryRequest& WithSpellCorrectionConfiguration(SpellCorrectionConfiguration&& value) { SetSpellCorrectionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    AttributeFilter m_attributeFilter;
    bool m_attributeFilterHasBeenSet = false;

    Aws::Vector<Facet> m_facets;
    bool m_facetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_requestedDocumentAttributes;
    bool m_requestedDocumentAttributesHasBeenSet = false;

    QueryResultType m_queryResultTypeFilter;
    bool m_queryResultTypeFilterHasBeenSet = false;

    Aws::Vector<DocumentRelevanceConfiguration> m_documentRelevanceOverrideConfigurations;
    bool m_documentRelevanceOverrideConfigurationsHasBeenSet = false;

    int m_pageNumber;
    bool m_pageNumberHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    SortingConfiguration m_sortingConfiguration;
    bool m_sortingConfigurationHasBeenSet = false;

    UserContext m_userContext;
    bool m_userContextHasBeenSet = false;

    Aws::String m_visitorId;
    bool m_visitorIdHasBeenSet = false;

    SpellCorrectionConfiguration m_spellCorrectionConfiguration;
    bool m_spellCorrectionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
