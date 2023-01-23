/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Information needed to set the timer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/SetTimerAction">AWS
   * API Reference</a></p>
   */
  class SetTimerAction
  {
  public:
    AWS_IOTEVENTS_API SetTimerAction();
    AWS_IOTEVENTS_API SetTimerAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API SetTimerAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the timer.</p>
     */
    inline const Aws::String& GetTimerName() const{ return m_timerName; }

    /**
     * <p>The name of the timer.</p>
     */
    inline bool TimerNameHasBeenSet() const { return m_timerNameHasBeenSet; }

    /**
     * <p>The name of the timer.</p>
     */
    inline void SetTimerName(const Aws::String& value) { m_timerNameHasBeenSet = true; m_timerName = value; }

    /**
     * <p>The name of the timer.</p>
     */
    inline void SetTimerName(Aws::String&& value) { m_timerNameHasBeenSet = true; m_timerName = std::move(value); }

    /**
     * <p>The name of the timer.</p>
     */
    inline void SetTimerName(const char* value) { m_timerNameHasBeenSet = true; m_timerName.assign(value); }

    /**
     * <p>The name of the timer.</p>
     */
    inline SetTimerAction& WithTimerName(const Aws::String& value) { SetTimerName(value); return *this;}

    /**
     * <p>The name of the timer.</p>
     */
    inline SetTimerAction& WithTimerName(Aws::String&& value) { SetTimerName(std::move(value)); return *this;}

    /**
     * <p>The name of the timer.</p>
     */
    inline SetTimerAction& WithTimerName(const char* value) { SetTimerName(value); return *this;}


    /**
     * <p>The duration of the timer, in seconds. You can use a string expression that
     * includes numbers, variables (<code>$variable.&lt;variable-name&gt;</code>), and
     * input values (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>) as
     * the duration. The range of the duration is 1-31622400 seconds. To ensure
     * accuracy, the minimum duration is 60 seconds. The evaluated result of the
     * duration is rounded down to the nearest whole number. </p>
     */
    inline const Aws::String& GetDurationExpression() const{ return m_durationExpression; }

    /**
     * <p>The duration of the timer, in seconds. You can use a string expression that
     * includes numbers, variables (<code>$variable.&lt;variable-name&gt;</code>), and
     * input values (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>) as
     * the duration. The range of the duration is 1-31622400 seconds. To ensure
     * accuracy, the minimum duration is 60 seconds. The evaluated result of the
     * duration is rounded down to the nearest whole number. </p>
     */
    inline bool DurationExpressionHasBeenSet() const { return m_durationExpressionHasBeenSet; }

    /**
     * <p>The duration of the timer, in seconds. You can use a string expression that
     * includes numbers, variables (<code>$variable.&lt;variable-name&gt;</code>), and
     * input values (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>) as
     * the duration. The range of the duration is 1-31622400 seconds. To ensure
     * accuracy, the minimum duration is 60 seconds. The evaluated result of the
     * duration is rounded down to the nearest whole number. </p>
     */
    inline void SetDurationExpression(const Aws::String& value) { m_durationExpressionHasBeenSet = true; m_durationExpression = value; }

    /**
     * <p>The duration of the timer, in seconds. You can use a string expression that
     * includes numbers, variables (<code>$variable.&lt;variable-name&gt;</code>), and
     * input values (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>) as
     * the duration. The range of the duration is 1-31622400 seconds. To ensure
     * accuracy, the minimum duration is 60 seconds. The evaluated result of the
     * duration is rounded down to the nearest whole number. </p>
     */
    inline void SetDurationExpression(Aws::String&& value) { m_durationExpressionHasBeenSet = true; m_durationExpression = std::move(value); }

    /**
     * <p>The duration of the timer, in seconds. You can use a string expression that
     * includes numbers, variables (<code>$variable.&lt;variable-name&gt;</code>), and
     * input values (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>) as
     * the duration. The range of the duration is 1-31622400 seconds. To ensure
     * accuracy, the minimum duration is 60 seconds. The evaluated result of the
     * duration is rounded down to the nearest whole number. </p>
     */
    inline void SetDurationExpression(const char* value) { m_durationExpressionHasBeenSet = true; m_durationExpression.assign(value); }

    /**
     * <p>The duration of the timer, in seconds. You can use a string expression that
     * includes numbers, variables (<code>$variable.&lt;variable-name&gt;</code>), and
     * input values (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>) as
     * the duration. The range of the duration is 1-31622400 seconds. To ensure
     * accuracy, the minimum duration is 60 seconds. The evaluated result of the
     * duration is rounded down to the nearest whole number. </p>
     */
    inline SetTimerAction& WithDurationExpression(const Aws::String& value) { SetDurationExpression(value); return *this;}

    /**
     * <p>The duration of the timer, in seconds. You can use a string expression that
     * includes numbers, variables (<code>$variable.&lt;variable-name&gt;</code>), and
     * input values (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>) as
     * the duration. The range of the duration is 1-31622400 seconds. To ensure
     * accuracy, the minimum duration is 60 seconds. The evaluated result of the
     * duration is rounded down to the nearest whole number. </p>
     */
    inline SetTimerAction& WithDurationExpression(Aws::String&& value) { SetDurationExpression(std::move(value)); return *this;}

    /**
     * <p>The duration of the timer, in seconds. You can use a string expression that
     * includes numbers, variables (<code>$variable.&lt;variable-name&gt;</code>), and
     * input values (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>) as
     * the duration. The range of the duration is 1-31622400 seconds. To ensure
     * accuracy, the minimum duration is 60 seconds. The evaluated result of the
     * duration is rounded down to the nearest whole number. </p>
     */
    inline SetTimerAction& WithDurationExpression(const char* value) { SetDurationExpression(value); return *this;}

  private:

    Aws::String m_timerName;
    bool m_timerNameHasBeenSet = false;

    Aws::String m_durationExpression;
    bool m_durationExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
