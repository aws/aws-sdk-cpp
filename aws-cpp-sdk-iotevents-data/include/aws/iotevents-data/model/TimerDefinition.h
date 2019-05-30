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
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>The new setting of a timer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/TimerDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTSDATA_API TimerDefinition
  {
  public:
    TimerDefinition();
    TimerDefinition(Aws::Utils::Json::JsonView jsonValue);
    TimerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the timer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the timer.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the timer.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the timer.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the timer.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the timer.</p>
     */
    inline TimerDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the timer.</p>
     */
    inline TimerDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the timer.</p>
     */
    inline TimerDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The new setting of the timer (the number of seconds before the timer
     * elapses).</p>
     */
    inline int GetSeconds() const{ return m_seconds; }

    /**
     * <p>The new setting of the timer (the number of seconds before the timer
     * elapses).</p>
     */
    inline bool SecondsHasBeenSet() const { return m_secondsHasBeenSet; }

    /**
     * <p>The new setting of the timer (the number of seconds before the timer
     * elapses).</p>
     */
    inline void SetSeconds(int value) { m_secondsHasBeenSet = true; m_seconds = value; }

    /**
     * <p>The new setting of the timer (the number of seconds before the timer
     * elapses).</p>
     */
    inline TimerDefinition& WithSeconds(int value) { SetSeconds(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_seconds;
    bool m_secondsHasBeenSet;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
