/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>A log event is a record of some activity that was recorded by the application
   * or resource being monitored. The log event record that CloudWatch Logs
   * understands contains two properties: the timestamp of when the event occurred,
   * and the raw event message.</p>
   */
  class AWS_CLOUDWATCHLOGS_API InputLogEvent
  {
  public:
    InputLogEvent();
    InputLogEvent(const Aws::Utils::Json::JsonValue& jsonValue);
    InputLogEvent& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline long long GetTimestamp() const{ return m_timestamp; }

    
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    
    inline InputLogEvent& WithTimestamp(long long value) { SetTimestamp(value); return *this;}

    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InputLogEvent& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InputLogEvent& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    
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
