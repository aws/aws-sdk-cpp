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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Represents a log event, which is a record of activity that was recorded by
   * the application or resource being monitored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/InputLogEvent">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHLOGS_API InputLogEvent
  {
  public:
    InputLogEvent();
    InputLogEvent(Aws::Utils::Json::JsonView jsonValue);
    InputLogEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline InputLogEvent& WithTimestamp(long long value) { SetTimestamp(value); return *this;}


    /**
     * <p>The raw event message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The raw event message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The raw event message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The raw event message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The raw event message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The raw event message.</p>
     */
    inline InputLogEvent& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The raw event message.</p>
     */
    inline InputLogEvent& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The raw event message.</p>
     */
    inline InputLogEvent& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    long long m_timestamp;
    bool m_timestampHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
