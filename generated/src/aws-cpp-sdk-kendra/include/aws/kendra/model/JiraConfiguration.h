/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
#include <aws/kendra/model/IssueSubEntity.h>
#include <aws/kendra/model/DataSourceToIndexFieldMapping.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information to connect to Jira as your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/JiraConfiguration">AWS
   * API Reference</a></p>
   */
  class JiraConfiguration
  {
  public:
    AWS_KENDRA_API JiraConfiguration() = default;
    AWS_KENDRA_API JiraConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API JiraConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the Jira account. For example, <i>company.atlassian.net</i>.</p>
     */
    inline const Aws::String& GetJiraAccountUrl() const { return m_jiraAccountUrl; }
    inline bool JiraAccountUrlHasBeenSet() const { return m_jiraAccountUrlHasBeenSet; }
    template<typename JiraAccountUrlT = Aws::String>
    void SetJiraAccountUrl(JiraAccountUrlT&& value) { m_jiraAccountUrlHasBeenSet = true; m_jiraAccountUrl = std::forward<JiraAccountUrlT>(value); }
    template<typename JiraAccountUrlT = Aws::String>
    JiraConfiguration& WithJiraAccountUrl(JiraAccountUrlT&& value) { SetJiraAccountUrl(std::forward<JiraAccountUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a secret in Secrets Manager contains the
     * key-value pairs required to connect to your Jira data source. The secret must
     * contain a JSON structure with the following keys:</p> <ul> <li> <p>jiraId—The
     * Jira user name or email.</p> </li> <li> <p>jiraCredentials—The Jira API token.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-jira.html">Using
     * a Jira data source</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    JiraConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to use the Jira change log to determine which documents
     * require updating in the index. Depending on the change log's size, it may take
     * longer for Amazon Kendra to use the change log than to scan all of your
     * documents in Jira.</p>
     */
    inline bool GetUseChangeLog() const { return m_useChangeLog; }
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }
    inline JiraConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify which projects to crawl in your Jira data source. You can specify one
     * or more Jira project IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::Vector<Aws::String>>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::Vector<Aws::String>>
    JiraConfiguration& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    template<typename ProjectT = Aws::String>
    JiraConfiguration& AddProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project.emplace_back(std::forward<ProjectT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify which issue types to crawl in your Jira data source. You can specify
     * one or more of these options to crawl.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIssueType() const { return m_issueType; }
    inline bool IssueTypeHasBeenSet() const { return m_issueTypeHasBeenSet; }
    template<typename IssueTypeT = Aws::Vector<Aws::String>>
    void SetIssueType(IssueTypeT&& value) { m_issueTypeHasBeenSet = true; m_issueType = std::forward<IssueTypeT>(value); }
    template<typename IssueTypeT = Aws::Vector<Aws::String>>
    JiraConfiguration& WithIssueType(IssueTypeT&& value) { SetIssueType(std::forward<IssueTypeT>(value)); return *this;}
    template<typename IssueTypeT = Aws::String>
    JiraConfiguration& AddIssueType(IssueTypeT&& value) { m_issueTypeHasBeenSet = true; m_issueType.emplace_back(std::forward<IssueTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify which statuses to crawl in your Jira data source. You can specify one
     * or more of these options to crawl.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::Vector<Aws::String>>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::Vector<Aws::String>>
    JiraConfiguration& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    template<typename StatusT = Aws::String>
    JiraConfiguration& AddStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status.emplace_back(std::forward<StatusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify whether to crawl comments, attachments, and work logs. You can
     * specify one or more of these options.</p>
     */
    inline const Aws::Vector<IssueSubEntity>& GetIssueSubEntityFilter() const { return m_issueSubEntityFilter; }
    inline bool IssueSubEntityFilterHasBeenSet() const { return m_issueSubEntityFilterHasBeenSet; }
    template<typename IssueSubEntityFilterT = Aws::Vector<IssueSubEntity>>
    void SetIssueSubEntityFilter(IssueSubEntityFilterT&& value) { m_issueSubEntityFilterHasBeenSet = true; m_issueSubEntityFilter = std::forward<IssueSubEntityFilterT>(value); }
    template<typename IssueSubEntityFilterT = Aws::Vector<IssueSubEntity>>
    JiraConfiguration& WithIssueSubEntityFilter(IssueSubEntityFilterT&& value) { SetIssueSubEntityFilter(std::forward<IssueSubEntityFilterT>(value)); return *this;}
    inline JiraConfiguration& AddIssueSubEntityFilter(IssueSubEntity value) { m_issueSubEntityFilterHasBeenSet = true; m_issueSubEntityFilter.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Jira attachments to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to Jira fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Jira data source field names must exist in your Jira
     * custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetAttachmentFieldMappings() const { return m_attachmentFieldMappings; }
    inline bool AttachmentFieldMappingsHasBeenSet() const { return m_attachmentFieldMappingsHasBeenSet; }
    template<typename AttachmentFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetAttachmentFieldMappings(AttachmentFieldMappingsT&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings = std::forward<AttachmentFieldMappingsT>(value); }
    template<typename AttachmentFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    JiraConfiguration& WithAttachmentFieldMappings(AttachmentFieldMappingsT&& value) { SetAttachmentFieldMappings(std::forward<AttachmentFieldMappingsT>(value)); return *this;}
    template<typename AttachmentFieldMappingsT = DataSourceToIndexFieldMapping>
    JiraConfiguration& AddAttachmentFieldMappings(AttachmentFieldMappingsT&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings.emplace_back(std::forward<AttachmentFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Jira comments to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Jira fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Jira data source field names must exist in your Jira
     * custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetCommentFieldMappings() const { return m_commentFieldMappings; }
    inline bool CommentFieldMappingsHasBeenSet() const { return m_commentFieldMappingsHasBeenSet; }
    template<typename CommentFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetCommentFieldMappings(CommentFieldMappingsT&& value) { m_commentFieldMappingsHasBeenSet = true; m_commentFieldMappings = std::forward<CommentFieldMappingsT>(value); }
    template<typename CommentFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    JiraConfiguration& WithCommentFieldMappings(CommentFieldMappingsT&& value) { SetCommentFieldMappings(std::forward<CommentFieldMappingsT>(value)); return *this;}
    template<typename CommentFieldMappingsT = DataSourceToIndexFieldMapping>
    JiraConfiguration& AddCommentFieldMappings(CommentFieldMappingsT&& value) { m_commentFieldMappingsHasBeenSet = true; m_commentFieldMappings.emplace_back(std::forward<CommentFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Jira issues to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Jira fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Jira data source field names must exist in your Jira
     * custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetIssueFieldMappings() const { return m_issueFieldMappings; }
    inline bool IssueFieldMappingsHasBeenSet() const { return m_issueFieldMappingsHasBeenSet; }
    template<typename IssueFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetIssueFieldMappings(IssueFieldMappingsT&& value) { m_issueFieldMappingsHasBeenSet = true; m_issueFieldMappings = std::forward<IssueFieldMappingsT>(value); }
    template<typename IssueFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    JiraConfiguration& WithIssueFieldMappings(IssueFieldMappingsT&& value) { SetIssueFieldMappings(std::forward<IssueFieldMappingsT>(value)); return *this;}
    template<typename IssueFieldMappingsT = DataSourceToIndexFieldMapping>
    JiraConfiguration& AddIssueFieldMappings(IssueFieldMappingsT&& value) { m_issueFieldMappingsHasBeenSet = true; m_issueFieldMappings.emplace_back(std::forward<IssueFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Jira projects to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Jira fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Jira data source field names must exist in your Jira
     * custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetProjectFieldMappings() const { return m_projectFieldMappings; }
    inline bool ProjectFieldMappingsHasBeenSet() const { return m_projectFieldMappingsHasBeenSet; }
    template<typename ProjectFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetProjectFieldMappings(ProjectFieldMappingsT&& value) { m_projectFieldMappingsHasBeenSet = true; m_projectFieldMappings = std::forward<ProjectFieldMappingsT>(value); }
    template<typename ProjectFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    JiraConfiguration& WithProjectFieldMappings(ProjectFieldMappingsT&& value) { SetProjectFieldMappings(std::forward<ProjectFieldMappingsT>(value)); return *this;}
    template<typename ProjectFieldMappingsT = DataSourceToIndexFieldMapping>
    JiraConfiguration& AddProjectFieldMappings(ProjectFieldMappingsT&& value) { m_projectFieldMappingsHasBeenSet = true; m_projectFieldMappings.emplace_back(std::forward<ProjectFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Jira work logs to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Jira fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Jira data source field names must exist in your Jira
     * custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetWorkLogFieldMappings() const { return m_workLogFieldMappings; }
    inline bool WorkLogFieldMappingsHasBeenSet() const { return m_workLogFieldMappingsHasBeenSet; }
    template<typename WorkLogFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetWorkLogFieldMappings(WorkLogFieldMappingsT&& value) { m_workLogFieldMappingsHasBeenSet = true; m_workLogFieldMappings = std::forward<WorkLogFieldMappingsT>(value); }
    template<typename WorkLogFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    JiraConfiguration& WithWorkLogFieldMappings(WorkLogFieldMappingsT&& value) { SetWorkLogFieldMappings(std::forward<WorkLogFieldMappingsT>(value)); return *this;}
    template<typename WorkLogFieldMappingsT = DataSourceToIndexFieldMapping>
    JiraConfiguration& AddWorkLogFieldMappings(WorkLogFieldMappingsT&& value) { m_workLogFieldMappingsHasBeenSet = true; m_workLogFieldMappings.emplace_back(std::forward<WorkLogFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain file paths, file
     * names, and file types in your Jira data source. Files that match the patterns
     * are included in the index. Files that don't match the patterns are excluded from
     * the index. If a file matches both an inclusion pattern and an exclusion pattern,
     * the exclusion pattern takes precedence and the file isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const { return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    void SetInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::forward<InclusionPatternsT>(value); }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    JiraConfiguration& WithInclusionPatterns(InclusionPatternsT&& value) { SetInclusionPatterns(std::forward<InclusionPatternsT>(value)); return *this;}
    template<typename InclusionPatternsT = Aws::String>
    JiraConfiguration& AddInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.emplace_back(std::forward<InclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain file paths, file
     * names, and file types in your Jira data source. Files that match the patterns
     * are excluded from the index. Files that don’t match the patterns are included in
     * the index. If a file matches both an inclusion pattern and an exclusion pattern,
     * the exclusion pattern takes precedence and the file isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const { return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    void SetExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::forward<ExclusionPatternsT>(value); }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    JiraConfiguration& WithExclusionPatterns(ExclusionPatternsT&& value) { SetExclusionPatterns(std::forward<ExclusionPatternsT>(value)); return *this;}
    template<typename ExclusionPatternsT = Aws::String>
    JiraConfiguration& AddExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.emplace_back(std::forward<ExclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Jira. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    JiraConfiguration& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jiraAccountUrl;
    bool m_jiraAccountUrlHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    bool m_useChangeLog{false};
    bool m_useChangeLogHasBeenSet = false;

    Aws::Vector<Aws::String> m_project;
    bool m_projectHasBeenSet = false;

    Aws::Vector<Aws::String> m_issueType;
    bool m_issueTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<IssueSubEntity> m_issueSubEntityFilter;
    bool m_issueSubEntityFilterHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_attachmentFieldMappings;
    bool m_attachmentFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_commentFieldMappings;
    bool m_commentFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_issueFieldMappings;
    bool m_issueFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_projectFieldMappings;
    bool m_projectFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_workLogFieldMappings;
    bool m_workLogFieldMappingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
