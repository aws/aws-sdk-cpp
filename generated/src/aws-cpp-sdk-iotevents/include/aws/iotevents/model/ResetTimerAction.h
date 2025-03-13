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
   * <p>Information required to reset the timer. The timer is reset to the previously
   * evaluated result of the duration. The duration expression isn't reevaluated when
   * you reset the timer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ResetTimerAction">AWS
   * API Reference</a></p>
   */
  class ResetTimerAction
  {
  public:
    AWS_IOTEVENTS_API ResetTimerAction() = default;
    AWS_IOTEVENTS_API ResetTimerAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API ResetTimerAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the timer to reset.</p>
     */
    inline const Aws::String& GetTimerName() const { return m_timerName; }
    inline bool TimerNameHasBeenSet() const { return m_timerNameHasBeenSet; }
    template<typename TimerNameT = Aws::String>
    void SetTimerName(TimerNameT&& value) { m_timerNameHasBeenSet = true; m_timerName = std::forward<TimerNameT>(value); }
    template<typename TimerNameT = Aws::String>
    ResetTimerAction& WithTimerName(TimerNameT&& value) { SetTimerName(std::forward<TimerNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timerName;
    bool m_timerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
