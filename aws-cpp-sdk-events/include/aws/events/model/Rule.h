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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/RuleState.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Contains information about a rule in Amazon CloudWatch Events.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/Rule">AWS API
   * Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API Rule
  {
  public:
    Rule();
    Rule(Aws::Utils::Json::JsonView jsonValue);
    Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline Rule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline Rule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline Rule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline Rule& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline Rule& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline Rule& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The event pattern of the rule. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEventsandEventPatterns.html">Events
     * and Event Patterns</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <p>The event pattern of the rule. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEventsandEventPatterns.html">Events
     * and Event Patterns</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }

    /**
     * <p>The event pattern of the rule. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEventsandEventPatterns.html">Events
     * and Event Patterns</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <p>The event pattern of the rule. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEventsandEventPatterns.html">Events
     * and Event Patterns</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::move(value); }

    /**
     * <p>The event pattern of the rule. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEventsandEventPatterns.html">Events
     * and Event Patterns</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }

    /**
     * <p>The event pattern of the rule. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEventsandEventPatterns.html">Events
     * and Event Patterns</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline Rule& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The event pattern of the rule. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEventsandEventPatterns.html">Events
     * and Event Patterns</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline Rule& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}

    /**
     * <p>The event pattern of the rule. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEventsandEventPatterns.html">Events
     * and Event Patterns</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline Rule& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}


    /**
     * <p>The state of the rule.</p>
     */
    inline const RuleState& GetState() const{ return m_state; }

    /**
     * <p>The state of the rule.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the rule.</p>
     */
    inline void SetState(const RuleState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the rule.</p>
     */
    inline void SetState(RuleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the rule.</p>
     */
    inline Rule& WithState(const RuleState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the rule.</p>
     */
    inline Rule& WithState(RuleState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The description of the rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the rule.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the rule.</p>
     */
    inline Rule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the rule.</p>
     */
    inline Rule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the rule.</p>
     */
    inline Rule& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline Rule& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline Rule& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline Rule& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role that is used for target
     * invocation.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is used for target
     * invocation.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is used for target
     * invocation.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is used for target
     * invocation.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is used for target
     * invocation.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is used for target
     * invocation.</p>
     */
    inline Rule& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is used for target
     * invocation.</p>
     */
    inline Rule& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is used for target
     * invocation.</p>
     */
    inline Rule& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>If the rule was created on behalf of your account by an AWS service, this
     * field displays the principal name of the service that created the rule.</p>
     */
    inline const Aws::String& GetManagedBy() const{ return m_managedBy; }

    /**
     * <p>If the rule was created on behalf of your account by an AWS service, this
     * field displays the principal name of the service that created the rule.</p>
     */
    inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }

    /**
     * <p>If the rule was created on behalf of your account by an AWS service, this
     * field displays the principal name of the service that created the rule.</p>
     */
    inline void SetManagedBy(const Aws::String& value) { m_managedByHasBeenSet = true; m_managedBy = value; }

    /**
     * <p>If the rule was created on behalf of your account by an AWS service, this
     * field displays the principal name of the service that created the rule.</p>
     */
    inline void SetManagedBy(Aws::String&& value) { m_managedByHasBeenSet = true; m_managedBy = std::move(value); }

    /**
     * <p>If the rule was created on behalf of your account by an AWS service, this
     * field displays the principal name of the service that created the rule.</p>
     */
    inline void SetManagedBy(const char* value) { m_managedByHasBeenSet = true; m_managedBy.assign(value); }

    /**
     * <p>If the rule was created on behalf of your account by an AWS service, this
     * field displays the principal name of the service that created the rule.</p>
     */
    inline Rule& WithManagedBy(const Aws::String& value) { SetManagedBy(value); return *this;}

    /**
     * <p>If the rule was created on behalf of your account by an AWS service, this
     * field displays the principal name of the service that created the rule.</p>
     */
    inline Rule& WithManagedBy(Aws::String&& value) { SetManagedBy(std::move(value)); return *this;}

    /**
     * <p>If the rule was created on behalf of your account by an AWS service, this
     * field displays the principal name of the service that created the rule.</p>
     */
    inline Rule& WithManagedBy(const char* value) { SetManagedBy(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet;

    RuleState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_managedBy;
    bool m_managedByHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
