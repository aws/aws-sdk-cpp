/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/DateTimeFilterExpression.h>
#include <aws/deadline/model/ParameterFilterExpression.h>
#include <aws/deadline/model/SearchTermFilterExpression.h>
#include <aws/deadline/model/StringFilterExpression.h>
#include <aws/deadline/model/StringListFilterExpression.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {
class SearchGroupedFilterExpressions;

/**
 * <p>The type of search filter to apply.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SearchFilterExpression">AWS
 * API Reference</a></p>
 */
class SearchFilterExpression {
 public:
  AWS_DEADLINE_API SearchFilterExpression() = default;
  AWS_DEADLINE_API SearchFilterExpression(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API SearchFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filters based on date and time.</p>
   */
  inline const DateTimeFilterExpression& GetDateTimeFilter() const { return m_dateTimeFilter; }
  inline bool DateTimeFilterHasBeenSet() const { return m_dateTimeFilterHasBeenSet; }
  template <typename DateTimeFilterT = DateTimeFilterExpression>
  void SetDateTimeFilter(DateTimeFilterT&& value) {
    m_dateTimeFilterHasBeenSet = true;
    m_dateTimeFilter = std::forward<DateTimeFilterT>(value);
  }
  template <typename DateTimeFilterT = DateTimeFilterExpression>
  SearchFilterExpression& WithDateTimeFilter(DateTimeFilterT&& value) {
    SetDateTimeFilter(std::forward<DateTimeFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters by parameter.</p>
   */
  inline const ParameterFilterExpression& GetParameterFilter() const { return m_parameterFilter; }
  inline bool ParameterFilterHasBeenSet() const { return m_parameterFilterHasBeenSet; }
  template <typename ParameterFilterT = ParameterFilterExpression>
  void SetParameterFilter(ParameterFilterT&& value) {
    m_parameterFilterHasBeenSet = true;
    m_parameterFilter = std::forward<ParameterFilterT>(value);
  }
  template <typename ParameterFilterT = ParameterFilterExpression>
  SearchFilterExpression& WithParameterFilter(ParameterFilterT&& value) {
    SetParameterFilter(std::forward<ParameterFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters by a specified search term.</p>
   */
  inline const SearchTermFilterExpression& GetSearchTermFilter() const { return m_searchTermFilter; }
  inline bool SearchTermFilterHasBeenSet() const { return m_searchTermFilterHasBeenSet; }
  template <typename SearchTermFilterT = SearchTermFilterExpression>
  void SetSearchTermFilter(SearchTermFilterT&& value) {
    m_searchTermFilterHasBeenSet = true;
    m_searchTermFilter = std::forward<SearchTermFilterT>(value);
  }
  template <typename SearchTermFilterT = SearchTermFilterExpression>
  SearchFilterExpression& WithSearchTermFilter(SearchTermFilterT&& value) {
    SetSearchTermFilter(std::forward<SearchTermFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters by a string.</p>
   */
  inline const StringFilterExpression& GetStringFilter() const { return m_stringFilter; }
  inline bool StringFilterHasBeenSet() const { return m_stringFilterHasBeenSet; }
  template <typename StringFilterT = StringFilterExpression>
  void SetStringFilter(StringFilterT&& value) {
    m_stringFilterHasBeenSet = true;
    m_stringFilter = std::forward<StringFilterT>(value);
  }
  template <typename StringFilterT = StringFilterExpression>
  SearchFilterExpression& WithStringFilter(StringFilterT&& value) {
    SetStringFilter(std::forward<StringFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters by a list of strings.</p>
   */
  inline const StringListFilterExpression& GetStringListFilter() const { return m_stringListFilter; }
  inline bool StringListFilterHasBeenSet() const { return m_stringListFilterHasBeenSet; }
  template <typename StringListFilterT = StringListFilterExpression>
  void SetStringListFilter(StringListFilterT&& value) {
    m_stringListFilterHasBeenSet = true;
    m_stringListFilter = std::forward<StringListFilterT>(value);
  }
  template <typename StringListFilterT = StringListFilterExpression>
  SearchFilterExpression& WithStringListFilter(StringListFilterT&& value) {
    SetStringListFilter(std::forward<StringListFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters by group.</p>
   */
  inline const SearchGroupedFilterExpressions& GetGroupFilter() const { return *m_groupFilter; }
  inline bool GroupFilterHasBeenSet() const { return m_groupFilterHasBeenSet; }
  template <typename GroupFilterT = SearchGroupedFilterExpressions>
  void SetGroupFilter(GroupFilterT&& value) {
    m_groupFilterHasBeenSet = true;
    m_groupFilter = Aws::MakeShared<SearchGroupedFilterExpressions>("SearchFilterExpression", std::forward<GroupFilterT>(value));
  }
  template <typename GroupFilterT = SearchGroupedFilterExpressions>
  SearchFilterExpression& WithGroupFilter(GroupFilterT&& value) {
    SetGroupFilter(std::forward<GroupFilterT>(value));
    return *this;
  }
  ///@}
 private:
  DateTimeFilterExpression m_dateTimeFilter;

  ParameterFilterExpression m_parameterFilter;

  SearchTermFilterExpression m_searchTermFilter;

  StringFilterExpression m_stringFilter;

  StringListFilterExpression m_stringListFilter;

  std::shared_ptr<SearchGroupedFilterExpressions> m_groupFilter;
  bool m_dateTimeFilterHasBeenSet = false;
  bool m_parameterFilterHasBeenSet = false;
  bool m_searchTermFilterHasBeenSet = false;
  bool m_stringFilterHasBeenSet = false;
  bool m_stringListFilterHasBeenSet = false;
  bool m_groupFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
