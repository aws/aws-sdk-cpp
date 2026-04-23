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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TopicRuleListItem">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API TopicRuleListItem
  {
  public:
    TopicRuleListItem();
    TopicRuleListItem(Aws::Utils::Json::JsonView jsonValue);
    TopicRuleListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rule ARN.</p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }

    /**
     * <p>The rule ARN.</p>
     */
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }

    /**
     * <p>The rule ARN.</p>
     */
    inline void SetRuleArn(const Aws::String& value) { m_ruleArnHasBeenSet = true; m_ruleArn = value; }

    /**
     * <p>The rule ARN.</p>
     */
    inline void SetRuleArn(Aws::String&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::move(value); }

    /**
     * <p>The rule ARN.</p>
     */
    inline void SetRuleArn(const char* value) { m_ruleArnHasBeenSet = true; m_ruleArn.assign(value); }

    /**
     * <p>The rule ARN.</p>
     */
    inline TopicRuleListItem& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}

    /**
     * <p>The rule ARN.</p>
     */
    inline TopicRuleListItem& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}

    /**
     * <p>The rule ARN.</p>
     */
    inline TopicRuleListItem& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}


    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the rule.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline TopicRuleListItem& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline TopicRuleListItem& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline TopicRuleListItem& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>The pattern for the topic names that apply.</p>
     */
    inline const Aws::String& GetTopicPattern() const{ return m_topicPattern; }

    /**
     * <p>The pattern for the topic names that apply.</p>
     */
    inline bool TopicPatternHasBeenSet() const { return m_topicPatternHasBeenSet; }

    /**
     * <p>The pattern for the topic names that apply.</p>
     */
    inline void SetTopicPattern(const Aws::String& value) { m_topicPatternHasBeenSet = true; m_topicPattern = value; }

    /**
     * <p>The pattern for the topic names that apply.</p>
     */
    inline void SetTopicPattern(Aws::String&& value) { m_topicPatternHasBeenSet = true; m_topicPattern = std::move(value); }

    /**
     * <p>The pattern for the topic names that apply.</p>
     */
    inline void SetTopicPattern(const char* value) { m_topicPatternHasBeenSet = true; m_topicPattern.assign(value); }

    /**
     * <p>The pattern for the topic names that apply.</p>
     */
    inline TopicRuleListItem& WithTopicPattern(const Aws::String& value) { SetTopicPattern(value); return *this;}

    /**
     * <p>The pattern for the topic names that apply.</p>
     */
    inline TopicRuleListItem& WithTopicPattern(Aws::String&& value) { SetTopicPattern(std::move(value)); return *this;}

    /**
     * <p>The pattern for the topic names that apply.</p>
     */
    inline TopicRuleListItem& WithTopicPattern(const char* value) { SetTopicPattern(value); return *this;}


    /**
     * <p>The date and time the rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the rule was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time the rule was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time the rule was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time the rule was created.</p>
     */
    inline TopicRuleListItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the rule was created.</p>
     */
    inline TopicRuleListItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the rule is disabled.</p>
     */
    inline bool GetRuleDisabled() const{ return m_ruleDisabled; }

    /**
     * <p>Specifies whether the rule is disabled.</p>
     */
    inline bool RuleDisabledHasBeenSet() const { return m_ruleDisabledHasBeenSet; }

    /**
     * <p>Specifies whether the rule is disabled.</p>
     */
    inline void SetRuleDisabled(bool value) { m_ruleDisabledHasBeenSet = true; m_ruleDisabled = value; }

    /**
     * <p>Specifies whether the rule is disabled.</p>
     */
    inline TopicRuleListItem& WithRuleDisabled(bool value) { SetRuleDisabled(value); return *this;}

  private:

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;

    Aws::String m_topicPattern;
    bool m_topicPatternHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    bool m_ruleDisabled;
    bool m_ruleDisabledHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
