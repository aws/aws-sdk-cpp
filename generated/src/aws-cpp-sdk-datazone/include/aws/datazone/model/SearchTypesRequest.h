/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/FilterClause.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/TypesSearchScope.h>
#include <aws/datazone/model/SearchSort.h>
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
  class SearchTypesRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API SearchTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchTypes"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which to invoke the
     * <code>SearchTypes</code> action.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline SearchTypesRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline SearchTypesRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline SearchTypesRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters for the <code>SearchTypes</code> action.</p>
     */
    inline const FilterClause& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const FilterClause& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(FilterClause&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline SearchTypesRequest& WithFilters(const FilterClause& value) { SetFilters(value); return *this;}
    inline SearchTypesRequest& WithFilters(FilterClause&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the search is managed.</p>
     */
    inline bool GetManaged() const{ return m_managed; }
    inline bool ManagedHasBeenSet() const { return m_managedHasBeenSet; }
    inline void SetManaged(bool value) { m_managedHasBeenSet = true; m_managed = value; }
    inline SearchTypesRequest& WithManaged(bool value) { SetManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call to
     * <code>SearchTypes</code>. When the number of results to be listed is greater
     * than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>SearchTypes</code> to list the next set of results. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of results is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of results, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>SearchTypes</code> to
     * list the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SearchTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the search.</p>
     */
    inline const Aws::Vector<SearchInItem>& GetSearchIn() const{ return m_searchIn; }
    inline bool SearchInHasBeenSet() const { return m_searchInHasBeenSet; }
    inline void SetSearchIn(const Aws::Vector<SearchInItem>& value) { m_searchInHasBeenSet = true; m_searchIn = value; }
    inline void SetSearchIn(Aws::Vector<SearchInItem>&& value) { m_searchInHasBeenSet = true; m_searchIn = std::move(value); }
    inline SearchTypesRequest& WithSearchIn(const Aws::Vector<SearchInItem>& value) { SetSearchIn(value); return *this;}
    inline SearchTypesRequest& WithSearchIn(Aws::Vector<SearchInItem>&& value) { SetSearchIn(std::move(value)); return *this;}
    inline SearchTypesRequest& AddSearchIn(const SearchInItem& value) { m_searchInHasBeenSet = true; m_searchIn.push_back(value); return *this; }
    inline SearchTypesRequest& AddSearchIn(SearchInItem&& value) { m_searchInHasBeenSet = true; m_searchIn.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the scope of the search for types.</p>
     */
    inline const TypesSearchScope& GetSearchScope() const{ return m_searchScope; }
    inline bool SearchScopeHasBeenSet() const { return m_searchScopeHasBeenSet; }
    inline void SetSearchScope(const TypesSearchScope& value) { m_searchScopeHasBeenSet = true; m_searchScope = value; }
    inline void SetSearchScope(TypesSearchScope&& value) { m_searchScopeHasBeenSet = true; m_searchScope = std::move(value); }
    inline SearchTypesRequest& WithSearchScope(const TypesSearchScope& value) { SetSearchScope(value); return *this;}
    inline SearchTypesRequest& WithSearchScope(TypesSearchScope&& value) { SetSearchScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the text for which to search.</p>
     */
    inline const Aws::String& GetSearchText() const{ return m_searchText; }
    inline bool SearchTextHasBeenSet() const { return m_searchTextHasBeenSet; }
    inline void SetSearchText(const Aws::String& value) { m_searchTextHasBeenSet = true; m_searchText = value; }
    inline void SetSearchText(Aws::String&& value) { m_searchTextHasBeenSet = true; m_searchText = std::move(value); }
    inline void SetSearchText(const char* value) { m_searchTextHasBeenSet = true; m_searchText.assign(value); }
    inline SearchTypesRequest& WithSearchText(const Aws::String& value) { SetSearchText(value); return *this;}
    inline SearchTypesRequest& WithSearchText(Aws::String&& value) { SetSearchText(std::move(value)); return *this;}
    inline SearchTypesRequest& WithSearchText(const char* value) { SetSearchText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specifies the way to sort the <code>SearchTypes</code> results.</p>
     */
    inline const SearchSort& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const SearchSort& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(SearchSort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline SearchTypesRequest& WithSort(const SearchSort& value) { SetSort(value); return *this;}
    inline SearchTypesRequest& WithSort(SearchSort&& value) { SetSort(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    FilterClause m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_managed;
    bool m_managedHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SearchInItem> m_searchIn;
    bool m_searchInHasBeenSet = false;

    TypesSearchScope m_searchScope;
    bool m_searchScopeHasBeenSet = false;

    Aws::String m_searchText;
    bool m_searchTextHasBeenSet = false;

    SearchSort m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
