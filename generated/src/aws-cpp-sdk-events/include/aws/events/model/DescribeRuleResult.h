/**
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
    AWS_CLOUDWATCHEVENTS_API DescribeRuleResult() = default;
    AWS_CLOUDWATCHEVENTS_API DescribeRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API DescribeRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeRuleResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeRuleResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const Aws::String& GetEventPattern() const { return m_eventPattern; }
    template<typename EventPatternT = Aws::String>
    void SetEventPattern(EventPatternT&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::forward<EventPatternT>(value); }
    template<typename EventPatternT = Aws::String>
    DescribeRuleResult& WithEventPattern(EventPatternT&& value) { SetEventPattern(std::forward<EventPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    DescribeRuleResult& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the rule is enabled or disabled.</p>
     */
    inline RuleState GetState() const { return m_state; }
    inline void SetState(RuleState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeRuleResult& WithState(RuleState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeRuleResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeRuleResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this is a managed rule, created by an Amazon Web Services service on your
     * behalf, this field displays the principal name of the Amazon Web Services
     * service that created the rule.</p>
     */
    inline const Aws::String& GetManagedBy() const { return m_managedBy; }
    template<typename ManagedByT = Aws::String>
    void SetManagedBy(ManagedByT&& value) { m_managedByHasBeenSet = true; m_managedBy = std::forward<ManagedByT>(value); }
    template<typename ManagedByT = Aws::String>
    DescribeRuleResult& WithManagedBy(ManagedByT&& value) { SetManagedBy(std::forward<ManagedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event bus associated with the rule.</p>
     */
    inline const Aws::String& GetEventBusName() const { return m_eventBusName; }
    template<typename EventBusNameT = Aws::String>
    void SetEventBusName(EventBusNameT&& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = std::forward<EventBusNameT>(value); }
    template<typename EventBusNameT = Aws::String>
    DescribeRuleResult& WithEventBusName(EventBusNameT&& value) { SetEventBusName(std::forward<EventBusNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the user that created the rule. If you use
     * <code>PutRule</code> to put a rule on an event bus in another account, the other
     * account is the owner of the rule, and the rule ARN includes the account ID for
     * that account. However, the value for <code>CreatedBy</code> is the account ID as
     * the account that created the rule in the other account.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    DescribeRuleResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    RuleState m_state{RuleState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_managedBy;
    bool m_managedByHasBeenSet = false;

    Aws::String m_eventBusName;
    bool m_eventBusNameHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
