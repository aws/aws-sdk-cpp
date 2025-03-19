/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-pricing-calculator/model/ExpressionFilter.h>
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
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   * <p> Represents a complex filtering expression for cost and usage data.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/Expression">AWS
   * API Reference</a></p>
   */
  class Expression
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API Expression() = default;
    AWS_BCMPRICINGCALCULATOR_API Expression(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Expression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of expressions to be combined with AND logic. </p>
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
     * <p> A list of expressions to be combined with OR logic. </p>
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
     * <p> An expression to be negated. </p>
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
     * <p> Filters based on cost categories. </p>
     */
    inline const ExpressionFilter& GetCostCategories() const { return m_costCategories; }
    inline bool CostCategoriesHasBeenSet() const { return m_costCategoriesHasBeenSet; }
    template<typename CostCategoriesT = ExpressionFilter>
    void SetCostCategories(CostCategoriesT&& value) { m_costCategoriesHasBeenSet = true; m_costCategories = std::forward<CostCategoriesT>(value); }
    template<typename CostCategoriesT = ExpressionFilter>
    Expression& WithCostCategories(CostCategoriesT&& value) { SetCostCategories(std::forward<CostCategoriesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters based on dimensions (e.g., service, operation). </p>
     */
    inline const ExpressionFilter& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = ExpressionFilter>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = ExpressionFilter>
    Expression& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters based on resource tags. </p>
     */
    inline const ExpressionFilter& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = ExpressionFilter>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = ExpressionFilter>
    Expression& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Expression> m_and;
    bool m_andHasBeenSet = false;

    Aws::Vector<Expression> m_or;
    bool m_orHasBeenSet = false;

    std::shared_ptr<Expression> m_not;
    bool m_notHasBeenSet = false;

    ExpressionFilter m_costCategories;
    bool m_costCategoriesHasBeenSet = false;

    ExpressionFilter m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    ExpressionFilter m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
