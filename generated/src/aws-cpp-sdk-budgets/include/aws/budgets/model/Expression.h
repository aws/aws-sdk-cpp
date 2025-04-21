/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/budgets/model/ExpressionDimensionValues.h>
#include <aws/budgets/model/TagValues.h>
#include <aws/budgets/model/CostCategoryValues.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>Use Expression to filter in various Budgets APIs.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/Expression">AWS
   * API Reference</a></p>
   */
  class Expression
  {
  public:
    AWS_BUDGETS_API Expression() = default;
    AWS_BUDGETS_API Expression(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Expression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Return results that match either Dimension object.</p>
     */
    inline const Aws::Vector<Expression>& GetOr() const { return m_or; }
    inline bool OrHasBeenSet() const { return m_orHasBeenSet; }
    template<typename OrT = Aws::Vector<Expression>>
    void SetOr(OrT&& value) { m_orHasBeenSet = true; m_or = std::forward<OrT>(value); }
    template<typename OrT = Aws::Vector<Expression>>
    Expression& WithOr(OrT&& value) { SetOr(std::forward<OrT>(value)); return *this;}
    template<typename OrT = Expression>
    Expression& AddOr(OrT&& value) { m_orHasBeenSet = true; m_or.emplace_back(std::forward<OrT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Return results that match both Dimension objects.</p>
     */
    inline const Aws::Vector<Expression>& GetAnd() const { return m_and; }
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }
    template<typename AndT = Aws::Vector<Expression>>
    void SetAnd(AndT&& value) { m_andHasBeenSet = true; m_and = std::forward<AndT>(value); }
    template<typename AndT = Aws::Vector<Expression>>
    Expression& WithAnd(AndT&& value) { SetAnd(std::forward<AndT>(value)); return *this;}
    template<typename AndT = Expression>
    Expression& AddAnd(AndT&& value) { m_andHasBeenSet = true; m_and.emplace_back(std::forward<AndT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Return results that don't match a Dimension object.</p>
     */
    inline const Expression& GetNot() const{
      return *m_not;
    }
    inline bool NotHasBeenSet() const { return m_notHasBeenSet; }
    template<typename NotT = Expression>
    void SetNot(NotT&& value) {
      m_notHasBeenSet = true; 
      m_not = Aws::MakeShared<Expression>("Expression", std::forward<NotT>(value));
    }
    template<typename NotT = Expression>
    Expression& WithNot(NotT&& value) { SetNot(std::forward<NotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific Dimension to use for Expression.</p>
     */
    inline const ExpressionDimensionValues& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = ExpressionDimensionValues>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = ExpressionDimensionValues>
    Expression& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific Tag to use for Expression.</p>
     */
    inline const TagValues& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = TagValues>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = TagValues>
    Expression& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter that's based on CostCategoryValues.</p>
     */
    inline const CostCategoryValues& GetCostCategories() const { return m_costCategories; }
    inline bool CostCategoriesHasBeenSet() const { return m_costCategoriesHasBeenSet; }
    template<typename CostCategoriesT = CostCategoryValues>
    void SetCostCategories(CostCategoriesT&& value) { m_costCategoriesHasBeenSet = true; m_costCategories = std::forward<CostCategoriesT>(value); }
    template<typename CostCategoriesT = CostCategoryValues>
    Expression& WithCostCategories(CostCategoriesT&& value) { SetCostCategories(std::forward<CostCategoriesT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Expression> m_or;
    bool m_orHasBeenSet = false;

    Aws::Vector<Expression> m_and;
    bool m_andHasBeenSet = false;

    std::shared_ptr<Expression> m_not;
    bool m_notHasBeenSet = false;

    ExpressionDimensionValues m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    TagValues m_tags;
    bool m_tagsHasBeenSet = false;

    CostCategoryValues m_costCategories;
    bool m_costCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
