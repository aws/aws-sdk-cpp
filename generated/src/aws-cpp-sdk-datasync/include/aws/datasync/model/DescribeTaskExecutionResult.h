/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/FilterRule.h>
#include <aws/datasync/model/ManifestConfig.h>
#include <aws/datasync/model/Options.h>
#include <aws/datasync/model/ReportResult.h>
#include <aws/datasync/model/TaskExecutionFilesFailedDetail.h>
#include <aws/datasync/model/TaskExecutionFilesListedDetail.h>
#include <aws/datasync/model/TaskExecutionFoldersFailedDetail.h>
#include <aws/datasync/model/TaskExecutionFoldersListedDetail.h>
#include <aws/datasync/model/TaskExecutionResultDetail.h>
#include <aws/datasync/model/TaskExecutionStatus.h>
#include <aws/datasync/model/TaskMode.h>
#include <aws/datasync/model/TaskReportConfig.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DataSync {
namespace Model {
/**
 * <p>DescribeTaskExecutionResponse</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTaskExecutionResponse">AWS
 * API Reference</a></p>
 */
class DescribeTaskExecutionResult {
 public:
  AWS_DATASYNC_API DescribeTaskExecutionResult() = default;
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
  inline const Aws::String& GetTaskExecutionArn() const { return m_taskExecutionArn; }
  template <typename TaskExecutionArnT = Aws::String>
  void SetTaskExecutionArn(TaskExecutionArnT&& value) {
    m_taskExecutionArnHasBeenSet = true;
    m_taskExecutionArn = std::forward<TaskExecutionArnT>(value);
  }
  template <typename TaskExecutionArnT = Aws::String>
  DescribeTaskExecutionResult& WithTaskExecutionArn(TaskExecutionArnT&& value) {
    SetTaskExecutionArn(std::forward<TaskExecutionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the task execution. </p>
   */
  inline TaskExecutionStatus GetStatus() const { return m_status; }
  inline void SetStatus(TaskExecutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeTaskExecutionResult& WithStatus(TaskExecutionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Options& GetOptions() const { return m_options; }
  template <typename OptionsT = Options>
  void SetOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options = std::forward<OptionsT>(value);
  }
  template <typename OptionsT = Options>
  DescribeTaskExecutionResult& WithOptions(OptionsT&& value) {
    SetOptions(std::forward<OptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of filter rules that exclude specific data during your transfer. For
   * more information and examples, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
   * data transferred by DataSync</a>.</p>
   */
  inline const Aws::Vector<FilterRule>& GetExcludes() const { return m_excludes; }
  template <typename ExcludesT = Aws::Vector<FilterRule>>
  void SetExcludes(ExcludesT&& value) {
    m_excludesHasBeenSet = true;
    m_excludes = std::forward<ExcludesT>(value);
  }
  template <typename ExcludesT = Aws::Vector<FilterRule>>
  DescribeTaskExecutionResult& WithExcludes(ExcludesT&& value) {
    SetExcludes(std::forward<ExcludesT>(value));
    return *this;
  }
  template <typename ExcludesT = FilterRule>
  DescribeTaskExecutionResult& AddExcludes(ExcludesT&& value) {
    m_excludesHasBeenSet = true;
    m_excludes.emplace_back(std::forward<ExcludesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of filter rules that include specific data during your transfer. For
   * more information and examples, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
   * data transferred by DataSync</a>.</p>
   */
  inline const Aws::Vector<FilterRule>& GetIncludes() const { return m_includes; }
  template <typename IncludesT = Aws::Vector<FilterRule>>
  void SetIncludes(IncludesT&& value) {
    m_includesHasBeenSet = true;
    m_includes = std::forward<IncludesT>(value);
  }
  template <typename IncludesT = Aws::Vector<FilterRule>>
  DescribeTaskExecutionResult& WithIncludes(IncludesT&& value) {
    SetIncludes(std::forward<IncludesT>(value));
    return *this;
  }
  template <typename IncludesT = FilterRule>
  DescribeTaskExecutionResult& AddIncludes(IncludesT&& value) {
    m_includesHasBeenSet = true;
    m_includes.emplace_back(std::forward<IncludesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the manifest that lists the files or objects to
   * transfer. For more information, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
   * what DataSync transfers by using a manifest</a>.</p>
   */
  inline const ManifestConfig& GetManifestConfig() const { return m_manifestConfig; }
  template <typename ManifestConfigT = ManifestConfig>
  void SetManifestConfig(ManifestConfigT&& value) {
    m_manifestConfigHasBeenSet = true;
    m_manifestConfig = std::forward<ManifestConfigT>(value);
  }
  template <typename ManifestConfigT = ManifestConfig>
  DescribeTaskExecutionResult& WithManifestConfig(ManifestConfigT&& value) {
    SetManifestConfig(std::forward<ManifestConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time that DataSync sends the request to start the task execution. For
   * non-queued tasks, <code>LaunchTime</code> and <code>StartTime</code> are
   * typically the same. For queued tasks, <code>LaunchTime</code> is typically later
   * than <code>StartTime</code> because previously queued tasks must finish running
   * before newer tasks can begin.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  DescribeTaskExecutionResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
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
   *  <p>For <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>, this counter only includes files or objects. Directories are
   * counted in <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_DescribeTaskExecution.html#DataSync-DescribeTaskExecution-response-EstimatedFoldersToTransfer">EstimatedFoldersToTransfer</a>.
   * </p>
   */
  inline long long GetEstimatedFilesToTransfer() const { return m_estimatedFilesToTransfer; }
  inline void SetEstimatedFilesToTransfer(long long value) {
    m_estimatedFilesToTransferHasBeenSet = true;
    m_estimatedFilesToTransfer = value;
  }
  inline DescribeTaskExecutionResult& WithEstimatedFilesToTransfer(long long value) {
    SetEstimatedFilesToTransfer(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of logical bytes that DataSync expects to write to the destination
   * location.</p>
   */
  inline long long GetEstimatedBytesToTransfer() const { return m_estimatedBytesToTransfer; }
  inline void SetEstimatedBytesToTransfer(long long value) {
    m_estimatedBytesToTransferHasBeenSet = true;
    m_estimatedBytesToTransfer = value;
  }
  inline DescribeTaskExecutionResult& WithEstimatedBytesToTransfer(long long value) {
    SetEstimatedBytesToTransfer(value);
    return *this;
  }
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
   * <p>For <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>, this counter only includes files or objects. Directories are
   * counted in <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_DescribeTaskExecution.html#DataSync-DescribeTaskExecution-response-FoldersTransferred">FoldersTransferred</a>.
   * </p>
   */
  inline long long GetFilesTransferred() const { return m_filesTransferred; }
  inline void SetFilesTransferred(long long value) {
    m_filesTransferredHasBeenSet = true;
    m_filesTransferred = value;
  }
  inline DescribeTaskExecutionResult& WithFilesTransferred(long long value) {
    SetFilesTransferred(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of logical bytes that DataSync actually writes to the destination
   * location.</p>
   */
  inline long long GetBytesWritten() const { return m_bytesWritten; }
  inline void SetBytesWritten(long long value) {
    m_bytesWrittenHasBeenSet = true;
    m_bytesWritten = value;
  }
  inline DescribeTaskExecutionResult& WithBytesWritten(long long value) {
    SetBytesWritten(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of bytes that DataSync sends to the network before compression (if
   * compression is possible). For the number of bytes transferred over the network,
   * see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_DescribeTaskExecution.html#DataSync-DescribeTaskExecution-response-BytesCompressed">BytesCompressed</a>.
   * </p>
   */
  inline long long GetBytesTransferred() const { return m_bytesTransferred; }
  inline void SetBytesTransferred(long long value) {
    m_bytesTransferredHasBeenSet = true;
    m_bytesTransferred = value;
  }
  inline DescribeTaskExecutionResult& WithBytesTransferred(long long value) {
    SetBytesTransferred(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of physical bytes that DataSync transfers over the network after
   * compression (if compression is possible). This number is typically less than <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_DescribeTaskExecution.html#DataSync-DescribeTaskExecution-response-BytesTransferred">BytesTransferred</a>
   * unless the data isn't compressible.</p>
   */
  inline long long GetBytesCompressed() const { return m_bytesCompressed; }
  inline void SetBytesCompressed(long long value) {
    m_bytesCompressedHasBeenSet = true;
    m_bytesCompressed = value;
  }
  inline DescribeTaskExecutionResult& WithBytesCompressed(long long value) {
    SetBytesCompressed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of the task execution.</p>
   */
  inline const TaskExecutionResultDetail& GetResult() const { return m_result; }
  template <typename ResultT = TaskExecutionResultDetail>
  void SetResult(ResultT&& value) {
    m_resultHasBeenSet = true;
    m_result = std::forward<ResultT>(value);
  }
  template <typename ResultT = TaskExecutionResultDetail>
  DescribeTaskExecutionResult& WithResult(ResultT&& value) {
    SetResult(std::forward<ResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of your task report, which provides detailed information
   * about for your DataSync transfer. For more information, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Creating
   * a task report</a>.</p>
   */
  inline const TaskReportConfig& GetTaskReportConfig() const { return m_taskReportConfig; }
  template <typename TaskReportConfigT = TaskReportConfig>
  void SetTaskReportConfig(TaskReportConfigT&& value) {
    m_taskReportConfigHasBeenSet = true;
    m_taskReportConfig = std::forward<TaskReportConfigT>(value);
  }
  template <typename TaskReportConfigT = TaskReportConfig>
  DescribeTaskExecutionResult& WithTaskReportConfig(TaskReportConfigT&& value) {
    SetTaskReportConfig(std::forward<TaskReportConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of files, objects, and directories that DataSync actually deletes
   * in your destination location. If you don't configure your task to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">delete
   * data in the destination that isn't in the source</a>, the value is always
   * <code>0</code>.</p>  <p>For <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>, this counter only includes files or objects. Directories are
   * counted in <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_DescribeTaskExecution.html#DataSync-DescribeTaskExecution-response-FoldersDeleted">FoldersDeleted</a>.
   * </p>
   */
  inline long long GetFilesDeleted() const { return m_filesDeleted; }
  inline void SetFilesDeleted(long long value) {
    m_filesDeletedHasBeenSet = true;
    m_filesDeleted = value;
  }
  inline DescribeTaskExecutionResult& WithFilesDeleted(long long value) {
    SetFilesDeleted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of files, objects, and directories that DataSync skips during your
   * transfer.</p>  <p>For <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>, this counter only includes files or objects. Directories are
   * counted in <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_DescribeTaskExecution.html#DataSync-DescribeTaskExecution-response-FoldersSkipped">FoldersSkipped</a>.
   * </p>
   */
  inline long long GetFilesSkipped() const { return m_filesSkipped; }
  inline void SetFilesSkipped(long long value) {
    m_filesSkippedHasBeenSet = true;
    m_filesSkipped = value;
  }
  inline DescribeTaskExecutionResult& WithFilesSkipped(long long value) {
    SetFilesSkipped(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of files, objects, and directories that DataSync verifies during
   * your transfer.</p>  <p>When you configure your task to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-data-verification-options.html">verify
   * only the data that's transferred</a>, DataSync doesn't verify directories in
   * some situations or files that fail to transfer.</p> <p>For <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>, this counter only includes files or objects. Directories are
   * counted in <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_DescribeTaskExecution.html#DataSync-DescribeTaskExecution-response-FoldersVerified">FoldersVerified</a>.
   * </p>
   */
  inline long long GetFilesVerified() const { return m_filesVerified; }
  inline void SetFilesVerified(long long value) {
    m_filesVerifiedHasBeenSet = true;
    m_filesVerified = value;
  }
  inline DescribeTaskExecutionResult& WithFilesVerified(long long value) {
    SetFilesVerified(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether DataSync generated a complete <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">task
   * report</a> for your transfer.</p>
   */
  inline const ReportResult& GetReportResult() const { return m_reportResult; }
  template <typename ReportResultT = ReportResult>
  void SetReportResult(ReportResultT&& value) {
    m_reportResultHasBeenSet = true;
    m_reportResult = std::forward<ReportResultT>(value);
  }
  template <typename ReportResultT = ReportResult>
  DescribeTaskExecutionResult& WithReportResult(ReportResultT&& value) {
    SetReportResult(std::forward<ReportResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of files, objects, and directories that DataSync expects to delete
   * in your destination location. If you don't configure your task to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">delete
   * data in the destination that isn't in the source</a>, the value is always
   * <code>0</code>.</p>  <p>For <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>, this counter only includes files or objects. Directories are
   * counted in <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_DescribeTaskExecution.html#DataSync-DescribeTaskExecution-response-EstimatedFoldersToDelete">EstimatedFoldersToDelete</a>.
   * </p>
   */
  inline long long GetEstimatedFilesToDelete() const { return m_estimatedFilesToDelete; }
  inline void SetEstimatedFilesToDelete(long long value) {
    m_estimatedFilesToDeleteHasBeenSet = true;
    m_estimatedFilesToDelete = value;
  }
  inline DescribeTaskExecutionResult& WithEstimatedFilesToDelete(long long value) {
    SetEstimatedFilesToDelete(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task mode that you're using. For more information, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Choosing
   * a task mode for your data transfer</a>.</p>
   */
  inline TaskMode GetTaskMode() const { return m_taskMode; }
  inline void SetTaskMode(TaskMode value) {
    m_taskModeHasBeenSet = true;
    m_taskMode = value;
  }
  inline DescribeTaskExecutionResult& WithTaskMode(TaskMode value) {
    SetTaskMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of files or objects that DataSync will attempt to transfer after
   * comparing your source and destination locations.</p>  <p>Applies only to
   * <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p>  <p>This counter isn't applicable if you configure
   * your task to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html#task-option-transfer-mode">transfer
   * all data</a>. In that scenario, DataSync copies everything from the source to
   * the destination without comparing differences between the locations.</p>
   */
  inline long long GetFilesPrepared() const { return m_filesPrepared; }
  inline void SetFilesPrepared(long long value) {
    m_filesPreparedHasBeenSet = true;
    m_filesPrepared = value;
  }
  inline DescribeTaskExecutionResult& WithFilesPrepared(long long value) {
    SetFilesPrepared(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of files or objects that DataSync finds at your locations.</p>
   *  <p>Applies only to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p>
   */
  inline const TaskExecutionFilesListedDetail& GetFilesListed() const { return m_filesListed; }
  template <typename FilesListedT = TaskExecutionFilesListedDetail>
  void SetFilesListed(FilesListedT&& value) {
    m_filesListedHasBeenSet = true;
    m_filesListed = std::forward<FilesListedT>(value);
  }
  template <typename FilesListedT = TaskExecutionFilesListedDetail>
  DescribeTaskExecutionResult& WithFilesListed(FilesListedT&& value) {
    SetFilesListed(std::forward<FilesListedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of files or objects that DataSync fails to prepare, transfer,
   * verify, and delete during your task execution.</p>  <p>Applies only to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p>
   */
  inline const TaskExecutionFilesFailedDetail& GetFilesFailed() const { return m_filesFailed; }
  template <typename FilesFailedT = TaskExecutionFilesFailedDetail>
  void SetFilesFailed(FilesFailedT&& value) {
    m_filesFailedHasBeenSet = true;
    m_filesFailed = std::forward<FilesFailedT>(value);
  }
  template <typename FilesFailedT = TaskExecutionFilesFailedDetail>
  DescribeTaskExecutionResult& WithFilesFailed(FilesFailedT&& value) {
    SetFilesFailed(std::forward<FilesFailedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of directories that DataSync expects to delete in your destination
   * location. If you don't configure your task to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">delete
   * data in the destination that isn't in the source</a>, the value is always
   * <code>0</code>.</p>  <p>Applies only to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p>
   */
  inline long long GetEstimatedFoldersToDelete() const { return m_estimatedFoldersToDelete; }
  inline void SetEstimatedFoldersToDelete(long long value) {
    m_estimatedFoldersToDeleteHasBeenSet = true;
    m_estimatedFoldersToDelete = value;
  }
  inline DescribeTaskExecutionResult& WithEstimatedFoldersToDelete(long long value) {
    SetEstimatedFoldersToDelete(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of directories that DataSync expects to transfer over the network.
   * This value is calculated as DataSync <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#understand-task-execution-statuses">prepares</a>
   * directories to transfer.</p> <p>How this gets calculated depends primarily on
   * your task’s <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Options.html#DataSync-Type-Options-TransferMode">transfer
   * mode</a> configuration:</p> <ul> <li> <p>If <code>TranserMode</code> is set to
   * <code>CHANGED</code> - The calculation is based on comparing the content of the
   * source and destination locations and determining the difference that needs to be
   * transferred. The difference can include:</p> <ul> <li> <p>Anything that's added
   * or modified at the source location.</p> </li> <li> <p>Anything that's in both
   * locations and modified at the destination after an initial transfer (unless <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Options.html#DataSync-Type-Options-OverwriteMode">OverwriteMode</a>
   * is set to <code>NEVER</code>).</p> </li> </ul> </li> <li> <p>If
   * <code>TranserMode</code> is set to <code>ALL</code> - The calculation is based
   * only on the items that DataSync finds at the source location.</p> </li> </ul>
   *  <p>Applies only to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p>
   */
  inline long long GetEstimatedFoldersToTransfer() const { return m_estimatedFoldersToTransfer; }
  inline void SetEstimatedFoldersToTransfer(long long value) {
    m_estimatedFoldersToTransferHasBeenSet = true;
    m_estimatedFoldersToTransfer = value;
  }
  inline DescribeTaskExecutionResult& WithEstimatedFoldersToTransfer(long long value) {
    SetEstimatedFoldersToTransfer(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of directories that DataSync skips during your transfer.</p>
   *  <p>Applies only to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p>
   */
  inline long long GetFoldersSkipped() const { return m_foldersSkipped; }
  inline void SetFoldersSkipped(long long value) {
    m_foldersSkippedHasBeenSet = true;
    m_foldersSkipped = value;
  }
  inline DescribeTaskExecutionResult& WithFoldersSkipped(long long value) {
    SetFoldersSkipped(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of directories that DataSync will attempt to transfer after
   * comparing your source and destination locations.</p>  <p>Applies only to
   * <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p>  <p>This counter isn't applicable if you configure
   * your task to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html#task-option-transfer-mode">transfer
   * all data</a>. In that scenario, DataSync copies everything from the source to
   * the destination without comparing differences between the locations.</p>
   */
  inline long long GetFoldersPrepared() const { return m_foldersPrepared; }
  inline void SetFoldersPrepared(long long value) {
    m_foldersPreparedHasBeenSet = true;
    m_foldersPrepared = value;
  }
  inline DescribeTaskExecutionResult& WithFoldersPrepared(long long value) {
    SetFoldersPrepared(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of directories that DataSync actually transfers over the network.
   * This value is updated periodically during your task execution when something is
   * read from the source and sent over the network.</p> <p>If DataSync fails to
   * transfer something, this value can be less than
   * <code>EstimatedFoldersToTransfer</code>. In some cases, this value can also be
   * greater than <code>EstimatedFoldersToTransfer</code>. </p>  <p>Applies
   * only to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p>
   */
  inline long long GetFoldersTransferred() const { return m_foldersTransferred; }
  inline void SetFoldersTransferred(long long value) {
    m_foldersTransferredHasBeenSet = true;
    m_foldersTransferred = value;
  }
  inline DescribeTaskExecutionResult& WithFoldersTransferred(long long value) {
    SetFoldersTransferred(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of directories that DataSync verifies during your transfer.</p>
   *  <p>Applies only to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p>
   */
  inline long long GetFoldersVerified() const { return m_foldersVerified; }
  inline void SetFoldersVerified(long long value) {
    m_foldersVerifiedHasBeenSet = true;
    m_foldersVerified = value;
  }
  inline DescribeTaskExecutionResult& WithFoldersVerified(long long value) {
    SetFoldersVerified(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of directories that DataSync actually deletes in your destination
   * location. If you don't configure your task to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">delete
   * data in the destination that isn't in the source</a>, the value is always
   * <code>0</code>.</p>  <p>Applies only to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p>
   */
  inline long long GetFoldersDeleted() const { return m_foldersDeleted; }
  inline void SetFoldersDeleted(long long value) {
    m_foldersDeletedHasBeenSet = true;
    m_foldersDeleted = value;
  }
  inline DescribeTaskExecutionResult& WithFoldersDeleted(long long value) {
    SetFoldersDeleted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of directories that DataSync finds at your locations.</p>
   * <p>Applies only to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p>
   */
  inline const TaskExecutionFoldersListedDetail& GetFoldersListed() const { return m_foldersListed; }
  template <typename FoldersListedT = TaskExecutionFoldersListedDetail>
  void SetFoldersListed(FoldersListedT&& value) {
    m_foldersListedHasBeenSet = true;
    m_foldersListed = std::forward<FoldersListedT>(value);
  }
  template <typename FoldersListedT = TaskExecutionFoldersListedDetail>
  DescribeTaskExecutionResult& WithFoldersListed(FoldersListedT&& value) {
    SetFoldersListed(std::forward<FoldersListedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of directories that DataSync fails to list, prepare, transfer,
   * verify, and delete during your task execution.</p>  <p>Applies only to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p>
   */
  inline const TaskExecutionFoldersFailedDetail& GetFoldersFailed() const { return m_foldersFailed; }
  template <typename FoldersFailedT = TaskExecutionFoldersFailedDetail>
  void SetFoldersFailed(FoldersFailedT&& value) {
    m_foldersFailedHasBeenSet = true;
    m_foldersFailed = std::forward<FoldersFailedT>(value);
  }
  template <typename FoldersFailedT = TaskExecutionFoldersFailedDetail>
  DescribeTaskExecutionResult& WithFoldersFailed(FoldersFailedT&& value) {
    SetFoldersFailed(std::forward<FoldersFailedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time that the task execution actually begins. For non-queued tasks,
   * <code>LaunchTime</code> and <code>StartTime</code> are typically the same. For
   * queued tasks, <code>LaunchTime</code> is typically later than
   * <code>StartTime</code> because previously queued tasks must finish running
   * before newer tasks can begin.</p>
   */
  inline const Aws::Utils::DateTime& GetLaunchTime() const { return m_launchTime; }
  template <typename LaunchTimeT = Aws::Utils::DateTime>
  void SetLaunchTime(LaunchTimeT&& value) {
    m_launchTimeHasBeenSet = true;
    m_launchTime = std::forward<LaunchTimeT>(value);
  }
  template <typename LaunchTimeT = Aws::Utils::DateTime>
  DescribeTaskExecutionResult& WithLaunchTime(LaunchTimeT&& value) {
    SetLaunchTime(std::forward<LaunchTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time that the transfer task ends.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  DescribeTaskExecutionResult& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeTaskExecutionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_taskExecutionArn;

  TaskExecutionStatus m_status{TaskExecutionStatus::NOT_SET};

  Options m_options;

  Aws::Vector<FilterRule> m_excludes;

  Aws::Vector<FilterRule> m_includes;

  ManifestConfig m_manifestConfig;

  Aws::Utils::DateTime m_startTime{};

  long long m_estimatedFilesToTransfer{0};

  long long m_estimatedBytesToTransfer{0};

  long long m_filesTransferred{0};

  long long m_bytesWritten{0};

  long long m_bytesTransferred{0};

  long long m_bytesCompressed{0};

  TaskExecutionResultDetail m_result;

  TaskReportConfig m_taskReportConfig;

  long long m_filesDeleted{0};

  long long m_filesSkipped{0};

  long long m_filesVerified{0};

  ReportResult m_reportResult;

  long long m_estimatedFilesToDelete{0};

  TaskMode m_taskMode{TaskMode::NOT_SET};

  long long m_filesPrepared{0};

  TaskExecutionFilesListedDetail m_filesListed;

  TaskExecutionFilesFailedDetail m_filesFailed;

  long long m_estimatedFoldersToDelete{0};

  long long m_estimatedFoldersToTransfer{0};

  long long m_foldersSkipped{0};

  long long m_foldersPrepared{0};

  long long m_foldersTransferred{0};

  long long m_foldersVerified{0};

  long long m_foldersDeleted{0};

  TaskExecutionFoldersListedDetail m_foldersListed;

  TaskExecutionFoldersFailedDetail m_foldersFailed;

  Aws::Utils::DateTime m_launchTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::String m_requestId;
  bool m_taskExecutionArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_optionsHasBeenSet = false;
  bool m_excludesHasBeenSet = false;
  bool m_includesHasBeenSet = false;
  bool m_manifestConfigHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_estimatedFilesToTransferHasBeenSet = false;
  bool m_estimatedBytesToTransferHasBeenSet = false;
  bool m_filesTransferredHasBeenSet = false;
  bool m_bytesWrittenHasBeenSet = false;
  bool m_bytesTransferredHasBeenSet = false;
  bool m_bytesCompressedHasBeenSet = false;
  bool m_resultHasBeenSet = false;
  bool m_taskReportConfigHasBeenSet = false;
  bool m_filesDeletedHasBeenSet = false;
  bool m_filesSkippedHasBeenSet = false;
  bool m_filesVerifiedHasBeenSet = false;
  bool m_reportResultHasBeenSet = false;
  bool m_estimatedFilesToDeleteHasBeenSet = false;
  bool m_taskModeHasBeenSet = false;
  bool m_filesPreparedHasBeenSet = false;
  bool m_filesListedHasBeenSet = false;
  bool m_filesFailedHasBeenSet = false;
  bool m_estimatedFoldersToDeleteHasBeenSet = false;
  bool m_estimatedFoldersToTransferHasBeenSet = false;
  bool m_foldersSkippedHasBeenSet = false;
  bool m_foldersPreparedHasBeenSet = false;
  bool m_foldersTransferredHasBeenSet = false;
  bool m_foldersVerifiedHasBeenSet = false;
  bool m_foldersDeletedHasBeenSet = false;
  bool m_foldersListedHasBeenSet = false;
  bool m_foldersFailedHasBeenSet = false;
  bool m_launchTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
