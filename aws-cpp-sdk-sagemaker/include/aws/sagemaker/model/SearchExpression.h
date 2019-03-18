/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/BooleanOperator.h>
#include <aws/sagemaker/model/Filter.h>
#include <aws/sagemaker/model/NestedFilters.h>
#include <aws/sagemaker/model/SearchExpression.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A multi-expression that searches for the specified resource or resources in a
   * search. All resource objects that satisfy the expression's condition are
   * included in the search results. You must specify at least one subexpression,
   * filter, or nested filter. A <code>SearchExpression</code> can contain up to
   * twenty elements.</p> <p>A <code>SearchExpression</code> contains the following
   * components:</p> <ul> <li> <p>A list of <code>Filter</code> objects. Each filter
   * defines a simple Boolean expression comprised of a resource property name,
   * Boolean operator, and value.</p> </li> <li> <p>A list of
   * <code>NestedFilter</code> objects. Each nested filter defines a list of Boolean
   * expressions using a list of resource properties. A nested filter is satisfied if
   * a single object in the list satisfies all Boolean expressions.</p> </li> <li>
   * <p>A list of <code>SearchExpression</code> objects. A search expression object
   * can be nested in a list of search expression objects.</p> </li> <li> <p>A
   * Boolean operator: <code>And</code> or <code>Or</code>.</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SearchExpression">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API SearchExpression
  {
  public:
    SearchExpression();
    SearchExpression(Aws::Utils::Json::JsonView jsonValue);
    SearchExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of filter objects.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A list of filter objects.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A list of filter objects.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A list of filter objects.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A list of filter objects.</p>
     */
    inline SearchExpression& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A list of filter objects.</p>
     */
    inline SearchExpression& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A list of filter objects.</p>
     */
    inline SearchExpression& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A list of filter objects.</p>
     */
    inline SearchExpression& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of nested filter objects.</p>
     */
    inline const Aws::Vector<NestedFilters>& GetNestedFilters() const{ return m_nestedFilters; }

    /**
     * <p>A list of nested filter objects.</p>
     */
    inline bool NestedFiltersHasBeenSet() const { return m_nestedFiltersHasBeenSet; }

    /**
     * <p>A list of nested filter objects.</p>
     */
    inline void SetNestedFilters(const Aws::Vector<NestedFilters>& value) { m_nestedFiltersHasBeenSet = true; m_nestedFilters = value; }

    /**
     * <p>A list of nested filter objects.</p>
     */
    inline void SetNestedFilters(Aws::Vector<NestedFilters>&& value) { m_nestedFiltersHasBeenSet = true; m_nestedFilters = std::move(value); }

    /**
     * <p>A list of nested filter objects.</p>
     */
    inline SearchExpression& WithNestedFilters(const Aws::Vector<NestedFilters>& value) { SetNestedFilters(value); return *this;}

    /**
     * <p>A list of nested filter objects.</p>
     */
    inline SearchExpression& WithNestedFilters(Aws::Vector<NestedFilters>&& value) { SetNestedFilters(std::move(value)); return *this;}

    /**
     * <p>A list of nested filter objects.</p>
     */
    inline SearchExpression& AddNestedFilters(const NestedFilters& value) { m_nestedFiltersHasBeenSet = true; m_nestedFilters.push_back(value); return *this; }

    /**
     * <p>A list of nested filter objects.</p>
     */
    inline SearchExpression& AddNestedFilters(NestedFilters&& value) { m_nestedFiltersHasBeenSet = true; m_nestedFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of search expression objects.</p>
     */
    inline const Aws::Vector<SearchExpression>& GetSubExpressions() const{ return m_subExpressions; }

    /**
     * <p>A list of search expression objects.</p>
     */
    inline bool SubExpressionsHasBeenSet() const { return m_subExpressionsHasBeenSet; }

    /**
     * <p>A list of search expression objects.</p>
     */
    inline void SetSubExpressions(const Aws::Vector<SearchExpression>& value) { m_subExpressionsHasBeenSet = true; m_subExpressions = value; }

    /**
     * <p>A list of search expression objects.</p>
     */
    inline void SetSubExpressions(Aws::Vector<SearchExpression>&& value) { m_subExpressionsHasBeenSet = true; m_subExpressions = std::move(value); }

    /**
     * <p>A list of search expression objects.</p>
     */
    inline SearchExpression& WithSubExpressions(const Aws::Vector<SearchExpression>& value) { SetSubExpressions(value); return *this;}

    /**
     * <p>A list of search expression objects.</p>
     */
    inline SearchExpression& WithSubExpressions(Aws::Vector<SearchExpression>&& value) { SetSubExpressions(std::move(value)); return *this;}

    /**
     * <p>A list of search expression objects.</p>
     */
    inline SearchExpression& AddSubExpressions(const SearchExpression& value) { m_subExpressionsHasBeenSet = true; m_subExpressions.push_back(value); return *this; }

    /**
     * <p>A list of search expression objects.</p>
     */
    inline SearchExpression& AddSubExpressions(SearchExpression&& value) { m_subExpressionsHasBeenSet = true; m_subExpressions.push_back(std::move(value)); return *this; }


    /**
     * <p>A Boolean operator used to evaluate the search expression. If you want every
     * conditional statement in all lists to be satisfied for the entire search
     * expression to be true, specify <code>And</code>. If only a single conditional
     * statement needs to be true for the entire search expression to be true, specify
     * <code>Or</code>. The default value is <code>And</code>.</p>
     */
    inline const BooleanOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>A Boolean operator used to evaluate the search expression. If you want every
     * conditional statement in all lists to be satisfied for the entire search
     * expression to be true, specify <code>And</code>. If only a single conditional
     * statement needs to be true for the entire search expression to be true, specify
     * <code>Or</code>. The default value is <code>And</code>.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>A Boolean operator used to evaluate the search expression. If you want every
     * conditional statement in all lists to be satisfied for the entire search
     * expression to be true, specify <code>And</code>. If only a single conditional
     * statement needs to be true for the entire search expression to be true, specify
     * <code>Or</code>. The default value is <code>And</code>.</p>
     */
    inline void SetOperator(const BooleanOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>A Boolean operator used to evaluate the search expression. If you want every
     * conditional statement in all lists to be satisfied for the entire search
     * expression to be true, specify <code>And</code>. If only a single conditional
     * statement needs to be true for the entire search expression to be true, specify
     * <code>Or</code>. The default value is <code>And</code>.</p>
     */
    inline void SetOperator(BooleanOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>A Boolean operator used to evaluate the search expression. If you want every
     * conditional statement in all lists to be satisfied for the entire search
     * expression to be true, specify <code>And</code>. If only a single conditional
     * statement needs to be true for the entire search expression to be true, specify
     * <code>Or</code>. The default value is <code>And</code>.</p>
     */
    inline SearchExpression& WithOperator(const BooleanOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>A Boolean operator used to evaluate the search expression. If you want every
     * conditional statement in all lists to be satisfied for the entire search
     * expression to be true, specify <code>And</code>. If only a single conditional
     * statement needs to be true for the entire search expression to be true, specify
     * <code>Or</code>. The default value is <code>And</code>.</p>
     */
    inline SearchExpression& WithOperator(BooleanOperator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<NestedFilters> m_nestedFilters;
    bool m_nestedFiltersHasBeenSet;

    Aws::Vector<SearchExpression> m_subExpressions;
    bool m_subExpressionsHasBeenSet;

    BooleanOperator m_operator;
    bool m_operatorHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
