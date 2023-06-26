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
#include <aws/kendra/model/UserContext.h>
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
  class RetrieveRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API RetrieveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Retrieve"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index to retrieve relevant passages for the search.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index to retrieve relevant passages for the search.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index to retrieve relevant passages for the search.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index to retrieve relevant passages for the search.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index to retrieve relevant passages for the search.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index to retrieve relevant passages for the search.</p>
     */
    inline RetrieveRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index to retrieve relevant passages for the search.</p>
     */
    inline RetrieveRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index to retrieve relevant passages for the search.</p>
     */
    inline RetrieveRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The input query text to retrieve relevant passages for the search. Amazon
     * Kendra truncates queries at 30 token words, which excludes punctuation and stop
     * words. Truncation still applies if you use Boolean or more advanced, complex
     * queries.</p>
     */
    inline const Aws::String& GetQueryText() const{ return m_queryText; }

    /**
     * <p>The input query text to retrieve relevant passages for the search. Amazon
     * Kendra truncates queries at 30 token words, which excludes punctuation and stop
     * words. Truncation still applies if you use Boolean or more advanced, complex
     * queries.</p>
     */
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }

    /**
     * <p>The input query text to retrieve relevant passages for the search. Amazon
     * Kendra truncates queries at 30 token words, which excludes punctuation and stop
     * words. Truncation still applies if you use Boolean or more advanced, complex
     * queries.</p>
     */
    inline void SetQueryText(const Aws::String& value) { m_queryTextHasBeenSet = true; m_queryText = value; }

    /**
     * <p>The input query text to retrieve relevant passages for the search. Amazon
     * Kendra truncates queries at 30 token words, which excludes punctuation and stop
     * words. Truncation still applies if you use Boolean or more advanced, complex
     * queries.</p>
     */
    inline void SetQueryText(Aws::String&& value) { m_queryTextHasBeenSet = true; m_queryText = std::move(value); }

    /**
     * <p>The input query text to retrieve relevant passages for the search. Amazon
     * Kendra truncates queries at 30 token words, which excludes punctuation and stop
     * words. Truncation still applies if you use Boolean or more advanced, complex
     * queries.</p>
     */
    inline void SetQueryText(const char* value) { m_queryTextHasBeenSet = true; m_queryText.assign(value); }

    /**
     * <p>The input query text to retrieve relevant passages for the search. Amazon
     * Kendra truncates queries at 30 token words, which excludes punctuation and stop
     * words. Truncation still applies if you use Boolean or more advanced, complex
     * queries.</p>
     */
    inline RetrieveRequest& WithQueryText(const Aws::String& value) { SetQueryText(value); return *this;}

    /**
     * <p>The input query text to retrieve relevant passages for the search. Amazon
     * Kendra truncates queries at 30 token words, which excludes punctuation and stop
     * words. Truncation still applies if you use Boolean or more advanced, complex
     * queries.</p>
     */
    inline RetrieveRequest& WithQueryText(Aws::String&& value) { SetQueryText(std::move(value)); return *this;}

    /**
     * <p>The input query text to retrieve relevant passages for the search. Amazon
     * Kendra truncates queries at 30 token words, which excludes punctuation and stop
     * words. Truncation still applies if you use Boolean or more advanced, complex
     * queries.</p>
     */
    inline RetrieveRequest& WithQueryText(const char* value) { SetQueryText(value); return *this;}


    /**
     * <p>Filters search results by document fields/attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter means you
     * can create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>
     */
    inline const AttributeFilter& GetAttributeFilter() const{ return m_attributeFilter; }

    /**
     * <p>Filters search results by document fields/attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter means you
     * can create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>
     */
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }

    /**
     * <p>Filters search results by document fields/attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter means you
     * can create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>
     */
    inline void SetAttributeFilter(const AttributeFilter& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = value; }

    /**
     * <p>Filters search results by document fields/attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter means you
     * can create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>
     */
    inline void SetAttributeFilter(AttributeFilter&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::move(value); }

    /**
     * <p>Filters search results by document fields/attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter means you
     * can create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>
     */
    inline RetrieveRequest& WithAttributeFilter(const AttributeFilter& value) { SetAttributeFilter(value); return *this;}

    /**
     * <p>Filters search results by document fields/attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter means you
     * can create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>
     */
    inline RetrieveRequest& WithAttributeFilter(AttributeFilter&& value) { SetAttributeFilter(std::move(value)); return *this;}


    /**
     * <p>A list of document fields/attributes to include in the response. You can
     * limit the response to include certain document fields. By default, all document
     * fields are included in the response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedDocumentAttributes() const{ return m_requestedDocumentAttributes; }

    /**
     * <p>A list of document fields/attributes to include in the response. You can
     * limit the response to include certain document fields. By default, all document
     * fields are included in the response.</p>
     */
    inline bool RequestedDocumentAttributesHasBeenSet() const { return m_requestedDocumentAttributesHasBeenSet; }

    /**
     * <p>A list of document fields/attributes to include in the response. You can
     * limit the response to include certain document fields. By default, all document
     * fields are included in the response.</p>
     */
    inline void SetRequestedDocumentAttributes(const Aws::Vector<Aws::String>& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes = value; }

    /**
     * <p>A list of document fields/attributes to include in the response. You can
     * limit the response to include certain document fields. By default, all document
     * fields are included in the response.</p>
     */
    inline void SetRequestedDocumentAttributes(Aws::Vector<Aws::String>&& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes = std::move(value); }

    /**
     * <p>A list of document fields/attributes to include in the response. You can
     * limit the response to include certain document fields. By default, all document
     * fields are included in the response.</p>
     */
    inline RetrieveRequest& WithRequestedDocumentAttributes(const Aws::Vector<Aws::String>& value) { SetRequestedDocumentAttributes(value); return *this;}

    /**
     * <p>A list of document fields/attributes to include in the response. You can
     * limit the response to include certain document fields. By default, all document
     * fields are included in the response.</p>
     */
    inline RetrieveRequest& WithRequestedDocumentAttributes(Aws::Vector<Aws::String>&& value) { SetRequestedDocumentAttributes(std::move(value)); return *this;}

    /**
     * <p>A list of document fields/attributes to include in the response. You can
     * limit the response to include certain document fields. By default, all document
     * fields are included in the response.</p>
     */
    inline RetrieveRequest& AddRequestedDocumentAttributes(const Aws::String& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes.push_back(value); return *this; }

    /**
     * <p>A list of document fields/attributes to include in the response. You can
     * limit the response to include certain document fields. By default, all document
     * fields are included in the response.</p>
     */
    inline RetrieveRequest& AddRequestedDocumentAttributes(Aws::String&& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of document fields/attributes to include in the response. You can
     * limit the response to include certain document fields. By default, all document
     * fields are included in the response.</p>
     */
    inline RetrieveRequest& AddRequestedDocumentAttributes(const char* value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes.push_back(value); return *this; }


    /**
     * <p>Overrides relevance tuning configurations of fields/attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured for fields at the index level, and
     * you use this API to override only some of these fields, then for the fields you
     * did not override, the importance is set to 1.</p>
     */
    inline const Aws::Vector<DocumentRelevanceConfiguration>& GetDocumentRelevanceOverrideConfigurations() const{ return m_documentRelevanceOverrideConfigurations; }

    /**
     * <p>Overrides relevance tuning configurations of fields/attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured for fields at the index level, and
     * you use this API to override only some of these fields, then for the fields you
     * did not override, the importance is set to 1.</p>
     */
    inline bool DocumentRelevanceOverrideConfigurationsHasBeenSet() const { return m_documentRelevanceOverrideConfigurationsHasBeenSet; }

    /**
     * <p>Overrides relevance tuning configurations of fields/attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured for fields at the index level, and
     * you use this API to override only some of these fields, then for the fields you
     * did not override, the importance is set to 1.</p>
     */
    inline void SetDocumentRelevanceOverrideConfigurations(const Aws::Vector<DocumentRelevanceConfiguration>& value) { m_documentRelevanceOverrideConfigurationsHasBeenSet = true; m_documentRelevanceOverrideConfigurations = value; }

    /**
     * <p>Overrides relevance tuning configurations of fields/attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured for fields at the index level, and
     * you use this API to override only some of these fields, then for the fields you
     * did not override, the importance is set to 1.</p>
     */
    inline void SetDocumentRelevanceOverrideConfigurations(Aws::Vector<DocumentRelevanceConfiguration>&& value) { m_documentRelevanceOverrideConfigurationsHasBeenSet = true; m_documentRelevanceOverrideConfigurations = std::move(value); }

    /**
     * <p>Overrides relevance tuning configurations of fields/attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured for fields at the index level, and
     * you use this API to override only some of these fields, then for the fields you
     * did not override, the importance is set to 1.</p>
     */
    inline RetrieveRequest& WithDocumentRelevanceOverrideConfigurations(const Aws::Vector<DocumentRelevanceConfiguration>& value) { SetDocumentRelevanceOverrideConfigurations(value); return *this;}

    /**
     * <p>Overrides relevance tuning configurations of fields/attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured for fields at the index level, and
     * you use this API to override only some of these fields, then for the fields you
     * did not override, the importance is set to 1.</p>
     */
    inline RetrieveRequest& WithDocumentRelevanceOverrideConfigurations(Aws::Vector<DocumentRelevanceConfiguration>&& value) { SetDocumentRelevanceOverrideConfigurations(std::move(value)); return *this;}

    /**
     * <p>Overrides relevance tuning configurations of fields/attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured for fields at the index level, and
     * you use this API to override only some of these fields, then for the fields you
     * did not override, the importance is set to 1.</p>
     */
    inline RetrieveRequest& AddDocumentRelevanceOverrideConfigurations(const DocumentRelevanceConfiguration& value) { m_documentRelevanceOverrideConfigurationsHasBeenSet = true; m_documentRelevanceOverrideConfigurations.push_back(value); return *this; }

    /**
     * <p>Overrides relevance tuning configurations of fields/attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured for fields at the index level, and
     * you use this API to override only some of these fields, then for the fields you
     * did not override, the importance is set to 1.</p>
     */
    inline RetrieveRequest& AddDocumentRelevanceOverrideConfigurations(DocumentRelevanceConfiguration&& value) { m_documentRelevanceOverrideConfigurationsHasBeenSet = true; m_documentRelevanceOverrideConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Retrieved relevant passages are returned in pages the size of the
     * <code>PageSize</code> parameter. By default, Amazon Kendra returns the first
     * page of results. Use this parameter to get result pages after the first one.</p>
     */
    inline int GetPageNumber() const{ return m_pageNumber; }

    /**
     * <p>Retrieved relevant passages are returned in pages the size of the
     * <code>PageSize</code> parameter. By default, Amazon Kendra returns the first
     * page of results. Use this parameter to get result pages after the first one.</p>
     */
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }

    /**
     * <p>Retrieved relevant passages are returned in pages the size of the
     * <code>PageSize</code> parameter. By default, Amazon Kendra returns the first
     * page of results. Use this parameter to get result pages after the first one.</p>
     */
    inline void SetPageNumber(int value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }

    /**
     * <p>Retrieved relevant passages are returned in pages the size of the
     * <code>PageSize</code> parameter. By default, Amazon Kendra returns the first
     * page of results. Use this parameter to get result pages after the first one.</p>
     */
    inline RetrieveRequest& WithPageNumber(int value) { SetPageNumber(value); return *this;}


    /**
     * <p>Sets the number of retrieved relevant passages that are returned in each page
     * of results. The default page size is 10. The maximum number of results returned
     * is 100. If you ask for more than 100 results, only 100 are returned.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>Sets the number of retrieved relevant passages that are returned in each page
     * of results. The default page size is 10. The maximum number of results returned
     * is 100. If you ask for more than 100 results, only 100 are returned.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>Sets the number of retrieved relevant passages that are returned in each page
     * of results. The default page size is 10. The maximum number of results returned
     * is 100. If you ask for more than 100 results, only 100 are returned.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>Sets the number of retrieved relevant passages that are returned in each page
     * of results. The default page size is 10. The maximum number of results returned
     * is 100. If you ask for more than 100 results, only 100 are returned.</p>
     */
    inline RetrieveRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


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
    inline RetrieveRequest& WithUserContext(const UserContext& value) { SetUserContext(value); return *this;}

    /**
     * <p>The user context token or user and group information.</p>
     */
    inline RetrieveRequest& WithUserContext(UserContext&& value) { SetUserContext(std::move(value)); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    AttributeFilter m_attributeFilter;
    bool m_attributeFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_requestedDocumentAttributes;
    bool m_requestedDocumentAttributesHasBeenSet = false;

    Aws::Vector<DocumentRelevanceConfiguration> m_documentRelevanceOverrideConfigurations;
    bool m_documentRelevanceOverrideConfigurationsHasBeenSet = false;

    int m_pageNumber;
    bool m_pageNumberHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    UserContext m_userContext;
    bool m_userContextHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
