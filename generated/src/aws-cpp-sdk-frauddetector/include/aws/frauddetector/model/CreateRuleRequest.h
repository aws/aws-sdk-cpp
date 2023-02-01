/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
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
  class CreateRuleRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API CreateRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRule"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The rule ID.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The rule ID.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The rule ID.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The rule ID.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The rule ID.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The rule ID.</p>
     */
    inline CreateRuleRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The rule ID.</p>
     */
    inline CreateRuleRequest& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The rule ID.</p>
     */
    inline CreateRuleRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The detector ID for the rule's parent detector.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID for the rule's parent detector.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detector ID for the rule's parent detector.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detector ID for the rule's parent detector.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detector ID for the rule's parent detector.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detector ID for the rule's parent detector.</p>
     */
    inline CreateRuleRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID for the rule's parent detector.</p>
     */
    inline CreateRuleRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID for the rule's parent detector.</p>
     */
    inline CreateRuleRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The rule description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The rule description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The rule description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The rule description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The rule description.</p>
     */
    inline CreateRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The rule description.</p>
     */
    inline CreateRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The rule description.</p>
     */
    inline CreateRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateRuleRequest& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The rule expression.</p>
     */
    inline CreateRuleRequest& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The rule expression.</p>
     */
    inline CreateRuleRequest& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>The language of the rule.</p>
     */
    inline const Language& GetLanguage() const{ return m_language; }

    /**
     * <p>The language of the rule.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The language of the rule.</p>
     */
    inline void SetLanguage(const Language& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The language of the rule.</p>
     */
    inline void SetLanguage(Language&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The language of the rule.</p>
     */
    inline CreateRuleRequest& WithLanguage(const Language& value) { SetLanguage(value); return *this;}

    /**
     * <p>The language of the rule.</p>
     */
    inline CreateRuleRequest& WithLanguage(Language&& value) { SetLanguage(std::move(value)); return *this;}


    /**
     * <p>The outcome or outcomes returned when the rule expression matches.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutcomes() const{ return m_outcomes; }

    /**
     * <p>The outcome or outcomes returned when the rule expression matches.</p>
     */
    inline bool OutcomesHasBeenSet() const { return m_outcomesHasBeenSet; }

    /**
     * <p>The outcome or outcomes returned when the rule expression matches.</p>
     */
    inline void SetOutcomes(const Aws::Vector<Aws::String>& value) { m_outcomesHasBeenSet = true; m_outcomes = value; }

    /**
     * <p>The outcome or outcomes returned when the rule expression matches.</p>
     */
    inline void SetOutcomes(Aws::Vector<Aws::String>&& value) { m_outcomesHasBeenSet = true; m_outcomes = std::move(value); }

    /**
     * <p>The outcome or outcomes returned when the rule expression matches.</p>
     */
    inline CreateRuleRequest& WithOutcomes(const Aws::Vector<Aws::String>& value) { SetOutcomes(value); return *this;}

    /**
     * <p>The outcome or outcomes returned when the rule expression matches.</p>
     */
    inline CreateRuleRequest& WithOutcomes(Aws::Vector<Aws::String>&& value) { SetOutcomes(std::move(value)); return *this;}

    /**
     * <p>The outcome or outcomes returned when the rule expression matches.</p>
     */
    inline CreateRuleRequest& AddOutcomes(const Aws::String& value) { m_outcomesHasBeenSet = true; m_outcomes.push_back(value); return *this; }

    /**
     * <p>The outcome or outcomes returned when the rule expression matches.</p>
     */
    inline CreateRuleRequest& AddOutcomes(Aws::String&& value) { m_outcomesHasBeenSet = true; m_outcomes.push_back(std::move(value)); return *this; }

    /**
     * <p>The outcome or outcomes returned when the rule expression matches.</p>
     */
    inline CreateRuleRequest& AddOutcomes(const char* value) { m_outcomesHasBeenSet = true; m_outcomes.push_back(value); return *this; }


    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateRuleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateRuleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateRuleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateRuleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

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
