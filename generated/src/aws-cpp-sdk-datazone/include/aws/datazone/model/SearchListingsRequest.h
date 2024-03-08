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
    AWS_DATAZONE_API SearchListingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchListings"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies additional attributes for the search.</p>
     */
    inline const Aws::Vector<SearchOutputAdditionalAttribute>& GetAdditionalAttributes() const{ return m_additionalAttributes; }

    /**
     * <p>Specifies additional attributes for the search.</p>
     */
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }

    /**
     * <p>Specifies additional attributes for the search.</p>
     */
    inline void SetAdditionalAttributes(const Aws::Vector<SearchOutputAdditionalAttribute>& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = value; }

    /**
     * <p>Specifies additional attributes for the search.</p>
     */
    inline void SetAdditionalAttributes(Aws::Vector<SearchOutputAdditionalAttribute>&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::move(value); }

    /**
     * <p>Specifies additional attributes for the search.</p>
     */
    inline SearchListingsRequest& WithAdditionalAttributes(const Aws::Vector<SearchOutputAdditionalAttribute>& value) { SetAdditionalAttributes(value); return *this;}

    /**
     * <p>Specifies additional attributes for the search.</p>
     */
    inline SearchListingsRequest& WithAdditionalAttributes(Aws::Vector<SearchOutputAdditionalAttribute>&& value) { SetAdditionalAttributes(std::move(value)); return *this;}

    /**
     * <p>Specifies additional attributes for the search.</p>
     */
    inline SearchListingsRequest& AddAdditionalAttributes(const SearchOutputAdditionalAttribute& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(value); return *this; }

    /**
     * <p>Specifies additional attributes for the search.</p>
     */
    inline SearchListingsRequest& AddAdditionalAttributes(SearchOutputAdditionalAttribute&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the domain in which to search listings.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the domain in which to search listings.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the domain in which to search listings.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the domain in which to search listings.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the domain in which to search listings.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the domain in which to search listings.</p>
     */
    inline SearchListingsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the domain in which to search listings.</p>
     */
    inline SearchListingsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain in which to search listings.</p>
     */
    inline SearchListingsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>Specifies the filters for the search of listings.</p>
     */
    inline const FilterClause& GetFilters() const{ return m_filters; }

    /**
     * <p>Specifies the filters for the search of listings.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Specifies the filters for the search of listings.</p>
     */
    inline void SetFilters(const FilterClause& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Specifies the filters for the search of listings.</p>
     */
    inline void SetFilters(FilterClause&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Specifies the filters for the search of listings.</p>
     */
    inline SearchListingsRequest& WithFilters(const FilterClause& value) { SetFilters(value); return *this;}

    /**
     * <p>Specifies the filters for the search of listings.</p>
     */
    inline SearchListingsRequest& WithFilters(FilterClause&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return in a single call to
     * <code>SearchListings</code>. When the number of results to be listed is greater
     * than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>SearchListings</code> to list the next set of results. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call to
     * <code>SearchListings</code>. When the number of results to be listed is greater
     * than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>SearchListings</code> to list the next set of results. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call to
     * <code>SearchListings</code>. When the number of results to be listed is greater
     * than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>SearchListings</code> to list the next set of results. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call to
     * <code>SearchListings</code>. When the number of results to be listed is greater
     * than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>SearchListings</code> to list the next set of results. </p>
     */
    inline SearchListingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When the number of results is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of results, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>SearchListings</code>
     * to list the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of results is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of results, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>SearchListings</code>
     * to list the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When the number of results is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of results, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>SearchListings</code>
     * to list the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When the number of results is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of results, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>SearchListings</code>
     * to list the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When the number of results is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of results, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>SearchListings</code>
     * to list the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When the number of results is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of results, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>SearchListings</code>
     * to list the next set of results.</p>
     */
    inline SearchListingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of results is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of results, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>SearchListings</code>
     * to list the next set of results.</p>
     */
    inline SearchListingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of results is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of results, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>SearchListings</code>
     * to list the next set of results.</p>
     */
    inline SearchListingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<SearchInItem>& GetSearchIn() const{ return m_searchIn; }

    /**
     * <p/>
     */
    inline bool SearchInHasBeenSet() const { return m_searchInHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSearchIn(const Aws::Vector<SearchInItem>& value) { m_searchInHasBeenSet = true; m_searchIn = value; }

    /**
     * <p/>
     */
    inline void SetSearchIn(Aws::Vector<SearchInItem>&& value) { m_searchInHasBeenSet = true; m_searchIn = std::move(value); }

    /**
     * <p/>
     */
    inline SearchListingsRequest& WithSearchIn(const Aws::Vector<SearchInItem>& value) { SetSearchIn(value); return *this;}

    /**
     * <p/>
     */
    inline SearchListingsRequest& WithSearchIn(Aws::Vector<SearchInItem>&& value) { SetSearchIn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline SearchListingsRequest& AddSearchIn(const SearchInItem& value) { m_searchInHasBeenSet = true; m_searchIn.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline SearchListingsRequest& AddSearchIn(SearchInItem&& value) { m_searchInHasBeenSet = true; m_searchIn.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the text for which to search.</p>
     */
    inline const Aws::String& GetSearchText() const{ return m_searchText; }

    /**
     * <p>Specifies the text for which to search.</p>
     */
    inline bool SearchTextHasBeenSet() const { return m_searchTextHasBeenSet; }

    /**
     * <p>Specifies the text for which to search.</p>
     */
    inline void SetSearchText(const Aws::String& value) { m_searchTextHasBeenSet = true; m_searchText = value; }

    /**
     * <p>Specifies the text for which to search.</p>
     */
    inline void SetSearchText(Aws::String&& value) { m_searchTextHasBeenSet = true; m_searchText = std::move(value); }

    /**
     * <p>Specifies the text for which to search.</p>
     */
    inline void SetSearchText(const char* value) { m_searchTextHasBeenSet = true; m_searchText.assign(value); }

    /**
     * <p>Specifies the text for which to search.</p>
     */
    inline SearchListingsRequest& WithSearchText(const Aws::String& value) { SetSearchText(value); return *this;}

    /**
     * <p>Specifies the text for which to search.</p>
     */
    inline SearchListingsRequest& WithSearchText(Aws::String&& value) { SetSearchText(std::move(value)); return *this;}

    /**
     * <p>Specifies the text for which to search.</p>
     */
    inline SearchListingsRequest& WithSearchText(const char* value) { SetSearchText(value); return *this;}


    /**
     * <p>Specifies the way for sorting the search results.</p>
     */
    inline const SearchSort& GetSort() const{ return m_sort; }

    /**
     * <p>Specifies the way for sorting the search results.</p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>Specifies the way for sorting the search results.</p>
     */
    inline void SetSort(const SearchSort& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>Specifies the way for sorting the search results.</p>
     */
    inline void SetSort(SearchSort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>Specifies the way for sorting the search results.</p>
     */
    inline SearchListingsRequest& WithSort(const SearchSort& value) { SetSort(value); return *this;}

    /**
     * <p>Specifies the way for sorting the search results.</p>
     */
    inline SearchListingsRequest& WithSort(SearchSort&& value) { SetSort(std::move(value)); return *this;}

  private:

    Aws::Vector<SearchOutputAdditionalAttribute> m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    FilterClause m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
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
