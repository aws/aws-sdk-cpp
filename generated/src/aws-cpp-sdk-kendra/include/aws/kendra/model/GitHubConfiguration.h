/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/SaaSConfiguration.h>
#include <aws/kendra/model/OnPremiseConfiguration.h>
#include <aws/kendra/model/Type.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/GitHubDocumentCrawlProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
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
   * <p>Provides the configuration information to connect to GitHub as your data
   * source.</p>  <p>Amazon Kendra now supports an upgraded GitHub
   * connector.</p> <p>You must now use the <a
   * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_TemplateConfiguration.html">TemplateConfiguration</a>
   * object instead of the <code>GitHubConfiguration</code> object to configure your
   * connector.</p> <p>Connectors configured using the older console and API
   * architecture will continue to function as configured. However, you won’t be able
   * to edit or update them. If you want to edit or update your connector
   * configuration, you must create a new connector.</p> <p>We recommended migrating
   * your connector workflow to the upgraded version. Support for connectors
   * configured using the older architecture is scheduled to end by June 2024.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/GitHubConfiguration">AWS
   * API Reference</a></p>
   */
  class GitHubConfiguration
  {
  public:
    AWS_KENDRA_API GitHubConfiguration() = default;
    AWS_KENDRA_API GitHubConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API GitHubConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration information to connect to GitHub Enterprise Cloud (SaaS).</p>
     */
    inline const SaaSConfiguration& GetSaaSConfiguration() const { return m_saaSConfiguration; }
    inline bool SaaSConfigurationHasBeenSet() const { return m_saaSConfigurationHasBeenSet; }
    template<typename SaaSConfigurationT = SaaSConfiguration>
    void SetSaaSConfiguration(SaaSConfigurationT&& value) { m_saaSConfigurationHasBeenSet = true; m_saaSConfiguration = std::forward<SaaSConfigurationT>(value); }
    template<typename SaaSConfigurationT = SaaSConfiguration>
    GitHubConfiguration& WithSaaSConfiguration(SaaSConfigurationT&& value) { SetSaaSConfiguration(std::forward<SaaSConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information to connect to GitHub Enterprise Server (on
     * premises).</p>
     */
    inline const OnPremiseConfiguration& GetOnPremiseConfiguration() const { return m_onPremiseConfiguration; }
    inline bool OnPremiseConfigurationHasBeenSet() const { return m_onPremiseConfigurationHasBeenSet; }
    template<typename OnPremiseConfigurationT = OnPremiseConfiguration>
    void SetOnPremiseConfiguration(OnPremiseConfigurationT&& value) { m_onPremiseConfigurationHasBeenSet = true; m_onPremiseConfiguration = std::forward<OnPremiseConfigurationT>(value); }
    template<typename OnPremiseConfigurationT = OnPremiseConfiguration>
    GitHubConfiguration& WithOnPremiseConfiguration(OnPremiseConfigurationT&& value) { SetOnPremiseConfiguration(std::forward<OnPremiseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of GitHub service you want to connect to—GitHub Enterprise Cloud
     * (SaaS) or GitHub Enterprise Server (on premises).</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline GitHubConfiguration& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your GitHub. The secret must contain a
     * JSON structure with the following keys:</p> <ul> <li> <p>personalToken—The
     * access token created in GitHub. For more information on creating a token in
     * GitHub, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-github.html">Using
     * a GitHub data source</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    GitHubConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to use the GitHub change log to determine which documents
     * require updating in the index. Depending on the GitHub change log's size, it may
     * take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in GitHub.</p>
     */
    inline bool GetUseChangeLog() const { return m_useChangeLog; }
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }
    inline GitHubConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information to include certain types of GitHub content. You can
     * configure to index repository files only, or also include issues and pull
     * requests, comments, and comment attachments.</p>
     */
    inline const GitHubDocumentCrawlProperties& GetGitHubDocumentCrawlProperties() const { return m_gitHubDocumentCrawlProperties; }
    inline bool GitHubDocumentCrawlPropertiesHasBeenSet() const { return m_gitHubDocumentCrawlPropertiesHasBeenSet; }
    template<typename GitHubDocumentCrawlPropertiesT = GitHubDocumentCrawlProperties>
    void SetGitHubDocumentCrawlProperties(GitHubDocumentCrawlPropertiesT&& value) { m_gitHubDocumentCrawlPropertiesHasBeenSet = true; m_gitHubDocumentCrawlProperties = std::forward<GitHubDocumentCrawlPropertiesT>(value); }
    template<typename GitHubDocumentCrawlPropertiesT = GitHubDocumentCrawlProperties>
    GitHubConfiguration& WithGitHubDocumentCrawlProperties(GitHubDocumentCrawlPropertiesT&& value) { SetGitHubDocumentCrawlProperties(std::forward<GitHubDocumentCrawlPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of names of the specific repositories you want to index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryFilter() const { return m_repositoryFilter; }
    inline bool RepositoryFilterHasBeenSet() const { return m_repositoryFilterHasBeenSet; }
    template<typename RepositoryFilterT = Aws::Vector<Aws::String>>
    void SetRepositoryFilter(RepositoryFilterT&& value) { m_repositoryFilterHasBeenSet = true; m_repositoryFilter = std::forward<RepositoryFilterT>(value); }
    template<typename RepositoryFilterT = Aws::Vector<Aws::String>>
    GitHubConfiguration& WithRepositoryFilter(RepositoryFilterT&& value) { SetRepositoryFilter(std::forward<RepositoryFilterT>(value)); return *this;}
    template<typename RepositoryFilterT = Aws::String>
    GitHubConfiguration& AddRepositoryFilter(RepositoryFilterT&& value) { m_repositoryFilterHasBeenSet = true; m_repositoryFilter.emplace_back(std::forward<RepositoryFilterT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * included in the index. Folder names that don't match the patterns are excluded
     * from the index. If a folder matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionFolderNamePatterns() const { return m_inclusionFolderNamePatterns; }
    inline bool InclusionFolderNamePatternsHasBeenSet() const { return m_inclusionFolderNamePatternsHasBeenSet; }
    template<typename InclusionFolderNamePatternsT = Aws::Vector<Aws::String>>
    void SetInclusionFolderNamePatterns(InclusionFolderNamePatternsT&& value) { m_inclusionFolderNamePatternsHasBeenSet = true; m_inclusionFolderNamePatterns = std::forward<InclusionFolderNamePatternsT>(value); }
    template<typename InclusionFolderNamePatternsT = Aws::Vector<Aws::String>>
    GitHubConfiguration& WithInclusionFolderNamePatterns(InclusionFolderNamePatternsT&& value) { SetInclusionFolderNamePatterns(std::forward<InclusionFolderNamePatternsT>(value)); return *this;}
    template<typename InclusionFolderNamePatternsT = Aws::String>
    GitHubConfiguration& AddInclusionFolderNamePatterns(InclusionFolderNamePatternsT&& value) { m_inclusionFolderNamePatternsHasBeenSet = true; m_inclusionFolderNamePatterns.emplace_back(std::forward<InclusionFolderNamePatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * included in the index. File types that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionFileTypePatterns() const { return m_inclusionFileTypePatterns; }
    inline bool InclusionFileTypePatternsHasBeenSet() const { return m_inclusionFileTypePatternsHasBeenSet; }
    template<typename InclusionFileTypePatternsT = Aws::Vector<Aws::String>>
    void SetInclusionFileTypePatterns(InclusionFileTypePatternsT&& value) { m_inclusionFileTypePatternsHasBeenSet = true; m_inclusionFileTypePatterns = std::forward<InclusionFileTypePatternsT>(value); }
    template<typename InclusionFileTypePatternsT = Aws::Vector<Aws::String>>
    GitHubConfiguration& WithInclusionFileTypePatterns(InclusionFileTypePatternsT&& value) { SetInclusionFileTypePatterns(std::forward<InclusionFileTypePatternsT>(value)); return *this;}
    template<typename InclusionFileTypePatternsT = Aws::String>
    GitHubConfiguration& AddInclusionFileTypePatterns(InclusionFileTypePatternsT&& value) { m_inclusionFileTypePatternsHasBeenSet = true; m_inclusionFileTypePatterns.emplace_back(std::forward<InclusionFileTypePatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * included in the index. File names that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionFileNamePatterns() const { return m_inclusionFileNamePatterns; }
    inline bool InclusionFileNamePatternsHasBeenSet() const { return m_inclusionFileNamePatternsHasBeenSet; }
    template<typename InclusionFileNamePatternsT = Aws::Vector<Aws::String>>
    void SetInclusionFileNamePatterns(InclusionFileNamePatternsT&& value) { m_inclusionFileNamePatternsHasBeenSet = true; m_inclusionFileNamePatterns = std::forward<InclusionFileNamePatternsT>(value); }
    template<typename InclusionFileNamePatternsT = Aws::Vector<Aws::String>>
    GitHubConfiguration& WithInclusionFileNamePatterns(InclusionFileNamePatternsT&& value) { SetInclusionFileNamePatterns(std::forward<InclusionFileNamePatternsT>(value)); return *this;}
    template<typename InclusionFileNamePatternsT = Aws::String>
    GitHubConfiguration& AddInclusionFileNamePatterns(InclusionFileNamePatternsT&& value) { m_inclusionFileNamePatternsHasBeenSet = true; m_inclusionFileNamePatterns.emplace_back(std::forward<InclusionFileNamePatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * excluded from the index. Folder names that don't match the patterns are included
     * in the index. If a folder matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionFolderNamePatterns() const { return m_exclusionFolderNamePatterns; }
    inline bool ExclusionFolderNamePatternsHasBeenSet() const { return m_exclusionFolderNamePatternsHasBeenSet; }
    template<typename ExclusionFolderNamePatternsT = Aws::Vector<Aws::String>>
    void SetExclusionFolderNamePatterns(ExclusionFolderNamePatternsT&& value) { m_exclusionFolderNamePatternsHasBeenSet = true; m_exclusionFolderNamePatterns = std::forward<ExclusionFolderNamePatternsT>(value); }
    template<typename ExclusionFolderNamePatternsT = Aws::Vector<Aws::String>>
    GitHubConfiguration& WithExclusionFolderNamePatterns(ExclusionFolderNamePatternsT&& value) { SetExclusionFolderNamePatterns(std::forward<ExclusionFolderNamePatternsT>(value)); return *this;}
    template<typename ExclusionFolderNamePatternsT = Aws::String>
    GitHubConfiguration& AddExclusionFolderNamePatterns(ExclusionFolderNamePatternsT&& value) { m_exclusionFolderNamePatternsHasBeenSet = true; m_exclusionFolderNamePatterns.emplace_back(std::forward<ExclusionFolderNamePatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * excluded from the index. File types that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionFileTypePatterns() const { return m_exclusionFileTypePatterns; }
    inline bool ExclusionFileTypePatternsHasBeenSet() const { return m_exclusionFileTypePatternsHasBeenSet; }
    template<typename ExclusionFileTypePatternsT = Aws::Vector<Aws::String>>
    void SetExclusionFileTypePatterns(ExclusionFileTypePatternsT&& value) { m_exclusionFileTypePatternsHasBeenSet = true; m_exclusionFileTypePatterns = std::forward<ExclusionFileTypePatternsT>(value); }
    template<typename ExclusionFileTypePatternsT = Aws::Vector<Aws::String>>
    GitHubConfiguration& WithExclusionFileTypePatterns(ExclusionFileTypePatternsT&& value) { SetExclusionFileTypePatterns(std::forward<ExclusionFileTypePatternsT>(value)); return *this;}
    template<typename ExclusionFileTypePatternsT = Aws::String>
    GitHubConfiguration& AddExclusionFileTypePatterns(ExclusionFileTypePatternsT&& value) { m_exclusionFileTypePatternsHasBeenSet = true; m_exclusionFileTypePatterns.emplace_back(std::forward<ExclusionFileTypePatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * excluded from the index. File names that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionFileNamePatterns() const { return m_exclusionFileNamePatterns; }
    inline bool ExclusionFileNamePatternsHasBeenSet() const { return m_exclusionFileNamePatternsHasBeenSet; }
    template<typename ExclusionFileNamePatternsT = Aws::Vector<Aws::String>>
    void SetExclusionFileNamePatterns(ExclusionFileNamePatternsT&& value) { m_exclusionFileNamePatternsHasBeenSet = true; m_exclusionFileNamePatterns = std::forward<ExclusionFileNamePatternsT>(value); }
    template<typename ExclusionFileNamePatternsT = Aws::Vector<Aws::String>>
    GitHubConfiguration& WithExclusionFileNamePatterns(ExclusionFileNamePatternsT&& value) { SetExclusionFileNamePatterns(std::forward<ExclusionFileNamePatternsT>(value)); return *this;}
    template<typename ExclusionFileNamePatternsT = Aws::String>
    GitHubConfiguration& AddExclusionFileNamePatterns(ExclusionFileNamePatternsT&& value) { m_exclusionFileNamePatternsHasBeenSet = true; m_exclusionFileNamePatterns.emplace_back(std::forward<ExclusionFileNamePatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information of an Amazon Virtual Private Cloud to connect to
     * your GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    GitHubConfiguration& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map GitHub
     * repository attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubRepositoryConfigurationFieldMappings() const { return m_gitHubRepositoryConfigurationFieldMappings; }
    inline bool GitHubRepositoryConfigurationFieldMappingsHasBeenSet() const { return m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet; }
    template<typename GitHubRepositoryConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetGitHubRepositoryConfigurationFieldMappings(GitHubRepositoryConfigurationFieldMappingsT&& value) { m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet = true; m_gitHubRepositoryConfigurationFieldMappings = std::forward<GitHubRepositoryConfigurationFieldMappingsT>(value); }
    template<typename GitHubRepositoryConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    GitHubConfiguration& WithGitHubRepositoryConfigurationFieldMappings(GitHubRepositoryConfigurationFieldMappingsT&& value) { SetGitHubRepositoryConfigurationFieldMappings(std::forward<GitHubRepositoryConfigurationFieldMappingsT>(value)); return *this;}
    template<typename GitHubRepositoryConfigurationFieldMappingsT = DataSourceToIndexFieldMapping>
    GitHubConfiguration& AddGitHubRepositoryConfigurationFieldMappings(GitHubRepositoryConfigurationFieldMappingsT&& value) { m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet = true; m_gitHubRepositoryConfigurationFieldMappings.emplace_back(std::forward<GitHubRepositoryConfigurationFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub commits to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubCommitConfigurationFieldMappings() const { return m_gitHubCommitConfigurationFieldMappings; }
    inline bool GitHubCommitConfigurationFieldMappingsHasBeenSet() const { return m_gitHubCommitConfigurationFieldMappingsHasBeenSet; }
    template<typename GitHubCommitConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetGitHubCommitConfigurationFieldMappings(GitHubCommitConfigurationFieldMappingsT&& value) { m_gitHubCommitConfigurationFieldMappingsHasBeenSet = true; m_gitHubCommitConfigurationFieldMappings = std::forward<GitHubCommitConfigurationFieldMappingsT>(value); }
    template<typename GitHubCommitConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    GitHubConfiguration& WithGitHubCommitConfigurationFieldMappings(GitHubCommitConfigurationFieldMappingsT&& value) { SetGitHubCommitConfigurationFieldMappings(std::forward<GitHubCommitConfigurationFieldMappingsT>(value)); return *this;}
    template<typename GitHubCommitConfigurationFieldMappingsT = DataSourceToIndexFieldMapping>
    GitHubConfiguration& AddGitHubCommitConfigurationFieldMappings(GitHubCommitConfigurationFieldMappingsT&& value) { m_gitHubCommitConfigurationFieldMappingsHasBeenSet = true; m_gitHubCommitConfigurationFieldMappings.emplace_back(std::forward<GitHubCommitConfigurationFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issues to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubIssueDocumentConfigurationFieldMappings() const { return m_gitHubIssueDocumentConfigurationFieldMappings; }
    inline bool GitHubIssueDocumentConfigurationFieldMappingsHasBeenSet() const { return m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet; }
    template<typename GitHubIssueDocumentConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetGitHubIssueDocumentConfigurationFieldMappings(GitHubIssueDocumentConfigurationFieldMappingsT&& value) { m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueDocumentConfigurationFieldMappings = std::forward<GitHubIssueDocumentConfigurationFieldMappingsT>(value); }
    template<typename GitHubIssueDocumentConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    GitHubConfiguration& WithGitHubIssueDocumentConfigurationFieldMappings(GitHubIssueDocumentConfigurationFieldMappingsT&& value) { SetGitHubIssueDocumentConfigurationFieldMappings(std::forward<GitHubIssueDocumentConfigurationFieldMappingsT>(value)); return *this;}
    template<typename GitHubIssueDocumentConfigurationFieldMappingsT = DataSourceToIndexFieldMapping>
    GitHubConfiguration& AddGitHubIssueDocumentConfigurationFieldMappings(GitHubIssueDocumentConfigurationFieldMappingsT&& value) { m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueDocumentConfigurationFieldMappings.emplace_back(std::forward<GitHubIssueDocumentConfigurationFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue comments to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubIssueCommentConfigurationFieldMappings() const { return m_gitHubIssueCommentConfigurationFieldMappings; }
    inline bool GitHubIssueCommentConfigurationFieldMappingsHasBeenSet() const { return m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet; }
    template<typename GitHubIssueCommentConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetGitHubIssueCommentConfigurationFieldMappings(GitHubIssueCommentConfigurationFieldMappingsT&& value) { m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueCommentConfigurationFieldMappings = std::forward<GitHubIssueCommentConfigurationFieldMappingsT>(value); }
    template<typename GitHubIssueCommentConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    GitHubConfiguration& WithGitHubIssueCommentConfigurationFieldMappings(GitHubIssueCommentConfigurationFieldMappingsT&& value) { SetGitHubIssueCommentConfigurationFieldMappings(std::forward<GitHubIssueCommentConfigurationFieldMappingsT>(value)); return *this;}
    template<typename GitHubIssueCommentConfigurationFieldMappingsT = DataSourceToIndexFieldMapping>
    GitHubConfiguration& AddGitHubIssueCommentConfigurationFieldMappings(GitHubIssueCommentConfigurationFieldMappingsT&& value) { m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueCommentConfigurationFieldMappings.emplace_back(std::forward<GitHubIssueCommentConfigurationFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue attachments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubIssueAttachmentConfigurationFieldMappings() const { return m_gitHubIssueAttachmentConfigurationFieldMappings; }
    inline bool GitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet() const { return m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet; }
    template<typename GitHubIssueAttachmentConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetGitHubIssueAttachmentConfigurationFieldMappings(GitHubIssueAttachmentConfigurationFieldMappingsT&& value) { m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueAttachmentConfigurationFieldMappings = std::forward<GitHubIssueAttachmentConfigurationFieldMappingsT>(value); }
    template<typename GitHubIssueAttachmentConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    GitHubConfiguration& WithGitHubIssueAttachmentConfigurationFieldMappings(GitHubIssueAttachmentConfigurationFieldMappingsT&& value) { SetGitHubIssueAttachmentConfigurationFieldMappings(std::forward<GitHubIssueAttachmentConfigurationFieldMappingsT>(value)); return *this;}
    template<typename GitHubIssueAttachmentConfigurationFieldMappingsT = DataSourceToIndexFieldMapping>
    GitHubConfiguration& AddGitHubIssueAttachmentConfigurationFieldMappings(GitHubIssueAttachmentConfigurationFieldMappingsT&& value) { m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueAttachmentConfigurationFieldMappings.emplace_back(std::forward<GitHubIssueAttachmentConfigurationFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request comments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubPullRequestCommentConfigurationFieldMappings() const { return m_gitHubPullRequestCommentConfigurationFieldMappings; }
    inline bool GitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet() const { return m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet; }
    template<typename GitHubPullRequestCommentConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetGitHubPullRequestCommentConfigurationFieldMappings(GitHubPullRequestCommentConfigurationFieldMappingsT&& value) { m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestCommentConfigurationFieldMappings = std::forward<GitHubPullRequestCommentConfigurationFieldMappingsT>(value); }
    template<typename GitHubPullRequestCommentConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    GitHubConfiguration& WithGitHubPullRequestCommentConfigurationFieldMappings(GitHubPullRequestCommentConfigurationFieldMappingsT&& value) { SetGitHubPullRequestCommentConfigurationFieldMappings(std::forward<GitHubPullRequestCommentConfigurationFieldMappingsT>(value)); return *this;}
    template<typename GitHubPullRequestCommentConfigurationFieldMappingsT = DataSourceToIndexFieldMapping>
    GitHubConfiguration& AddGitHubPullRequestCommentConfigurationFieldMappings(GitHubPullRequestCommentConfigurationFieldMappingsT&& value) { m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestCommentConfigurationFieldMappings.emplace_back(std::forward<GitHubPullRequestCommentConfigurationFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull requests to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubPullRequestDocumentConfigurationFieldMappings() const { return m_gitHubPullRequestDocumentConfigurationFieldMappings; }
    inline bool GitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet() const { return m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet; }
    template<typename GitHubPullRequestDocumentConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetGitHubPullRequestDocumentConfigurationFieldMappings(GitHubPullRequestDocumentConfigurationFieldMappingsT&& value) { m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestDocumentConfigurationFieldMappings = std::forward<GitHubPullRequestDocumentConfigurationFieldMappingsT>(value); }
    template<typename GitHubPullRequestDocumentConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    GitHubConfiguration& WithGitHubPullRequestDocumentConfigurationFieldMappings(GitHubPullRequestDocumentConfigurationFieldMappingsT&& value) { SetGitHubPullRequestDocumentConfigurationFieldMappings(std::forward<GitHubPullRequestDocumentConfigurationFieldMappingsT>(value)); return *this;}
    template<typename GitHubPullRequestDocumentConfigurationFieldMappingsT = DataSourceToIndexFieldMapping>
    GitHubConfiguration& AddGitHubPullRequestDocumentConfigurationFieldMappings(GitHubPullRequestDocumentConfigurationFieldMappingsT&& value) { m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestDocumentConfigurationFieldMappings.emplace_back(std::forward<GitHubPullRequestDocumentConfigurationFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubPullRequestDocumentAttachmentConfigurationFieldMappings() const { return m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappings; }
    inline bool GitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet() const { return m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet; }
    template<typename GitHubPullRequestDocumentAttachmentConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetGitHubPullRequestDocumentAttachmentConfigurationFieldMappings(GitHubPullRequestDocumentAttachmentConfigurationFieldMappingsT&& value) { m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappings = std::forward<GitHubPullRequestDocumentAttachmentConfigurationFieldMappingsT>(value); }
    template<typename GitHubPullRequestDocumentAttachmentConfigurationFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    GitHubConfiguration& WithGitHubPullRequestDocumentAttachmentConfigurationFieldMappings(GitHubPullRequestDocumentAttachmentConfigurationFieldMappingsT&& value) { SetGitHubPullRequestDocumentAttachmentConfigurationFieldMappings(std::forward<GitHubPullRequestDocumentAttachmentConfigurationFieldMappingsT>(value)); return *this;}
    template<typename GitHubPullRequestDocumentAttachmentConfigurationFieldMappingsT = DataSourceToIndexFieldMapping>
    GitHubConfiguration& AddGitHubPullRequestDocumentAttachmentConfigurationFieldMappings(GitHubPullRequestDocumentAttachmentConfigurationFieldMappingsT&& value) { m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappings.emplace_back(std::forward<GitHubPullRequestDocumentAttachmentConfigurationFieldMappingsT>(value)); return *this; }
    ///@}
  private:

    SaaSConfiguration m_saaSConfiguration;
    bool m_saaSConfigurationHasBeenSet = false;

    OnPremiseConfiguration m_onPremiseConfiguration;
    bool m_onPremiseConfigurationHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    bool m_useChangeLog{false};
    bool m_useChangeLogHasBeenSet = false;

    GitHubDocumentCrawlProperties m_gitHubDocumentCrawlProperties;
    bool m_gitHubDocumentCrawlPropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_repositoryFilter;
    bool m_repositoryFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionFolderNamePatterns;
    bool m_inclusionFolderNamePatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionFileTypePatterns;
    bool m_inclusionFileTypePatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionFileNamePatterns;
    bool m_inclusionFileNamePatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionFolderNamePatterns;
    bool m_exclusionFolderNamePatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionFileTypePatterns;
    bool m_exclusionFileTypePatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionFileNamePatterns;
    bool m_exclusionFileNamePatternsHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_gitHubRepositoryConfigurationFieldMappings;
    bool m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_gitHubCommitConfigurationFieldMappings;
    bool m_gitHubCommitConfigurationFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_gitHubIssueDocumentConfigurationFieldMappings;
    bool m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_gitHubIssueCommentConfigurationFieldMappings;
    bool m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_gitHubIssueAttachmentConfigurationFieldMappings;
    bool m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_gitHubPullRequestCommentConfigurationFieldMappings;
    bool m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_gitHubPullRequestDocumentConfigurationFieldMappings;
    bool m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappings;
    bool m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
