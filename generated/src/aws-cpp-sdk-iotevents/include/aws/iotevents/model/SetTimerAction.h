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
    AWS_IOTEVENTS_API SetTimerAction() = default;
    AWS_IOTEVENTS_API SetTimerAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API SetTimerAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the timer.</p>
     */
    inline const Aws::String& GetTimerName() const { return m_timerName; }
    inline bool TimerNameHasBeenSet() const { return m_timerNameHasBeenSet; }
    template<typename TimerNameT = Aws::String>
    void SetTimerName(TimerNameT&& value) { m_timerNameHasBeenSet = true; m_timerName = std::forward<TimerNameT>(value); }
    template<typename TimerNameT = Aws::String>
    SetTimerAction& WithTimerName(TimerNameT&& value) { SetTimerName(std::forward<TimerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the timer, in seconds. You can use a string expression that
     * includes numbers, variables (<code>$variable.&lt;variable-name&gt;</code>), and
     * input values (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>) as
     * the duration. The range of the duration is 1-31622400 seconds. To ensure
     * accuracy, the minimum duration is 60 seconds. The evaluated result of the
     * duration is rounded down to the nearest whole number. </p>
     */
    inline const Aws::String& GetDurationExpression() const { return m_durationExpression; }
    inline bool DurationExpressionHasBeenSet() const { return m_durationExpressionHasBeenSet; }
    template<typename DurationExpressionT = Aws::String>
    void SetDurationExpression(DurationExpressionT&& value) { m_durationExpressionHasBeenSet = true; m_durationExpression = std::forward<DurationExpressionT>(value); }
    template<typename DurationExpressionT = Aws::String>
    SetTimerAction& WithDurationExpression(DurationExpressionT&& value) { SetDurationExpression(std::forward<DurationExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timerName;
    bool m_timerNameHasBeenSet = false;

    Aws::String m_durationExpression;
    bool m_durationExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
