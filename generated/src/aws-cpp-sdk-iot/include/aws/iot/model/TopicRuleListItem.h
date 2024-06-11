/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TopicRuleListItem
  {
  public:
    AWS_IOT_API TopicRuleListItem();
    AWS_IOT_API TopicRuleListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TopicRuleListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rule ARN.</p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
    inline void SetRuleArn(const Aws::String& value) { m_ruleArnHasBeenSet = true; m_ruleArn = value; }
    inline void SetRuleArn(Aws::String&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::move(value); }
    inline void SetRuleArn(const char* value) { m_ruleArnHasBeenSet = true; m_ruleArn.assign(value); }
    inline TopicRuleListItem& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}
    inline TopicRuleListItem& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}
    inline TopicRuleListItem& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }
    inline TopicRuleListItem& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}
    inline TopicRuleListItem& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}
    inline TopicRuleListItem& WithRuleName(const char* value) { SetRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern for the topic names that apply.</p>
     */
    inline const Aws::String& GetTopicPattern() const{ return m_topicPattern; }
    inline bool TopicPatternHasBeenSet() const { return m_topicPatternHasBeenSet; }
    inline void SetTopicPattern(const Aws::String& value) { m_topicPatternHasBeenSet = true; m_topicPattern = value; }
    inline void SetTopicPattern(Aws::String&& value) { m_topicPatternHasBeenSet = true; m_topicPattern = std::move(value); }
    inline void SetTopicPattern(const char* value) { m_topicPatternHasBeenSet = true; m_topicPattern.assign(value); }
    inline TopicRuleListItem& WithTopicPattern(const Aws::String& value) { SetTopicPattern(value); return *this;}
    inline TopicRuleListItem& WithTopicPattern(Aws::String&& value) { SetTopicPattern(std::move(value)); return *this;}
    inline TopicRuleListItem& WithTopicPattern(const char* value) { SetTopicPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline TopicRuleListItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline TopicRuleListItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the rule is disabled.</p>
     */
    inline bool GetRuleDisabled() const{ return m_ruleDisabled; }
    inline bool RuleDisabledHasBeenSet() const { return m_ruleDisabledHasBeenSet; }
    inline void SetRuleDisabled(bool value) { m_ruleDisabledHasBeenSet = true; m_ruleDisabled = value; }
    inline TopicRuleListItem& WithRuleDisabled(bool value) { SetRuleDisabled(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_topicPattern;
    bool m_topicPatternHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    bool m_ruleDisabled;
    bool m_ruleDisabledHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
