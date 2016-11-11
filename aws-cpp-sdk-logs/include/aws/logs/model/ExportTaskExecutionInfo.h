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
   * <p>Represents the status of an export task.</p>
   */
  class AWS_CLOUDWATCHLOGS_API ExportTaskExecutionInfo
  {
  public:
    ExportTaskExecutionInfo();
    ExportTaskExecutionInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    ExportTaskExecutionInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The creation time of the export task.</p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the export task.</p>
     */
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the export task.</p>
     */
    inline ExportTaskExecutionInfo& WithCreationTime(long long value) { SetCreationTime(value); return *this;}

    /**
     * <p>The completion time of the export task.</p>
     */
    inline long long GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>The completion time of the export task.</p>
     */
    inline void SetCompletionTime(long long value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>The completion time of the export task.</p>
     */
    inline ExportTaskExecutionInfo& WithCompletionTime(long long value) { SetCompletionTime(value); return *this;}

  private:
    long long m_creationTime;
    bool m_creationTimeHasBeenSet;
    long long m_completionTime;
    bool m_completionTimeHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
