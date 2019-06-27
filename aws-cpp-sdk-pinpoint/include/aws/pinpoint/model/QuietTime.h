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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the start and end times that define a time range when messages
   * aren't sent to endpoints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/QuietTime">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API QuietTime
  {
  public:
    QuietTime();
    QuietTime(Aws::Utils::Json::JsonView jsonValue);
    QuietTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The specific time when quiet time ends. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline const Aws::String& GetEnd() const{ return m_end; }

    /**
     * <p>The specific time when quiet time ends. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>The specific time when quiet time ends. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The specific time when quiet time ends. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>The specific time when quiet time ends. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }

    /**
     * <p>The specific time when quiet time ends. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline QuietTime& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}

    /**
     * <p>The specific time when quiet time ends. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline QuietTime& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}

    /**
     * <p>The specific time when quiet time ends. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline QuietTime& WithEnd(const char* value) { SetEnd(value); return *this;}


    /**
     * <p>The specific time when quiet time begins. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline const Aws::String& GetStart() const{ return m_start; }

    /**
     * <p>The specific time when quiet time begins. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The specific time when quiet time begins. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The specific time when quiet time begins. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>The specific time when quiet time begins. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }

    /**
     * <p>The specific time when quiet time begins. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline QuietTime& WithStart(const Aws::String& value) { SetStart(value); return *this;}

    /**
     * <p>The specific time when quiet time begins. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline QuietTime& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}

    /**
     * <p>The specific time when quiet time begins. This value has to use 24-hour
     * notation and be in HH:MM format, where HH is the hour (with a leading zero, if
     * applicable) and MM is the minutes. For example, use 02:30 to represent 2:30 AM,
     * or 14:30 to represent 2:30 PM.</p>
     */
    inline QuietTime& WithStart(const char* value) { SetStart(value); return *this;}

  private:

    Aws::String m_end;
    bool m_endHasBeenSet;

    Aws::String m_start;
    bool m_startHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
