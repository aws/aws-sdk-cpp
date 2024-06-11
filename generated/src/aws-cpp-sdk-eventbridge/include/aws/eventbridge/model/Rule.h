﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/RuleState.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Contains information about a rule in Amazon EventBridge.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/Rule">AWS
   * API Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_EVENTBRIDGE_API Rule();
    AWS_EVENTBRIDGE_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Rule& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Rule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Rule& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Rule& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Rule& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Rule& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event pattern of the rule. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i> <i>Amazon EventBridge User Guide</i> </i>.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::move(value); }
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }
    inline Rule& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}
    inline Rule& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}
    inline Rule& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the rule.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>DISABLED</code>: The rule is disabled. EventBridge does not match any
     * events against the rule.</p> </li> <li> <p> <code>ENABLED</code>: The rule is
     * enabled. EventBridge matches events against the rule, <i>except</i> for Amazon
     * Web Services management events delivered through CloudTrail.</p> </li> <li> <p>
     * <code>ENABLED_WITH_ALL_CLOUDTRAIL_MANAGEMENT_EVENTS</code>: The rule is enabled
     * for all events, including Amazon Web Services management events delivered
     * through CloudTrail.</p> <p>Management events provide visibility into management
     * operations that are performed on resources in your Amazon Web Services account.
     * These are also known as control plane operations. For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-events-with-cloudtrail.html#logging-management-events">Logging
     * management events</a> in the <i>CloudTrail User Guide</i>, and <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-service-event.html#eb-service-event-cloudtrail">Filtering
     * management events from Amazon Web Services services</a> in the <i> <i>Amazon
     * EventBridge User Guide</i> </i>.</p> <p>This value is only valid for rules on
     * the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-what-is-how-it-works-concepts.html#eb-bus-concepts-buses">default</a>
     * event bus or <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-create-event-bus.html">custom
     * event buses</a>. It does not apply to <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-saas.html">partner
     * event buses</a>.</p> </li> </ul>
     */
    inline const RuleState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const RuleState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(RuleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Rule& WithState(const RuleState& value) { SetState(value); return *this;}
    inline Rule& WithState(RuleState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Rule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Rule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Rule& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)". For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-create-rule-schedule.html">Creating
     * an Amazon EventBridge rule that runs on a schedule</a>.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }
    inline Rule& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}
    inline Rule& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}
    inline Rule& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role that is used for target
     * invocation.</p> <p>If you're setting an event bus in another account as the
     * target and that account granted permission to your account through an
     * organization instead of directly by the account ID, you must specify a
     * <code>RoleArn</code> with proper permissions in the <code>Target</code>
     * structure, instead of here in this parameter.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline Rule& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline Rule& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline Rule& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the rule was created on behalf of your account by an Amazon Web Services
     * service, this field displays the principal name of the service that created the
     * rule.</p>
     */
    inline const Aws::String& GetManagedBy() const{ return m_managedBy; }
    inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
    inline void SetManagedBy(const Aws::String& value) { m_managedByHasBeenSet = true; m_managedBy = value; }
    inline void SetManagedBy(Aws::String&& value) { m_managedByHasBeenSet = true; m_managedBy = std::move(value); }
    inline void SetManagedBy(const char* value) { m_managedByHasBeenSet = true; m_managedBy.assign(value); }
    inline Rule& WithManagedBy(const Aws::String& value) { SetManagedBy(value); return *this;}
    inline Rule& WithManagedBy(Aws::String&& value) { SetManagedBy(std::move(value)); return *this;}
    inline Rule& WithManagedBy(const char* value) { SetManagedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the event bus associated with the rule. If you omit this,
     * the default event bus is used.</p>
     */
    inline const Aws::String& GetEventBusName() const{ return m_eventBusName; }
    inline bool EventBusNameHasBeenSet() const { return m_eventBusNameHasBeenSet; }
    inline void SetEventBusName(const Aws::String& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = value; }
    inline void SetEventBusName(Aws::String&& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = std::move(value); }
    inline void SetEventBusName(const char* value) { m_eventBusNameHasBeenSet = true; m_eventBusName.assign(value); }
    inline Rule& WithEventBusName(const Aws::String& value) { SetEventBusName(value); return *this;}
    inline Rule& WithEventBusName(Aws::String&& value) { SetEventBusName(std::move(value)); return *this;}
    inline Rule& WithEventBusName(const char* value) { SetEventBusName(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    RuleState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_managedBy;
    bool m_managedByHasBeenSet = false;

    Aws::String m_eventBusName;
    bool m_eventBusNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
