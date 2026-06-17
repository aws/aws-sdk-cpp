/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/SearchFilterClause.h>
#include <aws/glue/model/SearchSort.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class SearchRequest : public GlueRequest {
 public:
  AWS_GLUE_API SearchRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "Search"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The text to search for. At least one of <code>searchText</code> or
   * <code>filterClause</code> must be provided.</p>
   */
  inline const Aws::String& GetSearchText() const { return m_searchText; }
  inline bool SearchTextHasBeenSet() const { return m_searchTextHasBeenSet; }
  template <typename SearchTextT = Aws::String>
  void SetSearchText(SearchTextT&& value) {
    m_searchTextHasBeenSet = true;
    m_searchText = std::forward<SearchTextT>(value);
  }
  template <typename SearchTextT = Aws::String>
  SearchRequest& WithSearchText(SearchTextT&& value) {
    SetSearchText(std::forward<SearchTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in the response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline SearchRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A continuation token, if this is a continuation call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort criteria for the search results.</p>
   */
  inline const SearchSort& GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  template <typename SortT = SearchSort>
  void SetSort(SortT&& value) {
    m_sortHasBeenSet = true;
    m_sort = std::forward<SortT>(value);
  }
  template <typename SortT = SearchSort>
  SearchRequest& WithSort(SortT&& value) {
    SetSort(std::forward<SortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter clause to apply to the search. Supports nested AND/OR logic with
   * attribute-level and map-level filters.</p>
   */
  inline const SearchFilterClause& GetFilterClause() const { return m_filterClause; }
  inline bool FilterClauseHasBeenSet() const { return m_filterClauseHasBeenSet; }
  template <typename FilterClauseT = SearchFilterClause>
  void SetFilterClause(FilterClauseT&& value) {
    m_filterClauseHasBeenSet = true;
    m_filterClause = std::forward<FilterClauseT>(value);
  }
  template <typename FilterClauseT = SearchFilterClause>
  SearchRequest& WithFilterClause(FilterClauseT&& value) {
    SetFilterClause(std::forward<FilterClauseT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_searchText;

  int m_maxResults{0};

  Aws::String m_nextToken;

  SearchSort m_sort;

  SearchFilterClause m_filterClause;
  bool m_searchTextHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_sortHasBeenSet = false;
  bool m_filterClauseHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
