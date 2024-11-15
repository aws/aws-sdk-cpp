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
    AWS_DATASYNC_API CreateTaskRequest();

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
    inline const Aws::String& GetSourceLocationArn() const{ return m_sourceLocationArn; }
    inline bool SourceLocationArnHasBeenSet() const { return m_sourceLocationArnHasBeenSet; }
    inline void SetSourceLocationArn(const Aws::String& value) { m_sourceLocationArnHasBeenSet = true; m_sourceLocationArn = value; }
    inline void SetSourceLocationArn(Aws::String&& value) { m_sourceLocationArnHasBeenSet = true; m_sourceLocationArn = std::move(value); }
    inline void SetSourceLocationArn(const char* value) { m_sourceLocationArnHasBeenSet = true; m_sourceLocationArn.assign(value); }
    inline CreateTaskRequest& WithSourceLocationArn(const Aws::String& value) { SetSourceLocationArn(value); return *this;}
    inline CreateTaskRequest& WithSourceLocationArn(Aws::String&& value) { SetSourceLocationArn(std::move(value)); return *this;}
    inline CreateTaskRequest& WithSourceLocationArn(const char* value) { SetSourceLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of your transfer's destination location. </p>
     */
    inline const Aws::String& GetDestinationLocationArn() const{ return m_destinationLocationArn; }
    inline bool DestinationLocationArnHasBeenSet() const { return m_destinationLocationArnHasBeenSet; }
    inline void SetDestinationLocationArn(const Aws::String& value) { m_destinationLocationArnHasBeenSet = true; m_destinationLocationArn = value; }
    inline void SetDestinationLocationArn(Aws::String&& value) { m_destinationLocationArnHasBeenSet = true; m_destinationLocationArn = std::move(value); }
    inline void SetDestinationLocationArn(const char* value) { m_destinationLocationArnHasBeenSet = true; m_destinationLocationArn.assign(value); }
    inline CreateTaskRequest& WithDestinationLocationArn(const Aws::String& value) { SetDestinationLocationArn(value); return *this;}
    inline CreateTaskRequest& WithDestinationLocationArn(Aws::String&& value) { SetDestinationLocationArn(std::move(value)); return *this;}
    inline CreateTaskRequest& WithDestinationLocationArn(const char* value) { SetDestinationLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of an Amazon CloudWatch log group
     * for monitoring your task.</p> <p>For Enhanced mode tasks, you don't need to
     * specify anything. DataSync automatically sends logs to a CloudWatch log group
     * named <code>/aws/datasync</code>.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = value; }
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::move(value); }
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn.assign(value); }
    inline CreateTaskRequest& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}
    inline CreateTaskRequest& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}
    inline CreateTaskRequest& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of your task.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateTaskRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateTaskRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateTaskRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies your task's settings, such as preserving file metadata, verifying
     * data integrity, among other options.</p>
     */
    inline const Options& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const Options& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(Options&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline CreateTaskRequest& WithOptions(const Options& value) { SetOptions(value); return *this;}
    inline CreateTaskRequest& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies exclude filters that define the files, objects, and folders in your
     * source location that you don't want DataSync to transfer. For more information
     * and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Specifying
     * what DataSync transfers by using filters</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const{ return m_excludes; }
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }
    inline void SetExcludes(const Aws::Vector<FilterRule>& value) { m_excludesHasBeenSet = true; m_excludes = value; }
    inline void SetExcludes(Aws::Vector<FilterRule>&& value) { m_excludesHasBeenSet = true; m_excludes = std::move(value); }
    inline CreateTaskRequest& WithExcludes(const Aws::Vector<FilterRule>& value) { SetExcludes(value); return *this;}
    inline CreateTaskRequest& WithExcludes(Aws::Vector<FilterRule>&& value) { SetExcludes(std::move(value)); return *this;}
    inline CreateTaskRequest& AddExcludes(const FilterRule& value) { m_excludesHasBeenSet = true; m_excludes.push_back(value); return *this; }
    inline CreateTaskRequest& AddExcludes(FilterRule&& value) { m_excludesHasBeenSet = true; m_excludes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a schedule for when you want your task to run. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">Scheduling
     * your task</a>.</p>
     */
    inline const TaskSchedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const TaskSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(TaskSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline CreateTaskRequest& WithSchedule(const TaskSchedule& value) { SetSchedule(value); return *this;}
    inline CreateTaskRequest& WithSchedule(TaskSchedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the tags that you want to apply to your task.</p> <p> <i>Tags</i>
     * are key-value pairs that help you manage, filter, and search for your DataSync
     * resources.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTaskRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}
    inline CreateTaskRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTaskRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTaskRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies include filters that define the files, objects, and folders in your
     * source location that you want DataSync to transfer. For more information and
     * examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Specifying
     * what DataSync transfers by using filters</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const{ return m_includes; }
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }
    inline void SetIncludes(const Aws::Vector<FilterRule>& value) { m_includesHasBeenSet = true; m_includes = value; }
    inline void SetIncludes(Aws::Vector<FilterRule>&& value) { m_includesHasBeenSet = true; m_includes = std::move(value); }
    inline CreateTaskRequest& WithIncludes(const Aws::Vector<FilterRule>& value) { SetIncludes(value); return *this;}
    inline CreateTaskRequest& WithIncludes(Aws::Vector<FilterRule>&& value) { SetIncludes(std::move(value)); return *this;}
    inline CreateTaskRequest& AddIncludes(const FilterRule& value) { m_includesHasBeenSet = true; m_includes.push_back(value); return *this; }
    inline CreateTaskRequest& AddIncludes(FilterRule&& value) { m_includesHasBeenSet = true; m_includes.push_back(std::move(value)); return *this; }
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
    inline const ManifestConfig& GetManifestConfig() const{ return m_manifestConfig; }
    inline bool ManifestConfigHasBeenSet() const { return m_manifestConfigHasBeenSet; }
    inline void SetManifestConfig(const ManifestConfig& value) { m_manifestConfigHasBeenSet = true; m_manifestConfig = value; }
    inline void SetManifestConfig(ManifestConfig&& value) { m_manifestConfigHasBeenSet = true; m_manifestConfig = std::move(value); }
    inline CreateTaskRequest& WithManifestConfig(const ManifestConfig& value) { SetManifestConfig(value); return *this;}
    inline CreateTaskRequest& WithManifestConfig(ManifestConfig&& value) { SetManifestConfig(std::move(value)); return *this;}
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
    inline const TaskReportConfig& GetTaskReportConfig() const{ return m_taskReportConfig; }
    inline bool TaskReportConfigHasBeenSet() const { return m_taskReportConfigHasBeenSet; }
    inline void SetTaskReportConfig(const TaskReportConfig& value) { m_taskReportConfigHasBeenSet = true; m_taskReportConfig = value; }
    inline void SetTaskReportConfig(TaskReportConfig&& value) { m_taskReportConfigHasBeenSet = true; m_taskReportConfig = std::move(value); }
    inline CreateTaskRequest& WithTaskReportConfig(const TaskReportConfig& value) { SetTaskReportConfig(value); return *this;}
    inline CreateTaskRequest& WithTaskReportConfig(TaskReportConfig&& value) { SetTaskReportConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies one of the following task modes for your data transfer:</p> <ul>
     * <li> <p> <code>ENHANCED</code> - Transfer virtually unlimited numbers of objects
     * with higher performance than Basic mode. Enhanced mode tasks optimize the data
     * transfer process by listing, preparing, transferring, and verifying data in
     * parallel. Enhanced mode is currently available for transfers between Amazon S3
     * locations.</p>  <p>To create an Enhanced mode task, the IAM role that you
     * use to call the <code>CreateTask</code> operation must have the
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
    inline const TaskMode& GetTaskMode() const{ return m_taskMode; }
    inline bool TaskModeHasBeenSet() const { return m_taskModeHasBeenSet; }
    inline void SetTaskMode(const TaskMode& value) { m_taskModeHasBeenSet = true; m_taskMode = value; }
    inline void SetTaskMode(TaskMode&& value) { m_taskModeHasBeenSet = true; m_taskMode = std::move(value); }
    inline CreateTaskRequest& WithTaskMode(const TaskMode& value) { SetTaskMode(value); return *this;}
    inline CreateTaskRequest& WithTaskMode(TaskMode&& value) { SetTaskMode(std::move(value)); return *this;}
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

    TaskMode m_taskMode;
    bool m_taskModeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
