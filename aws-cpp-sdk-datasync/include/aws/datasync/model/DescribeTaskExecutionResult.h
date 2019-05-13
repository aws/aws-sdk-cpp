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
#include <aws/datasync/model/TaskExecutionStatus.h>
#include <aws/datasync/model/Options.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/TaskExecutionResultDetail.h>
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
   * <p>DescribeTaskExecutionResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTaskExecutionResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API DescribeTaskExecutionResult
  {
  public:
    DescribeTaskExecutionResult();
    DescribeTaskExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTaskExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that was described.
     * <code>TaskExecutionArn</code> is hierarchical and includes <code>TaskArn</code>
     * for the task that was executed. </p> <p>For example, a
     * <code>TaskExecution</code> value with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2/execution/exec-08ef1e88ec491019b</code>
     * executed the task with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2</code>.
     * </p>
     */
    inline const Aws::String& GetTaskExecutionArn() const{ return m_taskExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that was described.
     * <code>TaskExecutionArn</code> is hierarchical and includes <code>TaskArn</code>
     * for the task that was executed. </p> <p>For example, a
     * <code>TaskExecution</code> value with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2/execution/exec-08ef1e88ec491019b</code>
     * executed the task with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2</code>.
     * </p>
     */
    inline void SetTaskExecutionArn(const Aws::String& value) { m_taskExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that was described.
     * <code>TaskExecutionArn</code> is hierarchical and includes <code>TaskArn</code>
     * for the task that was executed. </p> <p>For example, a
     * <code>TaskExecution</code> value with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2/execution/exec-08ef1e88ec491019b</code>
     * executed the task with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2</code>.
     * </p>
     */
    inline void SetTaskExecutionArn(Aws::String&& value) { m_taskExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that was described.
     * <code>TaskExecutionArn</code> is hierarchical and includes <code>TaskArn</code>
     * for the task that was executed. </p> <p>For example, a
     * <code>TaskExecution</code> value with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2/execution/exec-08ef1e88ec491019b</code>
     * executed the task with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2</code>.
     * </p>
     */
    inline void SetTaskExecutionArn(const char* value) { m_taskExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that was described.
     * <code>TaskExecutionArn</code> is hierarchical and includes <code>TaskArn</code>
     * for the task that was executed. </p> <p>For example, a
     * <code>TaskExecution</code> value with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2/execution/exec-08ef1e88ec491019b</code>
     * executed the task with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2</code>.
     * </p>
     */
    inline DescribeTaskExecutionResult& WithTaskExecutionArn(const Aws::String& value) { SetTaskExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that was described.
     * <code>TaskExecutionArn</code> is hierarchical and includes <code>TaskArn</code>
     * for the task that was executed. </p> <p>For example, a
     * <code>TaskExecution</code> value with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2/execution/exec-08ef1e88ec491019b</code>
     * executed the task with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2</code>.
     * </p>
     */
    inline DescribeTaskExecutionResult& WithTaskExecutionArn(Aws::String&& value) { SetTaskExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that was described.
     * <code>TaskExecutionArn</code> is hierarchical and includes <code>TaskArn</code>
     * for the task that was executed. </p> <p>For example, a
     * <code>TaskExecution</code> value with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2/execution/exec-08ef1e88ec491019b</code>
     * executed the task with the ARN
     * <code>arn:aws:datasync:us-east-1:111222333444:task/task-0208075f79cedf4a2</code>.
     * </p>
     */
    inline DescribeTaskExecutionResult& WithTaskExecutionArn(const char* value) { SetTaskExecutionArn(value); return *this;}


    /**
     * <p>The status of the task execution. </p> <p>For detailed information about task
     * execution statuses, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-tasks.html#understand-task-creation-statuses"
     * (Understanding Task Statuses).</p>
     */
    inline const TaskExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task execution. </p> <p>For detailed information about task
     * execution statuses, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-tasks.html#understand-task-creation-statuses"
     * (Understanding Task Statuses).</p>
     */
    inline void SetStatus(const TaskExecutionStatus& value) { m_status = value; }

    /**
     * <p>The status of the task execution. </p> <p>For detailed information about task
     * execution statuses, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-tasks.html#understand-task-creation-statuses"
     * (Understanding Task Statuses).</p>
     */
    inline void SetStatus(TaskExecutionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the task execution. </p> <p>For detailed information about task
     * execution statuses, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-tasks.html#understand-task-creation-statuses"
     * (Understanding Task Statuses).</p>
     */
    inline DescribeTaskExecutionResult& WithStatus(const TaskExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task execution. </p> <p>For detailed information about task
     * execution statuses, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-tasks.html#understand-task-creation-statuses"
     * (Understanding Task Statuses).</p>
     */
    inline DescribeTaskExecutionResult& WithStatus(TaskExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Options& GetOptions() const{ return m_options; }

    
    inline void SetOptions(const Options& value) { m_options = value; }

    
    inline void SetOptions(Options&& value) { m_options = std::move(value); }

    
    inline DescribeTaskExecutionResult& WithOptions(const Options& value) { SetOptions(value); return *this;}

    
    inline DescribeTaskExecutionResult& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p/> <p>Specifies that the task execution excludes files from the transfer based
     * on the specified pattern in the filter. Transfers all files in the task’s
     * subdirectory, except files that match the filter that is set. </p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const{ return m_excludes; }

    /**
     * <p/> <p>Specifies that the task execution excludes files from the transfer based
     * on the specified pattern in the filter. Transfers all files in the task’s
     * subdirectory, except files that match the filter that is set. </p>
     */
    inline void SetExcludes(const Aws::Vector<FilterRule>& value) { m_excludes = value; }

    /**
     * <p/> <p>Specifies that the task execution excludes files from the transfer based
     * on the specified pattern in the filter. Transfers all files in the task’s
     * subdirectory, except files that match the filter that is set. </p>
     */
    inline void SetExcludes(Aws::Vector<FilterRule>&& value) { m_excludes = std::move(value); }

    /**
     * <p/> <p>Specifies that the task execution excludes files from the transfer based
     * on the specified pattern in the filter. Transfers all files in the task’s
     * subdirectory, except files that match the filter that is set. </p>
     */
    inline DescribeTaskExecutionResult& WithExcludes(const Aws::Vector<FilterRule>& value) { SetExcludes(value); return *this;}

    /**
     * <p/> <p>Specifies that the task execution excludes files from the transfer based
     * on the specified pattern in the filter. Transfers all files in the task’s
     * subdirectory, except files that match the filter that is set. </p>
     */
    inline DescribeTaskExecutionResult& WithExcludes(Aws::Vector<FilterRule>&& value) { SetExcludes(std::move(value)); return *this;}

    /**
     * <p/> <p>Specifies that the task execution excludes files from the transfer based
     * on the specified pattern in the filter. Transfers all files in the task’s
     * subdirectory, except files that match the filter that is set. </p>
     */
    inline DescribeTaskExecutionResult& AddExcludes(const FilterRule& value) { m_excludes.push_back(value); return *this; }

    /**
     * <p/> <p>Specifies that the task execution excludes files from the transfer based
     * on the specified pattern in the filter. Transfers all files in the task’s
     * subdirectory, except files that match the filter that is set. </p>
     */
    inline DescribeTaskExecutionResult& AddExcludes(FilterRule&& value) { m_excludes.push_back(std::move(value)); return *this; }


    /**
     * <p/> <p>Specifies that the task execution excludes files in the transfer based
     * on the specified pattern in the filter. When multiple include filters are set,
     * they are interpreted as an OR. </p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const{ return m_includes; }

    /**
     * <p/> <p>Specifies that the task execution excludes files in the transfer based
     * on the specified pattern in the filter. When multiple include filters are set,
     * they are interpreted as an OR. </p>
     */
    inline void SetIncludes(const Aws::Vector<FilterRule>& value) { m_includes = value; }

    /**
     * <p/> <p>Specifies that the task execution excludes files in the transfer based
     * on the specified pattern in the filter. When multiple include filters are set,
     * they are interpreted as an OR. </p>
     */
    inline void SetIncludes(Aws::Vector<FilterRule>&& value) { m_includes = std::move(value); }

    /**
     * <p/> <p>Specifies that the task execution excludes files in the transfer based
     * on the specified pattern in the filter. When multiple include filters are set,
     * they are interpreted as an OR. </p>
     */
    inline DescribeTaskExecutionResult& WithIncludes(const Aws::Vector<FilterRule>& value) { SetIncludes(value); return *this;}

    /**
     * <p/> <p>Specifies that the task execution excludes files in the transfer based
     * on the specified pattern in the filter. When multiple include filters are set,
     * they are interpreted as an OR. </p>
     */
    inline DescribeTaskExecutionResult& WithIncludes(Aws::Vector<FilterRule>&& value) { SetIncludes(std::move(value)); return *this;}

    /**
     * <p/> <p>Specifies that the task execution excludes files in the transfer based
     * on the specified pattern in the filter. When multiple include filters are set,
     * they are interpreted as an OR. </p>
     */
    inline DescribeTaskExecutionResult& AddIncludes(const FilterRule& value) { m_includes.push_back(value); return *this; }

    /**
     * <p/> <p>Specifies that the task execution excludes files in the transfer based
     * on the specified pattern in the filter. When multiple include filters are set,
     * they are interpreted as an OR. </p>
     */
    inline DescribeTaskExecutionResult& AddIncludes(FilterRule&& value) { m_includes.push_back(std::move(value)); return *this; }


    /**
     * <p>The time that the task execution was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time that the task execution was started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The time that the task execution was started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The time that the task execution was started.</p>
     */
    inline DescribeTaskExecutionResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time that the task execution was started.</p>
     */
    inline DescribeTaskExecutionResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The expected number of files that is to be transferred over the network. This
     * value is calculated during the PREPARING phase, before the TRANSFERRING phase.
     * This value is the expected number of files to be transferred. It's calculated
     * based on comparing the content of the source and destination locations and
     * finding the delta that needs to be transferred. </p>
     */
    inline long long GetEstimatedFilesToTransfer() const{ return m_estimatedFilesToTransfer; }

    /**
     * <p>The expected number of files that is to be transferred over the network. This
     * value is calculated during the PREPARING phase, before the TRANSFERRING phase.
     * This value is the expected number of files to be transferred. It's calculated
     * based on comparing the content of the source and destination locations and
     * finding the delta that needs to be transferred. </p>
     */
    inline void SetEstimatedFilesToTransfer(long long value) { m_estimatedFilesToTransfer = value; }

    /**
     * <p>The expected number of files that is to be transferred over the network. This
     * value is calculated during the PREPARING phase, before the TRANSFERRING phase.
     * This value is the expected number of files to be transferred. It's calculated
     * based on comparing the content of the source and destination locations and
     * finding the delta that needs to be transferred. </p>
     */
    inline DescribeTaskExecutionResult& WithEstimatedFilesToTransfer(long long value) { SetEstimatedFilesToTransfer(value); return *this;}


    /**
     * <p>The estimated physical number of bytes that is to be transferred over the
     * network.</p>
     */
    inline long long GetEstimatedBytesToTransfer() const{ return m_estimatedBytesToTransfer; }

    /**
     * <p>The estimated physical number of bytes that is to be transferred over the
     * network.</p>
     */
    inline void SetEstimatedBytesToTransfer(long long value) { m_estimatedBytesToTransfer = value; }

    /**
     * <p>The estimated physical number of bytes that is to be transferred over the
     * network.</p>
     */
    inline DescribeTaskExecutionResult& WithEstimatedBytesToTransfer(long long value) { SetEstimatedBytesToTransfer(value); return *this;}


    /**
     * <p>The actual number of files that was transferred over the network. This value
     * is calculated and updated on an ongoing basis during the TRANSFERRING phase.
     * It's updated periodically when each file is read from the source and sent over
     * the network. </p> <p>If failures occur during a transfer, this value can be less
     * than <code>EstimatedFilesToTransfer</code>. This value can also be greater than
     * <code>EstimatedFilesTransferred</code> in some cases. This element is
     * implementation-specific for some location types, so don't use it as an indicator
     * for a correct file number or to monitor your task execution.</p>
     */
    inline long long GetFilesTransferred() const{ return m_filesTransferred; }

    /**
     * <p>The actual number of files that was transferred over the network. This value
     * is calculated and updated on an ongoing basis during the TRANSFERRING phase.
     * It's updated periodically when each file is read from the source and sent over
     * the network. </p> <p>If failures occur during a transfer, this value can be less
     * than <code>EstimatedFilesToTransfer</code>. This value can also be greater than
     * <code>EstimatedFilesTransferred</code> in some cases. This element is
     * implementation-specific for some location types, so don't use it as an indicator
     * for a correct file number or to monitor your task execution.</p>
     */
    inline void SetFilesTransferred(long long value) { m_filesTransferred = value; }

    /**
     * <p>The actual number of files that was transferred over the network. This value
     * is calculated and updated on an ongoing basis during the TRANSFERRING phase.
     * It's updated periodically when each file is read from the source and sent over
     * the network. </p> <p>If failures occur during a transfer, this value can be less
     * than <code>EstimatedFilesToTransfer</code>. This value can also be greater than
     * <code>EstimatedFilesTransferred</code> in some cases. This element is
     * implementation-specific for some location types, so don't use it as an indicator
     * for a correct file number or to monitor your task execution.</p>
     */
    inline DescribeTaskExecutionResult& WithFilesTransferred(long long value) { SetFilesTransferred(value); return *this;}


    /**
     * <p>The number of logical bytes written to the destination AWS storage
     * resource.</p>
     */
    inline long long GetBytesWritten() const{ return m_bytesWritten; }

    /**
     * <p>The number of logical bytes written to the destination AWS storage
     * resource.</p>
     */
    inline void SetBytesWritten(long long value) { m_bytesWritten = value; }

    /**
     * <p>The number of logical bytes written to the destination AWS storage
     * resource.</p>
     */
    inline DescribeTaskExecutionResult& WithBytesWritten(long long value) { SetBytesWritten(value); return *this;}


    /**
     * <p>The physical number of bytes transferred over the network.</p>
     */
    inline long long GetBytesTransferred() const{ return m_bytesTransferred; }

    /**
     * <p>The physical number of bytes transferred over the network.</p>
     */
    inline void SetBytesTransferred(long long value) { m_bytesTransferred = value; }

    /**
     * <p>The physical number of bytes transferred over the network.</p>
     */
    inline DescribeTaskExecutionResult& WithBytesTransferred(long long value) { SetBytesTransferred(value); return *this;}


    /**
     * <p>The result of the task execution.</p>
     */
    inline const TaskExecutionResultDetail& GetResult() const{ return m_result; }

    /**
     * <p>The result of the task execution.</p>
     */
    inline void SetResult(const TaskExecutionResultDetail& value) { m_result = value; }

    /**
     * <p>The result of the task execution.</p>
     */
    inline void SetResult(TaskExecutionResultDetail&& value) { m_result = std::move(value); }

    /**
     * <p>The result of the task execution.</p>
     */
    inline DescribeTaskExecutionResult& WithResult(const TaskExecutionResultDetail& value) { SetResult(value); return *this;}

    /**
     * <p>The result of the task execution.</p>
     */
    inline DescribeTaskExecutionResult& WithResult(TaskExecutionResultDetail&& value) { SetResult(std::move(value)); return *this;}

  private:

    Aws::String m_taskExecutionArn;

    TaskExecutionStatus m_status;

    Options m_options;

    Aws::Vector<FilterRule> m_excludes;

    Aws::Vector<FilterRule> m_includes;

    Aws::Utils::DateTime m_startTime;

    long long m_estimatedFilesToTransfer;

    long long m_estimatedBytesToTransfer;

    long long m_filesTransferred;

    long long m_bytesWritten;

    long long m_bytesTransferred;

    TaskExecutionResultDetail m_result;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
