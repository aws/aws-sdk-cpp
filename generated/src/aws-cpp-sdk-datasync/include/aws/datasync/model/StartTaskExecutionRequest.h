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
    AWS_DATASYNC_API StartTaskExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTaskExecution"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the task that you want to
     * start.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the task that you want to
     * start.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the task that you want to
     * start.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the task that you want to
     * start.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the task that you want to
     * start.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the task that you want to
     * start.</p>
     */
    inline StartTaskExecutionRequest& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the task that you want to
     * start.</p>
     */
    inline StartTaskExecutionRequest& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the task that you want to
     * start.</p>
     */
    inline StartTaskExecutionRequest& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    
    inline const Options& GetOverrideOptions() const{ return m_overrideOptions; }

    
    inline bool OverrideOptionsHasBeenSet() const { return m_overrideOptionsHasBeenSet; }

    
    inline void SetOverrideOptions(const Options& value) { m_overrideOptionsHasBeenSet = true; m_overrideOptions = value; }

    
    inline void SetOverrideOptions(Options&& value) { m_overrideOptionsHasBeenSet = true; m_overrideOptions = std::move(value); }

    
    inline StartTaskExecutionRequest& WithOverrideOptions(const Options& value) { SetOverrideOptions(value); return *this;}

    
    inline StartTaskExecutionRequest& WithOverrideOptions(Options&& value) { SetOverrideOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies a list of filter rules that determines which files to include when
     * running a task. The pattern should contain a single filter string that consists
     * of the patterns to include. The patterns are delimited by "|" (that is, a pipe),
     * for example, <code>"/folder1|/folder2"</code>. </p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const{ return m_includes; }

    /**
     * <p>Specifies a list of filter rules that determines which files to include when
     * running a task. The pattern should contain a single filter string that consists
     * of the patterns to include. The patterns are delimited by "|" (that is, a pipe),
     * for example, <code>"/folder1|/folder2"</code>. </p>
     */
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }

    /**
     * <p>Specifies a list of filter rules that determines which files to include when
     * running a task. The pattern should contain a single filter string that consists
     * of the patterns to include. The patterns are delimited by "|" (that is, a pipe),
     * for example, <code>"/folder1|/folder2"</code>. </p>
     */
    inline void SetIncludes(const Aws::Vector<FilterRule>& value) { m_includesHasBeenSet = true; m_includes = value; }

    /**
     * <p>Specifies a list of filter rules that determines which files to include when
     * running a task. The pattern should contain a single filter string that consists
     * of the patterns to include. The patterns are delimited by "|" (that is, a pipe),
     * for example, <code>"/folder1|/folder2"</code>. </p>
     */
    inline void SetIncludes(Aws::Vector<FilterRule>&& value) { m_includesHasBeenSet = true; m_includes = std::move(value); }

    /**
     * <p>Specifies a list of filter rules that determines which files to include when
     * running a task. The pattern should contain a single filter string that consists
     * of the patterns to include. The patterns are delimited by "|" (that is, a pipe),
     * for example, <code>"/folder1|/folder2"</code>. </p>
     */
    inline StartTaskExecutionRequest& WithIncludes(const Aws::Vector<FilterRule>& value) { SetIncludes(value); return *this;}

    /**
     * <p>Specifies a list of filter rules that determines which files to include when
     * running a task. The pattern should contain a single filter string that consists
     * of the patterns to include. The patterns are delimited by "|" (that is, a pipe),
     * for example, <code>"/folder1|/folder2"</code>. </p>
     */
    inline StartTaskExecutionRequest& WithIncludes(Aws::Vector<FilterRule>&& value) { SetIncludes(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of filter rules that determines which files to include when
     * running a task. The pattern should contain a single filter string that consists
     * of the patterns to include. The patterns are delimited by "|" (that is, a pipe),
     * for example, <code>"/folder1|/folder2"</code>. </p>
     */
    inline StartTaskExecutionRequest& AddIncludes(const FilterRule& value) { m_includesHasBeenSet = true; m_includes.push_back(value); return *this; }

    /**
     * <p>Specifies a list of filter rules that determines which files to include when
     * running a task. The pattern should contain a single filter string that consists
     * of the patterns to include. The patterns are delimited by "|" (that is, a pipe),
     * for example, <code>"/folder1|/folder2"</code>. </p>
     */
    inline StartTaskExecutionRequest& AddIncludes(FilterRule&& value) { m_includesHasBeenSet = true; m_includes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies a list of filter rules that determines which files to exclude from
     * a task. The list contains a single filter string that consists of the patterns
     * to exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const{ return m_excludes; }

    /**
     * <p>Specifies a list of filter rules that determines which files to exclude from
     * a task. The list contains a single filter string that consists of the patterns
     * to exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p>
     */
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }

    /**
     * <p>Specifies a list of filter rules that determines which files to exclude from
     * a task. The list contains a single filter string that consists of the patterns
     * to exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p>
     */
    inline void SetExcludes(const Aws::Vector<FilterRule>& value) { m_excludesHasBeenSet = true; m_excludes = value; }

    /**
     * <p>Specifies a list of filter rules that determines which files to exclude from
     * a task. The list contains a single filter string that consists of the patterns
     * to exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p>
     */
    inline void SetExcludes(Aws::Vector<FilterRule>&& value) { m_excludesHasBeenSet = true; m_excludes = std::move(value); }

    /**
     * <p>Specifies a list of filter rules that determines which files to exclude from
     * a task. The list contains a single filter string that consists of the patterns
     * to exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p>
     */
    inline StartTaskExecutionRequest& WithExcludes(const Aws::Vector<FilterRule>& value) { SetExcludes(value); return *this;}

    /**
     * <p>Specifies a list of filter rules that determines which files to exclude from
     * a task. The list contains a single filter string that consists of the patterns
     * to exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p>
     */
    inline StartTaskExecutionRequest& WithExcludes(Aws::Vector<FilterRule>&& value) { SetExcludes(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of filter rules that determines which files to exclude from
     * a task. The list contains a single filter string that consists of the patterns
     * to exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p>
     */
    inline StartTaskExecutionRequest& AddExcludes(const FilterRule& value) { m_excludesHasBeenSet = true; m_excludes.push_back(value); return *this; }

    /**
     * <p>Specifies a list of filter rules that determines which files to exclude from
     * a task. The list contains a single filter string that consists of the patterns
     * to exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p>
     */
    inline StartTaskExecutionRequest& AddExcludes(FilterRule&& value) { m_excludesHasBeenSet = true; m_excludes.push_back(std::move(value)); return *this; }


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
    inline const ManifestConfig& GetManifestConfig() const{ return m_manifestConfig; }

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
    inline bool ManifestConfigHasBeenSet() const { return m_manifestConfigHasBeenSet; }

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
    inline void SetManifestConfig(const ManifestConfig& value) { m_manifestConfigHasBeenSet = true; m_manifestConfig = value; }

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
    inline void SetManifestConfig(ManifestConfig&& value) { m_manifestConfigHasBeenSet = true; m_manifestConfig = std::move(value); }

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
    inline StartTaskExecutionRequest& WithManifestConfig(const ManifestConfig& value) { SetManifestConfig(value); return *this;}

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
    inline StartTaskExecutionRequest& WithManifestConfig(ManifestConfig&& value) { SetManifestConfig(std::move(value)); return *this;}


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
    inline const TaskReportConfig& GetTaskReportConfig() const{ return m_taskReportConfig; }

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
    inline bool TaskReportConfigHasBeenSet() const { return m_taskReportConfigHasBeenSet; }

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
    inline void SetTaskReportConfig(const TaskReportConfig& value) { m_taskReportConfigHasBeenSet = true; m_taskReportConfig = value; }

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
    inline void SetTaskReportConfig(TaskReportConfig&& value) { m_taskReportConfigHasBeenSet = true; m_taskReportConfig = std::move(value); }

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
    inline StartTaskExecutionRequest& WithTaskReportConfig(const TaskReportConfig& value) { SetTaskReportConfig(value); return *this;}

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
    inline StartTaskExecutionRequest& WithTaskReportConfig(TaskReportConfig&& value) { SetTaskReportConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies the tags that you want to apply to the Amazon Resource Name (ARN)
     * representing the task execution.</p> <p> <i>Tags</i> are key-value pairs that
     * help you manage, filter, and search for your DataSync resources.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the tags that you want to apply to the Amazon Resource Name (ARN)
     * representing the task execution.</p> <p> <i>Tags</i> are key-value pairs that
     * help you manage, filter, and search for your DataSync resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies the tags that you want to apply to the Amazon Resource Name (ARN)
     * representing the task execution.</p> <p> <i>Tags</i> are key-value pairs that
     * help you manage, filter, and search for your DataSync resources.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies the tags that you want to apply to the Amazon Resource Name (ARN)
     * representing the task execution.</p> <p> <i>Tags</i> are key-value pairs that
     * help you manage, filter, and search for your DataSync resources.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies the tags that you want to apply to the Amazon Resource Name (ARN)
     * representing the task execution.</p> <p> <i>Tags</i> are key-value pairs that
     * help you manage, filter, and search for your DataSync resources.</p>
     */
    inline StartTaskExecutionRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the tags that you want to apply to the Amazon Resource Name (ARN)
     * representing the task execution.</p> <p> <i>Tags</i> are key-value pairs that
     * help you manage, filter, and search for your DataSync resources.</p>
     */
    inline StartTaskExecutionRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the tags that you want to apply to the Amazon Resource Name (ARN)
     * representing the task execution.</p> <p> <i>Tags</i> are key-value pairs that
     * help you manage, filter, and search for your DataSync resources.</p>
     */
    inline StartTaskExecutionRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the tags that you want to apply to the Amazon Resource Name (ARN)
     * representing the task execution.</p> <p> <i>Tags</i> are key-value pairs that
     * help you manage, filter, and search for your DataSync resources.</p>
     */
    inline StartTaskExecutionRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
