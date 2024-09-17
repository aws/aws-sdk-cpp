/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/RowFilterExpression.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The row filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RowFilter">AWS
   * API Reference</a></p>
   */
  class RowFilter
  {
  public:
    AWS_DATAZONE_API RowFilter();
    AWS_DATAZONE_API RowFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RowFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 'and' clause of the row filter.</p>
     */
    inline const Aws::Vector<RowFilter>& GetAnd() const{ return m_and; }
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }
    inline void SetAnd(const Aws::Vector<RowFilter>& value) { m_andHasBeenSet = true; m_and = value; }
    inline void SetAnd(Aws::Vector<RowFilter>&& value) { m_andHasBeenSet = true; m_and = std::move(value); }
    inline RowFilter& WithAnd(const Aws::Vector<RowFilter>& value) { SetAnd(value); return *this;}
    inline RowFilter& WithAnd(Aws::Vector<RowFilter>&& value) { SetAnd(std::move(value)); return *this;}
    inline RowFilter& AddAnd(const RowFilter& value) { m_andHasBeenSet = true; m_and.push_back(value); return *this; }
    inline RowFilter& AddAnd(RowFilter&& value) { m_andHasBeenSet = true; m_and.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The expression of the row filter.</p>
     */
    inline const RowFilterExpression& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const RowFilterExpression& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(RowFilterExpression&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline RowFilter& WithExpression(const RowFilterExpression& value) { SetExpression(value); return *this;}
    inline RowFilter& WithExpression(RowFilterExpression&& value) { SetExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'or' clause of the row filter.</p>
     */
    inline const Aws::Vector<RowFilter>& GetOr() const{ return m_or; }
    inline bool OrHasBeenSet() const { return m_orHasBeenSet; }
    inline void SetOr(const Aws::Vector<RowFilter>& value) { m_orHasBeenSet = true; m_or = value; }
    inline void SetOr(Aws::Vector<RowFilter>&& value) { m_orHasBeenSet = true; m_or = std::move(value); }
    inline RowFilter& WithOr(const Aws::Vector<RowFilter>& value) { SetOr(value); return *this;}
    inline RowFilter& WithOr(Aws::Vector<RowFilter>&& value) { SetOr(std::move(value)); return *this;}
    inline RowFilter& AddOr(const RowFilter& value) { m_orHasBeenSet = true; m_or.push_back(value); return *this; }
    inline RowFilter& AddOr(RowFilter&& value) { m_orHasBeenSet = true; m_or.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RowFilter> m_and;
    bool m_andHasBeenSet = false;

    RowFilterExpression m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::Vector<RowFilter> m_or;
    bool m_orHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
