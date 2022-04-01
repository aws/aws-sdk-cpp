﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Represents the status of an export task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ExportTaskExecutionInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHLOGS_API ExportTaskExecutionInfo
  {
  public:
    ExportTaskExecutionInfo();
    ExportTaskExecutionInfo(Aws::Utils::Json::JsonView jsonValue);
    ExportTaskExecutionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The creation time of the export task, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the export task, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time of the export task, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the export task, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline ExportTaskExecutionInfo& WithCreationTime(long long value) { SetCreationTime(value); return *this;}


    /**
     * <p>The completion time of the export task, expressed as the number of
     * milliseconds after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>The completion time of the export task, expressed as the number of
     * milliseconds after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>The completion time of the export task, expressed as the number of
     * milliseconds after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetCompletionTime(long long value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>The completion time of the export task, expressed as the number of
     * milliseconds after Jan 1, 1970 00:00:00 UTC.</p>
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
