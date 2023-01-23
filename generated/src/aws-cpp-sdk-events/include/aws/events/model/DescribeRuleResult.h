﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/RuleState.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{
  class DescribeRuleResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API DescribeRuleResult();
    AWS_CLOUDWATCHEVENTS_API DescribeRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API DescribeRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline DescribeRuleResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline DescribeRuleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline DescribeRuleResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline DescribeRuleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline DescribeRuleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline DescribeRuleResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline void SetEventPattern(const Aws::String& value) { m_eventPattern = value; }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPattern = std::move(value); }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetEventPattern(const char* value) { m_eventPattern.assign(value); }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline DescribeRuleResult& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline DescribeRuleResult& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline DescribeRuleResult& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}


    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpression = value; }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpression = std::move(value); }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpression.assign(value); }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline DescribeRuleResult& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline DescribeRuleResult& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline DescribeRuleResult& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>Specifies whether the rule is enabled or disabled.</p>
     */
    inline const RuleState& GetState() const{ return m_state; }

    /**
     * <p>Specifies whether the rule is enabled or disabled.</p>
     */
    inline void SetState(const RuleState& value) { m_state = value; }

    /**
     * <p>Specifies whether the rule is enabled or disabled.</p>
     */
    inline void SetState(RuleState&& value) { m_state = std::move(value); }

    /**
     * <p>Specifies whether the rule is enabled or disabled.</p>
     */
    inline DescribeRuleResult& WithState(const RuleState& value) { SetState(value); return *this;}

    /**
     * <p>Specifies whether the rule is enabled or disabled.</p>
     */
    inline DescribeRuleResult& WithState(RuleState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The description of the rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the rule.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the rule.</p>
     */
    inline DescribeRuleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the rule.</p>
     */
    inline DescribeRuleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the rule.</p>
     */
    inline DescribeRuleResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline DescribeRuleResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline DescribeRuleResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline DescribeRuleResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>If this is a managed rule, created by an Amazon Web Services service on your
     * behalf, this field displays the principal name of the Amazon Web Services
     * service that created the rule.</p>
     */
    inline const Aws::String& GetManagedBy() const{ return m_managedBy; }

    /**
     * <p>If this is a managed rule, created by an Amazon Web Services service on your
     * behalf, this field displays the principal name of the Amazon Web Services
     * service that created the rule.</p>
     */
    inline void SetManagedBy(const Aws::String& value) { m_managedBy = value; }

    /**
     * <p>If this is a managed rule, created by an Amazon Web Services service on your
     * behalf, this field displays the principal name of the Amazon Web Services
     * service that created the rule.</p>
     */
    inline void SetManagedBy(Aws::String&& value) { m_managedBy = std::move(value); }

    /**
     * <p>If this is a managed rule, created by an Amazon Web Services service on your
     * behalf, this field displays the principal name of the Amazon Web Services
     * service that created the rule.</p>
     */
    inline void SetManagedBy(const char* value) { m_managedBy.assign(value); }

    /**
     * <p>If this is a managed rule, created by an Amazon Web Services service on your
     * behalf, this field displays the principal name of the Amazon Web Services
     * service that created the rule.</p>
     */
    inline DescribeRuleResult& WithManagedBy(const Aws::String& value) { SetManagedBy(value); return *this;}

    /**
     * <p>If this is a managed rule, created by an Amazon Web Services service on your
     * behalf, this field displays the principal name of the Amazon Web Services
     * service that created the rule.</p>
     */
    inline DescribeRuleResult& WithManagedBy(Aws::String&& value) { SetManagedBy(std::move(value)); return *this;}

    /**
     * <p>If this is a managed rule, created by an Amazon Web Services service on your
     * behalf, this field displays the principal name of the Amazon Web Services
     * service that created the rule.</p>
     */
    inline DescribeRuleResult& WithManagedBy(const char* value) { SetManagedBy(value); return *this;}


    /**
     * <p>The name of the event bus associated with the rule.</p>
     */
    inline const Aws::String& GetEventBusName() const{ return m_eventBusName; }

    /**
     * <p>The name of the event bus associated with the rule.</p>
     */
    inline void SetEventBusName(const Aws::String& value) { m_eventBusName = value; }

    /**
     * <p>The name of the event bus associated with the rule.</p>
     */
    inline void SetEventBusName(Aws::String&& value) { m_eventBusName = std::move(value); }

    /**
     * <p>The name of the event bus associated with the rule.</p>
     */
    inline void SetEventBusName(const char* value) { m_eventBusName.assign(value); }

    /**
     * <p>The name of the event bus associated with the rule.</p>
     */
    inline DescribeRuleResult& WithEventBusName(const Aws::String& value) { SetEventBusName(value); return *this;}

    /**
     * <p>The name of the event bus associated with the rule.</p>
     */
    inline DescribeRuleResult& WithEventBusName(Aws::String&& value) { SetEventBusName(std::move(value)); return *this;}

    /**
     * <p>The name of the event bus associated with the rule.</p>
     */
    inline DescribeRuleResult& WithEventBusName(const char* value) { SetEventBusName(value); return *this;}


    /**
     * <p>The account ID of the user that created the rule. If you use
     * <code>PutRule</code> to put a rule on an event bus in another account, the other
     * account is the owner of the rule, and the rule ARN includes the account ID for
     * that account. However, the value for <code>CreatedBy</code> is the account ID as
     * the account that created the rule in the other account.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The account ID of the user that created the rule. If you use
     * <code>PutRule</code> to put a rule on an event bus in another account, the other
     * account is the owner of the rule, and the rule ARN includes the account ID for
     * that account. However, the value for <code>CreatedBy</code> is the account ID as
     * the account that created the rule in the other account.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The account ID of the user that created the rule. If you use
     * <code>PutRule</code> to put a rule on an event bus in another account, the other
     * account is the owner of the rule, and the rule ARN includes the account ID for
     * that account. However, the value for <code>CreatedBy</code> is the account ID as
     * the account that created the rule in the other account.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The account ID of the user that created the rule. If you use
     * <code>PutRule</code> to put a rule on an event bus in another account, the other
     * account is the owner of the rule, and the rule ARN includes the account ID for
     * that account. However, the value for <code>CreatedBy</code> is the account ID as
     * the account that created the rule in the other account.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The account ID of the user that created the rule. If you use
     * <code>PutRule</code> to put a rule on an event bus in another account, the other
     * account is the owner of the rule, and the rule ARN includes the account ID for
     * that account. However, the value for <code>CreatedBy</code> is the account ID as
     * the account that created the rule in the other account.</p>
     */
    inline DescribeRuleResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The account ID of the user that created the rule. If you use
     * <code>PutRule</code> to put a rule on an event bus in another account, the other
     * account is the owner of the rule, and the rule ARN includes the account ID for
     * that account. However, the value for <code>CreatedBy</code> is the account ID as
     * the account that created the rule in the other account.</p>
     */
    inline DescribeRuleResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The account ID of the user that created the rule. If you use
     * <code>PutRule</code> to put a rule on an event bus in another account, the other
     * account is the owner of the rule, and the rule ARN includes the account ID for
     * that account. However, the value for <code>CreatedBy</code> is the account ID as
     * the account that created the rule in the other account.</p>
     */
    inline DescribeRuleResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_arn;

    Aws::String m_eventPattern;

    Aws::String m_scheduleExpression;

    RuleState m_state;

    Aws::String m_description;

    Aws::String m_roleArn;

    Aws::String m_managedBy;

    Aws::String m_eventBusName;

    Aws::String m_createdBy;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
