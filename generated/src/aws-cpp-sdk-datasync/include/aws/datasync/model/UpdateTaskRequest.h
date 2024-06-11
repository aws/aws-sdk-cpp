﻿/**
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
#include <aws/datasync/model/FilterRule.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>UpdateTaskResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateTaskRequest">AWS
   * API Reference</a></p>
   */
  class UpdateTaskRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTask"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the task that you want to update.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }
    inline UpdateTaskRequest& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline UpdateTaskRequest& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline UpdateTaskRequest& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Options& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const Options& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(Options&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline UpdateTaskRequest& WithOptions(const Options& value) { SetOptions(value); return *this;}
    inline UpdateTaskRequest& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}
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
    inline UpdateTaskRequest& WithExcludes(const Aws::Vector<FilterRule>& value) { SetExcludes(value); return *this;}
    inline UpdateTaskRequest& WithExcludes(Aws::Vector<FilterRule>&& value) { SetExcludes(std::move(value)); return *this;}
    inline UpdateTaskRequest& AddExcludes(const FilterRule& value) { m_excludesHasBeenSet = true; m_excludes.push_back(value); return *this; }
    inline UpdateTaskRequest& AddExcludes(FilterRule&& value) { m_excludesHasBeenSet = true; m_excludes.push_back(std::move(value)); return *this; }
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
    inline UpdateTaskRequest& WithSchedule(const TaskSchedule& value) { SetSchedule(value); return *this;}
    inline UpdateTaskRequest& WithSchedule(TaskSchedule&& value) { SetSchedule(std::move(value)); return *this;}
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
    inline UpdateTaskRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateTaskRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateTaskRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of an Amazon CloudWatch log group
     * for monitoring your task.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = value; }
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::move(value); }
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn.assign(value); }
    inline UpdateTaskRequest& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}
    inline UpdateTaskRequest& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}
    inline UpdateTaskRequest& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies include filters define the files, objects, and folders in your
     * source location that you want DataSync to transfer. For more information and
     * examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Specifying
     * what DataSync transfers by using filters</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const{ return m_includes; }
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }
    inline void SetIncludes(const Aws::Vector<FilterRule>& value) { m_includesHasBeenSet = true; m_includes = value; }
    inline void SetIncludes(Aws::Vector<FilterRule>&& value) { m_includesHasBeenSet = true; m_includes = std::move(value); }
    inline UpdateTaskRequest& WithIncludes(const Aws::Vector<FilterRule>& value) { SetIncludes(value); return *this;}
    inline UpdateTaskRequest& WithIncludes(Aws::Vector<FilterRule>&& value) { SetIncludes(std::move(value)); return *this;}
    inline UpdateTaskRequest& AddIncludes(const FilterRule& value) { m_includesHasBeenSet = true; m_includes.push_back(value); return *this; }
    inline UpdateTaskRequest& AddIncludes(FilterRule&& value) { m_includesHasBeenSet = true; m_includes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configures a manifest, which is a list of files or objects that you want
     * DataSync to transfer. For more information and configuration examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
     * what DataSync transfers by using a manifest</a>.</p> <p>When using this
     * parameter, your caller identity (the IAM role that you're using DataSync with)
     * must have the <code>iam:PassRole</code> permission. The <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/security-iam-awsmanpol.html#security-iam-awsmanpol-awsdatasyncfullaccess">AWSDataSyncFullAccess</a>
     * policy includes this permission.</p> <p>To remove a manifest configuration,
     * specify this parameter as empty.</p>
     */
    inline const ManifestConfig& GetManifestConfig() const{ return m_manifestConfig; }
    inline bool ManifestConfigHasBeenSet() const { return m_manifestConfigHasBeenSet; }
    inline void SetManifestConfig(const ManifestConfig& value) { m_manifestConfigHasBeenSet = true; m_manifestConfig = value; }
    inline void SetManifestConfig(ManifestConfig&& value) { m_manifestConfigHasBeenSet = true; m_manifestConfig = std::move(value); }
    inline UpdateTaskRequest& WithManifestConfig(const ManifestConfig& value) { SetManifestConfig(value); return *this;}
    inline UpdateTaskRequest& WithManifestConfig(ManifestConfig&& value) { SetManifestConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how you want to configure a task report, which provides detailed
     * information about your DataSync transfer. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Monitoring
     * your DataSync transfers with task reports</a>.</p> <p>When using this parameter,
     * your caller identity (the IAM role that you're using DataSync with) must have
     * the <code>iam:PassRole</code> permission. The <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/security-iam-awsmanpol.html#security-iam-awsmanpol-awsdatasyncfullaccess">AWSDataSyncFullAccess</a>
     * policy includes this permission.</p> <p>To remove a task report configuration,
     * specify this parameter as empty.</p>
     */
    inline const TaskReportConfig& GetTaskReportConfig() const{ return m_taskReportConfig; }
    inline bool TaskReportConfigHasBeenSet() const { return m_taskReportConfigHasBeenSet; }
    inline void SetTaskReportConfig(const TaskReportConfig& value) { m_taskReportConfigHasBeenSet = true; m_taskReportConfig = value; }
    inline void SetTaskReportConfig(TaskReportConfig&& value) { m_taskReportConfigHasBeenSet = true; m_taskReportConfig = std::move(value); }
    inline UpdateTaskRequest& WithTaskReportConfig(const TaskReportConfig& value) { SetTaskReportConfig(value); return *this;}
    inline UpdateTaskRequest& WithTaskReportConfig(TaskReportConfig&& value) { SetTaskReportConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Options m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<FilterRule> m_excludes;
    bool m_excludesHasBeenSet = false;

    TaskSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet = false;

    Aws::Vector<FilterRule> m_includes;
    bool m_includesHasBeenSet = false;

    ManifestConfig m_manifestConfig;
    bool m_manifestConfigHasBeenSet = false;

    TaskReportConfig m_taskReportConfig;
    bool m_taskReportConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
