/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ResourceShareType.h>
#include <aws/glue/model/PropertyPredicate.h>
#include <aws/glue/model/SortCriterion.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class SearchTablesRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API SearchTablesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchTables"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier, consisting of <code> <i>account_id</i> </code>.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    SearchTablesRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchTablesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p> <p>The
     * <code>Comparator</code> member of the <code>PropertyPredicate</code> struct is
     * used only for time fields, and can be omitted for other field types. Also, when
     * comparing string values, such as when <code>Key=Name</code>, a fuzzy match
     * algorithm is used. The <code>Key</code> field (for example, the value of the
     * <code>Name</code> field) is split on certain punctuation characters, for
     * example, -, :, #, etc. into tokens. Then each token is exact-match compared with
     * the <code>Value</code> member of <code>PropertyPredicate</code>. For example, if
     * <code>Key=Name</code> and <code>Value=link</code>, tables named
     * <code>customer-link</code> and <code>xx-link-yy</code> are returned, but
     * <code>xxlinkyy</code> is not returned.</p>
     */
    inline const Aws::Vector<PropertyPredicate>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<PropertyPredicate>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<PropertyPredicate>>
    SearchTablesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = PropertyPredicate>
    SearchTablesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string used for a text search.</p> <p>Specifying a value in quotes filters
     * based on an exact match to the value.</p>
     */
    inline const Aws::String& GetSearchText() const { return m_searchText; }
    inline bool SearchTextHasBeenSet() const { return m_searchTextHasBeenSet; }
    template<typename SearchTextT = Aws::String>
    void SetSearchText(SearchTextT&& value) { m_searchTextHasBeenSet = true; m_searchText = std::forward<SearchTextT>(value); }
    template<typename SearchTextT = Aws::String>
    SearchTablesRequest& WithSearchText(SearchTextT&& value) { SetSearchText(std::forward<SearchTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of criteria for sorting the results by a field name, in an ascending
     * or descending order.</p>
     */
    inline const Aws::Vector<SortCriterion>& GetSortCriteria() const { return m_sortCriteria; }
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }
    template<typename SortCriteriaT = Aws::Vector<SortCriterion>>
    void SetSortCriteria(SortCriteriaT&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::forward<SortCriteriaT>(value); }
    template<typename SortCriteriaT = Aws::Vector<SortCriterion>>
    SearchTablesRequest& WithSortCriteria(SortCriteriaT&& value) { SetSortCriteria(std::forward<SortCriteriaT>(value)); return *this;}
    template<typename SortCriteriaT = SortCriterion>
    SearchTablesRequest& AddSortCriteria(SortCriteriaT&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria.emplace_back(std::forward<SortCriteriaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of tables to return in a single response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchTablesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to specify that you want to search the tables shared with your
     * account. The allowable values are <code>FOREIGN</code> or <code>ALL</code>. </p>
     * <ul> <li> <p>If set to <code>FOREIGN</code>, will search the tables shared with
     * your account. </p> </li> <li> <p>If set to <code>ALL</code>, will search the
     * tables shared with your account, as well as the tables in yor local account.
     * </p> </li> </ul>
     */
    inline ResourceShareType GetResourceShareType() const { return m_resourceShareType; }
    inline bool ResourceShareTypeHasBeenSet() const { return m_resourceShareTypeHasBeenSet; }
    inline void SetResourceShareType(ResourceShareType value) { m_resourceShareTypeHasBeenSet = true; m_resourceShareType = value; }
    inline SearchTablesRequest& WithResourceShareType(ResourceShareType value) { SetResourceShareType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include status details related to a request to create or
     * update an Glue Data Catalog view.</p>
     */
    inline bool GetIncludeStatusDetails() const { return m_includeStatusDetails; }
    inline bool IncludeStatusDetailsHasBeenSet() const { return m_includeStatusDetailsHasBeenSet; }
    inline void SetIncludeStatusDetails(bool value) { m_includeStatusDetailsHasBeenSet = true; m_includeStatusDetails = value; }
    inline SearchTablesRequest& WithIncludeStatusDetails(bool value) { SetIncludeStatusDetails(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PropertyPredicate> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_searchText;
    bool m_searchTextHasBeenSet = false;

    Aws::Vector<SortCriterion> m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ResourceShareType m_resourceShareType{ResourceShareType::NOT_SET};
    bool m_resourceShareTypeHasBeenSet = false;

    bool m_includeStatusDetails{false};
    bool m_includeStatusDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
