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
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/TaskStatus.h>
#include <aws/datasync/model/Options.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/FilterRule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{
  /**
   * <p>DescribeTaskResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTaskResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API DescribeTaskResult
  {
  public:
    DescribeTaskResult();
    DescribeTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline DescribeTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline DescribeTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline DescribeTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The status of the task that was described.</p> <p>For detailed information
     * about task execution statuses, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-tasks.html#understand-task-creation-statuses"
     * (Understanding Task Statuses).</p>
     */
    inline const TaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task that was described.</p> <p>For detailed information
     * about task execution statuses, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-tasks.html#understand-task-creation-statuses"
     * (Understanding Task Statuses).</p>
     */
    inline void SetStatus(const TaskStatus& value) { m_status = value; }

    /**
     * <p>The status of the task that was described.</p> <p>For detailed information
     * about task execution statuses, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-tasks.html#understand-task-creation-statuses"
     * (Understanding Task Statuses).</p>
     */
    inline void SetStatus(TaskStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the task that was described.</p> <p>For detailed information
     * about task execution statuses, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-tasks.html#understand-task-creation-statuses"
     * (Understanding Task Statuses).</p>
     */
    inline DescribeTaskResult& WithStatus(const TaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task that was described.</p> <p>For detailed information
     * about task execution statuses, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-tasks.html#understand-task-creation-statuses"
     * (Understanding Task Statuses).</p>
     */
    inline DescribeTaskResult& WithStatus(TaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the task that was described.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the task that was described.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the task that was described.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the task that was described.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the task that was described.</p>
     */
    inline DescribeTaskResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the task that was described.</p>
     */
    inline DescribeTaskResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the task that was described.</p>
     */
    inline DescribeTaskResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is syncing
     * files.</p>
     */
    inline const Aws::String& GetCurrentTaskExecutionArn() const{ return m_currentTaskExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is syncing
     * files.</p>
     */
    inline void SetCurrentTaskExecutionArn(const Aws::String& value) { m_currentTaskExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is syncing
     * files.</p>
     */
    inline void SetCurrentTaskExecutionArn(Aws::String&& value) { m_currentTaskExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is syncing
     * files.</p>
     */
    inline void SetCurrentTaskExecutionArn(const char* value) { m_currentTaskExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is syncing
     * files.</p>
     */
    inline DescribeTaskResult& WithCurrentTaskExecutionArn(const Aws::String& value) { SetCurrentTaskExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is syncing
     * files.</p>
     */
    inline DescribeTaskResult& WithCurrentTaskExecutionArn(Aws::String&& value) { SetCurrentTaskExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is syncing
     * files.</p>
     */
    inline DescribeTaskResult& WithCurrentTaskExecutionArn(const char* value) { SetCurrentTaskExecutionArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline const Aws::String& GetSourceLocationArn() const{ return m_sourceLocationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline void SetSourceLocationArn(const Aws::String& value) { m_sourceLocationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline void SetSourceLocationArn(Aws::String&& value) { m_sourceLocationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline void SetSourceLocationArn(const char* value) { m_sourceLocationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline DescribeTaskResult& WithSourceLocationArn(const Aws::String& value) { SetSourceLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline DescribeTaskResult& WithSourceLocationArn(Aws::String&& value) { SetSourceLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline DescribeTaskResult& WithSourceLocationArn(const char* value) { SetSourceLocationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS storage resource's location.</p>
     */
    inline const Aws::String& GetDestinationLocationArn() const{ return m_destinationLocationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS storage resource's location.</p>
     */
    inline void SetDestinationLocationArn(const Aws::String& value) { m_destinationLocationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS storage resource's location.</p>
     */
    inline void SetDestinationLocationArn(Aws::String&& value) { m_destinationLocationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS storage resource's location.</p>
     */
    inline void SetDestinationLocationArn(const char* value) { m_destinationLocationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS storage resource's location.</p>
     */
    inline DescribeTaskResult& WithDestinationLocationArn(const Aws::String& value) { SetDestinationLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS storage resource's location.</p>
     */
    inline DescribeTaskResult& WithDestinationLocationArn(Aws::String&& value) { SetDestinationLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS storage resource's location.</p>
     */
    inline DescribeTaskResult& WithDestinationLocationArn(const char* value) { SetDestinationLocationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see
     * "https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html"
     * (Working with Log Groups and Log Streams) in the <i>Amazon CloudWatch
     * UserGuide</i>.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see
     * "https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html"
     * (Working with Log Groups and Log Streams) in the <i>Amazon CloudWatch
     * UserGuide</i>.</p>
     */
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see
     * "https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html"
     * (Working with Log Groups and Log Streams) in the <i>Amazon CloudWatch
     * UserGuide</i>.</p>
     */
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see
     * "https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html"
     * (Working with Log Groups and Log Streams) in the <i>Amazon CloudWatch
     * UserGuide</i>.</p>
     */
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see
     * "https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html"
     * (Working with Log Groups and Log Streams) in the <i>Amazon CloudWatch
     * UserGuide</i>.</p>
     */
    inline DescribeTaskResult& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see
     * "https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html"
     * (Working with Log Groups and Log Streams) in the <i>Amazon CloudWatch
     * UserGuide</i>.</p>
     */
    inline DescribeTaskResult& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see
     * "https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html"
     * (Working with Log Groups and Log Streams) in the <i>Amazon CloudWatch
     * UserGuide</i>.</p>
     */
    inline DescribeTaskResult& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}


    /**
     * <p>The set of configuration options that control the behavior of a single
     * execution of the task that occurs when you call <code>StartTaskExecution</code>.
     * You can configure these options to preserve metadata such as user ID (UID) and
     * group (GID), file permissions, data integrity verification, and so on.</p>
     * <p>For each individual task execution, you can override these options by
     * specifying the overriding <code>OverrideOptions</code> value to operation. </p>
     */
    inline const Options& GetOptions() const{ return m_options; }

    /**
     * <p>The set of configuration options that control the behavior of a single
     * execution of the task that occurs when you call <code>StartTaskExecution</code>.
     * You can configure these options to preserve metadata such as user ID (UID) and
     * group (GID), file permissions, data integrity verification, and so on.</p>
     * <p>For each individual task execution, you can override these options by
     * specifying the overriding <code>OverrideOptions</code> value to operation. </p>
     */
    inline void SetOptions(const Options& value) { m_options = value; }

    /**
     * <p>The set of configuration options that control the behavior of a single
     * execution of the task that occurs when you call <code>StartTaskExecution</code>.
     * You can configure these options to preserve metadata such as user ID (UID) and
     * group (GID), file permissions, data integrity verification, and so on.</p>
     * <p>For each individual task execution, you can override these options by
     * specifying the overriding <code>OverrideOptions</code> value to operation. </p>
     */
    inline void SetOptions(Options&& value) { m_options = std::move(value); }

    /**
     * <p>The set of configuration options that control the behavior of a single
     * execution of the task that occurs when you call <code>StartTaskExecution</code>.
     * You can configure these options to preserve metadata such as user ID (UID) and
     * group (GID), file permissions, data integrity verification, and so on.</p>
     * <p>For each individual task execution, you can override these options by
     * specifying the overriding <code>OverrideOptions</code> value to operation. </p>
     */
    inline DescribeTaskResult& WithOptions(const Options& value) { SetOptions(value); return *this;}

    /**
     * <p>The set of configuration options that control the behavior of a single
     * execution of the task that occurs when you call <code>StartTaskExecution</code>.
     * You can configure these options to preserve metadata such as user ID (UID) and
     * group (GID), file permissions, data integrity verification, and so on.</p>
     * <p>For each individual task execution, you can override these options by
     * specifying the overriding <code>OverrideOptions</code> value to operation. </p>
     */
    inline DescribeTaskResult& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p/> <p>Specifies that the task excludes files in the transfer based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const{ return m_excludes; }

    /**
     * <p/> <p>Specifies that the task excludes files in the transfer based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline void SetExcludes(const Aws::Vector<FilterRule>& value) { m_excludes = value; }

    /**
     * <p/> <p>Specifies that the task excludes files in the transfer based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline void SetExcludes(Aws::Vector<FilterRule>&& value) { m_excludes = std::move(value); }

    /**
     * <p/> <p>Specifies that the task excludes files in the transfer based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline DescribeTaskResult& WithExcludes(const Aws::Vector<FilterRule>& value) { SetExcludes(value); return *this;}

    /**
     * <p/> <p>Specifies that the task excludes files in the transfer based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline DescribeTaskResult& WithExcludes(Aws::Vector<FilterRule>&& value) { SetExcludes(std::move(value)); return *this;}

    /**
     * <p/> <p>Specifies that the task excludes files in the transfer based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline DescribeTaskResult& AddExcludes(const FilterRule& value) { m_excludes.push_back(value); return *this; }

    /**
     * <p/> <p>Specifies that the task excludes files in the transfer based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline DescribeTaskResult& AddExcludes(FilterRule&& value) { m_excludes.push_back(std::move(value)); return *this; }


    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCode = value; }

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCode = std::move(value); }

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCode.assign(value); }

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline DescribeTaskResult& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline DescribeTaskResult& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline DescribeTaskResult& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline const Aws::String& GetErrorDetail() const{ return m_errorDetail; }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline void SetErrorDetail(const Aws::String& value) { m_errorDetail = value; }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline void SetErrorDetail(Aws::String&& value) { m_errorDetail = std::move(value); }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline void SetErrorDetail(const char* value) { m_errorDetail.assign(value); }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline DescribeTaskResult& WithErrorDetail(const Aws::String& value) { SetErrorDetail(value); return *this;}

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline DescribeTaskResult& WithErrorDetail(Aws::String&& value) { SetErrorDetail(std::move(value)); return *this;}

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline DescribeTaskResult& WithErrorDetail(const char* value) { SetErrorDetail(value); return *this;}


    /**
     * <p>The time that the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the task was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the task was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the task was created.</p>
     */
    inline DescribeTaskResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the task was created.</p>
     */
    inline DescribeTaskResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_taskArn;

    TaskStatus m_status;

    Aws::String m_name;

    Aws::String m_currentTaskExecutionArn;

    Aws::String m_sourceLocationArn;

    Aws::String m_destinationLocationArn;

    Aws::String m_cloudWatchLogGroupArn;

    Options m_options;

    Aws::Vector<FilterRule> m_excludes;

    Aws::String m_errorCode;

    Aws::String m_errorDetail;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
