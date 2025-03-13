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
    AWS_KENDRA_API RetrieveRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Retrieve"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the index to retrieve relevant passages for the search.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    RetrieveRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input query text to retrieve relevant passages for the search. Amazon
     * Kendra truncates queries at 30 token words, which excludes punctuation and stop
     * words. Truncation still applies if you use Boolean or more advanced, complex
     * queries. For example, <code>Timeoff AND October AND Category:HR</code> is
     * counted as 3 tokens: <code>timeoff</code>, <code>october</code>,
     * <code>hr</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/searching-example.html#searching-index-query-syntax">Searching
     * with advanced query syntax</a> in the Amazon Kendra Developer Guide. </p>
     */
    inline const Aws::String& GetQueryText() const { return m_queryText; }
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }
    template<typename QueryTextT = Aws::String>
    void SetQueryText(QueryTextT&& value) { m_queryTextHasBeenSet = true; m_queryText = std::forward<QueryTextT>(value); }
    template<typename QueryTextT = Aws::String>
    RetrieveRequest& WithQueryText(QueryTextT&& value) { SetQueryText(std::forward<QueryTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters search results by document fields/attributes. You can only provide
     * one attribute filter; however, the <code>AndAllFilters</code>,
     * <code>NotFilter</code>, and <code>OrAllFilters</code> parameters contain a list
     * of other filters.</p> <p>The <code>AttributeFilter</code> parameter means you
     * can create a set of filtering rules that a document must satisfy to be included
     * in the query results.</p>  <p>For Amazon Kendra Gen AI Enterprise Edition
     * indices use <code>AttributeFilter</code> to enable document filtering for end
     * users using <code>_email_id</code> or include public documents
     * (<code>_email_id=null</code>).</p> 
     */
    inline const AttributeFilter& GetAttributeFilter() const { return m_attributeFilter; }
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
    template<typename AttributeFilterT = AttributeFilter>
    void SetAttributeFilter(AttributeFilterT&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::forward<AttributeFilterT>(value); }
    template<typename AttributeFilterT = AttributeFilter>
    RetrieveRequest& WithAttributeFilter(AttributeFilterT&& value) { SetAttributeFilter(std::forward<AttributeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of document fields/attributes to include in the response. You can
     * limit the response to include certain document fields. By default, all document
     * fields are included in the response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedDocumentAttributes() const { return m_requestedDocumentAttributes; }
    inline bool RequestedDocumentAttributesHasBeenSet() const { return m_requestedDocumentAttributesHasBeenSet; }
    template<typename RequestedDocumentAttributesT = Aws::Vector<Aws::String>>
    void SetRequestedDocumentAttributes(RequestedDocumentAttributesT&& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes = std::forward<RequestedDocumentAttributesT>(value); }
    template<typename RequestedDocumentAttributesT = Aws::Vector<Aws::String>>
    RetrieveRequest& WithRequestedDocumentAttributes(RequestedDocumentAttributesT&& value) { SetRequestedDocumentAttributes(std::forward<RequestedDocumentAttributesT>(value)); return *this;}
    template<typename RequestedDocumentAttributesT = Aws::String>
    RetrieveRequest& AddRequestedDocumentAttributes(RequestedDocumentAttributesT&& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes.emplace_back(std::forward<RequestedDocumentAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Overrides relevance tuning configurations of fields/attributes set at the
     * index level.</p> <p>If you use this API to override the relevance tuning
     * configured at the index level, but there is no relevance tuning configured at
     * the index level, then Amazon Kendra does not apply any relevance tuning.</p>
     * <p>If there is relevance tuning configured for fields at the index level, and
     * you use this API to override only some of these fields, then for the fields you
     * did not override, the importance is set to 1.</p>
     */
    inline const Aws::Vector<DocumentRelevanceConfiguration>& GetDocumentRelevanceOverrideConfigurations() const { return m_documentRelevanceOverrideConfigurations; }
    inline bool DocumentRelevanceOverrideConfigurationsHasBeenSet() const { return m_documentRelevanceOverrideConfigurationsHasBeenSet; }
    template<typename DocumentRelevanceOverrideConfigurationsT = Aws::Vector<DocumentRelevanceConfiguration>>
    void SetDocumentRelevanceOverrideConfigurations(DocumentRelevanceOverrideConfigurationsT&& value) { m_documentRelevanceOverrideConfigurationsHasBeenSet = true; m_documentRelevanceOverrideConfigurations = std::forward<DocumentRelevanceOverrideConfigurationsT>(value); }
    template<typename DocumentRelevanceOverrideConfigurationsT = Aws::Vector<DocumentRelevanceConfiguration>>
    RetrieveRequest& WithDocumentRelevanceOverrideConfigurations(DocumentRelevanceOverrideConfigurationsT&& value) { SetDocumentRelevanceOverrideConfigurations(std::forward<DocumentRelevanceOverrideConfigurationsT>(value)); return *this;}
    template<typename DocumentRelevanceOverrideConfigurationsT = DocumentRelevanceConfiguration>
    RetrieveRequest& AddDocumentRelevanceOverrideConfigurations(DocumentRelevanceOverrideConfigurationsT&& value) { m_documentRelevanceOverrideConfigurationsHasBeenSet = true; m_documentRelevanceOverrideConfigurations.emplace_back(std::forward<DocumentRelevanceOverrideConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Retrieved relevant passages are returned in pages the size of the
     * <code>PageSize</code> parameter. By default, Amazon Kendra returns the first
     * page of results. Use this parameter to get result pages after the first one.</p>
     */
    inline int GetPageNumber() const { return m_pageNumber; }
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }
    inline void SetPageNumber(int value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }
    inline RetrieveRequest& WithPageNumber(int value) { SetPageNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the number of retrieved relevant passages that are returned in each page
     * of results. The default page size is 10. The maximum number of results returned
     * is 100. If you ask for more than 100 results, only 100 are returned.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline RetrieveRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user context token or user and group information.</p>
     */
    inline const UserContext& GetUserContext() const { return m_userContext; }
    inline bool UserContextHasBeenSet() const { return m_userContextHasBeenSet; }
    template<typename UserContextT = UserContext>
    void SetUserContext(UserContextT&& value) { m_userContextHasBeenSet = true; m_userContext = std::forward<UserContextT>(value); }
    template<typename UserContextT = UserContext>
    RetrieveRequest& WithUserContext(UserContextT&& value) { SetUserContext(std::forward<UserContextT>(value)); return *this;}
    ///@}
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

    int m_pageNumber{0};
    bool m_pageNumberHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    UserContext m_userContext;
    bool m_userContextHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
