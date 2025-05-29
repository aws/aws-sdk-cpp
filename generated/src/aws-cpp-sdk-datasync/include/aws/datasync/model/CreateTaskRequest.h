/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/Options.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/TaskSchedule.h>
#include <aws/datasync/model/ManifestConfig.h>
#include <aws/datasync/model/TaskReportConfig.h>
#include <aws/datasync/model/TaskMode.h>
#include <aws/datasync/model/FilterRule.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>CreateTaskRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateTaskRequest">AWS
   * API Reference</a></p>
   */
  class CreateTaskRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTask"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of your transfer's source location.</p>
     */
    inline const Aws::String& GetSourceLocationArn() const { return m_sourceLocationArn; }
    inline bool SourceLocationArnHasBeenSet() const { return m_sourceLocationArnHasBeenSet; }
    template<typename SourceLocationArnT = Aws::String>
    void SetSourceLocationArn(SourceLocationArnT&& value) { m_sourceLocationArnHasBeenSet = true; m_sourceLocationArn = std::forward<SourceLocationArnT>(value); }
    template<typename SourceLocationArnT = Aws::String>
    CreateTaskRequest& WithSourceLocationArn(SourceLocationArnT&& value) { SetSourceLocationArn(std::forward<SourceLocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of your transfer's destination location. </p>
     */
    inline const Aws::String& GetDestinationLocationArn() const { return m_destinationLocationArn; }
    inline bool DestinationLocationArnHasBeenSet() const { return m_destinationLocationArnHasBeenSet; }
    template<typename DestinationLocationArnT = Aws::String>
    void SetDestinationLocationArn(DestinationLocationArnT&& value) { m_destinationLocationArnHasBeenSet = true; m_destinationLocationArn = std::forward<DestinationLocationArnT>(value); }
    template<typename DestinationLocationArnT = Aws::String>
    CreateTaskRequest& WithDestinationLocationArn(DestinationLocationArnT&& value) { SetDestinationLocationArn(std::forward<DestinationLocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of an Amazon CloudWatch log group
     * for monitoring your task.</p> <p>For Enhanced mode tasks, you don't need to
     * specify anything. DataSync automatically sends logs to a CloudWatch log group
     * named <code>/aws/datasync</code>.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const { return m_cloudWatchLogGroupArn; }
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    void SetCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::forward<CloudWatchLogGroupArnT>(value); }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    CreateTaskRequest& WithCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { SetCloudWatchLogGroupArn(std::forward<CloudWatchLogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of your task.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateTaskRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies your task's settings, such as preserving file metadata, verifying
     * data integrity, among other options.</p>
     */
    inline const Options& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Options>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Options>
    CreateTaskRequest& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies exclude filters that define the files, objects, and folders in your
     * source location that you don't want DataSync to transfer. For more information
     * and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Specifying
     * what DataSync transfers by using filters</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const { return m_excludes; }
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }
    template<typename ExcludesT = Aws::Vector<FilterRule>>
    void SetExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes = std::forward<ExcludesT>(value); }
    template<typename ExcludesT = Aws::Vector<FilterRule>>
    CreateTaskRequest& WithExcludes(ExcludesT&& value) { SetExcludes(std::forward<ExcludesT>(value)); return *this;}
    template<typename ExcludesT = FilterRule>
    CreateTaskRequest& AddExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes.emplace_back(std::forward<ExcludesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a schedule for when you want your task to run. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">Scheduling
     * your task</a>.</p>
     */
    inline const TaskSchedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = TaskSchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = TaskSchedule>
    CreateTaskRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the tags that you want to apply to your task.</p> <p> <i>Tags</i>
     * are key-value pairs that help you manage, filter, and search for your DataSync
     * resources.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    CreateTaskRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    CreateTaskRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies include filters that define the files, objects, and folders in your
     * source location that you want DataSync to transfer. For more information and
     * examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Specifying
     * what DataSync transfers by using filters</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const { return m_includes; }
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }
    template<typename IncludesT = Aws::Vector<FilterRule>>
    void SetIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes = std::forward<IncludesT>(value); }
    template<typename IncludesT = Aws::Vector<FilterRule>>
    CreateTaskRequest& WithIncludes(IncludesT&& value) { SetIncludes(std::forward<IncludesT>(value)); return *this;}
    template<typename IncludesT = FilterRule>
    CreateTaskRequest& AddIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes.emplace_back(std::forward<IncludesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configures a manifest, which is a list of files or objects that you want
     * DataSync to transfer. For more information and configuration examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
     * what DataSync transfers by using a manifest</a>.</p> <p>When using this
     * parameter, your caller identity (the role that you're using DataSync with) must
     * have the <code>iam:PassRole</code> permission. The <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/security-iam-awsmanpol.html#security-iam-awsmanpol-awsdatasyncfullaccess">AWSDataSyncFullAccess</a>
     * policy includes this permission.</p>
     */
    inline const ManifestConfig& GetManifestConfig() const { return m_manifestConfig; }
    inline bool ManifestConfigHasBeenSet() const { return m_manifestConfigHasBeenSet; }
    template<typename ManifestConfigT = ManifestConfig>
    void SetManifestConfig(ManifestConfigT&& value) { m_manifestConfigHasBeenSet = true; m_manifestConfig = std::forward<ManifestConfigT>(value); }
    template<typename ManifestConfigT = ManifestConfig>
    CreateTaskRequest& WithManifestConfig(ManifestConfigT&& value) { SetManifestConfig(std::forward<ManifestConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how you want to configure a task report, which provides detailed
     * information about your DataSync transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Monitoring
     * your DataSync transfers with task reports</a>.</p> <p>When using this parameter,
     * your caller identity (the role that you're using DataSync with) must have the
     * <code>iam:PassRole</code> permission. The <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/security-iam-awsmanpol.html#security-iam-awsmanpol-awsdatasyncfullaccess">AWSDataSyncFullAccess</a>
     * policy includes this permission.</p>
     */
    inline const TaskReportConfig& GetTaskReportConfig() const { return m_taskReportConfig; }
    inline bool TaskReportConfigHasBeenSet() const { return m_taskReportConfigHasBeenSet; }
    template<typename TaskReportConfigT = TaskReportConfig>
    void SetTaskReportConfig(TaskReportConfigT&& value) { m_taskReportConfigHasBeenSet = true; m_taskReportConfig = std::forward<TaskReportConfigT>(value); }
    template<typename TaskReportConfigT = TaskReportConfig>
    CreateTaskRequest& WithTaskReportConfig(TaskReportConfigT&& value) { SetTaskReportConfig(std::forward<TaskReportConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies one of the following task modes for your data transfer:</p> <ul>
     * <li> <p> <code>ENHANCED</code> - Transfer virtually unlimited numbers of objects
     * with higher performance than Basic mode. Enhanced mode tasks optimize the data
     * transfer process by listing, preparing, transferring, and verifying data in
     * parallel. Enhanced mode is currently available for transfers between Amazon S3
     * locations, transfers between Azure Blob and Amazon S3 without an agent, and
     * transfers between other clouds and Amazon S3 without an agent.</p>  <p>To
     * create an Enhanced mode task, the IAM role that you use to call the
     * <code>CreateTask</code> operation must have the
     * <code>iam:CreateServiceLinkedRole</code> permission.</p>  </li> <li> <p>
     * <code>BASIC</code> (default) - Transfer files or objects between Amazon Web
     * Services storage and all other supported DataSync locations. Basic mode tasks
     * are subject to <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-limits.html">quotas</a>
     * on the number of files, objects, and directories in a dataset. Basic mode
     * sequentially prepares, transfers, and verifies data, making it slower than
     * Enhanced mode for most workloads.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html#task-mode-differences">Understanding
     * task mode differences</a>.</p>
     */
    inline TaskMode GetTaskMode() const { return m_taskMode; }
    inline bool TaskModeHasBeenSet() const { return m_taskModeHasBeenSet; }
    inline void SetTaskMode(TaskMode value) { m_taskModeHasBeenSet = true; m_taskMode = value; }
    inline CreateTaskRequest& WithTaskMode(TaskMode value) { SetTaskMode(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceLocationArn;
    bool m_sourceLocationArnHasBeenSet = false;

    Aws::String m_destinationLocationArn;
    bool m_destinationLocationArnHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Options m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<FilterRule> m_excludes;
    bool m_excludesHasBeenSet = false;

    TaskSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<FilterRule> m_includes;
    bool m_includesHasBeenSet = false;

    ManifestConfig m_manifestConfig;
    bool m_manifestConfigHasBeenSet = false;

    TaskReportConfig m_taskReportConfig;
    bool m_taskReportConfigHasBeenSet = false;

    TaskMode m_taskMode{TaskMode::NOT_SET};
    bool m_taskModeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
