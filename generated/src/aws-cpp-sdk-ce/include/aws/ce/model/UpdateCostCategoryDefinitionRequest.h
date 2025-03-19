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
    AWS_COSTEXPLORER_API UpdateCostCategoryDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCostCategoryDefinition"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for your Cost Category.</p>
     */
    inline const Aws::String& GetCostCategoryArn() const { return m_costCategoryArn; }
    inline bool CostCategoryArnHasBeenSet() const { return m_costCategoryArnHasBeenSet; }
    template<typename CostCategoryArnT = Aws::String>
    void SetCostCategoryArn(CostCategoryArnT&& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = std::forward<CostCategoryArnT>(value); }
    template<typename CostCategoryArnT = Aws::String>
    UpdateCostCategoryDefinitionRequest& WithCostCategoryArn(CostCategoryArnT&& value) { SetCostCategoryArn(std::forward<CostCategoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Cost Category's effective start date. It can only be a billing start date
     * (first day of the month). If the date isn't provided, it's the first day of the
     * current month. Dates can't be before the previous twelve months, or in the
     * future.</p>
     */
    inline const Aws::String& GetEffectiveStart() const { return m_effectiveStart; }
    inline bool EffectiveStartHasBeenSet() const { return m_effectiveStartHasBeenSet; }
    template<typename EffectiveStartT = Aws::String>
    void SetEffectiveStart(EffectiveStartT&& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = std::forward<EffectiveStartT>(value); }
    template<typename EffectiveStartT = Aws::String>
    UpdateCostCategoryDefinitionRequest& WithEffectiveStart(EffectiveStartT&& value) { SetEffectiveStart(std::forward<EffectiveStartT>(value)); return *this;}
    ///@}

    ///@{
    
    inline CostCategoryRuleVersion GetRuleVersion() const { return m_ruleVersion; }
    inline bool RuleVersionHasBeenSet() const { return m_ruleVersionHasBeenSet; }
    inline void SetRuleVersion(CostCategoryRuleVersion value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = value; }
    inline UpdateCostCategoryDefinitionRequest& WithRuleVersion(CostCategoryRuleVersion value) { SetRuleVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Expression</code> object used to categorize costs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule
     * </a>. </p>
     */
    inline const Aws::Vector<CostCategoryRule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<CostCategoryRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<CostCategoryRule>>
    UpdateCostCategoryDefinitionRequest& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = CostCategoryRule>
    UpdateCostCategoryDefinitionRequest& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    UpdateCostCategoryDefinitionRequest& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The split charge rules used to allocate your charges between your Cost
     * Category values. </p>
     */
    inline const Aws::Vector<CostCategorySplitChargeRule>& GetSplitChargeRules() const { return m_splitChargeRules; }
    inline bool SplitChargeRulesHasBeenSet() const { return m_splitChargeRulesHasBeenSet; }
    template<typename SplitChargeRulesT = Aws::Vector<CostCategorySplitChargeRule>>
    void SetSplitChargeRules(SplitChargeRulesT&& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules = std::forward<SplitChargeRulesT>(value); }
    template<typename SplitChargeRulesT = Aws::Vector<CostCategorySplitChargeRule>>
    UpdateCostCategoryDefinitionRequest& WithSplitChargeRules(SplitChargeRulesT&& value) { SetSplitChargeRules(std::forward<SplitChargeRulesT>(value)); return *this;}
    template<typename SplitChargeRulesT = CostCategorySplitChargeRule>
    UpdateCostCategoryDefinitionRequest& AddSplitChargeRules(SplitChargeRulesT&& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules.emplace_back(std::forward<SplitChargeRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_costCategoryArn;
    bool m_costCategoryArnHasBeenSet = false;

    Aws::String m_effectiveStart;
    bool m_effectiveStartHasBeenSet = false;

    CostCategoryRuleVersion m_ruleVersion{CostCategoryRuleVersion::NOT_SET};
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
