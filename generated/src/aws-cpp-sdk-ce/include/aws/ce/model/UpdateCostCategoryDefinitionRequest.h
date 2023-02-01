/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostCategoryRuleVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/CostCategoryRule.h>
#include <aws/ce/model/CostCategorySplitChargeRule.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class UpdateCostCategoryDefinitionRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API UpdateCostCategoryDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCostCategoryDefinition"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for your Cost Category.</p>
     */
    inline const Aws::String& GetCostCategoryArn() const{ return m_costCategoryArn; }

    /**
     * <p>The unique identifier for your Cost Category.</p>
     */
    inline bool CostCategoryArnHasBeenSet() const { return m_costCategoryArnHasBeenSet; }

    /**
     * <p>The unique identifier for your Cost Category.</p>
     */
    inline void SetCostCategoryArn(const Aws::String& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = value; }

    /**
     * <p>The unique identifier for your Cost Category.</p>
     */
    inline void SetCostCategoryArn(Aws::String&& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = std::move(value); }

    /**
     * <p>The unique identifier for your Cost Category.</p>
     */
    inline void SetCostCategoryArn(const char* value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn.assign(value); }

    /**
     * <p>The unique identifier for your Cost Category.</p>
     */
    inline UpdateCostCategoryDefinitionRequest& WithCostCategoryArn(const Aws::String& value) { SetCostCategoryArn(value); return *this;}

    /**
     * <p>The unique identifier for your Cost Category.</p>
     */
    inline UpdateCostCategoryDefinitionRequest& WithCostCategoryArn(Aws::String&& value) { SetCostCategoryArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for your Cost Category.</p>
     */
    inline UpdateCostCategoryDefinitionRequest& WithCostCategoryArn(const char* value) { SetCostCategoryArn(value); return *this;}


    /**
     * <p>The Cost Category's effective start date. It can only be a billing start date
     * (first day of the month). If the date isn't provided, it's the first day of the
     * current month. Dates can't be before the previous twelve months, or in the
     * future.</p>
     */
    inline const Aws::String& GetEffectiveStart() const{ return m_effectiveStart; }

    /**
     * <p>The Cost Category's effective start date. It can only be a billing start date
     * (first day of the month). If the date isn't provided, it's the first day of the
     * current month. Dates can't be before the previous twelve months, or in the
     * future.</p>
     */
    inline bool EffectiveStartHasBeenSet() const { return m_effectiveStartHasBeenSet; }

    /**
     * <p>The Cost Category's effective start date. It can only be a billing start date
     * (first day of the month). If the date isn't provided, it's the first day of the
     * current month. Dates can't be before the previous twelve months, or in the
     * future.</p>
     */
    inline void SetEffectiveStart(const Aws::String& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = value; }

    /**
     * <p>The Cost Category's effective start date. It can only be a billing start date
     * (first day of the month). If the date isn't provided, it's the first day of the
     * current month. Dates can't be before the previous twelve months, or in the
     * future.</p>
     */
    inline void SetEffectiveStart(Aws::String&& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = std::move(value); }

    /**
     * <p>The Cost Category's effective start date. It can only be a billing start date
     * (first day of the month). If the date isn't provided, it's the first day of the
     * current month. Dates can't be before the previous twelve months, or in the
     * future.</p>
     */
    inline void SetEffectiveStart(const char* value) { m_effectiveStartHasBeenSet = true; m_effectiveStart.assign(value); }

    /**
     * <p>The Cost Category's effective start date. It can only be a billing start date
     * (first day of the month). If the date isn't provided, it's the first day of the
     * current month. Dates can't be before the previous twelve months, or in the
     * future.</p>
     */
    inline UpdateCostCategoryDefinitionRequest& WithEffectiveStart(const Aws::String& value) { SetEffectiveStart(value); return *this;}

    /**
     * <p>The Cost Category's effective start date. It can only be a billing start date
     * (first day of the month). If the date isn't provided, it's the first day of the
     * current month. Dates can't be before the previous twelve months, or in the
     * future.</p>
     */
    inline UpdateCostCategoryDefinitionRequest& WithEffectiveStart(Aws::String&& value) { SetEffectiveStart(std::move(value)); return *this;}

    /**
     * <p>The Cost Category's effective start date. It can only be a billing start date
     * (first day of the month). If the date isn't provided, it's the first day of the
     * current month. Dates can't be before the previous twelve months, or in the
     * future.</p>
     */
    inline UpdateCostCategoryDefinitionRequest& WithEffectiveStart(const char* value) { SetEffectiveStart(value); return *this;}


    
    inline const CostCategoryRuleVersion& GetRuleVersion() const{ return m_ruleVersion; }

    
    inline bool RuleVersionHasBeenSet() const { return m_ruleVersionHasBeenSet; }

    
    inline void SetRuleVersion(const CostCategoryRuleVersion& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = value; }

    
    inline void SetRuleVersion(CostCategoryRuleVersion&& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = std::move(value); }

    
    inline UpdateCostCategoryDefinitionRequest& WithRuleVersion(const CostCategoryRuleVersion& value) { SetRuleVersion(value); return *this;}

    
    inline UpdateCostCategoryDefinitionRequest& WithRuleVersion(CostCategoryRuleVersion&& value) { SetRuleVersion(std::move(value)); return *this;}


    /**
     * <p>The <code>Expression</code> object used to categorize costs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule
     * </a>. </p>
     */
    inline const Aws::Vector<CostCategoryRule>& GetRules() const{ return m_rules; }

    /**
     * <p>The <code>Expression</code> object used to categorize costs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule
     * </a>. </p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The <code>Expression</code> object used to categorize costs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule
     * </a>. </p>
     */
    inline void SetRules(const Aws::Vector<CostCategoryRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The <code>Expression</code> object used to categorize costs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule
     * </a>. </p>
     */
    inline void SetRules(Aws::Vector<CostCategoryRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The <code>Expression</code> object used to categorize costs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule
     * </a>. </p>
     */
    inline UpdateCostCategoryDefinitionRequest& WithRules(const Aws::Vector<CostCategoryRule>& value) { SetRules(value); return *this;}

    /**
     * <p>The <code>Expression</code> object used to categorize costs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule
     * </a>. </p>
     */
    inline UpdateCostCategoryDefinitionRequest& WithRules(Aws::Vector<CostCategoryRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The <code>Expression</code> object used to categorize costs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule
     * </a>. </p>
     */
    inline UpdateCostCategoryDefinitionRequest& AddRules(const CostCategoryRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The <code>Expression</code> object used to categorize costs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule
     * </a>. </p>
     */
    inline UpdateCostCategoryDefinitionRequest& AddRules(CostCategoryRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    
    inline UpdateCostCategoryDefinitionRequest& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    
    inline UpdateCostCategoryDefinitionRequest& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    
    inline UpdateCostCategoryDefinitionRequest& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p> The split charge rules used to allocate your charges between your Cost
     * Category values. </p>
     */
    inline const Aws::Vector<CostCategorySplitChargeRule>& GetSplitChargeRules() const{ return m_splitChargeRules; }

    /**
     * <p> The split charge rules used to allocate your charges between your Cost
     * Category values. </p>
     */
    inline bool SplitChargeRulesHasBeenSet() const { return m_splitChargeRulesHasBeenSet; }

    /**
     * <p> The split charge rules used to allocate your charges between your Cost
     * Category values. </p>
     */
    inline void SetSplitChargeRules(const Aws::Vector<CostCategorySplitChargeRule>& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules = value; }

    /**
     * <p> The split charge rules used to allocate your charges between your Cost
     * Category values. </p>
     */
    inline void SetSplitChargeRules(Aws::Vector<CostCategorySplitChargeRule>&& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules = std::move(value); }

    /**
     * <p> The split charge rules used to allocate your charges between your Cost
     * Category values. </p>
     */
    inline UpdateCostCategoryDefinitionRequest& WithSplitChargeRules(const Aws::Vector<CostCategorySplitChargeRule>& value) { SetSplitChargeRules(value); return *this;}

    /**
     * <p> The split charge rules used to allocate your charges between your Cost
     * Category values. </p>
     */
    inline UpdateCostCategoryDefinitionRequest& WithSplitChargeRules(Aws::Vector<CostCategorySplitChargeRule>&& value) { SetSplitChargeRules(std::move(value)); return *this;}

    /**
     * <p> The split charge rules used to allocate your charges between your Cost
     * Category values. </p>
     */
    inline UpdateCostCategoryDefinitionRequest& AddSplitChargeRules(const CostCategorySplitChargeRule& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules.push_back(value); return *this; }

    /**
     * <p> The split charge rules used to allocate your charges between your Cost
     * Category values. </p>
     */
    inline UpdateCostCategoryDefinitionRequest& AddSplitChargeRules(CostCategorySplitChargeRule&& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_costCategoryArn;
    bool m_costCategoryArnHasBeenSet = false;

    Aws::String m_effectiveStart;
    bool m_effectiveStartHasBeenSet = false;

    CostCategoryRuleVersion m_ruleVersion;
    bool m_ruleVersionHasBeenSet = false;

    Aws::Vector<CostCategoryRule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::Vector<CostCategorySplitChargeRule> m_splitChargeRules;
    bool m_splitChargeRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
