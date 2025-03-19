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
    AWS_CLOUDWATCHLOGS_API CreateExportTaskRequest() = default;

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
    inline const Aws::String& GetTaskName() const { return m_taskName; }
    inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
    template<typename TaskNameT = Aws::String>
    void SetTaskName(TaskNameT&& value) { m_taskNameHasBeenSet = true; m_taskName = std::forward<TaskNameT>(value); }
    template<typename TaskNameT = Aws::String>
    CreateExportTaskRequest& WithTaskName(TaskNameT&& value) { SetTaskName(std::forward<TaskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    CreateExportTaskRequest& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export only log streams that match the provided prefix. If you don't specify
     * a value, no prefix filter is applied.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const { return m_logStreamNamePrefix; }
    inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }
    template<typename LogStreamNamePrefixT = Aws::String>
    void SetLogStreamNamePrefix(LogStreamNamePrefixT&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = std::forward<LogStreamNamePrefixT>(value); }
    template<typename LogStreamNamePrefixT = Aws::String>
    CreateExportTaskRequest& WithLogStreamNamePrefix(LogStreamNamePrefixT&& value) { SetLogStreamNamePrefix(std::forward<LogStreamNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the range for the request, expressed as the number of
     * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>. Events with a
     * timestamp earlier than this time are not exported.</p>
     */
    inline long long GetFrom() const { return m_from; }
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
    inline long long GetTo() const { return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    inline void SetTo(long long value) { m_toHasBeenSet = true; m_to = value; }
    inline CreateExportTaskRequest& WithTo(long long value) { SetTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of S3 bucket for the exported log data. The bucket must be in the
     * same Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    CreateExportTaskRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix used as the start of the key for every object exported. If you
     * don't specify a value, the default is <code>exportedlogs</code>.</p> <p>The
     * length of this parameter must comply with the S3 object key name length limits.
     * The object key name is a sequence of Unicode characters with UTF-8 encoding, and
     * can be up to 1,024 bytes.</p>
     */
    inline const Aws::String& GetDestinationPrefix() const { return m_destinationPrefix; }
    inline bool DestinationPrefixHasBeenSet() const { return m_destinationPrefixHasBeenSet; }
    template<typename DestinationPrefixT = Aws::String>
    void SetDestinationPrefix(DestinationPrefixT&& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = std::forward<DestinationPrefixT>(value); }
    template<typename DestinationPrefixT = Aws::String>
    CreateExportTaskRequest& WithDestinationPrefix(DestinationPrefixT&& value) { SetDestinationPrefix(std::forward<DestinationPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskName;
    bool m_taskNameHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_logStreamNamePrefix;
    bool m_logStreamNamePrefixHasBeenSet = false;

    long long m_from{0};
    bool m_fromHasBeenSet = false;

    long long m_to{0};
    bool m_toHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationPrefix;
    bool m_destinationPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
