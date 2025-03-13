/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/Expression.h>
#include <aws/ce/model/CostCategoryInheritedValueDimension.h>
#include <aws/ce/model/CostCategoryRuleType.h>
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
   * <p>Rules are processed in order. If there are multiple rules that match the line
   * item, then the first rule to match is used to determine that Cost Category
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostCategoryRule">AWS
   * API Reference</a></p>
   */
  class CostCategoryRule
  {
  public:
    AWS_COSTEXPLORER_API CostCategoryRule() = default;
    AWS_COSTEXPLORER_API CostCategoryRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostCategoryRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    CostCategoryRule& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, tags, and nested
     * expressions. Currently the only dimensions supported are
     * <code>LINKED_ACCOUNT</code>, <code>SERVICE_CODE</code>,
     * <code>RECORD_TYPE</code>, <code>LINKED_ACCOUNT_NAME</code>, <code>REGION</code>,
     * and <code>USAGE_TYPE</code>.</p> <p> <code>RECORD_TYPE</code> is a dimension
     * used for Cost Explorer APIs, and is also supported for Cost Category
     * expressions. This dimension uses different terms, depending on whether you're
     * using the console or API/JSON editor. For a detailed comparison, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-cost-categories.html#cost-categories-terms">Term
     * Comparisons</a> in the <i>Billing and Cost Management User Guide</i>.</p>
     */
    inline const Expression& GetRule() const { return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    template<typename RuleT = Expression>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = Expression>
    CostCategoryRule& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value the line item is categorized as if the line item contains the
     * matched dimension.</p>
     */
    inline const CostCategoryInheritedValueDimension& GetInheritedValue() const { return m_inheritedValue; }
    inline bool InheritedValueHasBeenSet() const { return m_inheritedValueHasBeenSet; }
    template<typename InheritedValueT = CostCategoryInheritedValueDimension>
    void SetInheritedValue(InheritedValueT&& value) { m_inheritedValueHasBeenSet = true; m_inheritedValue = std::forward<InheritedValueT>(value); }
    template<typename InheritedValueT = CostCategoryInheritedValueDimension>
    CostCategoryRule& WithInheritedValue(InheritedValueT&& value) { SetInheritedValue(std::forward<InheritedValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can define the <code>CostCategoryRule</code> rule type as either
     * <code>REGULAR</code> or <code>INHERITED_VALUE</code>. The
     * <code>INHERITED_VALUE</code> rule type adds the flexibility to define a rule
     * that dynamically inherits the cost category value. This value is from the
     * dimension value that's defined by
     * <code>CostCategoryInheritedValueDimension</code>. For example, suppose that you
     * want to costs to be dynamically grouped based on the value of a specific tag
     * key. First, choose an inherited value rule type, and then choose the tag
     * dimension and specify the tag key to use.</p>
     */
    inline CostCategoryRuleType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CostCategoryRuleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CostCategoryRule& WithType(CostCategoryRuleType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Expression m_rule;
    bool m_ruleHasBeenSet = false;

    CostCategoryInheritedValueDimension m_inheritedValue;
    bool m_inheritedValueHasBeenSet = false;

    CostCategoryRuleType m_type{CostCategoryRuleType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
