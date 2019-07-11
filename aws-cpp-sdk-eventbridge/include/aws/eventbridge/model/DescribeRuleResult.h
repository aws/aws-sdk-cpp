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
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/RuleState.h>
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
namespace EventBridge
{
namespace Model
{
  class AWS_EVENTBRIDGE_API DescribeRuleResult
  {
  public:
    DescribeRuleResult();
    DescribeRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Event
     * Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Event
     * Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPattern = value; }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Event
     * Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPattern = std::move(value); }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Event
     * Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetEventPattern(const char* value) { m_eventPattern.assign(value); }

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Event
     * Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline DescribeRuleResult& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Event
     * Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline DescribeRuleResult& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}

    /**
     * <p>The event pattern. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Event
     * Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline DescribeRuleResult& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}


    /**
     * <p>The scheduling expression: for example, <code>"cron(0 20 * * ? *)"</code> or
     * <code>"rate(5 minutes)"</code>.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>The scheduling expression: for example, <code>"cron(0 20 * * ? *)"</code> or
     * <code>"rate(5 minutes)"</code>.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpression = value; }

    /**
     * <p>The scheduling expression: for example, <code>"cron(0 20 * * ? *)"</code> or
     * <code>"rate(5 minutes)"</code>.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpression = std::move(value); }

    /**
     * <p>The scheduling expression: for example, <code>"cron(0 20 * * ? *)"</code> or
     * <code>"rate(5 minutes)"</code>.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpression.assign(value); }

    /**
     * <p>The scheduling expression: for example, <code>"cron(0 20 * * ? *)"</code> or
     * <code>"rate(5 minutes)"</code>.</p>
     */
    inline DescribeRuleResult& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The scheduling expression: for example, <code>"cron(0 20 * * ? *)"</code> or
     * <code>"rate(5 minutes)"</code>.</p>
     */
    inline DescribeRuleResult& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>The scheduling expression: for example, <code>"cron(0 20 * * ? *)"</code> or
     * <code>"rate(5 minutes)"</code>.</p>
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
     * <p>If this is a managed rule, created by an AWS service on your behalf, this
     * field displays the principal name of the AWS service that created the rule.</p>
     */
    inline const Aws::String& GetManagedBy() const{ return m_managedBy; }

    /**
     * <p>If this is a managed rule, created by an AWS service on your behalf, this
     * field displays the principal name of the AWS service that created the rule.</p>
     */
    inline void SetManagedBy(const Aws::String& value) { m_managedBy = value; }

    /**
     * <p>If this is a managed rule, created by an AWS service on your behalf, this
     * field displays the principal name of the AWS service that created the rule.</p>
     */
    inline void SetManagedBy(Aws::String&& value) { m_managedBy = std::move(value); }

    /**
     * <p>If this is a managed rule, created by an AWS service on your behalf, this
     * field displays the principal name of the AWS service that created the rule.</p>
     */
    inline void SetManagedBy(const char* value) { m_managedBy.assign(value); }

    /**
     * <p>If this is a managed rule, created by an AWS service on your behalf, this
     * field displays the principal name of the AWS service that created the rule.</p>
     */
    inline DescribeRuleResult& WithManagedBy(const Aws::String& value) { SetManagedBy(value); return *this;}

    /**
     * <p>If this is a managed rule, created by an AWS service on your behalf, this
     * field displays the principal name of the AWS service that created the rule.</p>
     */
    inline DescribeRuleResult& WithManagedBy(Aws::String&& value) { SetManagedBy(std::move(value)); return *this;}

    /**
     * <p>If this is a managed rule, created by an AWS service on your behalf, this
     * field displays the principal name of the AWS service that created the rule.</p>
     */
    inline DescribeRuleResult& WithManagedBy(const char* value) { SetManagedBy(value); return *this;}


    /**
     * <p>The event bus associated with the rule.</p>
     */
    inline const Aws::String& GetEventBusName() const{ return m_eventBusName; }

    /**
     * <p>The event bus associated with the rule.</p>
     */
    inline void SetEventBusName(const Aws::String& value) { m_eventBusName = value; }

    /**
     * <p>The event bus associated with the rule.</p>
     */
    inline void SetEventBusName(Aws::String&& value) { m_eventBusName = std::move(value); }

    /**
     * <p>The event bus associated with the rule.</p>
     */
    inline void SetEventBusName(const char* value) { m_eventBusName.assign(value); }

    /**
     * <p>The event bus associated with the rule.</p>
     */
    inline DescribeRuleResult& WithEventBusName(const Aws::String& value) { SetEventBusName(value); return *this;}

    /**
     * <p>The event bus associated with the rule.</p>
     */
    inline DescribeRuleResult& WithEventBusName(Aws::String&& value) { SetEventBusName(std::move(value)); return *this;}

    /**
     * <p>The event bus associated with the rule.</p>
     */
    inline DescribeRuleResult& WithEventBusName(const char* value) { SetEventBusName(value); return *this;}

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
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
