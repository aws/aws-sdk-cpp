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

  class AWS_CLOUDWATCHLOGS_API OutputLogEvent
  {
  public:
    OutputLogEvent();
    OutputLogEvent(const Aws::Utils::Json::JsonValue& jsonValue);
    OutputLogEvent& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline long long GetTimestamp() const{ return m_timestamp; }

    
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    
    inline OutputLogEvent& WithTimestamp(long long value) { SetTimestamp(value); return *this;}

    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline OutputLogEvent& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline OutputLogEvent& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    
    inline OutputLogEvent& WithMessage(const char* value) { SetMessage(value); return *this;}

    
    inline long long GetIngestionTime() const{ return m_ingestionTime; }

    
    inline void SetIngestionTime(long long value) { m_ingestionTimeHasBeenSet = true; m_ingestionTime = value; }

    
    inline OutputLogEvent& WithIngestionTime(long long value) { SetIngestionTime(value); return *this;}

  private:
    long long m_timestamp;
    bool m_timestampHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
    long long m_ingestionTime;
    bool m_ingestionTimeHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
