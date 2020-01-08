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
   * <important> <p> <i> <b>Cost Category is in public beta for AWS Billing and Cost
   * Management and is subject to change. Your use of Cost Categories is subject to
   * the Beta Service Participation terms of the <a
   * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> (Section
   * 1.10).</b> </i> </p> </important> <p>Rules are processed in order. If there are
   * multiple rules that match the line item, then the first rule to match is used to
   * determine that Cost Category value.</p><p><h3>See Also:</h3>   <a
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
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, Tags, and nested
     * expressions. Currently the only dimensions supported is
     * <code>LINKED_ACCOUNT</code>.</p> <p>Root level <code>OR</code> is not supported.
     * We recommend you create a separate rule instead.</p>
     */
    inline const Expression& GetRule() const{ return m_rule; }

    /**
     * <p>An <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, Tags, and nested
     * expressions. Currently the only dimensions supported is
     * <code>LINKED_ACCOUNT</code>.</p> <p>Root level <code>OR</code> is not supported.
     * We recommend you create a separate rule instead.</p>
     */
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }

    /**
     * <p>An <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, Tags, and nested
     * expressions. Currently the only dimensions supported is
     * <code>LINKED_ACCOUNT</code>.</p> <p>Root level <code>OR</code> is not supported.
     * We recommend you create a separate rule instead.</p>
     */
    inline void SetRule(const Expression& value) { m_ruleHasBeenSet = true; m_rule = value; }

    /**
     * <p>An <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, Tags, and nested
     * expressions. Currently the only dimensions supported is
     * <code>LINKED_ACCOUNT</code>.</p> <p>Root level <code>OR</code> is not supported.
     * We recommend you create a separate rule instead.</p>
     */
    inline void SetRule(Expression&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }

    /**
     * <p>An <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, Tags, and nested
     * expressions. Currently the only dimensions supported is
     * <code>LINKED_ACCOUNT</code>.</p> <p>Root level <code>OR</code> is not supported.
     * We recommend you create a separate rule instead.</p>
     */
    inline CostCategoryRule& WithRule(const Expression& value) { SetRule(value); return *this;}

    /**
     * <p>An <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to categorize costs. This supports dimensions, Tags, and nested
     * expressions. Currently the only dimensions supported is
     * <code>LINKED_ACCOUNT</code>.</p> <p>Root level <code>OR</code> is not supported.
     * We recommend you create a separate rule instead.</p>
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
