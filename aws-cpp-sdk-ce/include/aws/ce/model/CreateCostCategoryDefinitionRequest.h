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

  private:

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
