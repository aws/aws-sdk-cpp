/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-dashboards/model/DimensionValues.h>
#include <aws/bcm-dashboards/model/TagValues.h>
#include <aws/bcm-dashboards/model/CostCategoryValues.h>
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
namespace BCMDashboards
{
namespace Model
{

  /**
   * <p>Defines complex filtering conditions using logical operators
   * (<code>AND</code>, <code>OR</code>, <code>NOT</code>) and various filter
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/Expression">AWS
   * API Reference</a></p>
   */
  class Expression
  {
  public:
    AWS_BCMDASHBOARDS_API Expression() = default;
    AWS_BCMDASHBOARDS_API Expression(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API Expression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of expressions to combine with OR logic.</p>
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
     * <p>A list of expressions to combine with AND logic.</p>
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
     * <p>An expression to negate with NOT logic.</p>
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
     * <p>The dimension values to include in the filter expression.</p>
     */
    inline const DimensionValues& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = DimensionValues>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = DimensionValues>
    Expression& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag values to include in the filter expression.</p>
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
     * <p>The cost category values to include in the filter expression.</p>
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

    DimensionValues m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    TagValues m_tags;
    bool m_tagsHasBeenSet = false;

    CostCategoryValues m_costCategories;
    bool m_costCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
