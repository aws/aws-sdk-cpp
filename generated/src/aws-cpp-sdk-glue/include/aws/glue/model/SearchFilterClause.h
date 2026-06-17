/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/SearchAttributeFilter.h>
#include <aws/glue/model/SearchMapFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>A filter clause that supports nested boolean logic. Exactly one of
 * <code>andAllFilters</code>, <code>orAnyFilters</code>,
 * <code>attributeFilter</code>, or <code>mapFilter</code> must be
 * specified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SearchFilterClause">AWS
 * API Reference</a></p>
 */
class SearchFilterClause {
 public:
  AWS_GLUE_API SearchFilterClause() = default;
  AWS_GLUE_API SearchFilterClause(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API SearchFilterClause& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of filter clauses that must all match (logical AND).</p>
   */
  inline const Aws::Vector<SearchFilterClause>& GetAndAllFilters() const { return m_andAllFilters; }
  inline bool AndAllFiltersHasBeenSet() const { return m_andAllFiltersHasBeenSet; }
  template <typename AndAllFiltersT = Aws::Vector<SearchFilterClause>>
  void SetAndAllFilters(AndAllFiltersT&& value) {
    m_andAllFiltersHasBeenSet = true;
    m_andAllFilters = std::forward<AndAllFiltersT>(value);
  }
  template <typename AndAllFiltersT = Aws::Vector<SearchFilterClause>>
  SearchFilterClause& WithAndAllFilters(AndAllFiltersT&& value) {
    SetAndAllFilters(std::forward<AndAllFiltersT>(value));
    return *this;
  }
  template <typename AndAllFiltersT = SearchFilterClause>
  SearchFilterClause& AddAndAllFilters(AndAllFiltersT&& value) {
    m_andAllFiltersHasBeenSet = true;
    m_andAllFilters.emplace_back(std::forward<AndAllFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of filter clauses where at least one must match (logical OR).</p>
   */
  inline const Aws::Vector<SearchFilterClause>& GetOrAnyFilters() const { return m_orAnyFilters; }
  inline bool OrAnyFiltersHasBeenSet() const { return m_orAnyFiltersHasBeenSet; }
  template <typename OrAnyFiltersT = Aws::Vector<SearchFilterClause>>
  void SetOrAnyFilters(OrAnyFiltersT&& value) {
    m_orAnyFiltersHasBeenSet = true;
    m_orAnyFilters = std::forward<OrAnyFiltersT>(value);
  }
  template <typename OrAnyFiltersT = Aws::Vector<SearchFilterClause>>
  SearchFilterClause& WithOrAnyFilters(OrAnyFiltersT&& value) {
    SetOrAnyFilters(std::forward<OrAnyFiltersT>(value));
    return *this;
  }
  template <typename OrAnyFiltersT = SearchFilterClause>
  SearchFilterClause& AddOrAnyFilters(OrAnyFiltersT&& value) {
    m_orAnyFiltersHasBeenSet = true;
    m_orAnyFilters.emplace_back(std::forward<OrAnyFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter on a single attribute value.</p>
   */
  inline const SearchAttributeFilter& GetAttributeFilter() const { return m_attributeFilter; }
  inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
  template <typename AttributeFilterT = SearchAttributeFilter>
  void SetAttributeFilter(AttributeFilterT&& value) {
    m_attributeFilterHasBeenSet = true;
    m_attributeFilter = std::forward<AttributeFilterT>(value);
  }
  template <typename AttributeFilterT = SearchAttributeFilter>
  SearchFilterClause& WithAttributeFilter(AttributeFilterT&& value) {
    SetAttributeFilter(std::forward<AttributeFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter on a map attribute's key-value pair.</p>
   */
  inline const SearchMapFilter& GetMapFilter() const { return m_mapFilter; }
  inline bool MapFilterHasBeenSet() const { return m_mapFilterHasBeenSet; }
  template <typename MapFilterT = SearchMapFilter>
  void SetMapFilter(MapFilterT&& value) {
    m_mapFilterHasBeenSet = true;
    m_mapFilter = std::forward<MapFilterT>(value);
  }
  template <typename MapFilterT = SearchMapFilter>
  SearchFilterClause& WithMapFilter(MapFilterT&& value) {
    SetMapFilter(std::forward<MapFilterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SearchFilterClause> m_andAllFilters;

  Aws::Vector<SearchFilterClause> m_orAnyFilters;

  SearchAttributeFilter m_attributeFilter;

  SearchMapFilter m_mapFilter;
  bool m_andAllFiltersHasBeenSet = false;
  bool m_orAnyFiltersHasBeenSet = false;
  bool m_attributeFilterHasBeenSet = false;
  bool m_mapFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
