/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/RuleState.h>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHEVENTS_API PutRuleRequest : public CloudWatchEventsRequest
  {
  public:
    PutRuleRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <zonbook> <simpara>The name of the rule that you are creating or
     * updating.</simpara> </zonbook> <xhtml> <p>The name of the rule that you are
     * creating or updating.</p> </xhtml>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <zonbook> <simpara>The name of the rule that you are creating or
     * updating.</simpara> </zonbook> <xhtml> <p>The name of the rule that you are
     * creating or updating.</p> </xhtml>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <zonbook> <simpara>The name of the rule that you are creating or
     * updating.</simpara> </zonbook> <xhtml> <p>The name of the rule that you are
     * creating or updating.</p> </xhtml>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <zonbook> <simpara>The name of the rule that you are creating or
     * updating.</simpara> </zonbook> <xhtml> <p>The name of the rule that you are
     * creating or updating.</p> </xhtml>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <zonbook> <simpara>The name of the rule that you are creating or
     * updating.</simpara> </zonbook> <xhtml> <p>The name of the rule that you are
     * creating or updating.</p> </xhtml>
     */
    inline PutRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <zonbook> <simpara>The name of the rule that you are creating or
     * updating.</simpara> </zonbook> <xhtml> <p>The name of the rule that you are
     * creating or updating.</p> </xhtml>
     */
    inline PutRuleRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <zonbook> <simpara>The name of the rule that you are creating or
     * updating.</simpara> </zonbook> <xhtml> <p>The name of the rule that you are
     * creating or updating.</p> </xhtml>
     */
    inline PutRuleRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline PutRuleRequest& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline PutRuleRequest& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(value); return *this;}

    /**
     * <zonbook> <simpara>The scheduling expression. For example, "cron(0 20 * * ? *)",
     * "rate(5 minutes)".</simpara> </zonbook> <xhtml> <p>The scheduling expression.
     * For example, "cron(0 20 * * ? *)", "rate(5 minutes)".</p> </xhtml>
     */
    inline PutRuleRequest& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline PutRuleRequest& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline PutRuleRequest& WithEventPattern(Aws::String&& value) { SetEventPattern(value); return *this;}

    /**
     * <zonbook> <simpara>The event pattern.</simpara> </zonbook> <xhtml> <p>The event
     * pattern.</p> </xhtml>
     */
    inline PutRuleRequest& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}

    /**
     * <zonbook> <simpara>Indicates whether the rule is enabled or disabled.</simpara>
     * </zonbook> <xhtml> <p>Indicates whether the rule is enabled or disabled.</p>
     * </xhtml>
     */
    inline const RuleState& GetState() const{ return m_state; }

    /**
     * <zonbook> <simpara>Indicates whether the rule is enabled or disabled.</simpara>
     * </zonbook> <xhtml> <p>Indicates whether the rule is enabled or disabled.</p>
     * </xhtml>
     */
    inline void SetState(const RuleState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <zonbook> <simpara>Indicates whether the rule is enabled or disabled.</simpara>
     * </zonbook> <xhtml> <p>Indicates whether the rule is enabled or disabled.</p>
     * </xhtml>
     */
    inline void SetState(RuleState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <zonbook> <simpara>Indicates whether the rule is enabled or disabled.</simpara>
     * </zonbook> <xhtml> <p>Indicates whether the rule is enabled or disabled.</p>
     * </xhtml>
     */
    inline PutRuleRequest& WithState(const RuleState& value) { SetState(value); return *this;}

    /**
     * <zonbook> <simpara>Indicates whether the rule is enabled or disabled.</simpara>
     * </zonbook> <xhtml> <p>Indicates whether the rule is enabled or disabled.</p>
     * </xhtml>
     */
    inline PutRuleRequest& WithState(RuleState&& value) { SetState(value); return *this;}

    /**
     * <zonbook> <simpara>A description of the rule.</simpara> </zonbook> <xhtml> <p>A
     * description of the rule.</p> </xhtml>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <zonbook> <simpara>A description of the rule.</simpara> </zonbook> <xhtml> <p>A
     * description of the rule.</p> </xhtml>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <zonbook> <simpara>A description of the rule.</simpara> </zonbook> <xhtml> <p>A
     * description of the rule.</p> </xhtml>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <zonbook> <simpara>A description of the rule.</simpara> </zonbook> <xhtml> <p>A
     * description of the rule.</p> </xhtml>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <zonbook> <simpara>A description of the rule.</simpara> </zonbook> <xhtml> <p>A
     * description of the rule.</p> </xhtml>
     */
    inline PutRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <zonbook> <simpara>A description of the rule.</simpara> </zonbook> <xhtml> <p>A
     * description of the rule.</p> </xhtml>
     */
    inline PutRuleRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <zonbook> <simpara>A description of the rule.</simpara> </zonbook> <xhtml> <p>A
     * description of the rule.</p> </xhtml>
     */
    inline PutRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role associated
     * with the rule.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of
     * the IAM role associated with the rule.</p> </xhtml>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role associated
     * with the rule.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of
     * the IAM role associated with the rule.</p> </xhtml>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role associated
     * with the rule.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of
     * the IAM role associated with the rule.</p> </xhtml>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role associated
     * with the rule.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of
     * the IAM role associated with the rule.</p> </xhtml>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role associated
     * with the rule.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of
     * the IAM role associated with the rule.</p> </xhtml>
     */
    inline PutRuleRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role associated
     * with the rule.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of
     * the IAM role associated with the rule.</p> </xhtml>
     */
    inline PutRuleRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role associated
     * with the rule.</simpara> </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of
     * the IAM role associated with the rule.</p> </xhtml>
     */
    inline PutRuleRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet;
    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet;
    RuleState m_state;
    bool m_stateHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
