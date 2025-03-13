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
#include <aws/kendra/model/CollapseConfiguration.h>
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
    AWS_KENDRA_API QueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Query"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the index for the search.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    QueryRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input query text for the search. Amazon Kendra truncates queries at 30
     * token words, which excludes punctuation and stop words. Truncation still applies
     * if you use Boolean or more advanced, complex queries. For example, <code>Timeoff
     * AND October AND Category:HR</code> is counted as 3 tokens: <code>timeoff</code>,
     * <code>october</code>, <code>hr</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/searching-example.html#searching-index-query-syntax">Searching
     * with advanced query syntax</a> in the Amazon Kendra Developer Guide. </p>
     */
    inline const Aws::String& GetQueryText() const { return m_queryText; }
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }
    template<typename QueryTextT = Aws::String>
    void SetQueryText(QueryTextT&& value) { m_queryTextHasBeenSet = true; m_queryText = std::forward<QueryTextT>(value); }
    template<typename QueryTextT = Aws::String>
    QueryRequest& WithQueryText(QueryTextT&& value) { SetQueryText(std::forward<QueryTextT>(value)); return *this;}
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
    QueryRequest& WithAttributeFilter(AttributeFilterT&& value) { SetAttributeFilter(std::forward<AttributeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of documents fields/attributes for faceted search. Amazon Kendra
     * returns a count for each field key specified. This helps your users narrow their
     * search.</p>
     */
    inline const Aws::Vector<Facet>& GetFacets() const { return m_facets; }
    inline bool FacetsHasBeenSet() const { return m_facetsHasBeenSet; }
    template<typename FacetsT = Aws::Vector<Facet>>
    void SetFacets(FacetsT&& value) { m_facetsHasBeenSet = true; m_facets = std::forward<FacetsT>(value); }
    template<typename FacetsT = Aws::Vector<Facet>>
    QueryRequest& WithFacets(FacetsT&& value) { SetFacets(std::forward<FacetsT>(value)); return *this;}
    template<typename FacetsT = Facet>
    QueryRequest& AddFacets(FacetsT&& value) { m_facetsHasBeenSet = true; m_facets.emplace_back(std::forward<FacetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of document fields/attributes to include in the response. You can
     * limit the response to include certain document fields. By default, all document
     * attributes are included in the response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedDocumentAttributes() const { return m_requestedDocumentAttributes; }
    inline bool RequestedDocumentAttributesHasBeenSet() const { return m_requestedDocumentAttributesHasBeenSet; }
    template<typename RequestedDocumentAttributesT = Aws::Vector<Aws::String>>
    void SetRequestedDocumentAttributes(RequestedDocumentAttributesT&& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes = std::forward<RequestedDocumentAttributesT>(value); }
    template<typename RequestedDocumentAttributesT = Aws::Vector<Aws::String>>
    QueryRequest& WithRequestedDocumentAttributes(RequestedDocumentAttributesT&& value) { SetRequestedDocumentAttributes(std::forward<RequestedDocumentAttributesT>(value)); return *this;}
    template<typename RequestedDocumentAttributesT = Aws::String>
    QueryRequest& AddRequestedDocumentAttributes(RequestedDocumentAttributesT&& value) { m_requestedDocumentAttributesHasBeenSet = true; m_requestedDocumentAttributes.emplace_back(std::forward<RequestedDocumentAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Sets the type of query result or response. Only results for the specified
     * type are returned.</p>
     */
    inline QueryResultType GetQueryResultTypeFilter() const { return m_queryResultTypeFilter; }
    inline bool QueryResultTypeFilterHasBeenSet() const { return m_queryResultTypeFilterHasBeenSet; }
    inline void SetQueryResultTypeFilter(QueryResultType value) { m_queryResultTypeFilterHasBeenSet = true; m_queryResultTypeFilter = value; }
    inline QueryRequest& WithQueryResultTypeFilter(QueryResultType value) { SetQueryResultTypeFilter(value); return *this;}
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
    QueryRequest& WithDocumentRelevanceOverrideConfigurations(DocumentRelevanceOverrideConfigurationsT&& value) { SetDocumentRelevanceOverrideConfigurations(std::forward<DocumentRelevanceOverrideConfigurationsT>(value)); return *this;}
    template<typename DocumentRelevanceOverrideConfigurationsT = DocumentRelevanceConfiguration>
    QueryRequest& AddDocumentRelevanceOverrideConfigurations(DocumentRelevanceOverrideConfigurationsT&& value) { m_documentRelevanceOverrideConfigurationsHasBeenSet = true; m_documentRelevanceOverrideConfigurations.emplace_back(std::forward<DocumentRelevanceOverrideConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Query results are returned in pages the size of the <code>PageSize</code>
     * parameter. By default, Amazon Kendra returns the first page of results. Use this
     * parameter to get result pages after the first one.</p>
     */
    inline int GetPageNumber() const { return m_pageNumber; }
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }
    inline void SetPageNumber(int value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }
    inline QueryRequest& WithPageNumber(int value) { SetPageNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the number of results that are returned in each page of results. The
     * default page size is 10. The maximum number of results returned is 100. If you
     * ask for more than 100 results, only 100 are returned.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline QueryRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information that determines how the results of the query are sorted.
     * You can set the field that Amazon Kendra should sort the results on, and specify
     * whether the results should be sorted in ascending or descending order. In the
     * case of ties in sorting the results, the results are sorted by relevance.</p>
     * <p>If you don't provide sorting configuration, the results are sorted by the
     * relevance that Amazon Kendra determines for the result.</p>
     */
    inline const SortingConfiguration& GetSortingConfiguration() const { return m_sortingConfiguration; }
    inline bool SortingConfigurationHasBeenSet() const { return m_sortingConfigurationHasBeenSet; }
    template<typename SortingConfigurationT = SortingConfiguration>
    void SetSortingConfiguration(SortingConfigurationT&& value) { m_sortingConfigurationHasBeenSet = true; m_sortingConfiguration = std::forward<SortingConfigurationT>(value); }
    template<typename SortingConfigurationT = SortingConfiguration>
    QueryRequest& WithSortingConfiguration(SortingConfigurationT&& value) { SetSortingConfiguration(std::forward<SortingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides configuration information to determine how the results of a query
     * are sorted.</p> <p>You can set upto 3 fields that Amazon Kendra should sort the
     * results on, and specify whether the results should be sorted in ascending or
     * descending order. The sort field quota can be increased.</p> <p>If you don't
     * provide a sorting configuration, the results are sorted by the relevance that
     * Amazon Kendra determines for the result. In the case of ties in sorting the
     * results, the results are sorted by relevance. </p>
     */
    inline const Aws::Vector<SortingConfiguration>& GetSortingConfigurations() const { return m_sortingConfigurations; }
    inline bool SortingConfigurationsHasBeenSet() const { return m_sortingConfigurationsHasBeenSet; }
    template<typename SortingConfigurationsT = Aws::Vector<SortingConfiguration>>
    void SetSortingConfigurations(SortingConfigurationsT&& value) { m_sortingConfigurationsHasBeenSet = true; m_sortingConfigurations = std::forward<SortingConfigurationsT>(value); }
    template<typename SortingConfigurationsT = Aws::Vector<SortingConfiguration>>
    QueryRequest& WithSortingConfigurations(SortingConfigurationsT&& value) { SetSortingConfigurations(std::forward<SortingConfigurationsT>(value)); return *this;}
    template<typename SortingConfigurationsT = SortingConfiguration>
    QueryRequest& AddSortingConfigurations(SortingConfigurationsT&& value) { m_sortingConfigurationsHasBeenSet = true; m_sortingConfigurations.emplace_back(std::forward<SortingConfigurationsT>(value)); return *this; }
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
    QueryRequest& WithUserContext(UserContextT&& value) { SetUserContext(std::forward<UserContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides an identifier for a specific user. The <code>VisitorId</code> should
     * be a unique identifier, such as a GUID. Don't use personally identifiable
     * information, such as the user's email address, as the
     * <code>VisitorId</code>.</p>
     */
    inline const Aws::String& GetVisitorId() const { return m_visitorId; }
    inline bool VisitorIdHasBeenSet() const { return m_visitorIdHasBeenSet; }
    template<typename VisitorIdT = Aws::String>
    void SetVisitorId(VisitorIdT&& value) { m_visitorIdHasBeenSet = true; m_visitorId = std::forward<VisitorIdT>(value); }
    template<typename VisitorIdT = Aws::String>
    QueryRequest& WithVisitorId(VisitorIdT&& value) { SetVisitorId(std::forward<VisitorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables suggested spell corrections for queries.</p>
     */
    inline const SpellCorrectionConfiguration& GetSpellCorrectionConfiguration() const { return m_spellCorrectionConfiguration; }
    inline bool SpellCorrectionConfigurationHasBeenSet() const { return m_spellCorrectionConfigurationHasBeenSet; }
    template<typename SpellCorrectionConfigurationT = SpellCorrectionConfiguration>
    void SetSpellCorrectionConfiguration(SpellCorrectionConfigurationT&& value) { m_spellCorrectionConfigurationHasBeenSet = true; m_spellCorrectionConfiguration = std::forward<SpellCorrectionConfigurationT>(value); }
    template<typename SpellCorrectionConfigurationT = SpellCorrectionConfiguration>
    QueryRequest& WithSpellCorrectionConfiguration(SpellCorrectionConfigurationT&& value) { SetSpellCorrectionConfiguration(std::forward<SpellCorrectionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides configuration to determine how to group results by document
     * attribute value, and how to display them (collapsed or expanded) under a
     * designated primary document for each group.</p>
     */
    inline const CollapseConfiguration& GetCollapseConfiguration() const { return m_collapseConfiguration; }
    inline bool CollapseConfigurationHasBeenSet() const { return m_collapseConfigurationHasBeenSet; }
    template<typename CollapseConfigurationT = CollapseConfiguration>
    void SetCollapseConfiguration(CollapseConfigurationT&& value) { m_collapseConfigurationHasBeenSet = true; m_collapseConfiguration = std::forward<CollapseConfigurationT>(value); }
    template<typename CollapseConfigurationT = CollapseConfiguration>
    QueryRequest& WithCollapseConfiguration(CollapseConfigurationT&& value) { SetCollapseConfiguration(std::forward<CollapseConfigurationT>(value)); return *this;}
    ///@}
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

    QueryResultType m_queryResultTypeFilter{QueryResultType::NOT_SET};
    bool m_queryResultTypeFilterHasBeenSet = false;

    Aws::Vector<DocumentRelevanceConfiguration> m_documentRelevanceOverrideConfigurations;
    bool m_documentRelevanceOverrideConfigurationsHasBeenSet = false;

    int m_pageNumber{0};
    bool m_pageNumberHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    SortingConfiguration m_sortingConfiguration;
    bool m_sortingConfigurationHasBeenSet = false;

    Aws::Vector<SortingConfiguration> m_sortingConfigurations;
    bool m_sortingConfigurationsHasBeenSet = false;

    UserContext m_userContext;
    bool m_userContextHasBeenSet = false;

    Aws::String m_visitorId;
    bool m_visitorIdHasBeenSet = false;

    SpellCorrectionConfiguration m_spellCorrectionConfiguration;
    bool m_spellCorrectionConfigurationHasBeenSet = false;

    CollapseConfiguration m_collapseConfiguration;
    bool m_collapseConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
