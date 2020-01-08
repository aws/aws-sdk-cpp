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
#include <aws/ce/model/CostCategoryRuleVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/CostCategoryRule.h>
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
   * 1.10).</b> </i> </p> </important> <p>The structure of Cost Categories. This
   * includes detailed metadata and the set of rules for the
   * <code>CostCategory</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostCategory">AWS API
   * Reference</a></p>
   */
  class AWS_COSTEXPLORER_API CostCategory
  {
  public:
    CostCategory();
    CostCategory(Aws::Utils::Json::JsonView jsonValue);
    CostCategory& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline const Aws::String& GetCostCategoryArn() const{ return m_costCategoryArn; }

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline bool CostCategoryArnHasBeenSet() const { return m_costCategoryArnHasBeenSet; }

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(const Aws::String& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = value; }

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(Aws::String&& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = std::move(value); }

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(const char* value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn.assign(value); }

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline CostCategory& WithCostCategoryArn(const Aws::String& value) { SetCostCategoryArn(value); return *this;}

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline CostCategory& WithCostCategoryArn(Aws::String&& value) { SetCostCategoryArn(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for your Cost Category. </p>
     */
    inline CostCategory& WithCostCategoryArn(const char* value) { SetCostCategoryArn(value); return *this;}


    /**
     * <p> The Cost Category's effective start date.</p>
     */
    inline const Aws::String& GetEffectiveStart() const{ return m_effectiveStart; }

    /**
     * <p> The Cost Category's effective start date.</p>
     */
    inline bool EffectiveStartHasBeenSet() const { return m_effectiveStartHasBeenSet; }

    /**
     * <p> The Cost Category's effective start date.</p>
     */
    inline void SetEffectiveStart(const Aws::String& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = value; }

    /**
     * <p> The Cost Category's effective start date.</p>
     */
    inline void SetEffectiveStart(Aws::String&& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = std::move(value); }

    /**
     * <p> The Cost Category's effective start date.</p>
     */
    inline void SetEffectiveStart(const char* value) { m_effectiveStartHasBeenSet = true; m_effectiveStart.assign(value); }

    /**
     * <p> The Cost Category's effective start date.</p>
     */
    inline CostCategory& WithEffectiveStart(const Aws::String& value) { SetEffectiveStart(value); return *this;}

    /**
     * <p> The Cost Category's effective start date.</p>
     */
    inline CostCategory& WithEffectiveStart(Aws::String&& value) { SetEffectiveStart(std::move(value)); return *this;}

    /**
     * <p> The Cost Category's effective start date.</p>
     */
    inline CostCategory& WithEffectiveStart(const char* value) { SetEffectiveStart(value); return *this;}


    /**
     * <p> The Cost Category's effective end date.</p>
     */
    inline const Aws::String& GetEffectiveEnd() const{ return m_effectiveEnd; }

    /**
     * <p> The Cost Category's effective end date.</p>
     */
    inline bool EffectiveEndHasBeenSet() const { return m_effectiveEndHasBeenSet; }

    /**
     * <p> The Cost Category's effective end date.</p>
     */
    inline void SetEffectiveEnd(const Aws::String& value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd = value; }

    /**
     * <p> The Cost Category's effective end date.</p>
     */
    inline void SetEffectiveEnd(Aws::String&& value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd = std::move(value); }

    /**
     * <p> The Cost Category's effective end date.</p>
     */
    inline void SetEffectiveEnd(const char* value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd.assign(value); }

    /**
     * <p> The Cost Category's effective end date.</p>
     */
    inline CostCategory& WithEffectiveEnd(const Aws::String& value) { SetEffectiveEnd(value); return *this;}

    /**
     * <p> The Cost Category's effective end date.</p>
     */
    inline CostCategory& WithEffectiveEnd(Aws::String&& value) { SetEffectiveEnd(std::move(value)); return *this;}

    /**
     * <p> The Cost Category's effective end date.</p>
     */
    inline CostCategory& WithEffectiveEnd(const char* value) { SetEffectiveEnd(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CostCategory& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CostCategory& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CostCategory& WithName(const char* value) { SetName(value); return *this;}


    
    inline const CostCategoryRuleVersion& GetRuleVersion() const{ return m_ruleVersion; }

    
    inline bool RuleVersionHasBeenSet() const { return m_ruleVersionHasBeenSet; }

    
    inline void SetRuleVersion(const CostCategoryRuleVersion& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = value; }

    
    inline void SetRuleVersion(CostCategoryRuleVersion&& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = std::move(value); }

    
    inline CostCategory& WithRuleVersion(const CostCategoryRuleVersion& value) { SetRuleVersion(value); return *this;}

    
    inline CostCategory& WithRuleVersion(CostCategoryRuleVersion&& value) { SetRuleVersion(std::move(value)); return *this;}


    /**
     * <p> Rules are processed in order. If there are multiple rules that match the
     * line item, then the first rule to match is used to determine that Cost Category
     * value. </p>
     */
    inline const Aws::Vector<CostCategoryRule>& GetRules() const{ return m_rules; }

    /**
     * <p> Rules are processed in order. If there are multiple rules that match the
     * line item, then the first rule to match is used to determine that Cost Category
     * value. </p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p> Rules are processed in order. If there are multiple rules that match the
     * line item, then the first rule to match is used to determine that Cost Category
     * value. </p>
     */
    inline void SetRules(const Aws::Vector<CostCategoryRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p> Rules are processed in order. If there are multiple rules that match the
     * line item, then the first rule to match is used to determine that Cost Category
     * value. </p>
     */
    inline void SetRules(Aws::Vector<CostCategoryRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p> Rules are processed in order. If there are multiple rules that match the
     * line item, then the first rule to match is used to determine that Cost Category
     * value. </p>
     */
    inline CostCategory& WithRules(const Aws::Vector<CostCategoryRule>& value) { SetRules(value); return *this;}

    /**
     * <p> Rules are processed in order. If there are multiple rules that match the
     * line item, then the first rule to match is used to determine that Cost Category
     * value. </p>
     */
    inline CostCategory& WithRules(Aws::Vector<CostCategoryRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p> Rules are processed in order. If there are multiple rules that match the
     * line item, then the first rule to match is used to determine that Cost Category
     * value. </p>
     */
    inline CostCategory& AddRules(const CostCategoryRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p> Rules are processed in order. If there are multiple rules that match the
     * line item, then the first rule to match is used to determine that Cost Category
     * value. </p>
     */
    inline CostCategory& AddRules(CostCategoryRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_costCategoryArn;
    bool m_costCategoryArnHasBeenSet;

    Aws::String m_effectiveStart;
    bool m_effectiveStartHasBeenSet;

    Aws::String m_effectiveEnd;
    bool m_effectiveEndHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    CostCategoryRuleVersion m_ruleVersion;
    bool m_ruleVersionHasBeenSet;

    Aws::Vector<CostCategoryRule> m_rules;
    bool m_rulesHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
