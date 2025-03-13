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
#include <aws/ce/model/ResourceTag.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class CreateCostCategoryDefinitionRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API CreateCostCategoryDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCostCategoryDefinition"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCostCategoryDefinitionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateCostCategoryDefinitionRequest& WithEffectiveStart(EffectiveStartT&& value) { SetEffectiveStart(std::forward<EffectiveStartT>(value)); return *this;}
    ///@}

    ///@{
    
    inline CostCategoryRuleVersion GetRuleVersion() const { return m_ruleVersion; }
    inline bool RuleVersionHasBeenSet() const { return m_ruleVersionHasBeenSet; }
    inline void SetRuleVersion(CostCategoryRuleVersion value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = value; }
    inline CreateCostCategoryDefinitionRequest& WithRuleVersion(CostCategoryRuleVersion value) { SetRuleVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Cost Category rules used to categorize costs. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     */
    inline const Aws::Vector<CostCategoryRule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<CostCategoryRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<CostCategoryRule>>
    CreateCostCategoryDefinitionRequest& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = CostCategoryRule>
    CreateCostCategoryDefinitionRequest& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    CreateCostCategoryDefinitionRequest& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
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
    CreateCostCategoryDefinitionRequest& WithSplitChargeRules(SplitChargeRulesT&& value) { SetSplitChargeRules(std::forward<SplitChargeRulesT>(value)); return *this;}
    template<typename SplitChargeRulesT = CostCategorySplitChargeRule>
    CreateCostCategoryDefinitionRequest& AddSplitChargeRules(SplitChargeRulesT&& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules.emplace_back(std::forward<SplitChargeRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategory.html">
     * <code>CostCategory</code> </a>. You can use resource tags to control access to
     * your <code>cost category</code> using IAM policies.</p> <p>Each tag consists of
     * a key and a value, and each key must be unique for the resource. The following
     * restrictions apply to resource tags:</p> <ul> <li> <p>Although the maximum
     * number of array members is 200, you can assign a maximum of 50 user-tags to one
     * resource. The remaining are reserved for Amazon Web Services use</p> </li> <li>
     * <p>The maximum length of a key is 128 characters</p> </li> <li> <p>The maximum
     * length of a value is 256 characters</p> </li> <li> <p>Keys and values can only
     * contain alphanumeric characters, spaces, and any of the following:
     * <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case sensitive</p>
     * </li> <li> <p>Keys and values are trimmed for any leading or trailing
     * whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix for your
     * keys. This prefix is reserved for Amazon Web Services use</p> </li> </ul>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    CreateCostCategoryDefinitionRequest& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = ResourceTag>
    CreateCostCategoryDefinitionRequest& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
