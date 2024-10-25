/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateExportTaskRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API CreateExportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExportTask"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the export task.</p>
     */
    inline const Aws::String& GetTaskName() const{ return m_taskName; }
    inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
    inline void SetTaskName(const Aws::String& value) { m_taskNameHasBeenSet = true; m_taskName = value; }
    inline void SetTaskName(Aws::String&& value) { m_taskNameHasBeenSet = true; m_taskName = std::move(value); }
    inline void SetTaskName(const char* value) { m_taskNameHasBeenSet = true; m_taskName.assign(value); }
    inline CreateExportTaskRequest& WithTaskName(const Aws::String& value) { SetTaskName(value); return *this;}
    inline CreateExportTaskRequest& WithTaskName(Aws::String&& value) { SetTaskName(std::move(value)); return *this;}
    inline CreateExportTaskRequest& WithTaskName(const char* value) { SetTaskName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }
    inline CreateExportTaskRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}
    inline CreateExportTaskRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}
    inline CreateExportTaskRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export only log streams that match the provided prefix. If you don't specify
     * a value, no prefix filter is applied.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const{ return m_logStreamNamePrefix; }
    inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }
    inline void SetLogStreamNamePrefix(const Aws::String& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = value; }
    inline void SetLogStreamNamePrefix(Aws::String&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = std::move(value); }
    inline void SetLogStreamNamePrefix(const char* value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix.assign(value); }
    inline CreateExportTaskRequest& WithLogStreamNamePrefix(const Aws::String& value) { SetLogStreamNamePrefix(value); return *this;}
    inline CreateExportTaskRequest& WithLogStreamNamePrefix(Aws::String&& value) { SetLogStreamNamePrefix(std::move(value)); return *this;}
    inline CreateExportTaskRequest& WithLogStreamNamePrefix(const char* value) { SetLogStreamNamePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the range for the request, expressed as the number of
     * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>. Events with a
     * timestamp earlier than this time are not exported.</p>
     */
    inline long long GetFrom() const{ return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    inline void SetFrom(long long value) { m_fromHasBeenSet = true; m_from = value; }
    inline CreateExportTaskRequest& WithFrom(long long value) { SetFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the range for the request, expressed as the number of
     * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>. Events with a
     * timestamp later than this time are not exported.</p> <p>You must specify a time
     * that is not earlier than when this log group was created.</p>
     */
    inline long long GetTo() const{ return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    inline void SetTo(long long value) { m_toHasBeenSet = true; m_to = value; }
    inline CreateExportTaskRequest& WithTo(long long value) { SetTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of S3 bucket for the exported log data. The bucket must be in the
     * same Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline CreateExportTaskRequest& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline CreateExportTaskRequest& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline CreateExportTaskRequest& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix used as the start of the key for every object exported. If you
     * don't specify a value, the default is <code>exportedlogs</code>.</p> <p>The
     * length of this parameter must comply with the S3 object key name length limits.
     * The object key name is a sequence of Unicode characters with UTF-8 encoding, and
     * can be up to 1,024 bytes.</p>
     */
    inline const Aws::String& GetDestinationPrefix() const{ return m_destinationPrefix; }
    inline bool DestinationPrefixHasBeenSet() const { return m_destinationPrefixHasBeenSet; }
    inline void SetDestinationPrefix(const Aws::String& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = value; }
    inline void SetDestinationPrefix(Aws::String&& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = std::move(value); }
    inline void SetDestinationPrefix(const char* value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix.assign(value); }
    inline CreateExportTaskRequest& WithDestinationPrefix(const Aws::String& value) { SetDestinationPrefix(value); return *this;}
    inline CreateExportTaskRequest& WithDestinationPrefix(Aws::String&& value) { SetDestinationPrefix(std::move(value)); return *this;}
    inline CreateExportTaskRequest& WithDestinationPrefix(const char* value) { SetDestinationPrefix(value); return *this;}
    ///@}
  private:

    Aws::String m_taskName;
    bool m_taskNameHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_logStreamNamePrefix;
    bool m_logStreamNamePrefixHasBeenSet = false;

    long long m_from;
    bool m_fromHasBeenSet = false;

    long long m_to;
    bool m_toHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationPrefix;
    bool m_destinationPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
