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
  class AWS_IOTEVENTS_API SetTimerAction
  {
  public:
    SetTimerAction();
    SetTimerAction(Aws::Utils::Json::JsonView jsonValue);
    SetTimerAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The number of seconds until the timer expires. The minimum value is 60
     * seconds to ensure accuracy.</p>
     */
    inline int GetSeconds() const{ return m_seconds; }

    /**
     * <p>The number of seconds until the timer expires. The minimum value is 60
     * seconds to ensure accuracy.</p>
     */
    inline bool SecondsHasBeenSet() const { return m_secondsHasBeenSet; }

    /**
     * <p>The number of seconds until the timer expires. The minimum value is 60
     * seconds to ensure accuracy.</p>
     */
    inline void SetSeconds(int value) { m_secondsHasBeenSet = true; m_seconds = value; }

    /**
     * <p>The number of seconds until the timer expires. The minimum value is 60
     * seconds to ensure accuracy.</p>
     */
    inline SetTimerAction& WithSeconds(int value) { SetSeconds(value); return *this;}

  private:

    Aws::String m_timerName;
    bool m_timerNameHasBeenSet;

    int m_seconds;
    bool m_secondsHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
