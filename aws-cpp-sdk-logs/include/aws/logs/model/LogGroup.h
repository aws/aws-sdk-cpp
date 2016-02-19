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

  class AWS_CLOUDWATCHLOGS_API LogGroup
  {
  public:
    LogGroup();
    LogGroup(const Aws::Utils::Json::JsonValue& jsonValue);
    LogGroup& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    
    inline LogGroup& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    
    inline LogGroup& WithLogGroupName(Aws::String&& value) { SetLogGroupName(value); return *this;}

    
    inline LogGroup& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    
    inline long long GetCreationTime() const{ return m_creationTime; }

    
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    
    inline LogGroup& WithCreationTime(long long value) { SetCreationTime(value); return *this;}

    
    inline long GetRetentionInDays() const{ return m_retentionInDays; }

    
    inline void SetRetentionInDays(long value) { m_retentionInDaysHasBeenSet = true; m_retentionInDays = value; }

    
    inline LogGroup& WithRetentionInDays(long value) { SetRetentionInDays(value); return *this;}

    
    inline long GetMetricFilterCount() const{ return m_metricFilterCount; }

    
    inline void SetMetricFilterCount(long value) { m_metricFilterCountHasBeenSet = true; m_metricFilterCount = value; }

    
    inline LogGroup& WithMetricFilterCount(long value) { SetMetricFilterCount(value); return *this;}

    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    
    inline LogGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline LogGroup& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    
    inline LogGroup& WithArn(const char* value) { SetArn(value); return *this;}

    
    inline long long GetStoredBytes() const{ return m_storedBytes; }

    
    inline void SetStoredBytes(long long value) { m_storedBytesHasBeenSet = true; m_storedBytes = value; }

    
    inline LogGroup& WithStoredBytes(long long value) { SetStoredBytes(value); return *this;}

  private:
    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
    long long m_creationTime;
    bool m_creationTimeHasBeenSet;
    long m_retentionInDays;
    bool m_retentionInDaysHasBeenSet;
    long m_metricFilterCount;
    bool m_metricFilterCountHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    long long m_storedBytes;
    bool m_storedBytesHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
