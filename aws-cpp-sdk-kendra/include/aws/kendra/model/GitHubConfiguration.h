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
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/GitHubConfiguration">AWS
   * API Reference</a></p>
   */
  class GitHubConfiguration
  {
  public:
    AWS_KENDRA_API GitHubConfiguration();
    AWS_KENDRA_API GitHubConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API GitHubConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration information to connect to GitHub Enterprise Cloud (SaaS).</p>
     */
    inline const SaaSConfiguration& GetSaaSConfiguration() const{ return m_saaSConfiguration; }

    /**
     * <p>Configuration information to connect to GitHub Enterprise Cloud (SaaS).</p>
     */
    inline bool SaaSConfigurationHasBeenSet() const { return m_saaSConfigurationHasBeenSet; }

    /**
     * <p>Configuration information to connect to GitHub Enterprise Cloud (SaaS).</p>
     */
    inline void SetSaaSConfiguration(const SaaSConfiguration& value) { m_saaSConfigurationHasBeenSet = true; m_saaSConfiguration = value; }

    /**
     * <p>Configuration information to connect to GitHub Enterprise Cloud (SaaS).</p>
     */
    inline void SetSaaSConfiguration(SaaSConfiguration&& value) { m_saaSConfigurationHasBeenSet = true; m_saaSConfiguration = std::move(value); }

    /**
     * <p>Configuration information to connect to GitHub Enterprise Cloud (SaaS).</p>
     */
    inline GitHubConfiguration& WithSaaSConfiguration(const SaaSConfiguration& value) { SetSaaSConfiguration(value); return *this;}

    /**
     * <p>Configuration information to connect to GitHub Enterprise Cloud (SaaS).</p>
     */
    inline GitHubConfiguration& WithSaaSConfiguration(SaaSConfiguration&& value) { SetSaaSConfiguration(std::move(value)); return *this;}


    /**
     * <p>Configuration information to connect to GitHub Enterprise Server (on
     * premises).</p>
     */
    inline const OnPremiseConfiguration& GetOnPremiseConfiguration() const{ return m_onPremiseConfiguration; }

    /**
     * <p>Configuration information to connect to GitHub Enterprise Server (on
     * premises).</p>
     */
    inline bool OnPremiseConfigurationHasBeenSet() const { return m_onPremiseConfigurationHasBeenSet; }

    /**
     * <p>Configuration information to connect to GitHub Enterprise Server (on
     * premises).</p>
     */
    inline void SetOnPremiseConfiguration(const OnPremiseConfiguration& value) { m_onPremiseConfigurationHasBeenSet = true; m_onPremiseConfiguration = value; }

    /**
     * <p>Configuration information to connect to GitHub Enterprise Server (on
     * premises).</p>
     */
    inline void SetOnPremiseConfiguration(OnPremiseConfiguration&& value) { m_onPremiseConfigurationHasBeenSet = true; m_onPremiseConfiguration = std::move(value); }

    /**
     * <p>Configuration information to connect to GitHub Enterprise Server (on
     * premises).</p>
     */
    inline GitHubConfiguration& WithOnPremiseConfiguration(const OnPremiseConfiguration& value) { SetOnPremiseConfiguration(value); return *this;}

    /**
     * <p>Configuration information to connect to GitHub Enterprise Server (on
     * premises).</p>
     */
    inline GitHubConfiguration& WithOnPremiseConfiguration(OnPremiseConfiguration&& value) { SetOnPremiseConfiguration(std::move(value)); return *this;}


    /**
     * <p>The type of GitHub service you want to connect to—GitHub Enterprise Cloud
     * (SaaS) or GitHub Enterprise Server (on premises).</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The type of GitHub service you want to connect to—GitHub Enterprise Cloud
     * (SaaS) or GitHub Enterprise Server (on premises).</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of GitHub service you want to connect to—GitHub Enterprise Cloud
     * (SaaS) or GitHub Enterprise Server (on premises).</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of GitHub service you want to connect to—GitHub Enterprise Cloud
     * (SaaS) or GitHub Enterprise Server (on premises).</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of GitHub service you want to connect to—GitHub Enterprise Cloud
     * (SaaS) or GitHub Enterprise Server (on premises).</p>
     */
    inline GitHubConfiguration& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The type of GitHub service you want to connect to—GitHub Enterprise Cloud
     * (SaaS) or GitHub Enterprise Server (on premises).</p>
     */
    inline GitHubConfiguration& WithType(Type&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your GitHub. The secret must contain a
     * JSON structure with the following keys:</p> <ul> <li> <p>personalToken—The
     * access token created in GitHub. For more information on creating a token in
     * GitHub, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-github.html">Using
     * a GitHub data source</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your GitHub. The secret must contain a
     * JSON structure with the following keys:</p> <ul> <li> <p>personalToken—The
     * access token created in GitHub. For more information on creating a token in
     * GitHub, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-github.html">Using
     * a GitHub data source</a>.</p> </li> </ul>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your GitHub. The secret must contain a
     * JSON structure with the following keys:</p> <ul> <li> <p>personalToken—The
     * access token created in GitHub. For more information on creating a token in
     * GitHub, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-github.html">Using
     * a GitHub data source</a>.</p> </li> </ul>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your GitHub. The secret must contain a
     * JSON structure with the following keys:</p> <ul> <li> <p>personalToken—The
     * access token created in GitHub. For more information on creating a token in
     * GitHub, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-github.html">Using
     * a GitHub data source</a>.</p> </li> </ul>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your GitHub. The secret must contain a
     * JSON structure with the following keys:</p> <ul> <li> <p>personalToken—The
     * access token created in GitHub. For more information on creating a token in
     * GitHub, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-github.html">Using
     * a GitHub data source</a>.</p> </li> </ul>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your GitHub. The secret must contain a
     * JSON structure with the following keys:</p> <ul> <li> <p>personalToken—The
     * access token created in GitHub. For more information on creating a token in
     * GitHub, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-github.html">Using
     * a GitHub data source</a>.</p> </li> </ul>
     */
    inline GitHubConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your GitHub. The secret must contain a
     * JSON structure with the following keys:</p> <ul> <li> <p>personalToken—The
     * access token created in GitHub. For more information on creating a token in
     * GitHub, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-github.html">Using
     * a GitHub data source</a>.</p> </li> </ul>
     */
    inline GitHubConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your GitHub. The secret must contain a
     * JSON structure with the following keys:</p> <ul> <li> <p>personalToken—The
     * access token created in GitHub. For more information on creating a token in
     * GitHub, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-github.html">Using
     * a GitHub data source</a>.</p> </li> </ul>
     */
    inline GitHubConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p> <code>TRUE</code> to use the GitHub change log to determine which documents
     * require updating in the index. Depending on the GitHub change log's size, it may
     * take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in GitHub.</p>
     */
    inline bool GetUseChangeLog() const{ return m_useChangeLog; }

    /**
     * <p> <code>TRUE</code> to use the GitHub change log to determine which documents
     * require updating in the index. Depending on the GitHub change log's size, it may
     * take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in GitHub.</p>
     */
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to use the GitHub change log to determine which documents
     * require updating in the index. Depending on the GitHub change log's size, it may
     * take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in GitHub.</p>
     */
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }

    /**
     * <p> <code>TRUE</code> to use the GitHub change log to determine which documents
     * require updating in the index. Depending on the GitHub change log's size, it may
     * take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in GitHub.</p>
     */
    inline GitHubConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}


    /**
     * <p>Configuration information to include certain types of GitHub content. You can
     * configure to index repository files only, or also include issues and pull
     * requests, comments, and comment attachments.</p>
     */
    inline const GitHubDocumentCrawlProperties& GetGitHubDocumentCrawlProperties() const{ return m_gitHubDocumentCrawlProperties; }

    /**
     * <p>Configuration information to include certain types of GitHub content. You can
     * configure to index repository files only, or also include issues and pull
     * requests, comments, and comment attachments.</p>
     */
    inline bool GitHubDocumentCrawlPropertiesHasBeenSet() const { return m_gitHubDocumentCrawlPropertiesHasBeenSet; }

    /**
     * <p>Configuration information to include certain types of GitHub content. You can
     * configure to index repository files only, or also include issues and pull
     * requests, comments, and comment attachments.</p>
     */
    inline void SetGitHubDocumentCrawlProperties(const GitHubDocumentCrawlProperties& value) { m_gitHubDocumentCrawlPropertiesHasBeenSet = true; m_gitHubDocumentCrawlProperties = value; }

    /**
     * <p>Configuration information to include certain types of GitHub content. You can
     * configure to index repository files only, or also include issues and pull
     * requests, comments, and comment attachments.</p>
     */
    inline void SetGitHubDocumentCrawlProperties(GitHubDocumentCrawlProperties&& value) { m_gitHubDocumentCrawlPropertiesHasBeenSet = true; m_gitHubDocumentCrawlProperties = std::move(value); }

    /**
     * <p>Configuration information to include certain types of GitHub content. You can
     * configure to index repository files only, or also include issues and pull
     * requests, comments, and comment attachments.</p>
     */
    inline GitHubConfiguration& WithGitHubDocumentCrawlProperties(const GitHubDocumentCrawlProperties& value) { SetGitHubDocumentCrawlProperties(value); return *this;}

    /**
     * <p>Configuration information to include certain types of GitHub content. You can
     * configure to index repository files only, or also include issues and pull
     * requests, comments, and comment attachments.</p>
     */
    inline GitHubConfiguration& WithGitHubDocumentCrawlProperties(GitHubDocumentCrawlProperties&& value) { SetGitHubDocumentCrawlProperties(std::move(value)); return *this;}


    /**
     * <p>A list of names of the specific repositories you want to index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryFilter() const{ return m_repositoryFilter; }

    /**
     * <p>A list of names of the specific repositories you want to index.</p>
     */
    inline bool RepositoryFilterHasBeenSet() const { return m_repositoryFilterHasBeenSet; }

    /**
     * <p>A list of names of the specific repositories you want to index.</p>
     */
    inline void SetRepositoryFilter(const Aws::Vector<Aws::String>& value) { m_repositoryFilterHasBeenSet = true; m_repositoryFilter = value; }

    /**
     * <p>A list of names of the specific repositories you want to index.</p>
     */
    inline void SetRepositoryFilter(Aws::Vector<Aws::String>&& value) { m_repositoryFilterHasBeenSet = true; m_repositoryFilter = std::move(value); }

    /**
     * <p>A list of names of the specific repositories you want to index.</p>
     */
    inline GitHubConfiguration& WithRepositoryFilter(const Aws::Vector<Aws::String>& value) { SetRepositoryFilter(value); return *this;}

    /**
     * <p>A list of names of the specific repositories you want to index.</p>
     */
    inline GitHubConfiguration& WithRepositoryFilter(Aws::Vector<Aws::String>&& value) { SetRepositoryFilter(std::move(value)); return *this;}

    /**
     * <p>A list of names of the specific repositories you want to index.</p>
     */
    inline GitHubConfiguration& AddRepositoryFilter(const Aws::String& value) { m_repositoryFilterHasBeenSet = true; m_repositoryFilter.push_back(value); return *this; }

    /**
     * <p>A list of names of the specific repositories you want to index.</p>
     */
    inline GitHubConfiguration& AddRepositoryFilter(Aws::String&& value) { m_repositoryFilterHasBeenSet = true; m_repositoryFilter.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of the specific repositories you want to index.</p>
     */
    inline GitHubConfiguration& AddRepositoryFilter(const char* value) { m_repositoryFilterHasBeenSet = true; m_repositoryFilter.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to include certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * included in the index. Folder names that don't match the patterns are excluded
     * from the index. If a folder matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionFolderNamePatterns() const{ return m_inclusionFolderNamePatterns; }

    /**
     * <p>A list of regular expression patterns to include certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * included in the index. Folder names that don't match the patterns are excluded
     * from the index. If a folder matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline bool InclusionFolderNamePatternsHasBeenSet() const { return m_inclusionFolderNamePatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to include certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * included in the index. Folder names that don't match the patterns are excluded
     * from the index. If a folder matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline void SetInclusionFolderNamePatterns(const Aws::Vector<Aws::String>& value) { m_inclusionFolderNamePatternsHasBeenSet = true; m_inclusionFolderNamePatterns = value; }

    /**
     * <p>A list of regular expression patterns to include certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * included in the index. Folder names that don't match the patterns are excluded
     * from the index. If a folder matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline void SetInclusionFolderNamePatterns(Aws::Vector<Aws::String>&& value) { m_inclusionFolderNamePatternsHasBeenSet = true; m_inclusionFolderNamePatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to include certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * included in the index. Folder names that don't match the patterns are excluded
     * from the index. If a folder matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline GitHubConfiguration& WithInclusionFolderNamePatterns(const Aws::Vector<Aws::String>& value) { SetInclusionFolderNamePatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * included in the index. Folder names that don't match the patterns are excluded
     * from the index. If a folder matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline GitHubConfiguration& WithInclusionFolderNamePatterns(Aws::Vector<Aws::String>&& value) { SetInclusionFolderNamePatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * included in the index. Folder names that don't match the patterns are excluded
     * from the index. If a folder matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline GitHubConfiguration& AddInclusionFolderNamePatterns(const Aws::String& value) { m_inclusionFolderNamePatternsHasBeenSet = true; m_inclusionFolderNamePatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * included in the index. Folder names that don't match the patterns are excluded
     * from the index. If a folder matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline GitHubConfiguration& AddInclusionFolderNamePatterns(Aws::String&& value) { m_inclusionFolderNamePatternsHasBeenSet = true; m_inclusionFolderNamePatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * included in the index. Folder names that don't match the patterns are excluded
     * from the index. If a folder matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline GitHubConfiguration& AddInclusionFolderNamePatterns(const char* value) { m_inclusionFolderNamePatternsHasBeenSet = true; m_inclusionFolderNamePatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to include certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * included in the index. File types that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionFileTypePatterns() const{ return m_inclusionFileTypePatterns; }

    /**
     * <p>A list of regular expression patterns to include certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * included in the index. File types that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline bool InclusionFileTypePatternsHasBeenSet() const { return m_inclusionFileTypePatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to include certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * included in the index. File types that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline void SetInclusionFileTypePatterns(const Aws::Vector<Aws::String>& value) { m_inclusionFileTypePatternsHasBeenSet = true; m_inclusionFileTypePatterns = value; }

    /**
     * <p>A list of regular expression patterns to include certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * included in the index. File types that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline void SetInclusionFileTypePatterns(Aws::Vector<Aws::String>&& value) { m_inclusionFileTypePatternsHasBeenSet = true; m_inclusionFileTypePatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to include certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * included in the index. File types that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& WithInclusionFileTypePatterns(const Aws::Vector<Aws::String>& value) { SetInclusionFileTypePatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * included in the index. File types that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& WithInclusionFileTypePatterns(Aws::Vector<Aws::String>&& value) { SetInclusionFileTypePatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * included in the index. File types that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& AddInclusionFileTypePatterns(const Aws::String& value) { m_inclusionFileTypePatternsHasBeenSet = true; m_inclusionFileTypePatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * included in the index. File types that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& AddInclusionFileTypePatterns(Aws::String&& value) { m_inclusionFileTypePatternsHasBeenSet = true; m_inclusionFileTypePatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * included in the index. File types that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& AddInclusionFileTypePatterns(const char* value) { m_inclusionFileTypePatternsHasBeenSet = true; m_inclusionFileTypePatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to include certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * included in the index. File names that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionFileNamePatterns() const{ return m_inclusionFileNamePatterns; }

    /**
     * <p>A list of regular expression patterns to include certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * included in the index. File names that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline bool InclusionFileNamePatternsHasBeenSet() const { return m_inclusionFileNamePatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to include certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * included in the index. File names that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline void SetInclusionFileNamePatterns(const Aws::Vector<Aws::String>& value) { m_inclusionFileNamePatternsHasBeenSet = true; m_inclusionFileNamePatterns = value; }

    /**
     * <p>A list of regular expression patterns to include certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * included in the index. File names that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline void SetInclusionFileNamePatterns(Aws::Vector<Aws::String>&& value) { m_inclusionFileNamePatternsHasBeenSet = true; m_inclusionFileNamePatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to include certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * included in the index. File names that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& WithInclusionFileNamePatterns(const Aws::Vector<Aws::String>& value) { SetInclusionFileNamePatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * included in the index. File names that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& WithInclusionFileNamePatterns(Aws::Vector<Aws::String>&& value) { SetInclusionFileNamePatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * included in the index. File names that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& AddInclusionFileNamePatterns(const Aws::String& value) { m_inclusionFileNamePatternsHasBeenSet = true; m_inclusionFileNamePatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * included in the index. File names that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& AddInclusionFileNamePatterns(Aws::String&& value) { m_inclusionFileNamePatternsHasBeenSet = true; m_inclusionFileNamePatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * included in the index. File names that don't match the patterns are excluded
     * from the index. If a file matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& AddInclusionFileNamePatterns(const char* value) { m_inclusionFileNamePatternsHasBeenSet = true; m_inclusionFileNamePatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to exclude certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * excluded from the index. Folder names that don't match the patterns are included
     * in the index. If a folder matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionFolderNamePatterns() const{ return m_exclusionFolderNamePatterns; }

    /**
     * <p>A list of regular expression patterns to exclude certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * excluded from the index. Folder names that don't match the patterns are included
     * in the index. If a folder matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline bool ExclusionFolderNamePatternsHasBeenSet() const { return m_exclusionFolderNamePatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to exclude certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * excluded from the index. Folder names that don't match the patterns are included
     * in the index. If a folder matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline void SetExclusionFolderNamePatterns(const Aws::Vector<Aws::String>& value) { m_exclusionFolderNamePatternsHasBeenSet = true; m_exclusionFolderNamePatterns = value; }

    /**
     * <p>A list of regular expression patterns to exclude certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * excluded from the index. Folder names that don't match the patterns are included
     * in the index. If a folder matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline void SetExclusionFolderNamePatterns(Aws::Vector<Aws::String>&& value) { m_exclusionFolderNamePatternsHasBeenSet = true; m_exclusionFolderNamePatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to exclude certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * excluded from the index. Folder names that don't match the patterns are included
     * in the index. If a folder matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline GitHubConfiguration& WithExclusionFolderNamePatterns(const Aws::Vector<Aws::String>& value) { SetExclusionFolderNamePatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * excluded from the index. Folder names that don't match the patterns are included
     * in the index. If a folder matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline GitHubConfiguration& WithExclusionFolderNamePatterns(Aws::Vector<Aws::String>&& value) { SetExclusionFolderNamePatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * excluded from the index. Folder names that don't match the patterns are included
     * in the index. If a folder matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline GitHubConfiguration& AddExclusionFolderNamePatterns(const Aws::String& value) { m_exclusionFolderNamePatternsHasBeenSet = true; m_exclusionFolderNamePatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * excluded from the index. Folder names that don't match the patterns are included
     * in the index. If a folder matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline GitHubConfiguration& AddExclusionFolderNamePatterns(Aws::String&& value) { m_exclusionFolderNamePatternsHasBeenSet = true; m_exclusionFolderNamePatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain folder names in your
     * GitHub repository or repositories. Folder names that match the patterns are
     * excluded from the index. Folder names that don't match the patterns are included
     * in the index. If a folder matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the folder isn't included in the
     * index.</p>
     */
    inline GitHubConfiguration& AddExclusionFolderNamePatterns(const char* value) { m_exclusionFolderNamePatternsHasBeenSet = true; m_exclusionFolderNamePatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to exclude certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * excluded from the index. File types that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionFileTypePatterns() const{ return m_exclusionFileTypePatterns; }

    /**
     * <p>A list of regular expression patterns to exclude certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * excluded from the index. File types that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline bool ExclusionFileTypePatternsHasBeenSet() const { return m_exclusionFileTypePatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to exclude certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * excluded from the index. File types that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline void SetExclusionFileTypePatterns(const Aws::Vector<Aws::String>& value) { m_exclusionFileTypePatternsHasBeenSet = true; m_exclusionFileTypePatterns = value; }

    /**
     * <p>A list of regular expression patterns to exclude certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * excluded from the index. File types that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline void SetExclusionFileTypePatterns(Aws::Vector<Aws::String>&& value) { m_exclusionFileTypePatternsHasBeenSet = true; m_exclusionFileTypePatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to exclude certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * excluded from the index. File types that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& WithExclusionFileTypePatterns(const Aws::Vector<Aws::String>& value) { SetExclusionFileTypePatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * excluded from the index. File types that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& WithExclusionFileTypePatterns(Aws::Vector<Aws::String>&& value) { SetExclusionFileTypePatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * excluded from the index. File types that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& AddExclusionFileTypePatterns(const Aws::String& value) { m_exclusionFileTypePatternsHasBeenSet = true; m_exclusionFileTypePatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * excluded from the index. File types that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& AddExclusionFileTypePatterns(Aws::String&& value) { m_exclusionFileTypePatternsHasBeenSet = true; m_exclusionFileTypePatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain file types in your
     * GitHub repository or repositories. File types that match the patterns are
     * excluded from the index. File types that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& AddExclusionFileTypePatterns(const char* value) { m_exclusionFileTypePatternsHasBeenSet = true; m_exclusionFileTypePatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to exclude certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * excluded from the index. File names that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionFileNamePatterns() const{ return m_exclusionFileNamePatterns; }

    /**
     * <p>A list of regular expression patterns to exclude certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * excluded from the index. File names that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline bool ExclusionFileNamePatternsHasBeenSet() const { return m_exclusionFileNamePatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to exclude certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * excluded from the index. File names that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline void SetExclusionFileNamePatterns(const Aws::Vector<Aws::String>& value) { m_exclusionFileNamePatternsHasBeenSet = true; m_exclusionFileNamePatterns = value; }

    /**
     * <p>A list of regular expression patterns to exclude certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * excluded from the index. File names that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline void SetExclusionFileNamePatterns(Aws::Vector<Aws::String>&& value) { m_exclusionFileNamePatternsHasBeenSet = true; m_exclusionFileNamePatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to exclude certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * excluded from the index. File names that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& WithExclusionFileNamePatterns(const Aws::Vector<Aws::String>& value) { SetExclusionFileNamePatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * excluded from the index. File names that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& WithExclusionFileNamePatterns(Aws::Vector<Aws::String>&& value) { SetExclusionFileNamePatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * excluded from the index. File names that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& AddExclusionFileNamePatterns(const Aws::String& value) { m_exclusionFileNamePatternsHasBeenSet = true; m_exclusionFileNamePatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * excluded from the index. File names that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& AddExclusionFileNamePatterns(Aws::String&& value) { m_exclusionFileNamePatternsHasBeenSet = true; m_exclusionFileNamePatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain file names in your
     * GitHub repository or repositories. File names that match the patterns are
     * excluded from the index. File names that don't match the patterns are included
     * in the index. If a file matches both an exclusion and inclusion pattern, the
     * exclusion pattern takes precedence and the file isn't included in the index.</p>
     */
    inline GitHubConfiguration& AddExclusionFileNamePatterns(const char* value) { m_exclusionFileNamePatternsHasBeenSet = true; m_exclusionFileNamePatterns.push_back(value); return *this; }


    /**
     * <p>Configuration information of an Amazon Virtual Private Cloud to connect to
     * your GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>Configuration information of an Amazon Virtual Private Cloud to connect to
     * your GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>Configuration information of an Amazon Virtual Private Cloud to connect to
     * your GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>Configuration information of an Amazon Virtual Private Cloud to connect to
     * your GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>Configuration information of an Amazon Virtual Private Cloud to connect to
     * your GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline GitHubConfiguration& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>Configuration information of an Amazon Virtual Private Cloud to connect to
     * your GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline GitHubConfiguration& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map GitHub
     * repository attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubRepositoryConfigurationFieldMappings() const{ return m_gitHubRepositoryConfigurationFieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map GitHub
     * repository attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline bool GitHubRepositoryConfigurationFieldMappingsHasBeenSet() const { return m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map GitHub
     * repository attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubRepositoryConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet = true; m_gitHubRepositoryConfigurationFieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map GitHub
     * repository attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubRepositoryConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet = true; m_gitHubRepositoryConfigurationFieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map GitHub
     * repository attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubRepositoryConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetGitHubRepositoryConfigurationFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map GitHub
     * repository attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubRepositoryConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetGitHubRepositoryConfigurationFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map GitHub
     * repository attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubRepositoryConfigurationFieldMappings(const DataSourceToIndexFieldMapping& value) { m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet = true; m_gitHubRepositoryConfigurationFieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map GitHub
     * repository attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubRepositoryConfigurationFieldMappings(DataSourceToIndexFieldMapping&& value) { m_gitHubRepositoryConfigurationFieldMappingsHasBeenSet = true; m_gitHubRepositoryConfigurationFieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub commits to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubCommitConfigurationFieldMappings() const{ return m_gitHubCommitConfigurationFieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub commits to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline bool GitHubCommitConfigurationFieldMappingsHasBeenSet() const { return m_gitHubCommitConfigurationFieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub commits to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubCommitConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_gitHubCommitConfigurationFieldMappingsHasBeenSet = true; m_gitHubCommitConfigurationFieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub commits to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubCommitConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_gitHubCommitConfigurationFieldMappingsHasBeenSet = true; m_gitHubCommitConfigurationFieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub commits to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubCommitConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetGitHubCommitConfigurationFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub commits to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubCommitConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetGitHubCommitConfigurationFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub commits to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubCommitConfigurationFieldMappings(const DataSourceToIndexFieldMapping& value) { m_gitHubCommitConfigurationFieldMappingsHasBeenSet = true; m_gitHubCommitConfigurationFieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub commits to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubCommitConfigurationFieldMappings(DataSourceToIndexFieldMapping&& value) { m_gitHubCommitConfigurationFieldMappingsHasBeenSet = true; m_gitHubCommitConfigurationFieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issues to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubIssueDocumentConfigurationFieldMappings() const{ return m_gitHubIssueDocumentConfigurationFieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issues to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline bool GitHubIssueDocumentConfigurationFieldMappingsHasBeenSet() const { return m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issues to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubIssueDocumentConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueDocumentConfigurationFieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issues to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubIssueDocumentConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueDocumentConfigurationFieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issues to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubIssueDocumentConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetGitHubIssueDocumentConfigurationFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issues to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubIssueDocumentConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetGitHubIssueDocumentConfigurationFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issues to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubIssueDocumentConfigurationFieldMappings(const DataSourceToIndexFieldMapping& value) { m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueDocumentConfigurationFieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issues to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubIssueDocumentConfigurationFieldMappings(DataSourceToIndexFieldMapping&& value) { m_gitHubIssueDocumentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueDocumentConfigurationFieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue comments to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubIssueCommentConfigurationFieldMappings() const{ return m_gitHubIssueCommentConfigurationFieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue comments to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline bool GitHubIssueCommentConfigurationFieldMappingsHasBeenSet() const { return m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue comments to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubIssueCommentConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueCommentConfigurationFieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue comments to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubIssueCommentConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueCommentConfigurationFieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue comments to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubIssueCommentConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetGitHubIssueCommentConfigurationFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue comments to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubIssueCommentConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetGitHubIssueCommentConfigurationFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue comments to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubIssueCommentConfigurationFieldMappings(const DataSourceToIndexFieldMapping& value) { m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueCommentConfigurationFieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue comments to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubIssueCommentConfigurationFieldMappings(DataSourceToIndexFieldMapping&& value) { m_gitHubIssueCommentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueCommentConfigurationFieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue attachments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubIssueAttachmentConfigurationFieldMappings() const{ return m_gitHubIssueAttachmentConfigurationFieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue attachments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline bool GitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet() const { return m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue attachments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubIssueAttachmentConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueAttachmentConfigurationFieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue attachments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubIssueAttachmentConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueAttachmentConfigurationFieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue attachments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubIssueAttachmentConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetGitHubIssueAttachmentConfigurationFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue attachments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubIssueAttachmentConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetGitHubIssueAttachmentConfigurationFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue attachments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubIssueAttachmentConfigurationFieldMappings(const DataSourceToIndexFieldMapping& value) { m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueAttachmentConfigurationFieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub issue attachments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubIssueAttachmentConfigurationFieldMappings(DataSourceToIndexFieldMapping&& value) { m_gitHubIssueAttachmentConfigurationFieldMappingsHasBeenSet = true; m_gitHubIssueAttachmentConfigurationFieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request comments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubPullRequestCommentConfigurationFieldMappings() const{ return m_gitHubPullRequestCommentConfigurationFieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request comments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline bool GitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet() const { return m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request comments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubPullRequestCommentConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestCommentConfigurationFieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request comments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubPullRequestCommentConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestCommentConfigurationFieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request comments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubPullRequestCommentConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetGitHubPullRequestCommentConfigurationFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request comments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubPullRequestCommentConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetGitHubPullRequestCommentConfigurationFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request comments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubPullRequestCommentConfigurationFieldMappings(const DataSourceToIndexFieldMapping& value) { m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestCommentConfigurationFieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request comments to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubPullRequestCommentConfigurationFieldMappings(DataSourceToIndexFieldMapping&& value) { m_gitHubPullRequestCommentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestCommentConfigurationFieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull requests to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubPullRequestDocumentConfigurationFieldMappings() const{ return m_gitHubPullRequestDocumentConfigurationFieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull requests to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline bool GitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet() const { return m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull requests to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubPullRequestDocumentConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestDocumentConfigurationFieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull requests to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubPullRequestDocumentConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestDocumentConfigurationFieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull requests to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubPullRequestDocumentConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetGitHubPullRequestDocumentConfigurationFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull requests to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubPullRequestDocumentConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetGitHubPullRequestDocumentConfigurationFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull requests to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubPullRequestDocumentConfigurationFieldMappings(const DataSourceToIndexFieldMapping& value) { m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestDocumentConfigurationFieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull requests to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubPullRequestDocumentConfigurationFieldMappings(DataSourceToIndexFieldMapping&& value) { m_gitHubPullRequestDocumentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestDocumentConfigurationFieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetGitHubPullRequestDocumentAttachmentConfigurationFieldMappings() const{ return m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline bool GitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet() const { return m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubPullRequestDocumentAttachmentConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline void SetGitHubPullRequestDocumentAttachmentConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubPullRequestDocumentAttachmentConfigurationFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetGitHubPullRequestDocumentAttachmentConfigurationFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& WithGitHubPullRequestDocumentAttachmentConfigurationFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetGitHubPullRequestDocumentAttachmentConfigurationFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubPullRequestDocumentAttachmentConfigurationFieldMappings(const DataSourceToIndexFieldMapping& value) { m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of GitHub pull request attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to GitHub fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The GitHub data source field names must exist in your
     * GitHub custom metadata.</p>
     */
    inline GitHubConfiguration& AddGitHubPullRequestDocumentAttachmentConfigurationFieldMappings(DataSourceToIndexFieldMapping&& value) { m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappingsHasBeenSet = true; m_gitHubPullRequestDocumentAttachmentConfigurationFieldMappings.push_back(std::move(value)); return *this; }

  private:

    SaaSConfiguration m_saaSConfiguration;
    bool m_saaSConfigurationHasBeenSet = false;

    OnPremiseConfiguration m_onPremiseConfiguration;
    bool m_onPremiseConfigurationHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    bool m_useChangeLog;
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
