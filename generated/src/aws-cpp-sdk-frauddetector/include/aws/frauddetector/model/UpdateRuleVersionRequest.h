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
    AWS_FRAUDDETECTOR_API UpdateRuleVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRuleVersion"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The rule to update.</p>
     */
    inline const Rule& GetRule() const { return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    template<typename RuleT = Rule>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = Rule>
    UpdateRuleVersionRequest& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateRuleVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule expression.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    UpdateRuleVersionRequest& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language.</p>
     */
    inline Language GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(Language value) { m_languageHasBeenSet = true; m_language = value; }
    inline UpdateRuleVersionRequest& WithLanguage(Language value) { SetLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outcomes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutcomes() const { return m_outcomes; }
    inline bool OutcomesHasBeenSet() const { return m_outcomesHasBeenSet; }
    template<typename OutcomesT = Aws::Vector<Aws::String>>
    void SetOutcomes(OutcomesT&& value) { m_outcomesHasBeenSet = true; m_outcomes = std::forward<OutcomesT>(value); }
    template<typename OutcomesT = Aws::Vector<Aws::String>>
    UpdateRuleVersionRequest& WithOutcomes(OutcomesT&& value) { SetOutcomes(std::forward<OutcomesT>(value)); return *this;}
    template<typename OutcomesT = Aws::String>
    UpdateRuleVersionRequest& AddOutcomes(OutcomesT&& value) { m_outcomesHasBeenSet = true; m_outcomes.emplace_back(std::forward<OutcomesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the rule version.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    UpdateRuleVersionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    UpdateRuleVersionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Rule m_rule;
    bool m_ruleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Language m_language{Language::NOT_SET};
    bool m_languageHasBeenSet = false;

    Aws::Vector<Aws::String> m_outcomes;
    bool m_outcomesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
