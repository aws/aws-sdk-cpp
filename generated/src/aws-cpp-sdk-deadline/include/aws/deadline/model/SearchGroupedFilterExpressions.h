/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/SearchFilterExpression.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/LogicalOperator.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{
  class SearchFilterExpression;

  /**
   * <p>The filter expression, <code>AND</code> or <code>OR</code>, to use when
   * searching among a group of search strings in a resource. <p>You can use two
   * groupings per search each within parenthesis <code>()</code>.</p></p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SearchGroupedFilterExpressions">AWS
   * API Reference</a></p>
   */
  class SearchGroupedFilterExpressions
  {
  public:
    AWS_DEADLINE_API SearchGroupedFilterExpressions() = default;
    AWS_DEADLINE_API SearchGroupedFilterExpressions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SearchGroupedFilterExpressions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filters to use for the search.</p>
     */
    inline const Aws::Vector<SearchFilterExpression>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<SearchFilterExpression>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<SearchFilterExpression>>
    SearchGroupedFilterExpressions& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = SearchFilterExpression>
    SearchGroupedFilterExpressions& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operators to include in the search.</p>
     */
    inline LogicalOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(LogicalOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline SearchGroupedFilterExpressions& WithOperator(LogicalOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    Aws::Vector<SearchFilterExpression> m_filters;
    bool m_filtersHasBeenSet = false;

    LogicalOperator m_operator{LogicalOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
