/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/frauddetector/model/Rule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/Language.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class UpdateRuleVersionRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API UpdateRuleVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRuleVersion"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The rule to update.</p>
     */
    inline const Rule& GetRule() const{ return m_rule; }

    /**
     * <p>The rule to update.</p>
     */
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }

    /**
     * <p>The rule to update.</p>
     */
    inline void SetRule(const Rule& value) { m_ruleHasBeenSet = true; m_rule = value; }

    /**
     * <p>The rule to update.</p>
     */
    inline void SetRule(Rule&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }

    /**
     * <p>The rule to update.</p>
     */
    inline UpdateRuleVersionRequest& WithRule(const Rule& value) { SetRule(value); return *this;}

    /**
     * <p>The rule to update.</p>
     */
    inline UpdateRuleVersionRequest& WithRule(Rule&& value) { SetRule(std::move(value)); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline UpdateRuleVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline UpdateRuleVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline UpdateRuleVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The rule expression.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The rule expression.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The rule expression.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The rule expression.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The rule expression.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The rule expression.</p>
     */
    inline UpdateRuleVersionRequest& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The rule expression.</p>
     */
    inline UpdateRuleVersionRequest& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The rule expression.</p>
     */
    inline UpdateRuleVersionRequest& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>The language.</p>
     */
    inline const Language& GetLanguage() const{ return m_language; }

    /**
     * <p>The language.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The language.</p>
     */
    inline void SetLanguage(const Language& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The language.</p>
     */
    inline void SetLanguage(Language&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The language.</p>
     */
    inline UpdateRuleVersionRequest& WithLanguage(const Language& value) { SetLanguage(value); return *this;}

    /**
     * <p>The language.</p>
     */
    inline UpdateRuleVersionRequest& WithLanguage(Language&& value) { SetLanguage(std::move(value)); return *this;}


    /**
     * <p>The outcomes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutcomes() const{ return m_outcomes; }

    /**
     * <p>The outcomes.</p>
     */
    inline bool OutcomesHasBeenSet() const { return m_outcomesHasBeenSet; }

    /**
     * <p>The outcomes.</p>
     */
    inline void SetOutcomes(const Aws::Vector<Aws::String>& value) { m_outcomesHasBeenSet = true; m_outcomes = value; }

    /**
     * <p>The outcomes.</p>
     */
    inline void SetOutcomes(Aws::Vector<Aws::String>&& value) { m_outcomesHasBeenSet = true; m_outcomes = std::move(value); }

    /**
     * <p>The outcomes.</p>
     */
    inline UpdateRuleVersionRequest& WithOutcomes(const Aws::Vector<Aws::String>& value) { SetOutcomes(value); return *this;}

    /**
     * <p>The outcomes.</p>
     */
    inline UpdateRuleVersionRequest& WithOutcomes(Aws::Vector<Aws::String>&& value) { SetOutcomes(std::move(value)); return *this;}

    /**
     * <p>The outcomes.</p>
     */
    inline UpdateRuleVersionRequest& AddOutcomes(const Aws::String& value) { m_outcomesHasBeenSet = true; m_outcomes.push_back(value); return *this; }

    /**
     * <p>The outcomes.</p>
     */
    inline UpdateRuleVersionRequest& AddOutcomes(Aws::String&& value) { m_outcomesHasBeenSet = true; m_outcomes.push_back(std::move(value)); return *this; }

    /**
     * <p>The outcomes.</p>
     */
    inline UpdateRuleVersionRequest& AddOutcomes(const char* value) { m_outcomesHasBeenSet = true; m_outcomes.push_back(value); return *this; }


    /**
     * <p>The tags to assign to the rule version.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the rule version.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the rule version.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the rule version.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the rule version.</p>
     */
    inline UpdateRuleVersionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the rule version.</p>
     */
    inline UpdateRuleVersionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the rule version.</p>
     */
    inline UpdateRuleVersionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the rule version.</p>
     */
    inline UpdateRuleVersionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Rule m_rule;
    bool m_ruleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Language m_language;
    bool m_languageHasBeenSet = false;

    Aws::Vector<Aws::String> m_outcomes;
    bool m_outcomesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
