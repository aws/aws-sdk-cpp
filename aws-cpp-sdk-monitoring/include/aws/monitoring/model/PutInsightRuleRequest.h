/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class PutInsightRuleRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API PutInsightRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInsightRule"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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


    /**
     * <p>A list of key-value pairs to associate with the Contributor Insights rule.
     * You can associate as many as 50 tags with a rule.</p> <p>Tags can help you
     * organize and categorize your resources. You can also use them to scope user
     * permissions, by granting a user permission to access or change only the
     * resources that have certain tag values.</p> <p>To be able to associate tags with
     * a rule, you must have the <code>cloudwatch:TagResource</code> permission in
     * addition to the <code>cloudwatch:PutInsightRule</code> permission.</p> <p>If you
     * are using this operation to update an existing Contributor Insights rule, any
     * tags you specify in this parameter are ignored. To change the tags of an
     * existing rule, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs to associate with the Contributor Insights rule.
     * You can associate as many as 50 tags with a rule.</p> <p>Tags can help you
     * organize and categorize your resources. You can also use them to scope user
     * permissions, by granting a user permission to access or change only the
     * resources that have certain tag values.</p> <p>To be able to associate tags with
     * a rule, you must have the <code>cloudwatch:TagResource</code> permission in
     * addition to the <code>cloudwatch:PutInsightRule</code> permission.</p> <p>If you
     * are using this operation to update an existing Contributor Insights rule, any
     * tags you specify in this parameter are ignored. To change the tags of an
     * existing rule, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs to associate with the Contributor Insights rule.
     * You can associate as many as 50 tags with a rule.</p> <p>Tags can help you
     * organize and categorize your resources. You can also use them to scope user
     * permissions, by granting a user permission to access or change only the
     * resources that have certain tag values.</p> <p>To be able to associate tags with
     * a rule, you must have the <code>cloudwatch:TagResource</code> permission in
     * addition to the <code>cloudwatch:PutInsightRule</code> permission.</p> <p>If you
     * are using this operation to update an existing Contributor Insights rule, any
     * tags you specify in this parameter are ignored. To change the tags of an
     * existing rule, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs to associate with the Contributor Insights rule.
     * You can associate as many as 50 tags with a rule.</p> <p>Tags can help you
     * organize and categorize your resources. You can also use them to scope user
     * permissions, by granting a user permission to access or change only the
     * resources that have certain tag values.</p> <p>To be able to associate tags with
     * a rule, you must have the <code>cloudwatch:TagResource</code> permission in
     * addition to the <code>cloudwatch:PutInsightRule</code> permission.</p> <p>If you
     * are using this operation to update an existing Contributor Insights rule, any
     * tags you specify in this parameter are ignored. To change the tags of an
     * existing rule, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs to associate with the Contributor Insights rule.
     * You can associate as many as 50 tags with a rule.</p> <p>Tags can help you
     * organize and categorize your resources. You can also use them to scope user
     * permissions, by granting a user permission to access or change only the
     * resources that have certain tag values.</p> <p>To be able to associate tags with
     * a rule, you must have the <code>cloudwatch:TagResource</code> permission in
     * addition to the <code>cloudwatch:PutInsightRule</code> permission.</p> <p>If you
     * are using this operation to update an existing Contributor Insights rule, any
     * tags you specify in this parameter are ignored. To change the tags of an
     * existing rule, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>.</p>
     */
    inline PutInsightRuleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs to associate with the Contributor Insights rule.
     * You can associate as many as 50 tags with a rule.</p> <p>Tags can help you
     * organize and categorize your resources. You can also use them to scope user
     * permissions, by granting a user permission to access or change only the
     * resources that have certain tag values.</p> <p>To be able to associate tags with
     * a rule, you must have the <code>cloudwatch:TagResource</code> permission in
     * addition to the <code>cloudwatch:PutInsightRule</code> permission.</p> <p>If you
     * are using this operation to update an existing Contributor Insights rule, any
     * tags you specify in this parameter are ignored. To change the tags of an
     * existing rule, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>.</p>
     */
    inline PutInsightRuleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs to associate with the Contributor Insights rule.
     * You can associate as many as 50 tags with a rule.</p> <p>Tags can help you
     * organize and categorize your resources. You can also use them to scope user
     * permissions, by granting a user permission to access or change only the
     * resources that have certain tag values.</p> <p>To be able to associate tags with
     * a rule, you must have the <code>cloudwatch:TagResource</code> permission in
     * addition to the <code>cloudwatch:PutInsightRule</code> permission.</p> <p>If you
     * are using this operation to update an existing Contributor Insights rule, any
     * tags you specify in this parameter are ignored. To change the tags of an
     * existing rule, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>.</p>
     */
    inline PutInsightRuleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the Contributor Insights rule.
     * You can associate as many as 50 tags with a rule.</p> <p>Tags can help you
     * organize and categorize your resources. You can also use them to scope user
     * permissions, by granting a user permission to access or change only the
     * resources that have certain tag values.</p> <p>To be able to associate tags with
     * a rule, you must have the <code>cloudwatch:TagResource</code> permission in
     * addition to the <code>cloudwatch:PutInsightRule</code> permission.</p> <p>If you
     * are using this operation to update an existing Contributor Insights rule, any
     * tags you specify in this parameter are ignored. To change the tags of an
     * existing rule, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>.</p>
     */
    inline PutInsightRuleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_ruleState;
    bool m_ruleStateHasBeenSet = false;

    Aws::String m_ruleDefinition;
    bool m_ruleDefinitionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
