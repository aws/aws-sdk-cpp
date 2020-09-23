/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/Expression.h>
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
  class AWS_COSTEXPLORER_API CostCategoryRule
  {
  public:
    CostCategoryRule();
    CostCategoryRule(Aws::Utils::Json::JsonView jsonValue);
    CostCategoryRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetValue() const{ return m_value; }

    
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    
    inline CostCategoryRule& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    
    inline CostCategoryRule& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    
    inline CostCategoryRule& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, tags, and nested
     * expressions. Currently the only dimensions supported are
     * <code>LINKED_ACCOUNT</code>, <code>SERVICE_CODE</code>,
     * <code>RECORD_TYPE</code>, and <code>LINKED_ACCOUNT_NAME</code>.</p> <p>Root
     * level <code>OR</code> is not supported. We recommend that you create a separate
     * rule instead.</p> <p> <code>RECORD_TYPE</code> is a dimension used for Cost
     * Explorer APIs, and is also supported for Cost Category expressions. This
     * dimension uses different terms, depending on whether you're using the console or
     * API/JSON editor. For a detailed comparison, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-cost-categories.html#cost-categories-terms">Term
     * Comparisons</a> in the <i>AWS Billing and Cost Management User Guide</i>.</p>
     */
    inline const Expression& GetRule() const{ return m_rule; }

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, tags, and nested
     * expressions. Currently the only dimensions supported are
     * <code>LINKED_ACCOUNT</code>, <code>SERVICE_CODE</code>,
     * <code>RECORD_TYPE</code>, and <code>LINKED_ACCOUNT_NAME</code>.</p> <p>Root
     * level <code>OR</code> is not supported. We recommend that you create a separate
     * rule instead.</p> <p> <code>RECORD_TYPE</code> is a dimension used for Cost
     * Explorer APIs, and is also supported for Cost Category expressions. This
     * dimension uses different terms, depending on whether you're using the console or
     * API/JSON editor. For a detailed comparison, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-cost-categories.html#cost-categories-terms">Term
     * Comparisons</a> in the <i>AWS Billing and Cost Management User Guide</i>.</p>
     */
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, tags, and nested
     * expressions. Currently the only dimensions supported are
     * <code>LINKED_ACCOUNT</code>, <code>SERVICE_CODE</code>,
     * <code>RECORD_TYPE</code>, and <code>LINKED_ACCOUNT_NAME</code>.</p> <p>Root
     * level <code>OR</code> is not supported. We recommend that you create a separate
     * rule instead.</p> <p> <code>RECORD_TYPE</code> is a dimension used for Cost
     * Explorer APIs, and is also supported for Cost Category expressions. This
     * dimension uses different terms, depending on whether you're using the console or
     * API/JSON editor. For a detailed comparison, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-cost-categories.html#cost-categories-terms">Term
     * Comparisons</a> in the <i>AWS Billing and Cost Management User Guide</i>.</p>
     */
    inline void SetRule(const Expression& value) { m_ruleHasBeenSet = true; m_rule = value; }

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, tags, and nested
     * expressions. Currently the only dimensions supported are
     * <code>LINKED_ACCOUNT</code>, <code>SERVICE_CODE</code>,
     * <code>RECORD_TYPE</code>, and <code>LINKED_ACCOUNT_NAME</code>.</p> <p>Root
     * level <code>OR</code> is not supported. We recommend that you create a separate
     * rule instead.</p> <p> <code>RECORD_TYPE</code> is a dimension used for Cost
     * Explorer APIs, and is also supported for Cost Category expressions. This
     * dimension uses different terms, depending on whether you're using the console or
     * API/JSON editor. For a detailed comparison, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-cost-categories.html#cost-categories-terms">Term
     * Comparisons</a> in the <i>AWS Billing and Cost Management User Guide</i>.</p>
     */
    inline void SetRule(Expression&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, tags, and nested
     * expressions. Currently the only dimensions supported are
     * <code>LINKED_ACCOUNT</code>, <code>SERVICE_CODE</code>,
     * <code>RECORD_TYPE</code>, and <code>LINKED_ACCOUNT_NAME</code>.</p> <p>Root
     * level <code>OR</code> is not supported. We recommend that you create a separate
     * rule instead.</p> <p> <code>RECORD_TYPE</code> is a dimension used for Cost
     * Explorer APIs, and is also supported for Cost Category expressions. This
     * dimension uses different terms, depending on whether you're using the console or
     * API/JSON editor. For a detailed comparison, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-cost-categories.html#cost-categories-terms">Term
     * Comparisons</a> in the <i>AWS Billing and Cost Management User Guide</i>.</p>
     */
    inline CostCategoryRule& WithRule(const Expression& value) { SetRule(value); return *this;}

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, tags, and nested
     * expressions. Currently the only dimensions supported are
     * <code>LINKED_ACCOUNT</code>, <code>SERVICE_CODE</code>,
     * <code>RECORD_TYPE</code>, and <code>LINKED_ACCOUNT_NAME</code>.</p> <p>Root
     * level <code>OR</code> is not supported. We recommend that you create a separate
     * rule instead.</p> <p> <code>RECORD_TYPE</code> is a dimension used for Cost
     * Explorer APIs, and is also supported for Cost Category expressions. This
     * dimension uses different terms, depending on whether you're using the console or
     * API/JSON editor. For a detailed comparison, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-cost-categories.html#cost-categories-terms">Term
     * Comparisons</a> in the <i>AWS Billing and Cost Management User Guide</i>.</p>
     */
    inline CostCategoryRule& WithRule(Expression&& value) { SetRule(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet;

    Expression m_rule;
    bool m_ruleHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
