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
#include <aws/datasync/model/TaskMode.h>
#include <aws/datasync/model/TaskExecutionFilesListedDetail.h>
#include <aws/datasync/model/TaskExecutionFilesFailedDetail.h>
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


    ///@{
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
    inline void SetTaskExecutionArn(const Aws::String& value) { m_taskExecutionArn = value; }
    inline void SetTaskExecutionArn(Aws::String&& value) { m_taskExecutionArn = std::move(value); }
    inline void SetTaskExecutionArn(const char* value) { m_taskExecutionArn.assign(value); }
    inline DescribeTaskExecutionResult& WithTaskExecutionArn(const Aws::String& value) { SetTaskExecutionArn(value); return *this;}
    inline DescribeTaskExecutionResult& WithTaskExecutionArn(Aws::String&& value) { SetTaskExecutionArn(std::move(value)); return *this;}
    inline DescribeTaskExecutionResult& WithTaskExecutionArn(const char* value) { SetTaskExecutionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the task execution. </p>
     */
    inline const TaskExecutionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TaskExecutionStatus& value) { m_status = value; }
    inline void SetStatus(TaskExecutionStatus&& value) { m_status = std::move(value); }
    inline DescribeTaskExecutionResult& WithStatus(const TaskExecutionStatus& value) { SetStatus(value); return *this;}
    inline DescribeTaskExecutionResult& WithStatus(TaskExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Options& GetOptions() const{ return m_options; }
    inline void SetOptions(const Options& value) { m_options = value; }
    inline void SetOptions(Options&& value) { m_options = std::move(value); }
    inline DescribeTaskExecutionResult& WithOptions(const Options& value) { SetOptions(value); return *this;}
    inline DescribeTaskExecutionResult& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const{ return m_excludes; }
    inline void SetExcludes(const Aws::Vector<FilterRule>& value) { m_excludes = value; }
    inline void SetExcludes(Aws::Vector<FilterRule>&& value) { m_excludes = std::move(value); }
    inline DescribeTaskExecutionResult& WithExcludes(const Aws::Vector<FilterRule>& value) { SetExcludes(value); return *this;}
    inline DescribeTaskExecutionResult& WithExcludes(Aws::Vector<FilterRule>&& value) { SetExcludes(std::move(value)); return *this;}
    inline DescribeTaskExecutionResult& AddExcludes(const FilterRule& value) { m_excludes.push_back(value); return *this; }
    inline DescribeTaskExecutionResult& AddExcludes(FilterRule&& value) { m_excludes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const{ return m_includes; }
    inline void SetIncludes(const Aws::Vector<FilterRule>& value) { m_includes = value; }
    inline void SetIncludes(Aws::Vector<FilterRule>&& value) { m_includes = std::move(value); }
    inline DescribeTaskExecutionResult& WithIncludes(const Aws::Vector<FilterRule>& value) { SetIncludes(value); return *this;}
    inline DescribeTaskExecutionResult& WithIncludes(Aws::Vector<FilterRule>&& value) { SetIncludes(std::move(value)); return *this;}
    inline DescribeTaskExecutionResult& AddIncludes(const FilterRule& value) { m_includes.push_back(value); return *this; }
    inline DescribeTaskExecutionResult& AddIncludes(FilterRule&& value) { m_includes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of the manifest that lists the files or objects to
     * transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
     * what DataSync transfers by using a manifest</a>.</p>
     */
    inline const ManifestConfig& GetManifestConfig() const{ return m_manifestConfig; }
    inline void SetManifestConfig(const ManifestConfig& value) { m_manifestConfig = value; }
    inline void SetManifestConfig(ManifestConfig&& value) { m_manifestConfig = std::move(value); }
    inline DescribeTaskExecutionResult& WithManifestConfig(const ManifestConfig& value) { SetManifestConfig(value); return *this;}
    inline DescribeTaskExecutionResult& WithManifestConfig(ManifestConfig&& value) { SetManifestConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the task execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline DescribeTaskExecutionResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline DescribeTaskExecutionResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of files, objects, and directories that DataSync expects to
     * transfer over the network. This value is calculated while DataSync <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#understand-task-execution-statuses">prepares</a>
     * the transfer.</p> <p>How this gets calculated depends primarily on your task’s
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Options.html#DataSync-Type-Options-TransferMode">transfer
     * mode</a> configuration:</p> <ul> <li> <p>If <code>TranserMode</code> is set to
     * <code>CHANGED</code> - The calculation is based on comparing the content of the
     * source and destination locations and determining the difference that needs to be
     * transferred. The difference can include:</p> <ul> <li> <p>Anything that's added
     * or modified at the source location.</p> </li> <li> <p>Anything that's in both
     * locations and modified at the destination after an initial transfer (unless <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Options.html#DataSync-Type-Options-OverwriteMode">OverwriteMode</a>
     * is set to <code>NEVER</code>).</p> </li> <li> <p> <b>(Basic task mode only)</b>
     * The number of items that DataSync expects to delete (if <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Options.html#DataSync-Type-Options-PreserveDeletedFiles">PreserveDeletedFiles</a>
     * is set to <code>REMOVE</code>).</p> </li> </ul> </li> <li> <p>If
     * <code>TranserMode</code> is set to <code>ALL</code> - The calculation is based
     * only on the items that DataSync finds at the source location.</p> </li> </ul>
     */
    inline long long GetEstimatedFilesToTransfer() const{ return m_estimatedFilesToTransfer; }
    inline void SetEstimatedFilesToTransfer(long long value) { m_estimatedFilesToTransfer = value; }
    inline DescribeTaskExecutionResult& WithEstimatedFilesToTransfer(long long value) { SetEstimatedFilesToTransfer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of logical bytes that DataSync expects to write to the destination
     * location.</p>
     */
    inline long long GetEstimatedBytesToTransfer() const{ return m_estimatedBytesToTransfer; }
    inline void SetEstimatedBytesToTransfer(long long value) { m_estimatedBytesToTransfer = value; }
    inline DescribeTaskExecutionResult& WithEstimatedBytesToTransfer(long long value) { SetEstimatedBytesToTransfer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of files, objects, and directories that DataSync actually
     * transfers over the network. This value is updated periodically during your task
     * execution when something is read from the source and sent over the network.</p>
     * <p>If DataSync fails to transfer something, this value can be less than
     * <code>EstimatedFilesToTransfer</code>. In some cases, this value can also be
     * greater than <code>EstimatedFilesToTransfer</code>. This element is
     * implementation-specific for some location types, so don't use it as an exact
     * indication of what's transferring or to monitor your task execution.</p>
     */
    inline long long GetFilesTransferred() const{ return m_filesTransferred; }
    inline void SetFilesTransferred(long long value) { m_filesTransferred = value; }
    inline DescribeTaskExecutionResult& WithFilesTransferred(long long value) { SetFilesTransferred(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of logical bytes that DataSync actually writes to the destination
     * location.</p>
     */
    inline long long GetBytesWritten() const{ return m_bytesWritten; }
    inline void SetBytesWritten(long long value) { m_bytesWritten = value; }
    inline DescribeTaskExecutionResult& WithBytesWritten(long long value) { SetBytesWritten(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes that DataSync sends to the network before compression (if
     * compression is possible). For the number of bytes transferred over the network,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_DescribeTaskExecution.html#DataSync-DescribeTaskExecution-response-BytesCompressed">BytesCompressed</a>.
     * </p>
     */
    inline long long GetBytesTransferred() const{ return m_bytesTransferred; }
    inline void SetBytesTransferred(long long value) { m_bytesTransferred = value; }
    inline DescribeTaskExecutionResult& WithBytesTransferred(long long value) { SetBytesTransferred(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of physical bytes that DataSync transfers over the network after
     * compression (if compression is possible). This number is typically less than <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_DescribeTaskExecution.html#DataSync-DescribeTaskExecution-response-BytesTransferred">BytesTransferred</a>
     * unless the data isn't compressible.</p>
     */
    inline long long GetBytesCompressed() const{ return m_bytesCompressed; }
    inline void SetBytesCompressed(long long value) { m_bytesCompressed = value; }
    inline DescribeTaskExecutionResult& WithBytesCompressed(long long value) { SetBytesCompressed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the task execution.</p>
     */
    inline const TaskExecutionResultDetail& GetResult() const{ return m_result; }
    inline void SetResult(const TaskExecutionResultDetail& value) { m_result = value; }
    inline void SetResult(TaskExecutionResultDetail&& value) { m_result = std::move(value); }
    inline DescribeTaskExecutionResult& WithResult(const TaskExecutionResultDetail& value) { SetResult(value); return *this;}
    inline DescribeTaskExecutionResult& WithResult(TaskExecutionResultDetail&& value) { SetResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of your task report, which provides detailed information
     * about for your DataSync transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Creating
     * a task report</a>.</p>
     */
    inline const TaskReportConfig& GetTaskReportConfig() const{ return m_taskReportConfig; }
    inline void SetTaskReportConfig(const TaskReportConfig& value) { m_taskReportConfig = value; }
    inline void SetTaskReportConfig(TaskReportConfig&& value) { m_taskReportConfig = std::move(value); }
    inline DescribeTaskExecutionResult& WithTaskReportConfig(const TaskReportConfig& value) { SetTaskReportConfig(value); return *this;}
    inline DescribeTaskExecutionResult& WithTaskReportConfig(TaskReportConfig&& value) { SetTaskReportConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of files, objects, and directories that DataSync actually deletes
     * in your destination location. If you don't configure your task to <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">delete
     * data in the destination that isn't in the source</a>, the value is always
     * <code>0</code>.</p>
     */
    inline long long GetFilesDeleted() const{ return m_filesDeleted; }
    inline void SetFilesDeleted(long long value) { m_filesDeleted = value; }
    inline DescribeTaskExecutionResult& WithFilesDeleted(long long value) { SetFilesDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of files, objects, and directories that DataSync skips during your
     * transfer.</p>
     */
    inline long long GetFilesSkipped() const{ return m_filesSkipped; }
    inline void SetFilesSkipped(long long value) { m_filesSkipped = value; }
    inline DescribeTaskExecutionResult& WithFilesSkipped(long long value) { SetFilesSkipped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of files, objects, and directories that DataSync verifies during
     * your transfer.</p>  <p>When you configure your task to <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-data-verification-options.html">verify
     * only the data that's transferred</a>, DataSync doesn't verify directories in
     * some situations or files that fail to transfer.</p> 
     */
    inline long long GetFilesVerified() const{ return m_filesVerified; }
    inline void SetFilesVerified(long long value) { m_filesVerified = value; }
    inline DescribeTaskExecutionResult& WithFilesVerified(long long value) { SetFilesVerified(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether DataSync generated a complete <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">task
     * report</a> for your transfer.</p>
     */
    inline const ReportResult& GetReportResult() const{ return m_reportResult; }
    inline void SetReportResult(const ReportResult& value) { m_reportResult = value; }
    inline void SetReportResult(ReportResult&& value) { m_reportResult = std::move(value); }
    inline DescribeTaskExecutionResult& WithReportResult(const ReportResult& value) { SetReportResult(value); return *this;}
    inline DescribeTaskExecutionResult& WithReportResult(ReportResult&& value) { SetReportResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of files, objects, and directories that DataSync expects to delete
     * in your destination location. If you don't configure your task to <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">delete
     * data in the destination that isn't in the source</a>, the value is always
     * <code>0</code>.</p>
     */
    inline long long GetEstimatedFilesToDelete() const{ return m_estimatedFilesToDelete; }
    inline void SetEstimatedFilesToDelete(long long value) { m_estimatedFilesToDelete = value; }
    inline DescribeTaskExecutionResult& WithEstimatedFilesToDelete(long long value) { SetEstimatedFilesToDelete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task mode that you're using. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Choosing
     * a task mode for your data transfer</a>.</p>
     */
    inline const TaskMode& GetTaskMode() const{ return m_taskMode; }
    inline void SetTaskMode(const TaskMode& value) { m_taskMode = value; }
    inline void SetTaskMode(TaskMode&& value) { m_taskMode = std::move(value); }
    inline DescribeTaskExecutionResult& WithTaskMode(const TaskMode& value) { SetTaskMode(value); return *this;}
    inline DescribeTaskExecutionResult& WithTaskMode(TaskMode&& value) { SetTaskMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of objects that DataSync will attempt to transfer after comparing
     * your source and destination locations.</p>  <p>Applies only to <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
     * mode tasks</a>.</p>  <p>This counter isn't applicable if you configure
     * your task to <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html#task-option-transfer-mode">transfer
     * all data</a>. In that scenario, DataSync copies everything from the source to
     * the destination without comparing differences between the locations.</p>
     */
    inline long long GetFilesPrepared() const{ return m_filesPrepared; }
    inline void SetFilesPrepared(long long value) { m_filesPrepared = value; }
    inline DescribeTaskExecutionResult& WithFilesPrepared(long long value) { SetFilesPrepared(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of objects that DataSync finds at your locations.</p> 
     * <p>Applies only to <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
     * mode tasks</a>.</p> 
     */
    inline const TaskExecutionFilesListedDetail& GetFilesListed() const{ return m_filesListed; }
    inline void SetFilesListed(const TaskExecutionFilesListedDetail& value) { m_filesListed = value; }
    inline void SetFilesListed(TaskExecutionFilesListedDetail&& value) { m_filesListed = std::move(value); }
    inline DescribeTaskExecutionResult& WithFilesListed(const TaskExecutionFilesListedDetail& value) { SetFilesListed(value); return *this;}
    inline DescribeTaskExecutionResult& WithFilesListed(TaskExecutionFilesListedDetail&& value) { SetFilesListed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of objects that DataSync fails to prepare, transfer, verify, and
     * delete during your task execution.</p>  <p>Applies only to <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
     * mode tasks</a>.</p> 
     */
    inline const TaskExecutionFilesFailedDetail& GetFilesFailed() const{ return m_filesFailed; }
    inline void SetFilesFailed(const TaskExecutionFilesFailedDetail& value) { m_filesFailed = value; }
    inline void SetFilesFailed(TaskExecutionFilesFailedDetail&& value) { m_filesFailed = std::move(value); }
    inline DescribeTaskExecutionResult& WithFilesFailed(const TaskExecutionFilesFailedDetail& value) { SetFilesFailed(value); return *this;}
    inline DescribeTaskExecutionResult& WithFilesFailed(TaskExecutionFilesFailedDetail&& value) { SetFilesFailed(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTaskExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTaskExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTaskExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    TaskMode m_taskMode;

    long long m_filesPrepared;

    TaskExecutionFilesListedDetail m_filesListed;

    TaskExecutionFilesFailedDetail m_filesFailed;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
