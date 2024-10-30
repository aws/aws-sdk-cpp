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
    AWS_DATASYNC_API DescribeTaskResult();
    AWS_DATASYNC_API DescribeTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of your task.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }
    inline DescribeTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline DescribeTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline DescribeTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your task. For information about what each status means, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/understand-task-statuses.html#understand-task-creation-statuses">Task
     * statuses</a>.</p>
     */
    inline const TaskStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TaskStatus& value) { m_status = value; }
    inline void SetStatus(TaskStatus&& value) { m_status = std::move(value); }
    inline DescribeTaskResult& WithStatus(const TaskStatus& value) { SetStatus(value); return *this;}
    inline DescribeTaskResult& WithStatus(TaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your task.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeTaskResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeTaskResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeTaskResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the most recent task execution.</p>
     */
    inline const Aws::String& GetCurrentTaskExecutionArn() const{ return m_currentTaskExecutionArn; }
    inline void SetCurrentTaskExecutionArn(const Aws::String& value) { m_currentTaskExecutionArn = value; }
    inline void SetCurrentTaskExecutionArn(Aws::String&& value) { m_currentTaskExecutionArn = std::move(value); }
    inline void SetCurrentTaskExecutionArn(const char* value) { m_currentTaskExecutionArn.assign(value); }
    inline DescribeTaskResult& WithCurrentTaskExecutionArn(const Aws::String& value) { SetCurrentTaskExecutionArn(value); return *this;}
    inline DescribeTaskResult& WithCurrentTaskExecutionArn(Aws::String&& value) { SetCurrentTaskExecutionArn(std::move(value)); return *this;}
    inline DescribeTaskResult& WithCurrentTaskExecutionArn(const char* value) { SetCurrentTaskExecutionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of your transfer's source location.</p>
     */
    inline const Aws::String& GetSourceLocationArn() const{ return m_sourceLocationArn; }
    inline void SetSourceLocationArn(const Aws::String& value) { m_sourceLocationArn = value; }
    inline void SetSourceLocationArn(Aws::String&& value) { m_sourceLocationArn = std::move(value); }
    inline void SetSourceLocationArn(const char* value) { m_sourceLocationArn.assign(value); }
    inline DescribeTaskResult& WithSourceLocationArn(const Aws::String& value) { SetSourceLocationArn(value); return *this;}
    inline DescribeTaskResult& WithSourceLocationArn(Aws::String&& value) { SetSourceLocationArn(std::move(value)); return *this;}
    inline DescribeTaskResult& WithSourceLocationArn(const char* value) { SetSourceLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of your transfer's destination location.</p>
     */
    inline const Aws::String& GetDestinationLocationArn() const{ return m_destinationLocationArn; }
    inline void SetDestinationLocationArn(const Aws::String& value) { m_destinationLocationArn = value; }
    inline void SetDestinationLocationArn(Aws::String&& value) { m_destinationLocationArn = std::move(value); }
    inline void SetDestinationLocationArn(const char* value) { m_destinationLocationArn.assign(value); }
    inline DescribeTaskResult& WithDestinationLocationArn(const Aws::String& value) { SetDestinationLocationArn(value); return *this;}
    inline DescribeTaskResult& WithDestinationLocationArn(Aws::String&& value) { SetDestinationLocationArn(std::move(value)); return *this;}
    inline DescribeTaskResult& WithDestinationLocationArn(const char* value) { SetDestinationLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon CloudWatch log group for
     * monitoring your task.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-logging.html">Monitoring
     * data transfers with CloudWatch Logs</a>.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArn = value; }
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArn = std::move(value); }
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArn.assign(value); }
    inline DescribeTaskResult& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}
    inline DescribeTaskResult& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}
    inline DescribeTaskResult& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> that DataSync created for your source location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceNetworkInterfaceArns() const{ return m_sourceNetworkInterfaceArns; }
    inline void SetSourceNetworkInterfaceArns(const Aws::Vector<Aws::String>& value) { m_sourceNetworkInterfaceArns = value; }
    inline void SetSourceNetworkInterfaceArns(Aws::Vector<Aws::String>&& value) { m_sourceNetworkInterfaceArns = std::move(value); }
    inline DescribeTaskResult& WithSourceNetworkInterfaceArns(const Aws::Vector<Aws::String>& value) { SetSourceNetworkInterfaceArns(value); return *this;}
    inline DescribeTaskResult& WithSourceNetworkInterfaceArns(Aws::Vector<Aws::String>&& value) { SetSourceNetworkInterfaceArns(std::move(value)); return *this;}
    inline DescribeTaskResult& AddSourceNetworkInterfaceArns(const Aws::String& value) { m_sourceNetworkInterfaceArns.push_back(value); return *this; }
    inline DescribeTaskResult& AddSourceNetworkInterfaceArns(Aws::String&& value) { m_sourceNetworkInterfaceArns.push_back(std::move(value)); return *this; }
    inline DescribeTaskResult& AddSourceNetworkInterfaceArns(const char* value) { m_sourceNetworkInterfaceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARNs of the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> that DataSync created for your destination location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationNetworkInterfaceArns() const{ return m_destinationNetworkInterfaceArns; }
    inline void SetDestinationNetworkInterfaceArns(const Aws::Vector<Aws::String>& value) { m_destinationNetworkInterfaceArns = value; }
    inline void SetDestinationNetworkInterfaceArns(Aws::Vector<Aws::String>&& value) { m_destinationNetworkInterfaceArns = std::move(value); }
    inline DescribeTaskResult& WithDestinationNetworkInterfaceArns(const Aws::Vector<Aws::String>& value) { SetDestinationNetworkInterfaceArns(value); return *this;}
    inline DescribeTaskResult& WithDestinationNetworkInterfaceArns(Aws::Vector<Aws::String>&& value) { SetDestinationNetworkInterfaceArns(std::move(value)); return *this;}
    inline DescribeTaskResult& AddDestinationNetworkInterfaceArns(const Aws::String& value) { m_destinationNetworkInterfaceArns.push_back(value); return *this; }
    inline DescribeTaskResult& AddDestinationNetworkInterfaceArns(Aws::String&& value) { m_destinationNetworkInterfaceArns.push_back(std::move(value)); return *this; }
    inline DescribeTaskResult& AddDestinationNetworkInterfaceArns(const char* value) { m_destinationNetworkInterfaceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The task's settings. For example, what file metadata gets preserved, how data
     * integrity gets verified at the end of your transfer, bandwidth limits, among
     * other options.</p>
     */
    inline const Options& GetOptions() const{ return m_options; }
    inline void SetOptions(const Options& value) { m_options = value; }
    inline void SetOptions(Options&& value) { m_options = std::move(value); }
    inline DescribeTaskResult& WithOptions(const Options& value) { SetOptions(value); return *this;}
    inline DescribeTaskResult& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclude filters that define the files, objects, and folders in your
     * source location that you don't want DataSync to transfer. For more information
     * and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Specifying
     * what DataSync transfers by using filters</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const{ return m_excludes; }
    inline void SetExcludes(const Aws::Vector<FilterRule>& value) { m_excludes = value; }
    inline void SetExcludes(Aws::Vector<FilterRule>&& value) { m_excludes = std::move(value); }
    inline DescribeTaskResult& WithExcludes(const Aws::Vector<FilterRule>& value) { SetExcludes(value); return *this;}
    inline DescribeTaskResult& WithExcludes(Aws::Vector<FilterRule>&& value) { SetExcludes(std::move(value)); return *this;}
    inline DescribeTaskResult& AddExcludes(const FilterRule& value) { m_excludes.push_back(value); return *this; }
    inline DescribeTaskResult& AddExcludes(FilterRule&& value) { m_excludes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The schedule for when you want your task to run. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">Scheduling
     * your task</a>.</p>
     */
    inline const TaskSchedule& GetSchedule() const{ return m_schedule; }
    inline void SetSchedule(const TaskSchedule& value) { m_schedule = value; }
    inline void SetSchedule(TaskSchedule&& value) { m_schedule = std::move(value); }
    inline DescribeTaskResult& WithSchedule(const TaskSchedule& value) { SetSchedule(value); return *this;}
    inline DescribeTaskResult& WithSchedule(TaskSchedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there's an issue with your task, you can use the error code to help you
     * troubleshoot the problem. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">Troubleshooting
     * issues with DataSync transfers</a>.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCode.assign(value); }
    inline DescribeTaskResult& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline DescribeTaskResult& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline DescribeTaskResult& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there's an issue with your task, you can use the error details to help you
     * troubleshoot the problem. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">Troubleshooting
     * issues with DataSync transfers</a>.</p>
     */
    inline const Aws::String& GetErrorDetail() const{ return m_errorDetail; }
    inline void SetErrorDetail(const Aws::String& value) { m_errorDetail = value; }
    inline void SetErrorDetail(Aws::String&& value) { m_errorDetail = std::move(value); }
    inline void SetErrorDetail(const char* value) { m_errorDetail.assign(value); }
    inline DescribeTaskResult& WithErrorDetail(const Aws::String& value) { SetErrorDetail(value); return *this;}
    inline DescribeTaskResult& WithErrorDetail(Aws::String&& value) { SetErrorDetail(std::move(value)); return *this;}
    inline DescribeTaskResult& WithErrorDetail(const char* value) { SetErrorDetail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeTaskResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeTaskResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The include filters that define the files, objects, and folders in your
     * source location that you want DataSync to transfer. For more information and
     * examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Specifying
     * what DataSync transfers by using filters</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const{ return m_includes; }
    inline void SetIncludes(const Aws::Vector<FilterRule>& value) { m_includes = value; }
    inline void SetIncludes(Aws::Vector<FilterRule>&& value) { m_includes = std::move(value); }
    inline DescribeTaskResult& WithIncludes(const Aws::Vector<FilterRule>& value) { SetIncludes(value); return *this;}
    inline DescribeTaskResult& WithIncludes(Aws::Vector<FilterRule>&& value) { SetIncludes(std::move(value)); return *this;}
    inline DescribeTaskResult& AddIncludes(const FilterRule& value) { m_includes.push_back(value); return *this; }
    inline DescribeTaskResult& AddIncludes(FilterRule&& value) { m_includes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of the manifest that lists the files or objects that you
     * want DataSync to transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
     * what DataSync transfers by using a manifest</a>.</p>
     */
    inline const ManifestConfig& GetManifestConfig() const{ return m_manifestConfig; }
    inline void SetManifestConfig(const ManifestConfig& value) { m_manifestConfig = value; }
    inline void SetManifestConfig(ManifestConfig&& value) { m_manifestConfig = std::move(value); }
    inline DescribeTaskResult& WithManifestConfig(const ManifestConfig& value) { SetManifestConfig(value); return *this;}
    inline DescribeTaskResult& WithManifestConfig(ManifestConfig&& value) { SetManifestConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of your task report, which provides detailed information
     * about your DataSync transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Monitoring
     * your DataSync transfers with task reports</a>.</p>
     */
    inline const TaskReportConfig& GetTaskReportConfig() const{ return m_taskReportConfig; }
    inline void SetTaskReportConfig(const TaskReportConfig& value) { m_taskReportConfig = value; }
    inline void SetTaskReportConfig(TaskReportConfig&& value) { m_taskReportConfig = std::move(value); }
    inline DescribeTaskResult& WithTaskReportConfig(const TaskReportConfig& value) { SetTaskReportConfig(value); return *this;}
    inline DescribeTaskResult& WithTaskReportConfig(TaskReportConfig&& value) { SetTaskReportConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about your <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">task
     * schedule</a>.</p>
     */
    inline const TaskScheduleDetails& GetScheduleDetails() const{ return m_scheduleDetails; }
    inline void SetScheduleDetails(const TaskScheduleDetails& value) { m_scheduleDetails = value; }
    inline void SetScheduleDetails(TaskScheduleDetails&& value) { m_scheduleDetails = std::move(value); }
    inline DescribeTaskResult& WithScheduleDetails(const TaskScheduleDetails& value) { SetScheduleDetails(value); return *this;}
    inline DescribeTaskResult& WithScheduleDetails(TaskScheduleDetails&& value) { SetScheduleDetails(std::move(value)); return *this;}
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
    inline DescribeTaskResult& WithTaskMode(const TaskMode& value) { SetTaskMode(value); return *this;}
    inline DescribeTaskResult& WithTaskMode(TaskMode&& value) { SetTaskMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskArn;

    TaskStatus m_status;

    Aws::String m_name;

    Aws::String m_currentTaskExecutionArn;

    Aws::String m_sourceLocationArn;

    Aws::String m_destinationLocationArn;

    Aws::String m_cloudWatchLogGroupArn;

    Aws::Vector<Aws::String> m_sourceNetworkInterfaceArns;

    Aws::Vector<Aws::String> m_destinationNetworkInterfaceArns;

    Options m_options;

    Aws::Vector<FilterRule> m_excludes;

    TaskSchedule m_schedule;

    Aws::String m_errorCode;

    Aws::String m_errorDetail;

    Aws::Utils::DateTime m_creationTime;

    Aws::Vector<FilterRule> m_includes;

    ManifestConfig m_manifestConfig;

    TaskReportConfig m_taskReportConfig;

    TaskScheduleDetails m_scheduleDetails;

    TaskMode m_taskMode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
