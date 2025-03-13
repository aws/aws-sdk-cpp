/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostCategoryRuleVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/CostCategoryRule.h>
#include <aws/ce/model/CostCategorySplitChargeRule.h>
#include <aws/ce/model/CostCategoryProcessingStatus.h>
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
   * <p>The structure of Cost Categories. This includes detailed metadata and the set
   * of rules for the <code>CostCategory</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostCategory">AWS API
   * Reference</a></p>
   */
  class CostCategory
  {
  public:
    AWS_COSTEXPLORER_API CostCategory() = default;
    AWS_COSTEXPLORER_API CostCategory(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostCategory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline const Aws::String& GetCostCategoryArn() const { return m_costCategoryArn; }
    inline bool CostCategoryArnHasBeenSet() const { return m_costCategoryArnHasBeenSet; }
    template<typename CostCategoryArnT = Aws::String>
    void SetCostCategoryArn(CostCategoryArnT&& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = std::forward<CostCategoryArnT>(value); }
    template<typename CostCategoryArnT = Aws::String>
    CostCategory& WithCostCategoryArn(CostCategoryArnT&& value) { SetCostCategoryArn(std::forward<CostCategoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective start date of your Cost Category.</p>
     */
    inline const Aws::String& GetEffectiveStart() const { return m_effectiveStart; }
    inline bool EffectiveStartHasBeenSet() const { return m_effectiveStartHasBeenSet; }
    template<typename EffectiveStartT = Aws::String>
    void SetEffectiveStart(EffectiveStartT&& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = std::forward<EffectiveStartT>(value); }
    template<typename EffectiveStartT = Aws::String>
    CostCategory& WithEffectiveStart(EffectiveStartT&& value) { SetEffectiveStart(std::forward<EffectiveStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective end date of your Cost Category.</p>
     */
    inline const Aws::String& GetEffectiveEnd() const { return m_effectiveEnd; }
    inline bool EffectiveEndHasBeenSet() const { return m_effectiveEndHasBeenSet; }
    template<typename EffectiveEndT = Aws::String>
    void SetEffectiveEnd(EffectiveEndT&& value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd = std::forward<EffectiveEndT>(value); }
    template<typename EffectiveEndT = Aws::String>
    CostCategory& WithEffectiveEnd(EffectiveEndT&& value) { SetEffectiveEnd(std::forward<EffectiveEndT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CostCategory& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline CostCategoryRuleVersion GetRuleVersion() const { return m_ruleVersion; }
    inline bool RuleVersionHasBeenSet() const { return m_ruleVersionHasBeenSet; }
    inline void SetRuleVersion(CostCategoryRuleVersion value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = value; }
    inline CostCategory& WithRuleVersion(CostCategoryRuleVersion value) { SetRuleVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules are processed in order. If there are multiple rules that match the
     * line item, then the first rule to match is used to determine that Cost Category
     * value. </p>
     */
    inline const Aws::Vector<CostCategoryRule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<CostCategoryRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<CostCategoryRule>>
    CostCategory& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = CostCategoryRule>
    CostCategory& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The split charge rules that are used to allocate your charges between your
     * Cost Category values. </p>
     */
    inline const Aws::Vector<CostCategorySplitChargeRule>& GetSplitChargeRules() const { return m_splitChargeRules; }
    inline bool SplitChargeRulesHasBeenSet() const { return m_splitChargeRulesHasBeenSet; }
    template<typename SplitChargeRulesT = Aws::Vector<CostCategorySplitChargeRule>>
    void SetSplitChargeRules(SplitChargeRulesT&& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules = std::forward<SplitChargeRulesT>(value); }
    template<typename SplitChargeRulesT = Aws::Vector<CostCategorySplitChargeRule>>
    CostCategory& WithSplitChargeRules(SplitChargeRulesT&& value) { SetSplitChargeRules(std::forward<SplitChargeRulesT>(value)); return *this;}
    template<typename SplitChargeRulesT = CostCategorySplitChargeRule>
    CostCategory& AddSplitChargeRules(SplitChargeRulesT&& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules.emplace_back(std::forward<SplitChargeRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of processing statuses for Cost Management products for a specific
     * cost category. </p>
     */
    inline const Aws::Vector<CostCategoryProcessingStatus>& GetProcessingStatus() const { return m_processingStatus; }
    inline bool ProcessingStatusHasBeenSet() const { return m_processingStatusHasBeenSet; }
    template<typename ProcessingStatusT = Aws::Vector<CostCategoryProcessingStatus>>
    void SetProcessingStatus(ProcessingStatusT&& value) { m_processingStatusHasBeenSet = true; m_processingStatus = std::forward<ProcessingStatusT>(value); }
    template<typename ProcessingStatusT = Aws::Vector<CostCategoryProcessingStatus>>
    CostCategory& WithProcessingStatus(ProcessingStatusT&& value) { SetProcessingStatus(std::forward<ProcessingStatusT>(value)); return *this;}
    template<typename ProcessingStatusT = CostCategoryProcessingStatus>
    CostCategory& AddProcessingStatus(ProcessingStatusT&& value) { m_processingStatusHasBeenSet = true; m_processingStatus.emplace_back(std::forward<ProcessingStatusT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    CostCategory& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_costCategoryArn;
    bool m_costCategoryArnHasBeenSet = false;

    Aws::String m_effectiveStart;
    bool m_effectiveStartHasBeenSet = false;

    Aws::String m_effectiveEnd;
    bool m_effectiveEndHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CostCategoryRuleVersion m_ruleVersion{CostCategoryRuleVersion::NOT_SET};
    bool m_ruleVersionHasBeenSet = false;

    Aws::Vector<CostCategoryRule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::Vector<CostCategorySplitChargeRule> m_splitChargeRules;
    bool m_splitChargeRulesHasBeenSet = false;

    Aws::Vector<CostCategoryProcessingStatus> m_processingStatus;
    bool m_processingStatusHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
