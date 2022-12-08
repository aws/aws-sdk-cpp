/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/RuleState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/events/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class PutRuleRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API PutRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRule"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the rule that you are creating or updating.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule that you are creating or updating.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule that you are creating or updating.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule that you are creating or updating.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule that you are creating or updating.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule that you are creating or updating.</p>
     */
    inline PutRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule that you are creating or updating.</p>
     */
    inline PutRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule that you are creating or updating.</p>
     */
    inline PutRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)" or "rate(5
     * minutes)".</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)" or "rate(5
     * minutes)".</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)" or "rate(5
     * minutes)".</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)" or "rate(5
     * minutes)".</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)" or "rate(5
     * minutes)".</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)" or "rate(5
     * minutes)".</p>
     */
    inline PutRuleRequest& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)" or "rate(5
     * minutes)".</p>
     */
    inline PutRuleRequest& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)" or "rate(5
     * minutes)".</p>
     */
    inline PutRuleRequest& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::move(value); }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline PutRuleRequest& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline PutRuleRequest& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline PutRuleRequest& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}


    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline const RuleState& GetState() const{ return m_state; }

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline void SetState(const RuleState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline void SetState(RuleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline PutRuleRequest& WithState(const RuleState& value) { SetState(value); return *this;}

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline PutRuleRequest& WithState(RuleState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A description of the rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the rule.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the rule.</p>
     */
    inline PutRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the rule.</p>
     */
    inline PutRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the rule.</p>
     */
    inline PutRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     * <p>If you're setting an event bus in another account as the target and that
     * account granted permission to your account through an organization instead of
     * directly by the account ID, you must specify a <code>RoleArn</code> with proper
     * permissions in the <code>Target</code> structure, instead of here in this
     * parameter.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     * <p>If you're setting an event bus in another account as the target and that
     * account granted permission to your account through an organization instead of
     * directly by the account ID, you must specify a <code>RoleArn</code> with proper
     * permissions in the <code>Target</code> structure, instead of here in this
     * parameter.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     * <p>If you're setting an event bus in another account as the target and that
     * account granted permission to your account through an organization instead of
     * directly by the account ID, you must specify a <code>RoleArn</code> with proper
     * permissions in the <code>Target</code> structure, instead of here in this
     * parameter.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     * <p>If you're setting an event bus in another account as the target and that
     * account granted permission to your account through an organization instead of
     * directly by the account ID, you must specify a <code>RoleArn</code> with proper
     * permissions in the <code>Target</code> structure, instead of here in this
     * parameter.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     * <p>If you're setting an event bus in another account as the target and that
     * account granted permission to your account through an organization instead of
     * directly by the account ID, you must specify a <code>RoleArn</code> with proper
     * permissions in the <code>Target</code> structure, instead of here in this
     * parameter.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     * <p>If you're setting an event bus in another account as the target and that
     * account granted permission to your account through an organization instead of
     * directly by the account ID, you must specify a <code>RoleArn</code> with proper
     * permissions in the <code>Target</code> structure, instead of here in this
     * parameter.</p>
     */
    inline PutRuleRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     * <p>If you're setting an event bus in another account as the target and that
     * account granted permission to your account through an organization instead of
     * directly by the account ID, you must specify a <code>RoleArn</code> with proper
     * permissions in the <code>Target</code> structure, instead of here in this
     * parameter.</p>
     */
    inline PutRuleRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     * <p>If you're setting an event bus in another account as the target and that
     * account granted permission to your account through an organization instead of
     * directly by the account ID, you must specify a <code>RoleArn</code> with proper
     * permissions in the <code>Target</code> structure, instead of here in this
     * parameter.</p>
     */
    inline PutRuleRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The list of key-value pairs to associate with the rule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value pairs to associate with the rule.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of key-value pairs to associate with the rule.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of key-value pairs to associate with the rule.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of key-value pairs to associate with the rule.</p>
     */
    inline PutRuleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value pairs to associate with the rule.</p>
     */
    inline PutRuleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value pairs to associate with the rule.</p>
     */
    inline PutRuleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of key-value pairs to associate with the rule.</p>
     */
    inline PutRuleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name or ARN of the event bus to associate with this rule. If you omit
     * this, the default event bus is used.</p>
     */
    inline const Aws::String& GetEventBusName() const{ return m_eventBusName; }

    /**
     * <p>The name or ARN of the event bus to associate with this rule. If you omit
     * this, the default event bus is used.</p>
     */
    inline bool EventBusNameHasBeenSet() const { return m_eventBusNameHasBeenSet; }

    /**
     * <p>The name or ARN of the event bus to associate with this rule. If you omit
     * this, the default event bus is used.</p>
     */
    inline void SetEventBusName(const Aws::String& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = value; }

    /**
     * <p>The name or ARN of the event bus to associate with this rule. If you omit
     * this, the default event bus is used.</p>
     */
    inline void SetEventBusName(Aws::String&& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = std::move(value); }

    /**
     * <p>The name or ARN of the event bus to associate with this rule. If you omit
     * this, the default event bus is used.</p>
     */
    inline void SetEventBusName(const char* value) { m_eventBusNameHasBeenSet = true; m_eventBusName.assign(value); }

    /**
     * <p>The name or ARN of the event bus to associate with this rule. If you omit
     * this, the default event bus is used.</p>
     */
    inline PutRuleRequest& WithEventBusName(const Aws::String& value) { SetEventBusName(value); return *this;}

    /**
     * <p>The name or ARN of the event bus to associate with this rule. If you omit
     * this, the default event bus is used.</p>
     */
    inline PutRuleRequest& WithEventBusName(Aws::String&& value) { SetEventBusName(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the event bus to associate with this rule. If you omit
     * this, the default event bus is used.</p>
     */
    inline PutRuleRequest& WithEventBusName(const char* value) { SetEventBusName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    RuleState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_eventBusName;
    bool m_eventBusNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
