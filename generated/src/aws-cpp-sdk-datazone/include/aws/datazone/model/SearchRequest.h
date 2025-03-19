/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/FilterClause.h>
#include <aws/datazone/model/InventorySearchScope.h>
#include <aws/datazone/model/SearchSort.h>
#include <aws/datazone/model/SearchOutputAdditionalAttribute.h>
#include <aws/datazone/model/SearchInItem.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class SearchRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API SearchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Search"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies additional attributes for the <code>Search</code> action.</p>
     */
    inline const Aws::Vector<SearchOutputAdditionalAttribute>& GetAdditionalAttributes() const { return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    template<typename AdditionalAttributesT = Aws::Vector<SearchOutputAdditionalAttribute>>
    void SetAdditionalAttributes(AdditionalAttributesT&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::forward<AdditionalAttributesT>(value); }
    template<typename AdditionalAttributesT = Aws::Vector<SearchOutputAdditionalAttribute>>
    SearchRequest& WithAdditionalAttributes(AdditionalAttributesT&& value) { SetAdditionalAttributes(std::forward<AdditionalAttributesT>(value)); return *this;}
    inline SearchRequest& AddAdditionalAttributes(SearchOutputAdditionalAttribute value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    SearchRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the search filters.</p>
     */
    inline const FilterClause& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = FilterClause>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = FilterClause>
    SearchRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call to
     * <code>Search</code>. When the number of results to be listed is greater than the
     * value of <code>MaxResults</code>, the response contains a <code>NextToken</code>
     * value that you can use in a subsequent call to <code>Search</code> to list the
     * next set of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of results is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of results, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>Search</code> to list
     * the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the owning project specified for the search.</p>
     */
    inline const Aws::String& GetOwningProjectIdentifier() const { return m_owningProjectIdentifier; }
    inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }
    template<typename OwningProjectIdentifierT = Aws::String>
    void SetOwningProjectIdentifier(OwningProjectIdentifierT&& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = std::forward<OwningProjectIdentifierT>(value); }
    template<typename OwningProjectIdentifierT = Aws::String>
    SearchRequest& WithOwningProjectIdentifier(OwningProjectIdentifierT&& value) { SetOwningProjectIdentifier(std::forward<OwningProjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the search.</p>
     */
    inline const Aws::Vector<SearchInItem>& GetSearchIn() const { return m_searchIn; }
    inline bool SearchInHasBeenSet() const { return m_searchInHasBeenSet; }
    template<typename SearchInT = Aws::Vector<SearchInItem>>
    void SetSearchIn(SearchInT&& value) { m_searchInHasBeenSet = true; m_searchIn = std::forward<SearchInT>(value); }
    template<typename SearchInT = Aws::Vector<SearchInItem>>
    SearchRequest& WithSearchIn(SearchInT&& value) { SetSearchIn(std::forward<SearchInT>(value)); return *this;}
    template<typename SearchInT = SearchInItem>
    SearchRequest& AddSearchIn(SearchInT&& value) { m_searchInHasBeenSet = true; m_searchIn.emplace_back(std::forward<SearchInT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scope of the search.</p>
     */
    inline InventorySearchScope GetSearchScope() const { return m_searchScope; }
    inline bool SearchScopeHasBeenSet() const { return m_searchScopeHasBeenSet; }
    inline void SetSearchScope(InventorySearchScope value) { m_searchScopeHasBeenSet = true; m_searchScope = value; }
    inline SearchRequest& WithSearchScope(InventorySearchScope value) { SetSearchScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the text for which to search.</p>
     */
    inline const Aws::String& GetSearchText() const { return m_searchText; }
    inline bool SearchTextHasBeenSet() const { return m_searchTextHasBeenSet; }
    template<typename SearchTextT = Aws::String>
    void SetSearchText(SearchTextT&& value) { m_searchTextHasBeenSet = true; m_searchText = std::forward<SearchTextT>(value); }
    template<typename SearchTextT = Aws::String>
    SearchRequest& WithSearchText(SearchTextT&& value) { SetSearchText(std::forward<SearchTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the way in which the search results are to be sorted.</p>
     */
    inline const SearchSort& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = SearchSort>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = SearchSort>
    SearchRequest& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SearchOutputAdditionalAttribute> m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    FilterClause m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_owningProjectIdentifier;
    bool m_owningProjectIdentifierHasBeenSet = false;

    Aws::Vector<SearchInItem> m_searchIn;
    bool m_searchInHasBeenSet = false;

    InventorySearchScope m_searchScope{InventorySearchScope::NOT_SET};
    bool m_searchScopeHasBeenSet = false;

    Aws::String m_searchText;
    bool m_searchTextHasBeenSet = false;

    SearchSort m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
