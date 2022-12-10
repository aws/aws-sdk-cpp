/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>This structure specifies how often a canary is to make runs and the date and
   * time when it should stop making runs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryScheduleInput">AWS
   * API Reference</a></p>
   */
  class CanaryScheduleInput
  {
  public:
    AWS_SYNTHETICS_API CanaryScheduleInput();
    AWS_SYNTHETICS_API CanaryScheduleInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryScheduleInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>rate</code> expression or a <code>cron</code> expression that defines
     * how often the canary is to run.</p> <p>For a rate expression, The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every hour.
     * You can specify a frequency between <code>rate(1 minute)</code> and <code>rate(1
     * hour)</code>.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0
     * hour)</code> is a special value that causes the canary to run only once when it
     * is started.</p> <p>Use <code>cron(<i>expression</i>)</code> to specify a cron
     * expression. You can't schedule a canary to wait for more than a year before
     * running. For information about the syntax for cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_cron.html">
     * Scheduling canary runs using cron</a>.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>A <code>rate</code> expression or a <code>cron</code> expression that defines
     * how often the canary is to run.</p> <p>For a rate expression, The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every hour.
     * You can specify a frequency between <code>rate(1 minute)</code> and <code>rate(1
     * hour)</code>.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0
     * hour)</code> is a special value that causes the canary to run only once when it
     * is started.</p> <p>Use <code>cron(<i>expression</i>)</code> to specify a cron
     * expression. You can't schedule a canary to wait for more than a year before
     * running. For information about the syntax for cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_cron.html">
     * Scheduling canary runs using cron</a>.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>A <code>rate</code> expression or a <code>cron</code> expression that defines
     * how often the canary is to run.</p> <p>For a rate expression, The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every hour.
     * You can specify a frequency between <code>rate(1 minute)</code> and <code>rate(1
     * hour)</code>.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0
     * hour)</code> is a special value that causes the canary to run only once when it
     * is started.</p> <p>Use <code>cron(<i>expression</i>)</code> to specify a cron
     * expression. You can't schedule a canary to wait for more than a year before
     * running. For information about the syntax for cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_cron.html">
     * Scheduling canary runs using cron</a>.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>A <code>rate</code> expression or a <code>cron</code> expression that defines
     * how often the canary is to run.</p> <p>For a rate expression, The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every hour.
     * You can specify a frequency between <code>rate(1 minute)</code> and <code>rate(1
     * hour)</code>.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0
     * hour)</code> is a special value that causes the canary to run only once when it
     * is started.</p> <p>Use <code>cron(<i>expression</i>)</code> to specify a cron
     * expression. You can't schedule a canary to wait for more than a year before
     * running. For information about the syntax for cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_cron.html">
     * Scheduling canary runs using cron</a>.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>A <code>rate</code> expression or a <code>cron</code> expression that defines
     * how often the canary is to run.</p> <p>For a rate expression, The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every hour.
     * You can specify a frequency between <code>rate(1 minute)</code> and <code>rate(1
     * hour)</code>.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0
     * hour)</code> is a special value that causes the canary to run only once when it
     * is started.</p> <p>Use <code>cron(<i>expression</i>)</code> to specify a cron
     * expression. You can't schedule a canary to wait for more than a year before
     * running. For information about the syntax for cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_cron.html">
     * Scheduling canary runs using cron</a>.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>A <code>rate</code> expression or a <code>cron</code> expression that defines
     * how often the canary is to run.</p> <p>For a rate expression, The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every hour.
     * You can specify a frequency between <code>rate(1 minute)</code> and <code>rate(1
     * hour)</code>.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0
     * hour)</code> is a special value that causes the canary to run only once when it
     * is started.</p> <p>Use <code>cron(<i>expression</i>)</code> to specify a cron
     * expression. You can't schedule a canary to wait for more than a year before
     * running. For information about the syntax for cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_cron.html">
     * Scheduling canary runs using cron</a>.</p>
     */
    inline CanaryScheduleInput& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>A <code>rate</code> expression or a <code>cron</code> expression that defines
     * how often the canary is to run.</p> <p>For a rate expression, The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every hour.
     * You can specify a frequency between <code>rate(1 minute)</code> and <code>rate(1
     * hour)</code>.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0
     * hour)</code> is a special value that causes the canary to run only once when it
     * is started.</p> <p>Use <code>cron(<i>expression</i>)</code> to specify a cron
     * expression. You can't schedule a canary to wait for more than a year before
     * running. For information about the syntax for cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_cron.html">
     * Scheduling canary runs using cron</a>.</p>
     */
    inline CanaryScheduleInput& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>A <code>rate</code> expression or a <code>cron</code> expression that defines
     * how often the canary is to run.</p> <p>For a rate expression, The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every hour.
     * You can specify a frequency between <code>rate(1 minute)</code> and <code>rate(1
     * hour)</code>.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0
     * hour)</code> is a special value that causes the canary to run only once when it
     * is started.</p> <p>Use <code>cron(<i>expression</i>)</code> to specify a cron
     * expression. You can't schedule a canary to wait for more than a year before
     * running. For information about the syntax for cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_cron.html">
     * Scheduling canary runs using cron</a>.</p>
     */
    inline CanaryScheduleInput& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>How long, in seconds, for the canary to continue making regular runs
     * according to the schedule in the <code>Expression</code> value. If you specify
     * 0, the canary continues making runs until you stop it. If you omit this field,
     * the default of 0 is used.</p>
     */
    inline long long GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>How long, in seconds, for the canary to continue making regular runs
     * according to the schedule in the <code>Expression</code> value. If you specify
     * 0, the canary continues making runs until you stop it. If you omit this field,
     * the default of 0 is used.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>How long, in seconds, for the canary to continue making regular runs
     * according to the schedule in the <code>Expression</code> value. If you specify
     * 0, the canary continues making runs until you stop it. If you omit this field,
     * the default of 0 is used.</p>
     */
    inline void SetDurationInSeconds(long long value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>How long, in seconds, for the canary to continue making regular runs
     * according to the schedule in the <code>Expression</code> value. If you specify
     * 0, the canary continues making runs until you stop it. If you omit this field,
     * the default of 0 is used.</p>
     */
    inline CanaryScheduleInput& WithDurationInSeconds(long long value) { SetDurationInSeconds(value); return *this;}

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    long long m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
