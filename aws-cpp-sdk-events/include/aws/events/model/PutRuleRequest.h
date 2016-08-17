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
   * <p>Container for the parameters to the <a>PutRule</a> operation.</p>
   */
  class AWS_CLOUDWATCHEVENTS_API PutRuleRequest : public CloudWatchEventsRequest
  {
  public:
    PutRuleRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the rule that you are creating or updating.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule that you are creating or updating.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule that you are creating or updating.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

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
    inline PutRuleRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule that you are creating or updating.</p>
     */
    inline PutRuleRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline PutRuleRequest& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline PutRuleRequest& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The scheduling expression. For example, "cron(0 20 * * ? *)", "rate(5
     * minutes)".</p>
     */
    inline PutRuleRequest& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The event pattern.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <p>The event pattern.</p>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <p>The event pattern.</p>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <p>The event pattern.</p>
     */
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }

    /**
     * <p>The event pattern.</p>
     */
    inline PutRuleRequest& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The event pattern.</p>
     */
    inline PutRuleRequest& WithEventPattern(Aws::String&& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The event pattern.</p>
     */
    inline PutRuleRequest& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline const RuleState& GetState() const{ return m_state; }

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline void SetState(const RuleState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline void SetState(RuleState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline PutRuleRequest& WithState(const RuleState& value) { SetState(value); return *this;}

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline PutRuleRequest& WithState(RuleState&& value) { SetState(value); return *this;}

    /**
     * <p>A description of the rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

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
    inline PutRuleRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the rule.</p>
     */
    inline PutRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline PutRuleRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
     */
    inline PutRuleRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the rule.</p>
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
