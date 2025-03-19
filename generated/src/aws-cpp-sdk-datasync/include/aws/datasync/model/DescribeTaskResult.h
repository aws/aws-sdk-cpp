/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/TaskStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/Options.h>
#include <aws/datasync/model/TaskSchedule.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/ManifestConfig.h>
#include <aws/datasync/model/TaskReportConfig.h>
#include <aws/datasync/model/TaskScheduleDetails.h>
#include <aws/datasync/model/TaskMode.h>
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
  class DescribeTaskResult
  {
  public:
    AWS_DATASYNC_API DescribeTaskResult() = default;
    AWS_DATASYNC_API DescribeTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of your task.</p>
     */
    inline const Aws::String& GetTaskArn() const { return m_taskArn; }
    template<typename TaskArnT = Aws::String>
    void SetTaskArn(TaskArnT&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::forward<TaskArnT>(value); }
    template<typename TaskArnT = Aws::String>
    DescribeTaskResult& WithTaskArn(TaskArnT&& value) { SetTaskArn(std::forward<TaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your task. For information about what each status means, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/understand-task-statuses.html#understand-task-creation-statuses">Task
     * statuses</a>.</p>
     */
    inline TaskStatus GetStatus() const { return m_status; }
    inline void SetStatus(TaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeTaskResult& WithStatus(TaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your task.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeTaskResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the most recent task execution.</p>
     */
    inline const Aws::String& GetCurrentTaskExecutionArn() const { return m_currentTaskExecutionArn; }
    template<typename CurrentTaskExecutionArnT = Aws::String>
    void SetCurrentTaskExecutionArn(CurrentTaskExecutionArnT&& value) { m_currentTaskExecutionArnHasBeenSet = true; m_currentTaskExecutionArn = std::forward<CurrentTaskExecutionArnT>(value); }
    template<typename CurrentTaskExecutionArnT = Aws::String>
    DescribeTaskResult& WithCurrentTaskExecutionArn(CurrentTaskExecutionArnT&& value) { SetCurrentTaskExecutionArn(std::forward<CurrentTaskExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of your transfer's source location.</p>
     */
    inline const Aws::String& GetSourceLocationArn() const { return m_sourceLocationArn; }
    template<typename SourceLocationArnT = Aws::String>
    void SetSourceLocationArn(SourceLocationArnT&& value) { m_sourceLocationArnHasBeenSet = true; m_sourceLocationArn = std::forward<SourceLocationArnT>(value); }
    template<typename SourceLocationArnT = Aws::String>
    DescribeTaskResult& WithSourceLocationArn(SourceLocationArnT&& value) { SetSourceLocationArn(std::forward<SourceLocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of your transfer's destination location.</p>
     */
    inline const Aws::String& GetDestinationLocationArn() const { return m_destinationLocationArn; }
    template<typename DestinationLocationArnT = Aws::String>
    void SetDestinationLocationArn(DestinationLocationArnT&& value) { m_destinationLocationArnHasBeenSet = true; m_destinationLocationArn = std::forward<DestinationLocationArnT>(value); }
    template<typename DestinationLocationArnT = Aws::String>
    DescribeTaskResult& WithDestinationLocationArn(DestinationLocationArnT&& value) { SetDestinationLocationArn(std::forward<DestinationLocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon CloudWatch log group for
     * monitoring your task.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-logging.html">Monitoring
     * data transfers with CloudWatch Logs</a>.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const { return m_cloudWatchLogGroupArn; }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    void SetCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::forward<CloudWatchLogGroupArnT>(value); }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    DescribeTaskResult& WithCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { SetCloudWatchLogGroupArn(std::forward<CloudWatchLogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> that DataSync created for your source location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceNetworkInterfaceArns() const { return m_sourceNetworkInterfaceArns; }
    template<typename SourceNetworkInterfaceArnsT = Aws::Vector<Aws::String>>
    void SetSourceNetworkInterfaceArns(SourceNetworkInterfaceArnsT&& value) { m_sourceNetworkInterfaceArnsHasBeenSet = true; m_sourceNetworkInterfaceArns = std::forward<SourceNetworkInterfaceArnsT>(value); }
    template<typename SourceNetworkInterfaceArnsT = Aws::Vector<Aws::String>>
    DescribeTaskResult& WithSourceNetworkInterfaceArns(SourceNetworkInterfaceArnsT&& value) { SetSourceNetworkInterfaceArns(std::forward<SourceNetworkInterfaceArnsT>(value)); return *this;}
    template<typename SourceNetworkInterfaceArnsT = Aws::String>
    DescribeTaskResult& AddSourceNetworkInterfaceArns(SourceNetworkInterfaceArnsT&& value) { m_sourceNetworkInterfaceArnsHasBeenSet = true; m_sourceNetworkInterfaceArns.emplace_back(std::forward<SourceNetworkInterfaceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARNs of the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> that DataSync created for your destination location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationNetworkInterfaceArns() const { return m_destinationNetworkInterfaceArns; }
    template<typename DestinationNetworkInterfaceArnsT = Aws::Vector<Aws::String>>
    void SetDestinationNetworkInterfaceArns(DestinationNetworkInterfaceArnsT&& value) { m_destinationNetworkInterfaceArnsHasBeenSet = true; m_destinationNetworkInterfaceArns = std::forward<DestinationNetworkInterfaceArnsT>(value); }
    template<typename DestinationNetworkInterfaceArnsT = Aws::Vector<Aws::String>>
    DescribeTaskResult& WithDestinationNetworkInterfaceArns(DestinationNetworkInterfaceArnsT&& value) { SetDestinationNetworkInterfaceArns(std::forward<DestinationNetworkInterfaceArnsT>(value)); return *this;}
    template<typename DestinationNetworkInterfaceArnsT = Aws::String>
    DescribeTaskResult& AddDestinationNetworkInterfaceArns(DestinationNetworkInterfaceArnsT&& value) { m_destinationNetworkInterfaceArnsHasBeenSet = true; m_destinationNetworkInterfaceArns.emplace_back(std::forward<DestinationNetworkInterfaceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The task's settings. For example, what file metadata gets preserved, how data
     * integrity gets verified at the end of your transfer, bandwidth limits, among
     * other options.</p>
     */
    inline const Options& GetOptions() const { return m_options; }
    template<typename OptionsT = Options>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Options>
    DescribeTaskResult& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclude filters that define the files, objects, and folders in your
     * source location that you don't want DataSync to transfer. For more information
     * and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Specifying
     * what DataSync transfers by using filters</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const { return m_excludes; }
    template<typename ExcludesT = Aws::Vector<FilterRule>>
    void SetExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes = std::forward<ExcludesT>(value); }
    template<typename ExcludesT = Aws::Vector<FilterRule>>
    DescribeTaskResult& WithExcludes(ExcludesT&& value) { SetExcludes(std::forward<ExcludesT>(value)); return *this;}
    template<typename ExcludesT = FilterRule>
    DescribeTaskResult& AddExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes.emplace_back(std::forward<ExcludesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The schedule for when you want your task to run. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">Scheduling
     * your task</a>.</p>
     */
    inline const TaskSchedule& GetSchedule() const { return m_schedule; }
    template<typename ScheduleT = TaskSchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = TaskSchedule>
    DescribeTaskResult& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there's an issue with your task, you can use the error code to help you
     * troubleshoot the problem. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">Troubleshooting
     * issues with DataSync transfers</a>.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    DescribeTaskResult& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there's an issue with your task, you can use the error details to help you
     * troubleshoot the problem. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">Troubleshooting
     * issues with DataSync transfers</a>.</p>
     */
    inline const Aws::String& GetErrorDetail() const { return m_errorDetail; }
    template<typename ErrorDetailT = Aws::String>
    void SetErrorDetail(ErrorDetailT&& value) { m_errorDetailHasBeenSet = true; m_errorDetail = std::forward<ErrorDetailT>(value); }
    template<typename ErrorDetailT = Aws::String>
    DescribeTaskResult& WithErrorDetail(ErrorDetailT&& value) { SetErrorDetail(std::forward<ErrorDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeTaskResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The include filters that define the files, objects, and folders in your
     * source location that you want DataSync to transfer. For more information and
     * examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Specifying
     * what DataSync transfers by using filters</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const { return m_includes; }
    template<typename IncludesT = Aws::Vector<FilterRule>>
    void SetIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes = std::forward<IncludesT>(value); }
    template<typename IncludesT = Aws::Vector<FilterRule>>
    DescribeTaskResult& WithIncludes(IncludesT&& value) { SetIncludes(std::forward<IncludesT>(value)); return *this;}
    template<typename IncludesT = FilterRule>
    DescribeTaskResult& AddIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes.emplace_back(std::forward<IncludesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of the manifest that lists the files or objects that you
     * want DataSync to transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
     * what DataSync transfers by using a manifest</a>.</p>
     */
    inline const ManifestConfig& GetManifestConfig() const { return m_manifestConfig; }
    template<typename ManifestConfigT = ManifestConfig>
    void SetManifestConfig(ManifestConfigT&& value) { m_manifestConfigHasBeenSet = true; m_manifestConfig = std::forward<ManifestConfigT>(value); }
    template<typename ManifestConfigT = ManifestConfig>
    DescribeTaskResult& WithManifestConfig(ManifestConfigT&& value) { SetManifestConfig(std::forward<ManifestConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of your task report, which provides detailed information
     * about your DataSync transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Monitoring
     * your DataSync transfers with task reports</a>.</p>
     */
    inline const TaskReportConfig& GetTaskReportConfig() const { return m_taskReportConfig; }
    template<typename TaskReportConfigT = TaskReportConfig>
    void SetTaskReportConfig(TaskReportConfigT&& value) { m_taskReportConfigHasBeenSet = true; m_taskReportConfig = std::forward<TaskReportConfigT>(value); }
    template<typename TaskReportConfigT = TaskReportConfig>
    DescribeTaskResult& WithTaskReportConfig(TaskReportConfigT&& value) { SetTaskReportConfig(std::forward<TaskReportConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about your <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">task
     * schedule</a>.</p>
     */
    inline const TaskScheduleDetails& GetScheduleDetails() const { return m_scheduleDetails; }
    template<typename ScheduleDetailsT = TaskScheduleDetails>
    void SetScheduleDetails(ScheduleDetailsT&& value) { m_scheduleDetailsHasBeenSet = true; m_scheduleDetails = std::forward<ScheduleDetailsT>(value); }
    template<typename ScheduleDetailsT = TaskScheduleDetails>
    DescribeTaskResult& WithScheduleDetails(ScheduleDetailsT&& value) { SetScheduleDetails(std::forward<ScheduleDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task mode that you're using. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Choosing
     * a task mode for your data transfer</a>.</p>
     */
    inline TaskMode GetTaskMode() const { return m_taskMode; }
    inline void SetTaskMode(TaskMode value) { m_taskModeHasBeenSet = true; m_taskMode = value; }
    inline DescribeTaskResult& WithTaskMode(TaskMode value) { SetTaskMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    TaskStatus m_status{TaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_currentTaskExecutionArn;
    bool m_currentTaskExecutionArnHasBeenSet = false;

    Aws::String m_sourceLocationArn;
    bool m_sourceLocationArnHasBeenSet = false;

    Aws::String m_destinationLocationArn;
    bool m_destinationLocationArnHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceNetworkInterfaceArns;
    bool m_sourceNetworkInterfaceArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationNetworkInterfaceArns;
    bool m_destinationNetworkInterfaceArnsHasBeenSet = false;

    Options m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<FilterRule> m_excludes;
    bool m_excludesHasBeenSet = false;

    TaskSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorDetail;
    bool m_errorDetailHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<FilterRule> m_includes;
    bool m_includesHasBeenSet = false;

    ManifestConfig m_manifestConfig;
    bool m_manifestConfigHasBeenSet = false;

    TaskReportConfig m_taskReportConfig;
    bool m_taskReportConfigHasBeenSet = false;

    TaskScheduleDetails m_scheduleDetails;
    bool m_scheduleDetailsHasBeenSet = false;

    TaskMode m_taskMode{TaskMode::NOT_SET};
    bool m_taskModeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
