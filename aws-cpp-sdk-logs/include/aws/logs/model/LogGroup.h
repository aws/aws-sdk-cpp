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
   * <p>Represents a log group.</p>
   */
  class AWS_CLOUDWATCHLOGS_API LogGroup
  {
  public:
    LogGroup();
    LogGroup(const Aws::Utils::Json::JsonValue& jsonValue);
    LogGroup& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline LogGroup& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline LogGroup& WithLogGroupName(Aws::String&& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline LogGroup& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The creation time of the log group.</p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the log group.</p>
     */
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the log group.</p>
     */
    inline LogGroup& WithCreationTime(long long value) { SetCreationTime(value); return *this;}

    
    inline int GetRetentionInDays() const{ return m_retentionInDays; }

    
    inline void SetRetentionInDays(int value) { m_retentionInDaysHasBeenSet = true; m_retentionInDays = value; }

    
    inline LogGroup& WithRetentionInDays(int value) { SetRetentionInDays(value); return *this;}

    /**
     * <p>The number of metric filters.</p>
     */
    inline int GetMetricFilterCount() const{ return m_metricFilterCount; }

    /**
     * <p>The number of metric filters.</p>
     */
    inline void SetMetricFilterCount(int value) { m_metricFilterCountHasBeenSet = true; m_metricFilterCount = value; }

    /**
     * <p>The number of metric filters.</p>
     */
    inline LogGroup& WithMetricFilterCount(int value) { SetMetricFilterCount(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the log group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the log group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the log group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the log group.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the log group.</p>
     */
    inline LogGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the log group.</p>
     */
    inline LogGroup& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the log group.</p>
     */
    inline LogGroup& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The number of bytes stored.</p>
     */
    inline long long GetStoredBytes() const{ return m_storedBytes; }

    /**
     * <p>The number of bytes stored.</p>
     */
    inline void SetStoredBytes(long long value) { m_storedBytesHasBeenSet = true; m_storedBytes = value; }

    /**
     * <p>The number of bytes stored.</p>
     */
    inline LogGroup& WithStoredBytes(long long value) { SetStoredBytes(value); return *this;}

  private:
    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
    long long m_creationTime;
    bool m_creationTimeHasBeenSet;
    int m_retentionInDays;
    bool m_retentionInDaysHasBeenSet;
    int m_metricFilterCount;
    bool m_metricFilterCountHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    long long m_storedBytes;
    bool m_storedBytesHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
