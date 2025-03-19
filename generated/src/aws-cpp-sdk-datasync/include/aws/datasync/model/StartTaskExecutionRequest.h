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
#include <aws/datasync/model/ManifestConfig.h>
#include <aws/datasync/model/TaskReportConfig.h>
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
   * <p>StartTaskExecutionRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/StartTaskExecutionRequest">AWS
   * API Reference</a></p>
   */
  class StartTaskExecutionRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API StartTaskExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTaskExecution"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the task that you want to
     * start.</p>
     */
    inline const Aws::String& GetTaskArn() const { return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    template<typename TaskArnT = Aws::String>
    void SetTaskArn(TaskArnT&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::forward<TaskArnT>(value); }
    template<typename TaskArnT = Aws::String>
    StartTaskExecutionRequest& WithTaskArn(TaskArnT&& value) { SetTaskArn(std::forward<TaskArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Options& GetOverrideOptions() const { return m_overrideOptions; }
    inline bool OverrideOptionsHasBeenSet() const { return m_overrideOptionsHasBeenSet; }
    template<typename OverrideOptionsT = Options>
    void SetOverrideOptions(OverrideOptionsT&& value) { m_overrideOptionsHasBeenSet = true; m_overrideOptions = std::forward<OverrideOptionsT>(value); }
    template<typename OverrideOptionsT = Options>
    StartTaskExecutionRequest& WithOverrideOptions(OverrideOptionsT&& value) { SetOverrideOptions(std::forward<OverrideOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a list of filter rules that determines which files to include when
     * running a task. The pattern should contain a single filter string that consists
     * of the patterns to include. The patterns are delimited by "|" (that is, a pipe),
     * for example, <code>"/folder1|/folder2"</code>. </p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const { return m_includes; }
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }
    template<typename IncludesT = Aws::Vector<FilterRule>>
    void SetIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes = std::forward<IncludesT>(value); }
    template<typename IncludesT = Aws::Vector<FilterRule>>
    StartTaskExecutionRequest& WithIncludes(IncludesT&& value) { SetIncludes(std::forward<IncludesT>(value)); return *this;}
    template<typename IncludesT = FilterRule>
    StartTaskExecutionRequest& AddIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes.emplace_back(std::forward<IncludesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a list of filter rules that determines which files to exclude from
     * a task. The list contains a single filter string that consists of the patterns
     * to exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const { return m_excludes; }
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }
    template<typename ExcludesT = Aws::Vector<FilterRule>>
    void SetExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes = std::forward<ExcludesT>(value); }
    template<typename ExcludesT = Aws::Vector<FilterRule>>
    StartTaskExecutionRequest& WithExcludes(ExcludesT&& value) { SetExcludes(std::forward<ExcludesT>(value)); return *this;}
    template<typename ExcludesT = FilterRule>
    StartTaskExecutionRequest& AddExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes.emplace_back(std::forward<ExcludesT>(value)); return *this; }
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
     * policy includes this permission.</p> <p>To remove a manifest configuration,
     * specify this parameter with an empty value.</p>
     */
    inline const ManifestConfig& GetManifestConfig() const { return m_manifestConfig; }
    inline bool ManifestConfigHasBeenSet() const { return m_manifestConfigHasBeenSet; }
    template<typename ManifestConfigT = ManifestConfig>
    void SetManifestConfig(ManifestConfigT&& value) { m_manifestConfigHasBeenSet = true; m_manifestConfig = std::forward<ManifestConfigT>(value); }
    template<typename ManifestConfigT = ManifestConfig>
    StartTaskExecutionRequest& WithManifestConfig(ManifestConfigT&& value) { SetManifestConfig(std::forward<ManifestConfigT>(value)); return *this;}
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
     * policy includes this permission.</p> <p>To remove a task report configuration,
     * specify this parameter as empty.</p>
     */
    inline const TaskReportConfig& GetTaskReportConfig() const { return m_taskReportConfig; }
    inline bool TaskReportConfigHasBeenSet() const { return m_taskReportConfigHasBeenSet; }
    template<typename TaskReportConfigT = TaskReportConfig>
    void SetTaskReportConfig(TaskReportConfigT&& value) { m_taskReportConfigHasBeenSet = true; m_taskReportConfig = std::forward<TaskReportConfigT>(value); }
    template<typename TaskReportConfigT = TaskReportConfig>
    StartTaskExecutionRequest& WithTaskReportConfig(TaskReportConfigT&& value) { SetTaskReportConfig(std::forward<TaskReportConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the tags that you want to apply to the Amazon Resource Name (ARN)
     * representing the task execution.</p> <p> <i>Tags</i> are key-value pairs that
     * help you manage, filter, and search for your DataSync resources.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    StartTaskExecutionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    StartTaskExecutionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Options m_overrideOptions;
    bool m_overrideOptionsHasBeenSet = false;

    Aws::Vector<FilterRule> m_includes;
    bool m_includesHasBeenSet = false;

    Aws::Vector<FilterRule> m_excludes;
    bool m_excludesHasBeenSet = false;

    ManifestConfig m_manifestConfig;
    bool m_manifestConfigHasBeenSet = false;

    TaskReportConfig m_taskReportConfig;
    bool m_taskReportConfigHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
