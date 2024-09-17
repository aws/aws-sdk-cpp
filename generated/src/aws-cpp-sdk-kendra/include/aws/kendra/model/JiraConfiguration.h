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
    AWS_KENDRA_API JiraConfiguration();
    AWS_KENDRA_API JiraConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API JiraConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the Jira account. For example, <i>company.atlassian.net</i>.</p>
     */
    inline const Aws::String& GetJiraAccountUrl() const{ return m_jiraAccountUrl; }
    inline bool JiraAccountUrlHasBeenSet() const { return m_jiraAccountUrlHasBeenSet; }
    inline void SetJiraAccountUrl(const Aws::String& value) { m_jiraAccountUrlHasBeenSet = true; m_jiraAccountUrl = value; }
    inline void SetJiraAccountUrl(Aws::String&& value) { m_jiraAccountUrlHasBeenSet = true; m_jiraAccountUrl = std::move(value); }
    inline void SetJiraAccountUrl(const char* value) { m_jiraAccountUrlHasBeenSet = true; m_jiraAccountUrl.assign(value); }
    inline JiraConfiguration& WithJiraAccountUrl(const Aws::String& value) { SetJiraAccountUrl(value); return *this;}
    inline JiraConfiguration& WithJiraAccountUrl(Aws::String&& value) { SetJiraAccountUrl(std::move(value)); return *this;}
    inline JiraConfiguration& WithJiraAccountUrl(const char* value) { SetJiraAccountUrl(value); return *this;}
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
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline JiraConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline JiraConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline JiraConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to use the Jira change log to determine which documents
     * require updating in the index. Depending on the change log's size, it may take
     * longer for Amazon Kendra to use the change log than to scan all of your
     * documents in Jira.</p>
     */
    inline bool GetUseChangeLog() const{ return m_useChangeLog; }
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }
    inline JiraConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify which projects to crawl in your Jira data source. You can specify one
     * or more Jira project IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const Aws::Vector<Aws::String>& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(Aws::Vector<Aws::String>&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline JiraConfiguration& WithProject(const Aws::Vector<Aws::String>& value) { SetProject(value); return *this;}
    inline JiraConfiguration& WithProject(Aws::Vector<Aws::String>&& value) { SetProject(std::move(value)); return *this;}
    inline JiraConfiguration& AddProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project.push_back(value); return *this; }
    inline JiraConfiguration& AddProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project.push_back(std::move(value)); return *this; }
    inline JiraConfiguration& AddProject(const char* value) { m_projectHasBeenSet = true; m_project.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify which issue types to crawl in your Jira data source. You can specify
     * one or more of these options to crawl.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIssueType() const{ return m_issueType; }
    inline bool IssueTypeHasBeenSet() const { return m_issueTypeHasBeenSet; }
    inline void SetIssueType(const Aws::Vector<Aws::String>& value) { m_issueTypeHasBeenSet = true; m_issueType = value; }
    inline void SetIssueType(Aws::Vector<Aws::String>&& value) { m_issueTypeHasBeenSet = true; m_issueType = std::move(value); }
    inline JiraConfiguration& WithIssueType(const Aws::Vector<Aws::String>& value) { SetIssueType(value); return *this;}
    inline JiraConfiguration& WithIssueType(Aws::Vector<Aws::String>&& value) { SetIssueType(std::move(value)); return *this;}
    inline JiraConfiguration& AddIssueType(const Aws::String& value) { m_issueTypeHasBeenSet = true; m_issueType.push_back(value); return *this; }
    inline JiraConfiguration& AddIssueType(Aws::String&& value) { m_issueTypeHasBeenSet = true; m_issueType.push_back(std::move(value)); return *this; }
    inline JiraConfiguration& AddIssueType(const char* value) { m_issueTypeHasBeenSet = true; m_issueType.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify which statuses to crawl in your Jira data source. You can specify one
     * or more of these options to crawl.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::Vector<Aws::String>& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::Vector<Aws::String>&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline JiraConfiguration& WithStatus(const Aws::Vector<Aws::String>& value) { SetStatus(value); return *this;}
    inline JiraConfiguration& WithStatus(Aws::Vector<Aws::String>&& value) { SetStatus(std::move(value)); return *this;}
    inline JiraConfiguration& AddStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }
    inline JiraConfiguration& AddStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status.push_back(std::move(value)); return *this; }
    inline JiraConfiguration& AddStatus(const char* value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify whether to crawl comments, attachments, and work logs. You can
     * specify one or more of these options.</p>
     */
    inline const Aws::Vector<IssueSubEntity>& GetIssueSubEntityFilter() const{ return m_issueSubEntityFilter; }
    inline bool IssueSubEntityFilterHasBeenSet() const { return m_issueSubEntityFilterHasBeenSet; }
    inline void SetIssueSubEntityFilter(const Aws::Vector<IssueSubEntity>& value) { m_issueSubEntityFilterHasBeenSet = true; m_issueSubEntityFilter = value; }
    inline void SetIssueSubEntityFilter(Aws::Vector<IssueSubEntity>&& value) { m_issueSubEntityFilterHasBeenSet = true; m_issueSubEntityFilter = std::move(value); }
    inline JiraConfiguration& WithIssueSubEntityFilter(const Aws::Vector<IssueSubEntity>& value) { SetIssueSubEntityFilter(value); return *this;}
    inline JiraConfiguration& WithIssueSubEntityFilter(Aws::Vector<IssueSubEntity>&& value) { SetIssueSubEntityFilter(std::move(value)); return *this;}
    inline JiraConfiguration& AddIssueSubEntityFilter(const IssueSubEntity& value) { m_issueSubEntityFilterHasBeenSet = true; m_issueSubEntityFilter.push_back(value); return *this; }
    inline JiraConfiguration& AddIssueSubEntityFilter(IssueSubEntity&& value) { m_issueSubEntityFilterHasBeenSet = true; m_issueSubEntityFilter.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetAttachmentFieldMappings() const{ return m_attachmentFieldMappings; }
    inline bool AttachmentFieldMappingsHasBeenSet() const { return m_attachmentFieldMappingsHasBeenSet; }
    inline void SetAttachmentFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings = value; }
    inline void SetAttachmentFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings = std::move(value); }
    inline JiraConfiguration& WithAttachmentFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetAttachmentFieldMappings(value); return *this;}
    inline JiraConfiguration& WithAttachmentFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetAttachmentFieldMappings(std::move(value)); return *this;}
    inline JiraConfiguration& AddAttachmentFieldMappings(const DataSourceToIndexFieldMapping& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings.push_back(value); return *this; }
    inline JiraConfiguration& AddAttachmentFieldMappings(DataSourceToIndexFieldMapping&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetCommentFieldMappings() const{ return m_commentFieldMappings; }
    inline bool CommentFieldMappingsHasBeenSet() const { return m_commentFieldMappingsHasBeenSet; }
    inline void SetCommentFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_commentFieldMappingsHasBeenSet = true; m_commentFieldMappings = value; }
    inline void SetCommentFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_commentFieldMappingsHasBeenSet = true; m_commentFieldMappings = std::move(value); }
    inline JiraConfiguration& WithCommentFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetCommentFieldMappings(value); return *this;}
    inline JiraConfiguration& WithCommentFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetCommentFieldMappings(std::move(value)); return *this;}
    inline JiraConfiguration& AddCommentFieldMappings(const DataSourceToIndexFieldMapping& value) { m_commentFieldMappingsHasBeenSet = true; m_commentFieldMappings.push_back(value); return *this; }
    inline JiraConfiguration& AddCommentFieldMappings(DataSourceToIndexFieldMapping&& value) { m_commentFieldMappingsHasBeenSet = true; m_commentFieldMappings.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetIssueFieldMappings() const{ return m_issueFieldMappings; }
    inline bool IssueFieldMappingsHasBeenSet() const { return m_issueFieldMappingsHasBeenSet; }
    inline void SetIssueFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_issueFieldMappingsHasBeenSet = true; m_issueFieldMappings = value; }
    inline void SetIssueFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_issueFieldMappingsHasBeenSet = true; m_issueFieldMappings = std::move(value); }
    inline JiraConfiguration& WithIssueFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetIssueFieldMappings(value); return *this;}
    inline JiraConfiguration& WithIssueFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetIssueFieldMappings(std::move(value)); return *this;}
    inline JiraConfiguration& AddIssueFieldMappings(const DataSourceToIndexFieldMapping& value) { m_issueFieldMappingsHasBeenSet = true; m_issueFieldMappings.push_back(value); return *this; }
    inline JiraConfiguration& AddIssueFieldMappings(DataSourceToIndexFieldMapping&& value) { m_issueFieldMappingsHasBeenSet = true; m_issueFieldMappings.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetProjectFieldMappings() const{ return m_projectFieldMappings; }
    inline bool ProjectFieldMappingsHasBeenSet() const { return m_projectFieldMappingsHasBeenSet; }
    inline void SetProjectFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_projectFieldMappingsHasBeenSet = true; m_projectFieldMappings = value; }
    inline void SetProjectFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_projectFieldMappingsHasBeenSet = true; m_projectFieldMappings = std::move(value); }
    inline JiraConfiguration& WithProjectFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetProjectFieldMappings(value); return *this;}
    inline JiraConfiguration& WithProjectFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetProjectFieldMappings(std::move(value)); return *this;}
    inline JiraConfiguration& AddProjectFieldMappings(const DataSourceToIndexFieldMapping& value) { m_projectFieldMappingsHasBeenSet = true; m_projectFieldMappings.push_back(value); return *this; }
    inline JiraConfiguration& AddProjectFieldMappings(DataSourceToIndexFieldMapping&& value) { m_projectFieldMappingsHasBeenSet = true; m_projectFieldMappings.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetWorkLogFieldMappings() const{ return m_workLogFieldMappings; }
    inline bool WorkLogFieldMappingsHasBeenSet() const { return m_workLogFieldMappingsHasBeenSet; }
    inline void SetWorkLogFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_workLogFieldMappingsHasBeenSet = true; m_workLogFieldMappings = value; }
    inline void SetWorkLogFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_workLogFieldMappingsHasBeenSet = true; m_workLogFieldMappings = std::move(value); }
    inline JiraConfiguration& WithWorkLogFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetWorkLogFieldMappings(value); return *this;}
    inline JiraConfiguration& WithWorkLogFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetWorkLogFieldMappings(std::move(value)); return *this;}
    inline JiraConfiguration& AddWorkLogFieldMappings(const DataSourceToIndexFieldMapping& value) { m_workLogFieldMappingsHasBeenSet = true; m_workLogFieldMappings.push_back(value); return *this; }
    inline JiraConfiguration& AddWorkLogFieldMappings(DataSourceToIndexFieldMapping&& value) { m_workLogFieldMappingsHasBeenSet = true; m_workLogFieldMappings.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }
    inline JiraConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}
    inline JiraConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}
    inline JiraConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }
    inline JiraConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }
    inline JiraConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }
    inline JiraConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}
    inline JiraConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}
    inline JiraConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }
    inline JiraConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }
    inline JiraConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Jira. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }
    inline JiraConfiguration& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline JiraConfiguration& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jiraAccountUrl;
    bool m_jiraAccountUrlHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    bool m_useChangeLog;
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
