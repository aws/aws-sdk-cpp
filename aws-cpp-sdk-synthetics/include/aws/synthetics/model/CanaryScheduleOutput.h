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
   * <p>How long, in seconds, for the canary to continue making regular runs
   * according to the schedule in the <code>Expression</code> value.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryScheduleOutput">AWS
   * API Reference</a></p>
   */
  class AWS_SYNTHETICS_API CanaryScheduleOutput
  {
  public:
    CanaryScheduleOutput();
    CanaryScheduleOutput(Aws::Utils::Json::JsonView jsonValue);
    CanaryScheduleOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A rate expression that defines how often the canary is to run. The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every
     * hour.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0 hour)</code>
     * is a special value that causes the canary to run only once when it is
     * started.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>A rate expression that defines how often the canary is to run. The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every
     * hour.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0 hour)</code>
     * is a special value that causes the canary to run only once when it is
     * started.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>A rate expression that defines how often the canary is to run. The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every
     * hour.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0 hour)</code>
     * is a special value that causes the canary to run only once when it is
     * started.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>A rate expression that defines how often the canary is to run. The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every
     * hour.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0 hour)</code>
     * is a special value that causes the canary to run only once when it is
     * started.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>A rate expression that defines how often the canary is to run. The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every
     * hour.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0 hour)</code>
     * is a special value that causes the canary to run only once when it is
     * started.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>A rate expression that defines how often the canary is to run. The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every
     * hour.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0 hour)</code>
     * is a special value that causes the canary to run only once when it is
     * started.</p>
     */
    inline CanaryScheduleOutput& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>A rate expression that defines how often the canary is to run. The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every
     * hour.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0 hour)</code>
     * is a special value that causes the canary to run only once when it is
     * started.</p>
     */
    inline CanaryScheduleOutput& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>A rate expression that defines how often the canary is to run. The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every
     * hour.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0 hour)</code>
     * is a special value that causes the canary to run only once when it is
     * started.</p>
     */
    inline CanaryScheduleOutput& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>How long, in seconds, for the canary to continue making regular runs after it
     * was created. The runs are performed according to the schedule in the
     * <code>Expression</code> value.</p>
     */
    inline long long GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>How long, in seconds, for the canary to continue making regular runs after it
     * was created. The runs are performed according to the schedule in the
     * <code>Expression</code> value.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>How long, in seconds, for the canary to continue making regular runs after it
     * was created. The runs are performed according to the schedule in the
     * <code>Expression</code> value.</p>
     */
    inline void SetDurationInSeconds(long long value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>How long, in seconds, for the canary to continue making regular runs after it
     * was created. The runs are performed according to the schedule in the
     * <code>Expression</code> value.</p>
     */
    inline CanaryScheduleOutput& WithDurationInSeconds(long long value) { SetDurationInSeconds(value); return *this;}

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet;

    long long m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
