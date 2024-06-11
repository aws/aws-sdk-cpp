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
    AWS_COSTEXPLORER_API CostCategory();
    AWS_COSTEXPLORER_API CostCategory(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostCategory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline const Aws::String& GetCostCategoryArn() const{ return m_costCategoryArn; }
    inline bool CostCategoryArnHasBeenSet() const { return m_costCategoryArnHasBeenSet; }
    inline void SetCostCategoryArn(const Aws::String& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = value; }
    inline void SetCostCategoryArn(Aws::String&& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = std::move(value); }
    inline void SetCostCategoryArn(const char* value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn.assign(value); }
    inline CostCategory& WithCostCategoryArn(const Aws::String& value) { SetCostCategoryArn(value); return *this;}
    inline CostCategory& WithCostCategoryArn(Aws::String&& value) { SetCostCategoryArn(std::move(value)); return *this;}
    inline CostCategory& WithCostCategoryArn(const char* value) { SetCostCategoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective start date of your Cost Category.</p>
     */
    inline const Aws::String& GetEffectiveStart() const{ return m_effectiveStart; }
    inline bool EffectiveStartHasBeenSet() const { return m_effectiveStartHasBeenSet; }
    inline void SetEffectiveStart(const Aws::String& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = value; }
    inline void SetEffectiveStart(Aws::String&& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = std::move(value); }
    inline void SetEffectiveStart(const char* value) { m_effectiveStartHasBeenSet = true; m_effectiveStart.assign(value); }
    inline CostCategory& WithEffectiveStart(const Aws::String& value) { SetEffectiveStart(value); return *this;}
    inline CostCategory& WithEffectiveStart(Aws::String&& value) { SetEffectiveStart(std::move(value)); return *this;}
    inline CostCategory& WithEffectiveStart(const char* value) { SetEffectiveStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective end date of your Cost Category.</p>
     */
    inline const Aws::String& GetEffectiveEnd() const{ return m_effectiveEnd; }
    inline bool EffectiveEndHasBeenSet() const { return m_effectiveEndHasBeenSet; }
    inline void SetEffectiveEnd(const Aws::String& value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd = value; }
    inline void SetEffectiveEnd(Aws::String&& value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd = std::move(value); }
    inline void SetEffectiveEnd(const char* value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd.assign(value); }
    inline CostCategory& WithEffectiveEnd(const Aws::String& value) { SetEffectiveEnd(value); return *this;}
    inline CostCategory& WithEffectiveEnd(Aws::String&& value) { SetEffectiveEnd(std::move(value)); return *this;}
    inline CostCategory& WithEffectiveEnd(const char* value) { SetEffectiveEnd(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CostCategory& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CostCategory& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CostCategory& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const CostCategoryRuleVersion& GetRuleVersion() const{ return m_ruleVersion; }
    inline bool RuleVersionHasBeenSet() const { return m_ruleVersionHasBeenSet; }
    inline void SetRuleVersion(const CostCategoryRuleVersion& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = value; }
    inline void SetRuleVersion(CostCategoryRuleVersion&& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = std::move(value); }
    inline CostCategory& WithRuleVersion(const CostCategoryRuleVersion& value) { SetRuleVersion(value); return *this;}
    inline CostCategory& WithRuleVersion(CostCategoryRuleVersion&& value) { SetRuleVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules are processed in order. If there are multiple rules that match the
     * line item, then the first rule to match is used to determine that Cost Category
     * value. </p>
     */
    inline const Aws::Vector<CostCategoryRule>& GetRules() const{ return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    inline void SetRules(const Aws::Vector<CostCategoryRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }
    inline void SetRules(Aws::Vector<CostCategoryRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }
    inline CostCategory& WithRules(const Aws::Vector<CostCategoryRule>& value) { SetRules(value); return *this;}
    inline CostCategory& WithRules(Aws::Vector<CostCategoryRule>&& value) { SetRules(std::move(value)); return *this;}
    inline CostCategory& AddRules(const CostCategoryRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }
    inline CostCategory& AddRules(CostCategoryRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The split charge rules that are used to allocate your charges between your
     * Cost Category values. </p>
     */
    inline const Aws::Vector<CostCategorySplitChargeRule>& GetSplitChargeRules() const{ return m_splitChargeRules; }
    inline bool SplitChargeRulesHasBeenSet() const { return m_splitChargeRulesHasBeenSet; }
    inline void SetSplitChargeRules(const Aws::Vector<CostCategorySplitChargeRule>& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules = value; }
    inline void SetSplitChargeRules(Aws::Vector<CostCategorySplitChargeRule>&& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules = std::move(value); }
    inline CostCategory& WithSplitChargeRules(const Aws::Vector<CostCategorySplitChargeRule>& value) { SetSplitChargeRules(value); return *this;}
    inline CostCategory& WithSplitChargeRules(Aws::Vector<CostCategorySplitChargeRule>&& value) { SetSplitChargeRules(std::move(value)); return *this;}
    inline CostCategory& AddSplitChargeRules(const CostCategorySplitChargeRule& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules.push_back(value); return *this; }
    inline CostCategory& AddSplitChargeRules(CostCategorySplitChargeRule&& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of processing statuses for Cost Management products for a specific
     * cost category. </p>
     */
    inline const Aws::Vector<CostCategoryProcessingStatus>& GetProcessingStatus() const{ return m_processingStatus; }
    inline bool ProcessingStatusHasBeenSet() const { return m_processingStatusHasBeenSet; }
    inline void SetProcessingStatus(const Aws::Vector<CostCategoryProcessingStatus>& value) { m_processingStatusHasBeenSet = true; m_processingStatus = value; }
    inline void SetProcessingStatus(Aws::Vector<CostCategoryProcessingStatus>&& value) { m_processingStatusHasBeenSet = true; m_processingStatus = std::move(value); }
    inline CostCategory& WithProcessingStatus(const Aws::Vector<CostCategoryProcessingStatus>& value) { SetProcessingStatus(value); return *this;}
    inline CostCategory& WithProcessingStatus(Aws::Vector<CostCategoryProcessingStatus>&& value) { SetProcessingStatus(std::move(value)); return *this;}
    inline CostCategory& AddProcessingStatus(const CostCategoryProcessingStatus& value) { m_processingStatusHasBeenSet = true; m_processingStatus.push_back(value); return *this; }
    inline CostCategory& AddProcessingStatus(CostCategoryProcessingStatus&& value) { m_processingStatusHasBeenSet = true; m_processingStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline CostCategory& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline CostCategory& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline CostCategory& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
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

    CostCategoryRuleVersion m_ruleVersion;
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
