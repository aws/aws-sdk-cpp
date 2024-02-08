/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/TaskExecutionStatus.h>
#include <aws/datasync/model/Options.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/ManifestConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/TaskExecutionResultDetail.h>
#include <aws/datasync/model/TaskReportConfig.h>
#include <aws/datasync/model/ReportResult.h>
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
  class DescribeTaskExecutionResult
  {
  public:
    AWS_DATASYNC_API DescribeTaskExecutionResult();
    AWS_DATASYNC_API DescribeTaskExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeTaskExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the task execution that you wanted information about.
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
     * <p>The ARN of the task execution that you wanted information about.
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
     * <p>The ARN of the task execution that you wanted information about.
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
     * <p>The ARN of the task execution that you wanted information about.
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
     * <p>The ARN of the task execution that you wanted information about.
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
     * <p>The ARN of the task execution that you wanted information about.
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
     * <p>The ARN of the task execution that you wanted information about.
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
     * <p>The status of the task execution. </p>
     */
    inline const TaskExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task execution. </p>
     */
    inline void SetStatus(const TaskExecutionStatus& value) { m_status = value; }

    /**
     * <p>The status of the task execution. </p>
     */
    inline void SetStatus(TaskExecutionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the task execution. </p>
     */
    inline DescribeTaskExecutionResult& WithStatus(const TaskExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task execution. </p>
     */
    inline DescribeTaskExecutionResult& WithStatus(TaskExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Options& GetOptions() const{ return m_options; }

    
    inline void SetOptions(const Options& value) { m_options = value; }

    
    inline void SetOptions(Options&& value) { m_options = std::move(value); }

    
    inline DescribeTaskExecutionResult& WithOptions(const Options& value) { SetOptions(value); return *this;}

    
    inline DescribeTaskExecutionResult& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const{ return m_excludes; }

    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline void SetExcludes(const Aws::Vector<FilterRule>& value) { m_excludes = value; }

    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline void SetExcludes(Aws::Vector<FilterRule>&& value) { m_excludes = std::move(value); }

    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskExecutionResult& WithExcludes(const Aws::Vector<FilterRule>& value) { SetExcludes(value); return *this;}

    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskExecutionResult& WithExcludes(Aws::Vector<FilterRule>&& value) { SetExcludes(std::move(value)); return *this;}

    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskExecutionResult& AddExcludes(const FilterRule& value) { m_excludes.push_back(value); return *this; }

    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskExecutionResult& AddExcludes(FilterRule&& value) { m_excludes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const{ return m_includes; }

    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline void SetIncludes(const Aws::Vector<FilterRule>& value) { m_includes = value; }

    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline void SetIncludes(Aws::Vector<FilterRule>&& value) { m_includes = std::move(value); }

    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskExecutionResult& WithIncludes(const Aws::Vector<FilterRule>& value) { SetIncludes(value); return *this;}

    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskExecutionResult& WithIncludes(Aws::Vector<FilterRule>&& value) { SetIncludes(std::move(value)); return *this;}

    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskExecutionResult& AddIncludes(const FilterRule& value) { m_includes.push_back(value); return *this; }

    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskExecutionResult& AddIncludes(FilterRule&& value) { m_includes.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration of the manifest that lists the files or objects to
     * transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
     * what DataSync transfers by using a manifest</a>.</p>
     */
    inline const ManifestConfig& GetManifestConfig() const{ return m_manifestConfig; }

    /**
     * <p>The configuration of the manifest that lists the files or objects to
     * transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
     * what DataSync transfers by using a manifest</a>.</p>
     */
    inline void SetManifestConfig(const ManifestConfig& value) { m_manifestConfig = value; }

    /**
     * <p>The configuration of the manifest that lists the files or objects to
     * transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
     * what DataSync transfers by using a manifest</a>.</p>
     */
    inline void SetManifestConfig(ManifestConfig&& value) { m_manifestConfig = std::move(value); }

    /**
     * <p>The configuration of the manifest that lists the files or objects to
     * transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
     * what DataSync transfers by using a manifest</a>.</p>
     */
    inline DescribeTaskExecutionResult& WithManifestConfig(const ManifestConfig& value) { SetManifestConfig(value); return *this;}

    /**
     * <p>The configuration of the manifest that lists the files or objects to
     * transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
     * what DataSync transfers by using a manifest</a>.</p>
     */
    inline DescribeTaskExecutionResult& WithManifestConfig(ManifestConfig&& value) { SetManifestConfig(std::move(value)); return *this;}


    /**
     * <p>The time when the task execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time when the task execution started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The time when the task execution started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The time when the task execution started.</p>
     */
    inline DescribeTaskExecutionResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time when the task execution started.</p>
     */
    inline DescribeTaskExecutionResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The expected number of files, objects, and directories that DataSync will
     * transfer over the network. This value is calculated during the task execution's
     * <code>PREPARING</code> phase before the <code>TRANSFERRING</code> phase. The
     * calculation is based on comparing the content of the source and destination
     * locations and finding the difference that needs to be transferred. </p>
     */
    inline long long GetEstimatedFilesToTransfer() const{ return m_estimatedFilesToTransfer; }

    /**
     * <p>The expected number of files, objects, and directories that DataSync will
     * transfer over the network. This value is calculated during the task execution's
     * <code>PREPARING</code> phase before the <code>TRANSFERRING</code> phase. The
     * calculation is based on comparing the content of the source and destination
     * locations and finding the difference that needs to be transferred. </p>
     */
    inline void SetEstimatedFilesToTransfer(long long value) { m_estimatedFilesToTransfer = value; }

    /**
     * <p>The expected number of files, objects, and directories that DataSync will
     * transfer over the network. This value is calculated during the task execution's
     * <code>PREPARING</code> phase before the <code>TRANSFERRING</code> phase. The
     * calculation is based on comparing the content of the source and destination
     * locations and finding the difference that needs to be transferred. </p>
     */
    inline DescribeTaskExecutionResult& WithEstimatedFilesToTransfer(long long value) { SetEstimatedFilesToTransfer(value); return *this;}


    /**
     * <p>The estimated physical number of bytes that will transfer over the
     * network.</p>
     */
    inline long long GetEstimatedBytesToTransfer() const{ return m_estimatedBytesToTransfer; }

    /**
     * <p>The estimated physical number of bytes that will transfer over the
     * network.</p>
     */
    inline void SetEstimatedBytesToTransfer(long long value) { m_estimatedBytesToTransfer = value; }

    /**
     * <p>The estimated physical number of bytes that will transfer over the
     * network.</p>
     */
    inline DescribeTaskExecutionResult& WithEstimatedBytesToTransfer(long long value) { SetEstimatedBytesToTransfer(value); return *this;}


    /**
     * <p>The actual number of files, objects, and directories that DataSync
     * transferred over the network. This value is updated periodically during the task
     * execution's <code>TRANSFERRING</code> phase when something is read from the
     * source and sent over the network.</p> <p>If DataSync fails to transfer
     * something, this value can be less than <code>EstimatedFilesToTransfer</code>. In
     * some cases, this value can also be greater than
     * <code>EstimatedFilesToTransfer</code>. This element is implementation-specific
     * for some location types, so don't use it as an exact indication of what
     * transferred or to monitor your task execution.</p>
     */
    inline long long GetFilesTransferred() const{ return m_filesTransferred; }

    /**
     * <p>The actual number of files, objects, and directories that DataSync
     * transferred over the network. This value is updated periodically during the task
     * execution's <code>TRANSFERRING</code> phase when something is read from the
     * source and sent over the network.</p> <p>If DataSync fails to transfer
     * something, this value can be less than <code>EstimatedFilesToTransfer</code>. In
     * some cases, this value can also be greater than
     * <code>EstimatedFilesToTransfer</code>. This element is implementation-specific
     * for some location types, so don't use it as an exact indication of what
     * transferred or to monitor your task execution.</p>
     */
    inline void SetFilesTransferred(long long value) { m_filesTransferred = value; }

    /**
     * <p>The actual number of files, objects, and directories that DataSync
     * transferred over the network. This value is updated periodically during the task
     * execution's <code>TRANSFERRING</code> phase when something is read from the
     * source and sent over the network.</p> <p>If DataSync fails to transfer
     * something, this value can be less than <code>EstimatedFilesToTransfer</code>. In
     * some cases, this value can also be greater than
     * <code>EstimatedFilesToTransfer</code>. This element is implementation-specific
     * for some location types, so don't use it as an exact indication of what
     * transferred or to monitor your task execution.</p>
     */
    inline DescribeTaskExecutionResult& WithFilesTransferred(long long value) { SetFilesTransferred(value); return *this;}


    /**
     * <p>The number of logical bytes written to the destination location.</p>
     */
    inline long long GetBytesWritten() const{ return m_bytesWritten; }

    /**
     * <p>The number of logical bytes written to the destination location.</p>
     */
    inline void SetBytesWritten(long long value) { m_bytesWritten = value; }

    /**
     * <p>The number of logical bytes written to the destination location.</p>
     */
    inline DescribeTaskExecutionResult& WithBytesWritten(long long value) { SetBytesWritten(value); return *this;}


    /**
     * <p>The total number of bytes that are involved in the transfer. For the number
     * of bytes sent over the network, see <code>BytesCompressed</code>. </p>
     */
    inline long long GetBytesTransferred() const{ return m_bytesTransferred; }

    /**
     * <p>The total number of bytes that are involved in the transfer. For the number
     * of bytes sent over the network, see <code>BytesCompressed</code>. </p>
     */
    inline void SetBytesTransferred(long long value) { m_bytesTransferred = value; }

    /**
     * <p>The total number of bytes that are involved in the transfer. For the number
     * of bytes sent over the network, see <code>BytesCompressed</code>. </p>
     */
    inline DescribeTaskExecutionResult& WithBytesTransferred(long long value) { SetBytesTransferred(value); return *this;}


    /**
     * <p>The physical number of bytes transferred over the network after compression
     * was applied. In most cases, this number is less than
     * <code>BytesTransferred</code> unless the data isn't compressible.</p>
     */
    inline long long GetBytesCompressed() const{ return m_bytesCompressed; }

    /**
     * <p>The physical number of bytes transferred over the network after compression
     * was applied. In most cases, this number is less than
     * <code>BytesTransferred</code> unless the data isn't compressible.</p>
     */
    inline void SetBytesCompressed(long long value) { m_bytesCompressed = value; }

    /**
     * <p>The physical number of bytes transferred over the network after compression
     * was applied. In most cases, this number is less than
     * <code>BytesTransferred</code> unless the data isn't compressible.</p>
     */
    inline DescribeTaskExecutionResult& WithBytesCompressed(long long value) { SetBytesCompressed(value); return *this;}


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


    /**
     * <p>The configuration of your task report, which provides detailed information
     * about for your DataSync transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Creating
     * a task report</a>.</p>
     */
    inline const TaskReportConfig& GetTaskReportConfig() const{ return m_taskReportConfig; }

    /**
     * <p>The configuration of your task report, which provides detailed information
     * about for your DataSync transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Creating
     * a task report</a>.</p>
     */
    inline void SetTaskReportConfig(const TaskReportConfig& value) { m_taskReportConfig = value; }

    /**
     * <p>The configuration of your task report, which provides detailed information
     * about for your DataSync transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Creating
     * a task report</a>.</p>
     */
    inline void SetTaskReportConfig(TaskReportConfig&& value) { m_taskReportConfig = std::move(value); }

    /**
     * <p>The configuration of your task report, which provides detailed information
     * about for your DataSync transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Creating
     * a task report</a>.</p>
     */
    inline DescribeTaskExecutionResult& WithTaskReportConfig(const TaskReportConfig& value) { SetTaskReportConfig(value); return *this;}

    /**
     * <p>The configuration of your task report, which provides detailed information
     * about for your DataSync transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Creating
     * a task report</a>.</p>
     */
    inline DescribeTaskExecutionResult& WithTaskReportConfig(TaskReportConfig&& value) { SetTaskReportConfig(std::move(value)); return *this;}


    /**
     * <p>The number of files, objects, and directories that DataSync deleted in your
     * destination location. If you don't <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">configure
     * your task</a> to delete data in the destination that isn't in the source, the
     * value is always <code>0</code>.</p>
     */
    inline long long GetFilesDeleted() const{ return m_filesDeleted; }

    /**
     * <p>The number of files, objects, and directories that DataSync deleted in your
     * destination location. If you don't <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">configure
     * your task</a> to delete data in the destination that isn't in the source, the
     * value is always <code>0</code>.</p>
     */
    inline void SetFilesDeleted(long long value) { m_filesDeleted = value; }

    /**
     * <p>The number of files, objects, and directories that DataSync deleted in your
     * destination location. If you don't <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">configure
     * your task</a> to delete data in the destination that isn't in the source, the
     * value is always <code>0</code>.</p>
     */
    inline DescribeTaskExecutionResult& WithFilesDeleted(long long value) { SetFilesDeleted(value); return *this;}


    /**
     * <p>The number of files, objects, and directories that DataSync skipped during
     * your transfer.</p>
     */
    inline long long GetFilesSkipped() const{ return m_filesSkipped; }

    /**
     * <p>The number of files, objects, and directories that DataSync skipped during
     * your transfer.</p>
     */
    inline void SetFilesSkipped(long long value) { m_filesSkipped = value; }

    /**
     * <p>The number of files, objects, and directories that DataSync skipped during
     * your transfer.</p>
     */
    inline DescribeTaskExecutionResult& WithFilesSkipped(long long value) { SetFilesSkipped(value); return *this;}


    /**
     * <p>The number of files, objects, and directories that DataSync verified during
     * your transfer.</p>  <p>When you configure your task to <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-data-verification-options.html">verify
     * only the data that's transferred</a>, DataSync doesn't verify directories in
     * some situations or files that fail to transfer.</p> 
     */
    inline long long GetFilesVerified() const{ return m_filesVerified; }

    /**
     * <p>The number of files, objects, and directories that DataSync verified during
     * your transfer.</p>  <p>When you configure your task to <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-data-verification-options.html">verify
     * only the data that's transferred</a>, DataSync doesn't verify directories in
     * some situations or files that fail to transfer.</p> 
     */
    inline void SetFilesVerified(long long value) { m_filesVerified = value; }

    /**
     * <p>The number of files, objects, and directories that DataSync verified during
     * your transfer.</p>  <p>When you configure your task to <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-data-verification-options.html">verify
     * only the data that's transferred</a>, DataSync doesn't verify directories in
     * some situations or files that fail to transfer.</p> 
     */
    inline DescribeTaskExecutionResult& WithFilesVerified(long long value) { SetFilesVerified(value); return *this;}


    /**
     * <p>Indicates whether DataSync generated a complete <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">task
     * report</a> for your transfer.</p>
     */
    inline const ReportResult& GetReportResult() const{ return m_reportResult; }

    /**
     * <p>Indicates whether DataSync generated a complete <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">task
     * report</a> for your transfer.</p>
     */
    inline void SetReportResult(const ReportResult& value) { m_reportResult = value; }

    /**
     * <p>Indicates whether DataSync generated a complete <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">task
     * report</a> for your transfer.</p>
     */
    inline void SetReportResult(ReportResult&& value) { m_reportResult = std::move(value); }

    /**
     * <p>Indicates whether DataSync generated a complete <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">task
     * report</a> for your transfer.</p>
     */
    inline DescribeTaskExecutionResult& WithReportResult(const ReportResult& value) { SetReportResult(value); return *this;}

    /**
     * <p>Indicates whether DataSync generated a complete <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">task
     * report</a> for your transfer.</p>
     */
    inline DescribeTaskExecutionResult& WithReportResult(ReportResult&& value) { SetReportResult(std::move(value)); return *this;}


    /**
     * <p>The expected number of files, objects, and directories that DataSync will
     * delete in your destination location. If you don't <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">configure
     * your task</a> to delete data in the destination that isn't in the source, the
     * value is always <code>0</code>.</p>
     */
    inline long long GetEstimatedFilesToDelete() const{ return m_estimatedFilesToDelete; }

    /**
     * <p>The expected number of files, objects, and directories that DataSync will
     * delete in your destination location. If you don't <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">configure
     * your task</a> to delete data in the destination that isn't in the source, the
     * value is always <code>0</code>.</p>
     */
    inline void SetEstimatedFilesToDelete(long long value) { m_estimatedFilesToDelete = value; }

    /**
     * <p>The expected number of files, objects, and directories that DataSync will
     * delete in your destination location. If you don't <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">configure
     * your task</a> to delete data in the destination that isn't in the source, the
     * value is always <code>0</code>.</p>
     */
    inline DescribeTaskExecutionResult& WithEstimatedFilesToDelete(long long value) { SetEstimatedFilesToDelete(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeTaskExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeTaskExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeTaskExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_taskExecutionArn;

    TaskExecutionStatus m_status;

    Options m_options;

    Aws::Vector<FilterRule> m_excludes;

    Aws::Vector<FilterRule> m_includes;

    ManifestConfig m_manifestConfig;

    Aws::Utils::DateTime m_startTime;

    long long m_estimatedFilesToTransfer;

    long long m_estimatedBytesToTransfer;

    long long m_filesTransferred;

    long long m_bytesWritten;

    long long m_bytesTransferred;

    long long m_bytesCompressed;

    TaskExecutionResultDetail m_result;

    TaskReportConfig m_taskReportConfig;

    long long m_filesDeleted;

    long long m_filesSkipped;

    long long m_filesVerified;

    ReportResult m_reportResult;

    long long m_estimatedFilesToDelete;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
