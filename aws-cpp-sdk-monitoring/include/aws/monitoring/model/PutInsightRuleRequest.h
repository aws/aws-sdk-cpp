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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCH_API PutInsightRuleRequest : public CloudWatchRequest
  {
  public:
    PutInsightRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInsightRule"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A unique name for the rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>A unique name for the rule.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>A unique name for the rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>A unique name for the rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>A unique name for the rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>A unique name for the rule.</p>
     */
    inline PutInsightRuleRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>A unique name for the rule.</p>
     */
    inline PutInsightRuleRequest& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the rule.</p>
     */
    inline PutInsightRuleRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>The state of the rule. Valid values are ENABLED and DISABLED.</p>
     */
    inline const Aws::String& GetRuleState() const{ return m_ruleState; }

    /**
     * <p>The state of the rule. Valid values are ENABLED and DISABLED.</p>
     */
    inline bool RuleStateHasBeenSet() const { return m_ruleStateHasBeenSet; }

    /**
     * <p>The state of the rule. Valid values are ENABLED and DISABLED.</p>
     */
    inline void SetRuleState(const Aws::String& value) { m_ruleStateHasBeenSet = true; m_ruleState = value; }

    /**
     * <p>The state of the rule. Valid values are ENABLED and DISABLED.</p>
     */
    inline void SetRuleState(Aws::String&& value) { m_ruleStateHasBeenSet = true; m_ruleState = std::move(value); }

    /**
     * <p>The state of the rule. Valid values are ENABLED and DISABLED.</p>
     */
    inline void SetRuleState(const char* value) { m_ruleStateHasBeenSet = true; m_ruleState.assign(value); }

    /**
     * <p>The state of the rule. Valid values are ENABLED and DISABLED.</p>
     */
    inline PutInsightRuleRequest& WithRuleState(const Aws::String& value) { SetRuleState(value); return *this;}

    /**
     * <p>The state of the rule. Valid values are ENABLED and DISABLED.</p>
     */
    inline PutInsightRuleRequest& WithRuleState(Aws::String&& value) { SetRuleState(std::move(value)); return *this;}

    /**
     * <p>The state of the rule. Valid values are ENABLED and DISABLED.</p>
     */
    inline PutInsightRuleRequest& WithRuleState(const char* value) { SetRuleState(value); return *this;}


    /**
     * <p>The definition of the rule, as a JSON object. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline const Aws::String& GetRuleDefinition() const{ return m_ruleDefinition; }

    /**
     * <p>The definition of the rule, as a JSON object. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline bool RuleDefinitionHasBeenSet() const { return m_ruleDefinitionHasBeenSet; }

    /**
     * <p>The definition of the rule, as a JSON object. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline void SetRuleDefinition(const Aws::String& value) { m_ruleDefinitionHasBeenSet = true; m_ruleDefinition = value; }

    /**
     * <p>The definition of the rule, as a JSON object. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline void SetRuleDefinition(Aws::String&& value) { m_ruleDefinitionHasBeenSet = true; m_ruleDefinition = std::move(value); }

    /**
     * <p>The definition of the rule, as a JSON object. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline void SetRuleDefinition(const char* value) { m_ruleDefinitionHasBeenSet = true; m_ruleDefinition.assign(value); }

    /**
     * <p>The definition of the rule, as a JSON object. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline PutInsightRuleRequest& WithRuleDefinition(const Aws::String& value) { SetRuleDefinition(value); return *this;}

    /**
     * <p>The definition of the rule, as a JSON object. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline PutInsightRuleRequest& WithRuleDefinition(Aws::String&& value) { SetRuleDefinition(std::move(value)); return *this;}

    /**
     * <p>The definition of the rule, as a JSON object. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline PutInsightRuleRequest& WithRuleDefinition(const char* value) { SetRuleDefinition(value); return *this;}

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;

    Aws::String m_ruleState;
    bool m_ruleStateHasBeenSet;

    Aws::String m_ruleDefinition;
    bool m_ruleDefinitionHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
