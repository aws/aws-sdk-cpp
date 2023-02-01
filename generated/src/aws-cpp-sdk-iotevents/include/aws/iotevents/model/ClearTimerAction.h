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
   * <p>Information needed to clear the timer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/ClearTimerAction">AWS
   * API Reference</a></p>
   */
  class ClearTimerAction
  {
  public:
    AWS_IOTEVENTS_API ClearTimerAction();
    AWS_IOTEVENTS_API ClearTimerAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API ClearTimerAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the timer to clear.</p>
     */
    inline const Aws::String& GetTimerName() const{ return m_timerName; }

    /**
     * <p>The name of the timer to clear.</p>
     */
    inline bool TimerNameHasBeenSet() const { return m_timerNameHasBeenSet; }

    /**
     * <p>The name of the timer to clear.</p>
     */
    inline void SetTimerName(const Aws::String& value) { m_timerNameHasBeenSet = true; m_timerName = value; }

    /**
     * <p>The name of the timer to clear.</p>
     */
    inline void SetTimerName(Aws::String&& value) { m_timerNameHasBeenSet = true; m_timerName = std::move(value); }

    /**
     * <p>The name of the timer to clear.</p>
     */
    inline void SetTimerName(const char* value) { m_timerNameHasBeenSet = true; m_timerName.assign(value); }

    /**
     * <p>The name of the timer to clear.</p>
     */
    inline ClearTimerAction& WithTimerName(const Aws::String& value) { SetTimerName(value); return *this;}

    /**
     * <p>The name of the timer to clear.</p>
     */
    inline ClearTimerAction& WithTimerName(Aws::String&& value) { SetTimerName(std::move(value)); return *this;}

    /**
     * <p>The name of the timer to clear.</p>
     */
    inline ClearTimerAction& WithTimerName(const char* value) { SetTimerName(value); return *this;}

  private:

    Aws::String m_timerName;
    bool m_timerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
