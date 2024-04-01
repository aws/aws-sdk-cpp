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
    AWS_DEADLINE_API SearchGroupedFilterExpressions();
    AWS_DEADLINE_API SearchGroupedFilterExpressions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SearchGroupedFilterExpressions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filters to use for the search.</p>
     */
    inline const Aws::Vector<SearchFilterExpression>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters to use for the search.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters to use for the search.</p>
     */
    inline void SetFilters(const Aws::Vector<SearchFilterExpression>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters to use for the search.</p>
     */
    inline void SetFilters(Aws::Vector<SearchFilterExpression>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters to use for the search.</p>
     */
    inline SearchGroupedFilterExpressions& WithFilters(const Aws::Vector<SearchFilterExpression>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters to use for the search.</p>
     */
    inline SearchGroupedFilterExpressions& WithFilters(Aws::Vector<SearchFilterExpression>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters to use for the search.</p>
     */
    inline SearchGroupedFilterExpressions& AddFilters(const SearchFilterExpression& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters to use for the search.</p>
     */
    inline SearchGroupedFilterExpressions& AddFilters(SearchFilterExpression&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The operators to include in the search.</p>
     */
    inline const LogicalOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operators to include in the search.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operators to include in the search.</p>
     */
    inline void SetOperator(const LogicalOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operators to include in the search.</p>
     */
    inline void SetOperator(LogicalOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operators to include in the search.</p>
     */
    inline SearchGroupedFilterExpressions& WithOperator(const LogicalOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operators to include in the search.</p>
     */
    inline SearchGroupedFilterExpressions& WithOperator(LogicalOperator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    Aws::Vector<SearchFilterExpression> m_filters;
    bool m_filtersHasBeenSet = false;

    LogicalOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
