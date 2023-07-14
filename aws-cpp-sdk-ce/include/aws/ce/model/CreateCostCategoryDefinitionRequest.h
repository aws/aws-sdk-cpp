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
  class AWS_COSTEXPLORER_API CreateCostCategoryDefinitionRequest : public CostExplorerRequest
  {
  public:
    CreateCostCategoryDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCostCategoryDefinition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateCostCategoryDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateCostCategoryDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateCostCategoryDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const CostCategoryRuleVersion& GetRuleVersion() const{ return m_ruleVersion; }

    
    inline bool RuleVersionHasBeenSet() const { return m_ruleVersionHasBeenSet; }

    
    inline void SetRuleVersion(const CostCategoryRuleVersion& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = value; }

    
    inline void SetRuleVersion(CostCategoryRuleVersion&& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = std::move(value); }

    
    inline CreateCostCategoryDefinitionRequest& WithRuleVersion(const CostCategoryRuleVersion& value) { SetRuleVersion(value); return *this;}

    
    inline CreateCostCategoryDefinitionRequest& WithRuleVersion(CostCategoryRuleVersion&& value) { SetRuleVersion(std::move(value)); return *this;}


    /**
     * <p>The Cost Category rules used to categorize costs. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     */
    inline const Aws::Vector<CostCategoryRule>& GetRules() const{ return m_rules; }

    /**
     * <p>The Cost Category rules used to categorize costs. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The Cost Category rules used to categorize costs. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     */
    inline void SetRules(const Aws::Vector<CostCategoryRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The Cost Category rules used to categorize costs. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     */
    inline void SetRules(Aws::Vector<CostCategoryRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The Cost Category rules used to categorize costs. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     */
    inline CreateCostCategoryDefinitionRequest& WithRules(const Aws::Vector<CostCategoryRule>& value) { SetRules(value); return *this;}

    /**
     * <p>The Cost Category rules used to categorize costs. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     */
    inline CreateCostCategoryDefinitionRequest& WithRules(Aws::Vector<CostCategoryRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The Cost Category rules used to categorize costs. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     */
    inline CreateCostCategoryDefinitionRequest& AddRules(const CostCategoryRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The Cost Category rules used to categorize costs. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     */
    inline CreateCostCategoryDefinitionRequest& AddRules(CostCategoryRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    
    inline CreateCostCategoryDefinitionRequest& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    
    inline CreateCostCategoryDefinitionRequest& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    
    inline CreateCostCategoryDefinitionRequest& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


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
    inline CreateCostCategoryDefinitionRequest& WithSplitChargeRules(const Aws::Vector<CostCategorySplitChargeRule>& value) { SetSplitChargeRules(value); return *this;}

    /**
     * <p> The split charge rules used to allocate your charges between your Cost
     * Category values. </p>
     */
    inline CreateCostCategoryDefinitionRequest& WithSplitChargeRules(Aws::Vector<CostCategorySplitChargeRule>&& value) { SetSplitChargeRules(std::move(value)); return *this;}

    /**
     * <p> The split charge rules used to allocate your charges between your Cost
     * Category values. </p>
     */
    inline CreateCostCategoryDefinitionRequest& AddSplitChargeRules(const CostCategorySplitChargeRule& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules.push_back(value); return *this; }

    /**
     * <p> The split charge rules used to allocate your charges between your Cost
     * Category values. </p>
     */
    inline CreateCostCategoryDefinitionRequest& AddSplitChargeRules(CostCategorySplitChargeRule&& value) { m_splitChargeRulesHasBeenSet = true; m_splitChargeRules.push_back(std::move(value)); return *this; }


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
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }

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
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

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
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

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
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

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
    inline CreateCostCategoryDefinitionRequest& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}

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
    inline CreateCostCategoryDefinitionRequest& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

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
    inline CreateCostCategoryDefinitionRequest& AddResourceTags(const ResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }

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
    inline CreateCostCategoryDefinitionRequest& AddResourceTags(ResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    CostCategoryRuleVersion m_ruleVersion;
    bool m_ruleVersionHasBeenSet;

    Aws::Vector<CostCategoryRule> m_rules;
    bool m_rulesHasBeenSet;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet;

    Aws::Vector<CostCategorySplitChargeRule> m_splitChargeRules;
    bool m_splitChargeRulesHasBeenSet;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
