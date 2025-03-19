/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/DimensionValues.h>
#include <aws/ce/model/TagValues.h>
#include <aws/ce/model/CostCategoryValues.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Use <code>Expression</code> to filter in various Cost Explorer APIs.</p>
   * <p>Not all <code>Expression</code> types are supported in each API. Refer to the
   * documentation for each specific API to see what is supported.</p> <p>There are
   * two patterns:</p> <ul> <li> <p>Simple dimension values.</p> <ul> <li> <p>There
   * are three types of simple dimension values: <code>CostCategories</code>,
   * <code>Tags</code>, and <code>Dimensions</code>.</p> <ul> <li> <p>Specify the
   * <code>CostCategories</code> field to define a filter that acts on Cost
   * Categories.</p> </li> <li> <p>Specify the <code>Tags</code> field to define a
   * filter that acts on Cost Allocation Tags.</p> </li> <li> <p>Specify the
   * <code>Dimensions</code> field to define a filter that acts on the <a
   * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_DimensionValues.html">
   * <code>DimensionValues</code> </a>.</p> </li> </ul> </li> <li> <p>For each filter
   * type, you can set the dimension name and values for the filters that you plan to
   * use.</p> <ul> <li> <p>For example, you can filter for <code>REGION==us-east-1 OR
   * REGION==us-west-1</code>. For <code>GetRightsizingRecommendation</code>, the
   * Region is a full name (for example, <code>REGION==US East (N.
   * Virginia)</code>.</p> </li> <li> <p>The corresponding <code>Expression</code>
   * for this example is as follows: <code>{ "Dimensions": { "Key": "REGION",
   * "Values": [ "us-east-1", "us-west-1" ] } }</code> </p> </li> <li> <p>As shown in
   * the previous example, lists of dimension values are combined with
   * <code>OR</code> when applying the filter.</p> </li> </ul> </li> <li> <p>You can
   * also set different match options to further control how the filter behaves. Not
   * all APIs support match options. Refer to the documentation for each specific API
   * to see what is supported.</p> <ul> <li> <p>For example, you can filter for
   * linked account names that start with "a".</p> </li> <li> <p>The corresponding
   * <code>Expression</code> for this example is as follows: <code>{ "Dimensions": {
   * "Key": "LINKED_ACCOUNT_NAME", "MatchOptions": [ "STARTS_WITH" ], "Values": [ "a"
   * ] } }</code> </p> </li> </ul> </li> </ul> </li> <li> <p>Compound
   * <code>Expression</code> types with logical operations.</p> <ul> <li> <p>You can
   * use multiple <code>Expression</code> types and the logical operators
   * <code>AND/OR/NOT</code> to create a list of one or more <code>Expression</code>
   * objects. By doing this, you can filter by more advanced options.</p> </li> <li>
   * <p>For example, you can filter by <code>((REGION == us-east-1 OR REGION ==
   * us-west-1) OR (TAG.Type == Type1)) AND (USAGE_TYPE != DataTransfer)</code>.</p>
   * </li> <li> <p>The corresponding <code>Expression</code> for this example is as
   * follows: <code>{ "And": [ {"Or": [ {"Dimensions": { "Key": "REGION", "Values": [
   * "us-east-1", "us-west-1" ] }}, {"Tags": { "Key": "TagName", "Values": ["Value1"]
   * } } ]}, {"Not": {"Dimensions": { "Key": "USAGE_TYPE", "Values": ["DataTransfer"]
   * }}} ] } </code> </p> </li> </ul>  <p>Because each <code>Expression</code>
   * can have only one operator, the service returns an error if more than one is
   * specified. The following example shows an <code>Expression</code> object that
   * creates an error: <code> { "And": [ ... ], "Dimensions": { "Key": "USAGE_TYPE",
   * "Values": [ "DataTransfer" ] } } </code> </p> <p>The following is an example of
   * the corresponding error message: <code>"Expression has more than one roots. Only
   * one root operator is allowed for each expression: And, Or, Not, Dimensions,
   * Tags, CostCategories"</code> </p>  </li> </ul>  <p>For the
   * <code>GetRightsizingRecommendation</code> action, a combination of OR and NOT
   * isn't supported. OR isn't supported between different dimensions, or dimensions
   * and tags. NOT operators aren't supported. Dimensions are also limited to
   * <code>LINKED_ACCOUNT</code>, <code>REGION</code>, or
   * <code>RIGHTSIZING_TYPE</code>.</p> <p>For the
   * <code>GetReservationPurchaseRecommendation</code> action, only NOT is supported.
   * AND and OR aren't supported. Dimensions are limited to
   * <code>LINKED_ACCOUNT</code>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/Expression">AWS API
   * Reference</a></p>
   */
  class Expression
  {
  public:
    AWS_COSTEXPLORER_API Expression() = default;
    AWS_COSTEXPLORER_API Expression(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Expression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Return results that match either <code>Dimension</code> object.</p>
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
     * <p>Return results that match both <code>Dimension</code> objects.</p>
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
     * <p>Return results that don't match a <code>Dimension</code> object.</p>
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
     * <p>The specific <code>Dimension</code> to use for <code>Expression</code>.</p>
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
     * <p>The specific <code>Tag</code> to use for <code>Expression</code>.</p>
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
     * <p>The filter that's based on <code>CostCategory</code> values.</p>
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
} // namespace CostExplorer
} // namespace Aws
