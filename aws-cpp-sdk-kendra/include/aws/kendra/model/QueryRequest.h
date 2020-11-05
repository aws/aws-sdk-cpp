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
#include <aws/kendra/model/Facet.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class AWS_KENDRA_API QueryRequest : public KendraRequest
  {
  public:
    QueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Query"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the index to search. The identifier is returned in
     * the response from the operation.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The unique identifier of the index to search. The identifier is returned in
     * the response from the operation.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The unique identifier of the index to search. The identifier is returned in
     * the response from the operation.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The unique identifier of the index to search. The identifier is returned in
     * the response from the operation.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The unique identifier of the index to search. The identifier is returned in
     * the response from the operation.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The unique identifier of the index to search. The identifier is returned in
     * the response from the operation.</p>
     */
    inline QueryRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The unique identifier of the index to search. The identifier is returned in
     * the response from the operation.</p>
     */
    inline QueryRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the index to search. The identifier is returned in
     * the response from the operation.</p>
     */
    inline QueryRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The text to search for.</p>
     */
    inline const Aws::String& GetQueryText() const{ return m_queryText; }

    /**
     * <p>The text to search for.</p>
     */
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }

    /**
     * <p>The text to search for.</p>
     */
    inline void SetQueryText(const Aws::String& value) { m_queryTextHasBeenSet = true; m_queryText = value; }

    /**
     * <p>The text to search for.</p>
     */
    inline void SetQueryText(Aws::String&& value) { m_queryTextHasBeenSet = true; m_queryText = std::move(value); }

    /**
     * <p>The text to search for.</p>
     */
    inline void SetQueryText(const char* value) { m_queryTextHasBeenSet = true; m_queryText.assign(value); }

    /**
     * <p>The text to search for.</p>
     */
    inline QueryRequest& WithQueryText(const Aws::String& value) { SetQueryText(value); return *this;}

    /**
     * <p>The text to search for.</p>
     */
    inline QueryRequest& WithQueryText(Aws::String&& value) { SetQueryText(std::move(value)); return *this;}

    /**
     * <p>The text to search for.</p>
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
     * attribute key specified. You can use this information to help narrow the search
     * for your user.</p>
     */
    inline const Aws::Vector<Facet>& GetFacets() const{ return m_facets; }

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. You can use this information to help narrow the search
     * for your user.</p>
     */
    inline bool FacetsHasBeenSet() const { return m_facetsHasBeenSet; }

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. You can use this information to help narrow the search
     * for your user.</p>
     */
    inline void SetFacets(const Aws::Vector<Facet>& value) { m_facetsHasBeenSet = true; m_facets = value; }

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. You can use this information to help narrow the search
     * for your user.</p>
     */
    inline void SetFacets(Aws::Vector<Facet>&& value) { m_facetsHasBeenSet = true; m_facets = std::move(value); }

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. You can use this information to help narrow the search
     * for your user.</p>
     */
    inline QueryRequest& WithFacets(const Aws::Vector<Facet>& value) { SetFacets(value); return *this;}

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. You can use this information to help narrow the search
     * for your user.</p>
     */
    inline QueryRequest& WithFacets(Aws::Vector<Facet>&& value) { SetFacets(std::move(value)); return *this;}

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. You can use this information to help narrow the search
     * for your user.</p>
     */
    inline QueryRequest& AddFacets(const Facet& value) { m_facetsHasBeenSet = true; m_facets.push_back(value); return *this; }

    /**
     * <p>An array of documents attributes. Amazon Kendra returns a count for each
     * attribute key specified. You can use this information to help narrow the search
     * for your user.</p>
     */
    inline QueryRequest& AddFacets(Facet&& value) { m_facetsHasBeenSet = true; m_facets.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of document attributes to include in the response. No other document
     * attributes are included in the response. By default all document attributes are
     * included in the response. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedDocumentAttributes() const{ return m_requestedDocumentAttributes; }

    /**
     * <p>An array of document attributes to include in the response. No other document
     * attributes are included in the response. By default all document attributes are
     * included in the response. </p>
     */
    inline bool RequestedDocumentAttributesHasBeenSet() const { return m_requestedDocumentAttributesHasBeenSet; }

    /**
     * <p>An array of document attributes to include in the response. No other document
     * attributes are included in the response. By default all document attributes are
     * included in the response. </p>
     */
    inline void SetRequestedDocumentAttributes(const Aws::Vector<Aws::String>& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes = value; }

    /**
     * <p>An array of document attributes to include in the response. No other document
     * attributes are included in the response. By default all document attributes are
     * included in the response. </p>
     */
    inline void SetRequestedDocumentAttributes(Aws::Vector<Aws::String>&& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes = std::move(value); }

    /**
     * <p>An array of document attributes to include in the response. No other document
     * attributes are included in the response. By default all document attributes are
     * included in the response. </p>
     */
    inline QueryRequest& WithRequestedDocumentAttributes(const Aws::Vector<Aws::String>& value) { SetRequestedDocumentAttributes(value); return *this;}

    /**
     * <p>An array of document attributes to include in the response. No other document
     * attributes are included in the response. By default all document attributes are
     * included in the response. </p>
     */
    inline QueryRequest& WithRequestedDocumentAttributes(Aws::Vector<Aws::String>&& value) { SetRequestedDocumentAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of document attributes to include in the response. No other document
     * attributes are included in the response. By default all document attributes are
     * included in the response. </p>
     */
    inline QueryRequest& AddRequestedDocumentAttributes(const Aws::String& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes.push_back(value); return *this; }

    /**
     * <p>An array of document attributes to include in the response. No other document
     * attributes are included in the response. By default all document attributes are
     * included in the response. </p>
     */
    inline QueryRequest& AddRequestedDocumentAttributes(Aws::String&& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of document attributes to include in the response. No other document
     * attributes are included in the response. By default all document attributes are
     * included in the response. </p>
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
     * <p>The user context token.</p>
     */
    inline const UserContext& GetUserContext() const{ return m_userContext; }

    /**
     * <p>The user context token.</p>
     */
    inline bool UserContextHasBeenSet() const { return m_userContextHasBeenSet; }

    /**
     * <p>The user context token.</p>
     */
    inline void SetUserContext(const UserContext& value) { m_userContextHasBeenSet = true; m_userContext = value; }

    /**
     * <p>The user context token.</p>
     */
    inline void SetUserContext(UserContext&& value) { m_userContextHasBeenSet = true; m_userContext = std::move(value); }

    /**
     * <p>The user context token.</p>
     */
    inline QueryRequest& WithUserContext(const UserContext& value) { SetUserContext(value); return *this;}

    /**
     * <p>The user context token.</p>
     */
    inline QueryRequest& WithUserContext(UserContext&& value) { SetUserContext(std::move(value)); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet;

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet;

    AttributeFilter m_attributeFilter;
    bool m_attributeFilterHasBeenSet;

    Aws::Vector<Facet> m_facets;
    bool m_facetsHasBeenSet;

    Aws::Vector<Aws::String> m_requestedDocumentAttributes;
    bool m_requestedDocumentAttributesHasBeenSet;

    QueryResultType m_queryResultTypeFilter;
    bool m_queryResultTypeFilterHasBeenSet;

    int m_pageNumber;
    bool m_pageNumberHasBeenSet;

    int m_pageSize;
    bool m_pageSizeHasBeenSet;

    SortingConfiguration m_sortingConfiguration;
    bool m_sortingConfigurationHasBeenSet;

    UserContext m_userContext;
    bool m_userContextHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
