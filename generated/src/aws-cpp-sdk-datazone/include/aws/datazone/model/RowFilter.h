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
    AWS_DATAZONE_API RowFilter() = default;
    AWS_DATAZONE_API RowFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RowFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 'and' clause of the row filter.</p>
     */
    inline const Aws::Vector<RowFilter>& GetAnd() const { return m_and; }
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }
    template<typename AndT = Aws::Vector<RowFilter>>
    void SetAnd(AndT&& value) { m_andHasBeenSet = true; m_and = std::forward<AndT>(value); }
    template<typename AndT = Aws::Vector<RowFilter>>
    RowFilter& WithAnd(AndT&& value) { SetAnd(std::forward<AndT>(value)); return *this;}
    template<typename AndT = RowFilter>
    RowFilter& AddAnd(AndT&& value) { m_andHasBeenSet = true; m_and.emplace_back(std::forward<AndT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The expression of the row filter.</p>
     */
    inline const RowFilterExpression& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = RowFilterExpression>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = RowFilterExpression>
    RowFilter& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'or' clause of the row filter.</p>
     */
    inline const Aws::Vector<RowFilter>& GetOr() const { return m_or; }
    inline bool OrHasBeenSet() const { return m_orHasBeenSet; }
    template<typename OrT = Aws::Vector<RowFilter>>
    void SetOr(OrT&& value) { m_orHasBeenSet = true; m_or = std::forward<OrT>(value); }
    template<typename OrT = Aws::Vector<RowFilter>>
    RowFilter& WithOr(OrT&& value) { SetOr(std::forward<OrT>(value)); return *this;}
    template<typename OrT = RowFilter>
    RowFilter& AddOr(OrT&& value) { m_orHasBeenSet = true; m_or.emplace_back(std::forward<OrT>(value)); return *this; }
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
