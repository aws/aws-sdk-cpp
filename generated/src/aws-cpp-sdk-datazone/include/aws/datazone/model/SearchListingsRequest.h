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
#include <aws/datazone/model/SearchSort.h>
#include <aws/datazone/model/SearchOutputAdditionalAttribute.h>
#include <aws/datazone/model/AggregationListItem.h>
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
  class SearchListingsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API SearchListingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchListings"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies additional attributes for the search.</p>
     */
    inline const Aws::Vector<SearchOutputAdditionalAttribute>& GetAdditionalAttributes() const { return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    template<typename AdditionalAttributesT = Aws::Vector<SearchOutputAdditionalAttribute>>
    void SetAdditionalAttributes(AdditionalAttributesT&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::forward<AdditionalAttributesT>(value); }
    template<typename AdditionalAttributesT = Aws::Vector<SearchOutputAdditionalAttribute>>
    SearchListingsRequest& WithAdditionalAttributes(AdditionalAttributesT&& value) { SetAdditionalAttributes(std::forward<AdditionalAttributesT>(value)); return *this;}
    inline SearchListingsRequest& AddAdditionalAttributes(SearchOutputAdditionalAttribute value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables you to specify one or more attributes to compute and return counts
     * grouped by field values.</p>
     */
    inline const Aws::Vector<AggregationListItem>& GetAggregations() const { return m_aggregations; }
    inline bool AggregationsHasBeenSet() const { return m_aggregationsHasBeenSet; }
    template<typename AggregationsT = Aws::Vector<AggregationListItem>>
    void SetAggregations(AggregationsT&& value) { m_aggregationsHasBeenSet = true; m_aggregations = std::forward<AggregationsT>(value); }
    template<typename AggregationsT = Aws::Vector<AggregationListItem>>
    SearchListingsRequest& WithAggregations(AggregationsT&& value) { SetAggregations(std::forward<AggregationsT>(value)); return *this;}
    template<typename AggregationsT = AggregationListItem>
    SearchListingsRequest& AddAggregations(AggregationsT&& value) { m_aggregationsHasBeenSet = true; m_aggregations.emplace_back(std::forward<AggregationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain in which to search listings.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    SearchListingsRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the filters for the search of listings.</p>
     */
    inline const FilterClause& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = FilterClause>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = FilterClause>
    SearchListingsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call to
     * <code>SearchListings</code>. When the number of results to be listed is greater
     * than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>SearchListings</code> to list the next set of results. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchListingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of results is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of results, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>SearchListings</code>
     * to list the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchListingsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    SearchListingsRequest& WithSearchIn(SearchInT&& value) { SetSearchIn(std::forward<SearchInT>(value)); return *this;}
    template<typename SearchInT = SearchInItem>
    SearchListingsRequest& AddSearchIn(SearchInT&& value) { m_searchInHasBeenSet = true; m_searchIn.emplace_back(std::forward<SearchInT>(value)); return *this; }
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
    SearchListingsRequest& WithSearchText(SearchTextT&& value) { SetSearchText(std::forward<SearchTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the way for sorting the search results.</p>
     */
    inline const SearchSort& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = SearchSort>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = SearchSort>
    SearchListingsRequest& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SearchOutputAdditionalAttribute> m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;

    Aws::Vector<AggregationListItem> m_aggregations;
    bool m_aggregationsHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    FilterClause m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SearchInItem> m_searchIn;
    bool m_searchInHasBeenSet = false;

    Aws::String m_searchText;
    bool m_searchTextHasBeenSet = false;

    SearchSort m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
