﻿/**
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
  class AWS_IOTEVENTS_API ResetTimerAction
  {
  public:
    ResetTimerAction();
    ResetTimerAction(Aws::Utils::Json::JsonView jsonValue);
    ResetTimerAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the timer to reset.</p>
     */
    inline const Aws::String& GetTimerName() const{ return m_timerName; }

    /**
     * <p>The name of the timer to reset.</p>
     */
    inline bool TimerNameHasBeenSet() const { return m_timerNameHasBeenSet; }

    /**
     * <p>The name of the timer to reset.</p>
     */
    inline void SetTimerName(const Aws::String& value) { m_timerNameHasBeenSet = true; m_timerName = value; }

    /**
     * <p>The name of the timer to reset.</p>
     */
    inline void SetTimerName(Aws::String&& value) { m_timerNameHasBeenSet = true; m_timerName = std::move(value); }

    /**
     * <p>The name of the timer to reset.</p>
     */
    inline void SetTimerName(const char* value) { m_timerNameHasBeenSet = true; m_timerName.assign(value); }

    /**
     * <p>The name of the timer to reset.</p>
     */
    inline ResetTimerAction& WithTimerName(const Aws::String& value) { SetTimerName(value); return *this;}

    /**
     * <p>The name of the timer to reset.</p>
     */
    inline ResetTimerAction& WithTimerName(Aws::String&& value) { SetTimerName(std::move(value)); return *this;}

    /**
     * <p>The name of the timer to reset.</p>
     */
    inline ResetTimerAction& WithTimerName(const char* value) { SetTimerName(value); return *this;}

  private:

    Aws::String m_timerName;
    bool m_timerNameHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
