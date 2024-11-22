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
    AWS_BCMPRICINGCALCULATOR_API Expression();
    AWS_BCMPRICINGCALCULATOR_API Expression(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Expression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of expressions to be combined with AND logic. </p>
     */
    inline const Aws::Vector<Expression>& GetAnd() const{ return m_and; }
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }
    inline void SetAnd(const Aws::Vector<Expression>& value) { m_andHasBeenSet = true; m_and = value; }
    inline void SetAnd(Aws::Vector<Expression>&& value) { m_andHasBeenSet = true; m_and = std::move(value); }
    inline Expression& WithAnd(const Aws::Vector<Expression>& value) { SetAnd(value); return *this;}
    inline Expression& WithAnd(Aws::Vector<Expression>&& value) { SetAnd(std::move(value)); return *this;}
    inline Expression& AddAnd(const Expression& value) { m_andHasBeenSet = true; m_and.push_back(value); return *this; }
    inline Expression& AddAnd(Expression&& value) { m_andHasBeenSet = true; m_and.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of expressions to be combined with OR logic. </p>
     */
    inline const Aws::Vector<Expression>& GetOr() const{ return m_or; }
    inline bool OrHasBeenSet() const { return m_orHasBeenSet; }
    inline void SetOr(const Aws::Vector<Expression>& value) { m_orHasBeenSet = true; m_or = value; }
    inline void SetOr(Aws::Vector<Expression>&& value) { m_orHasBeenSet = true; m_or = std::move(value); }
    inline Expression& WithOr(const Aws::Vector<Expression>& value) { SetOr(value); return *this;}
    inline Expression& WithOr(Aws::Vector<Expression>&& value) { SetOr(std::move(value)); return *this;}
    inline Expression& AddOr(const Expression& value) { m_orHasBeenSet = true; m_or.push_back(value); return *this; }
    inline Expression& AddOr(Expression&& value) { m_orHasBeenSet = true; m_or.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An expression to be negated. </p>
     */
    AWS_BCMPRICINGCALCULATOR_API const Expression& GetNot() const;
    AWS_BCMPRICINGCALCULATOR_API bool NotHasBeenSet() const;
    AWS_BCMPRICINGCALCULATOR_API void SetNot(const Expression& value);
    AWS_BCMPRICINGCALCULATOR_API void SetNot(Expression&& value);
    AWS_BCMPRICINGCALCULATOR_API Expression& WithNot(const Expression& value);
    AWS_BCMPRICINGCALCULATOR_API Expression& WithNot(Expression&& value);
    ///@}

    ///@{
    /**
     * <p> Filters based on cost categories. </p>
     */
    inline const ExpressionFilter& GetCostCategories() const{ return m_costCategories; }
    inline bool CostCategoriesHasBeenSet() const { return m_costCategoriesHasBeenSet; }
    inline void SetCostCategories(const ExpressionFilter& value) { m_costCategoriesHasBeenSet = true; m_costCategories = value; }
    inline void SetCostCategories(ExpressionFilter&& value) { m_costCategoriesHasBeenSet = true; m_costCategories = std::move(value); }
    inline Expression& WithCostCategories(const ExpressionFilter& value) { SetCostCategories(value); return *this;}
    inline Expression& WithCostCategories(ExpressionFilter&& value) { SetCostCategories(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters based on dimensions (e.g., service, operation). </p>
     */
    inline const ExpressionFilter& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const ExpressionFilter& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(ExpressionFilter&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline Expression& WithDimensions(const ExpressionFilter& value) { SetDimensions(value); return *this;}
    inline Expression& WithDimensions(ExpressionFilter&& value) { SetDimensions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters based on resource tags. </p>
     */
    inline const ExpressionFilter& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const ExpressionFilter& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(ExpressionFilter&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Expression& WithTags(const ExpressionFilter& value) { SetTags(value); return *this;}
    inline Expression& WithTags(ExpressionFilter&& value) { SetTags(std::move(value)); return *this;}
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
