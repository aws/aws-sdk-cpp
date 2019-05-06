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
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API CreateExportTaskRequest : public CloudWatchLogsRequest
  {
  public:
    CreateExportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExportTask"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the export task.</p>
     */
    inline const Aws::String& GetTaskName() const{ return m_taskName; }

    /**
     * <p>The name of the export task.</p>
     */
    inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }

    /**
     * <p>The name of the export task.</p>
     */
    inline void SetTaskName(const Aws::String& value) { m_taskNameHasBeenSet = true; m_taskName = value; }

    /**
     * <p>The name of the export task.</p>
     */
    inline void SetTaskName(Aws::String&& value) { m_taskNameHasBeenSet = true; m_taskName = std::move(value); }

    /**
     * <p>The name of the export task.</p>
     */
    inline void SetTaskName(const char* value) { m_taskNameHasBeenSet = true; m_taskName.assign(value); }

    /**
     * <p>The name of the export task.</p>
     */
    inline CreateExportTaskRequest& WithTaskName(const Aws::String& value) { SetTaskName(value); return *this;}

    /**
     * <p>The name of the export task.</p>
     */
    inline CreateExportTaskRequest& WithTaskName(Aws::String&& value) { SetTaskName(std::move(value)); return *this;}

    /**
     * <p>The name of the export task.</p>
     */
    inline CreateExportTaskRequest& WithTaskName(const char* value) { SetTaskName(value); return *this;}


    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline CreateExportTaskRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline CreateExportTaskRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline CreateExportTaskRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>Export only log streams that match the provided prefix. If you don't specify
     * a value, no prefix filter is applied.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const{ return m_logStreamNamePrefix; }

    /**
     * <p>Export only log streams that match the provided prefix. If you don't specify
     * a value, no prefix filter is applied.</p>
     */
    inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }

    /**
     * <p>Export only log streams that match the provided prefix. If you don't specify
     * a value, no prefix filter is applied.</p>
     */
    inline void SetLogStreamNamePrefix(const Aws::String& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = value; }

    /**
     * <p>Export only log streams that match the provided prefix. If you don't specify
     * a value, no prefix filter is applied.</p>
     */
    inline void SetLogStreamNamePrefix(Aws::String&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = std::move(value); }

    /**
     * <p>Export only log streams that match the provided prefix. If you don't specify
     * a value, no prefix filter is applied.</p>
     */
    inline void SetLogStreamNamePrefix(const char* value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix.assign(value); }

    /**
     * <p>Export only log streams that match the provided prefix. If you don't specify
     * a value, no prefix filter is applied.</p>
     */
    inline CreateExportTaskRequest& WithLogStreamNamePrefix(const Aws::String& value) { SetLogStreamNamePrefix(value); return *this;}

    /**
     * <p>Export only log streams that match the provided prefix. If you don't specify
     * a value, no prefix filter is applied.</p>
     */
    inline CreateExportTaskRequest& WithLogStreamNamePrefix(Aws::String&& value) { SetLogStreamNamePrefix(std::move(value)); return *this;}

    /**
     * <p>Export only log streams that match the provided prefix. If you don't specify
     * a value, no prefix filter is applied.</p>
     */
    inline CreateExportTaskRequest& WithLogStreamNamePrefix(const char* value) { SetLogStreamNamePrefix(value); return *this;}


    /**
     * <p>The start time of the range for the request, expressed as the number of
     * milliseconds after Jan 1, 1970 00:00:00 UTC. Events with a timestamp earlier
     * than this time are not exported.</p>
     */
    inline long long GetFrom() const{ return m_from; }

    /**
     * <p>The start time of the range for the request, expressed as the number of
     * milliseconds after Jan 1, 1970 00:00:00 UTC. Events with a timestamp earlier
     * than this time are not exported.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The start time of the range for the request, expressed as the number of
     * milliseconds after Jan 1, 1970 00:00:00 UTC. Events with a timestamp earlier
     * than this time are not exported.</p>
     */
    inline void SetFrom(long long value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The start time of the range for the request, expressed as the number of
     * milliseconds after Jan 1, 1970 00:00:00 UTC. Events with a timestamp earlier
     * than this time are not exported.</p>
     */
    inline CreateExportTaskRequest& WithFrom(long long value) { SetFrom(value); return *this;}


    /**
     * <p>The end time of the range for the request, expressed as the number of
     * milliseconds after Jan 1, 1970 00:00:00 UTC. Events with a timestamp later than
     * this time are not exported.</p>
     */
    inline long long GetTo() const{ return m_to; }

    /**
     * <p>The end time of the range for the request, expressed as the number of
     * milliseconds after Jan 1, 1970 00:00:00 UTC. Events with a timestamp later than
     * this time are not exported.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The end time of the range for the request, expressed as the number of
     * milliseconds after Jan 1, 1970 00:00:00 UTC. Events with a timestamp later than
     * this time are not exported.</p>
     */
    inline void SetTo(long long value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The end time of the range for the request, expressed as the number of
     * milliseconds after Jan 1, 1970 00:00:00 UTC. Events with a timestamp later than
     * this time are not exported.</p>
     */
    inline CreateExportTaskRequest& WithTo(long long value) { SetTo(value); return *this;}


    /**
     * <p>The name of S3 bucket for the exported log data. The bucket must be in the
     * same AWS region.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The name of S3 bucket for the exported log data. The bucket must be in the
     * same AWS region.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The name of S3 bucket for the exported log data. The bucket must be in the
     * same AWS region.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The name of S3 bucket for the exported log data. The bucket must be in the
     * same AWS region.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The name of S3 bucket for the exported log data. The bucket must be in the
     * same AWS region.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The name of S3 bucket for the exported log data. The bucket must be in the
     * same AWS region.</p>
     */
    inline CreateExportTaskRequest& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The name of S3 bucket for the exported log data. The bucket must be in the
     * same AWS region.</p>
     */
    inline CreateExportTaskRequest& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The name of S3 bucket for the exported log data. The bucket must be in the
     * same AWS region.</p>
     */
    inline CreateExportTaskRequest& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The prefix used as the start of the key for every object exported. If you
     * don't specify a value, the default is <code>exportedlogs</code>.</p>
     */
    inline const Aws::String& GetDestinationPrefix() const{ return m_destinationPrefix; }

    /**
     * <p>The prefix used as the start of the key for every object exported. If you
     * don't specify a value, the default is <code>exportedlogs</code>.</p>
     */
    inline bool DestinationPrefixHasBeenSet() const { return m_destinationPrefixHasBeenSet; }

    /**
     * <p>The prefix used as the start of the key for every object exported. If you
     * don't specify a value, the default is <code>exportedlogs</code>.</p>
     */
    inline void SetDestinationPrefix(const Aws::String& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = value; }

    /**
     * <p>The prefix used as the start of the key for every object exported. If you
     * don't specify a value, the default is <code>exportedlogs</code>.</p>
     */
    inline void SetDestinationPrefix(Aws::String&& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = std::move(value); }

    /**
     * <p>The prefix used as the start of the key for every object exported. If you
     * don't specify a value, the default is <code>exportedlogs</code>.</p>
     */
    inline void SetDestinationPrefix(const char* value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix.assign(value); }

    /**
     * <p>The prefix used as the start of the key for every object exported. If you
     * don't specify a value, the default is <code>exportedlogs</code>.</p>
     */
    inline CreateExportTaskRequest& WithDestinationPrefix(const Aws::String& value) { SetDestinationPrefix(value); return *this;}

    /**
     * <p>The prefix used as the start of the key for every object exported. If you
     * don't specify a value, the default is <code>exportedlogs</code>.</p>
     */
    inline CreateExportTaskRequest& WithDestinationPrefix(Aws::String&& value) { SetDestinationPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix used as the start of the key for every object exported. If you
     * don't specify a value, the default is <code>exportedlogs</code>.</p>
     */
    inline CreateExportTaskRequest& WithDestinationPrefix(const char* value) { SetDestinationPrefix(value); return *this;}

  private:

    Aws::String m_taskName;
    bool m_taskNameHasBeenSet;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    Aws::String m_logStreamNamePrefix;
    bool m_logStreamNamePrefixHasBeenSet;

    long long m_from;
    bool m_fromHasBeenSet;

    long long m_to;
    bool m_toHasBeenSet;

    Aws::String m_destination;
    bool m_destinationHasBeenSet;

    Aws::String m_destinationPrefix;
    bool m_destinationPrefixHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
