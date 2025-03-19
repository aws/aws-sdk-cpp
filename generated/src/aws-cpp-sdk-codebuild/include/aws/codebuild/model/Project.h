/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ProjectSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/ProjectArtifacts.h>
#include <aws/codebuild/model/ProjectCache.h>
#include <aws/codebuild/model/ProjectEnvironment.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codebuild/model/Webhook.h>
#include <aws/codebuild/model/VpcConfig.h>
#include <aws/codebuild/model/ProjectBadge.h>
#include <aws/codebuild/model/LogsConfig.h>
#include <aws/codebuild/model/ProjectBuildBatchConfig.h>
#include <aws/codebuild/model/ProjectVisibilityType.h>
#include <aws/codebuild/model/ProjectSourceVersion.h>
#include <aws/codebuild/model/Tag.h>
#include <aws/codebuild/model/ProjectFileSystemLocation.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about a build project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/Project">AWS
   * API Reference</a></p>
   */
  class Project
  {
  public:
    AWS_CODEBUILD_API Project() = default;
    AWS_CODEBUILD_API Project(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Project& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the build project.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Project& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Project& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Project& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline const ProjectSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = ProjectSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = ProjectSource>
    Project& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectSource</code> objects. </p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySources() const { return m_secondarySources; }
    inline bool SecondarySourcesHasBeenSet() const { return m_secondarySourcesHasBeenSet; }
    template<typename SecondarySourcesT = Aws::Vector<ProjectSource>>
    void SetSecondarySources(SecondarySourcesT&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = std::forward<SecondarySourcesT>(value); }
    template<typename SecondarySourcesT = Aws::Vector<ProjectSource>>
    Project& WithSecondarySources(SecondarySourcesT&& value) { SetSecondarySources(std::forward<SecondarySourcesT>(value)); return *this;}
    template<typename SecondarySourcesT = ProjectSource>
    Project& AddSecondarySources(SecondarySourcesT&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.emplace_back(std::forward<SecondarySourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A version of the build input to be built for this project. If not specified,
     * the latest version is used. If specified, it must be one of:</p> <ul> <li>
     * <p>For CodeCommit: the commit ID, branch, or Git tag to use.</p> </li> <li>
     * <p>For GitHub: the commit ID, pull request ID, branch name, or tag name that
     * corresponds to the version of the source code you want to build. If a pull
     * request ID is specified, it must use the format <code>pr/pull-request-ID</code>
     * (for example <code>pr/25</code>). If a branch name is specified, the branch's
     * HEAD commit ID is used. If not specified, the default branch's HEAD commit ID is
     * used.</p> </li> <li> <p>For GitLab: the commit ID, branch, or Git tag to
     * use.</p> </li> <li> <p>For Bitbucket: the commit ID, branch name, or tag name
     * that corresponds to the version of the source code you want to build. If a
     * branch name is specified, the branch's HEAD commit ID is used. If not specified,
     * the default branch's HEAD commit ID is used.</p> </li> <li> <p>For Amazon S3:
     * the version ID of the object that represents the build input ZIP file to
     * use.</p> </li> </ul> <p>If <code>sourceVersion</code> is specified at the build
     * level, then that version takes precedence over this <code>sourceVersion</code>
     * (at the project level). </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>CodeBuild User Guide</i>. </p>
     */
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    Project& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectSourceVersion</code> objects. If
     * <code>secondarySourceVersions</code> is specified at the build level, then they
     * take over these <code>secondarySourceVersions</code> (at the project level).
     * </p>
     */
    inline const Aws::Vector<ProjectSourceVersion>& GetSecondarySourceVersions() const { return m_secondarySourceVersions; }
    inline bool SecondarySourceVersionsHasBeenSet() const { return m_secondarySourceVersionsHasBeenSet; }
    template<typename SecondarySourceVersionsT = Aws::Vector<ProjectSourceVersion>>
    void SetSecondarySourceVersions(SecondarySourceVersionsT&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = std::forward<SecondarySourceVersionsT>(value); }
    template<typename SecondarySourceVersionsT = Aws::Vector<ProjectSourceVersion>>
    Project& WithSecondarySourceVersions(SecondarySourceVersionsT&& value) { SetSecondarySourceVersions(std::forward<SecondarySourceVersionsT>(value)); return *this;}
    template<typename SecondarySourceVersionsT = ProjectSourceVersion>
    Project& AddSecondarySourceVersions(SecondarySourceVersionsT&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.emplace_back(std::forward<SecondarySourceVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the build output artifacts for the build project.</p>
     */
    inline const ProjectArtifacts& GetArtifacts() const { return m_artifacts; }
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }
    template<typename ArtifactsT = ProjectArtifacts>
    void SetArtifacts(ArtifactsT&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::forward<ArtifactsT>(value); }
    template<typename ArtifactsT = ProjectArtifacts>
    Project& WithArtifacts(ArtifactsT&& value) { SetArtifacts(std::forward<ArtifactsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline const Aws::Vector<ProjectArtifacts>& GetSecondaryArtifacts() const { return m_secondaryArtifacts; }
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }
    template<typename SecondaryArtifactsT = Aws::Vector<ProjectArtifacts>>
    void SetSecondaryArtifacts(SecondaryArtifactsT&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::forward<SecondaryArtifactsT>(value); }
    template<typename SecondaryArtifactsT = Aws::Vector<ProjectArtifacts>>
    Project& WithSecondaryArtifacts(SecondaryArtifactsT&& value) { SetSecondaryArtifacts(std::forward<SecondaryArtifactsT>(value)); return *this;}
    template<typename SecondaryArtifactsT = ProjectArtifacts>
    Project& AddSecondaryArtifacts(SecondaryArtifactsT&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.emplace_back(std::forward<SecondaryArtifactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the cache for the build project.</p>
     */
    inline const ProjectCache& GetCache() const { return m_cache; }
    inline bool CacheHasBeenSet() const { return m_cacheHasBeenSet; }
    template<typename CacheT = ProjectCache>
    void SetCache(CacheT&& value) { m_cacheHasBeenSet = true; m_cache = std::forward<CacheT>(value); }
    template<typename CacheT = ProjectCache>
    Project& WithCache(CacheT&& value) { SetCache(std::forward<CacheT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline const ProjectEnvironment& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = ProjectEnvironment>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = ProjectEnvironment>
    Project& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that enables CodeBuild to interact with dependent
     * Amazon Web Services services on behalf of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    Project& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long, in minutes, from 5 to 2160 (36 hours), for CodeBuild to wait before
     * timing out any related build that did not get marked as completed. The default
     * is 60 minutes.</p>
     */
    inline int GetTimeoutInMinutes() const { return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline Project& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline int GetQueuedTimeoutInMinutes() const { return m_queuedTimeoutInMinutes; }
    inline bool QueuedTimeoutInMinutesHasBeenSet() const { return m_queuedTimeoutInMinutesHasBeenSet; }
    inline void SetQueuedTimeoutInMinutes(int value) { m_queuedTimeoutInMinutesHasBeenSet = true; m_queuedTimeoutInMinutes = value; }
    inline Project& WithQueuedTimeoutInMinutes(int value) { SetQueuedTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service customer master key (CMK) to be used for
     * encrypting the build output artifacts.</p>  <p>You can use a cross-account
     * KMS key to encrypt the build output artifacts if your service role has
     * permission to that key. </p>  <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/&lt;alias-name&gt;</code>). If you don't specify a value,
     * CodeBuild uses the managed CMK for Amazon Simple Storage Service (Amazon S3).
     * </p>
     */
    inline const Aws::String& GetEncryptionKey() const { return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    template<typename EncryptionKeyT = Aws::String>
    void SetEncryptionKey(EncryptionKeyT&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::forward<EncryptionKeyT>(value); }
    template<typename EncryptionKeyT = Aws::String>
    Project& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag key and value pairs associated with this build project.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Project& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Project& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the build project was created, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    Project& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the build project's settings were last modified, expressed in Unix time
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    Project& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in CodeBuild.</p>
     */
    inline const Webhook& GetWebhook() const { return m_webhook; }
    inline bool WebhookHasBeenSet() const { return m_webhookHasBeenSet; }
    template<typename WebhookT = Webhook>
    void SetWebhook(WebhookT&& value) { m_webhookHasBeenSet = true; m_webhook = std::forward<WebhookT>(value); }
    template<typename WebhookT = Webhook>
    Project& WithWebhook(WebhookT&& value) { SetWebhook(std::forward<WebhookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VPC configuration that CodeBuild accesses.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    Project& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build badge for the build project.</p>
     */
    inline const ProjectBadge& GetBadge() const { return m_badge; }
    inline bool BadgeHasBeenSet() const { return m_badgeHasBeenSet; }
    template<typename BadgeT = ProjectBadge>
    void SetBadge(BadgeT&& value) { m_badgeHasBeenSet = true; m_badge = std::forward<BadgeT>(value); }
    template<typename BadgeT = ProjectBadge>
    Project& WithBadge(BadgeT&& value) { SetBadge(std::forward<BadgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about logs for the build project. A project can create logs in
     * CloudWatch Logs, an S3 bucket, or both. </p>
     */
    inline const LogsConfig& GetLogsConfig() const { return m_logsConfig; }
    inline bool LogsConfigHasBeenSet() const { return m_logsConfigHasBeenSet; }
    template<typename LogsConfigT = LogsConfig>
    void SetLogsConfig(LogsConfigT&& value) { m_logsConfigHasBeenSet = true; m_logsConfig = std::forward<LogsConfigT>(value); }
    template<typename LogsConfigT = LogsConfig>
    Project& WithLogsConfig(LogsConfigT&& value) { SetLogsConfig(std::forward<LogsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectFileSystemLocation</code> objects for a CodeBuild
     * build project. A <code>ProjectFileSystemLocation</code> object specifies the
     * <code>identifier</code>, <code>location</code>, <code>mountOptions</code>,
     * <code>mountPoint</code>, and <code>type</code> of a file system created using
     * Amazon Elastic File System. </p>
     */
    inline const Aws::Vector<ProjectFileSystemLocation>& GetFileSystemLocations() const { return m_fileSystemLocations; }
    inline bool FileSystemLocationsHasBeenSet() const { return m_fileSystemLocationsHasBeenSet; }
    template<typename FileSystemLocationsT = Aws::Vector<ProjectFileSystemLocation>>
    void SetFileSystemLocations(FileSystemLocationsT&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations = std::forward<FileSystemLocationsT>(value); }
    template<typename FileSystemLocationsT = Aws::Vector<ProjectFileSystemLocation>>
    Project& WithFileSystemLocations(FileSystemLocationsT&& value) { SetFileSystemLocations(std::forward<FileSystemLocationsT>(value)); return *this;}
    template<typename FileSystemLocationsT = ProjectFileSystemLocation>
    Project& AddFileSystemLocations(FileSystemLocationsT&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.emplace_back(std::forward<FileSystemLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <a>ProjectBuildBatchConfig</a> object that defines the batch build options
     * for the project.</p>
     */
    inline const ProjectBuildBatchConfig& GetBuildBatchConfig() const { return m_buildBatchConfig; }
    inline bool BuildBatchConfigHasBeenSet() const { return m_buildBatchConfigHasBeenSet; }
    template<typename BuildBatchConfigT = ProjectBuildBatchConfig>
    void SetBuildBatchConfig(BuildBatchConfigT&& value) { m_buildBatchConfigHasBeenSet = true; m_buildBatchConfig = std::forward<BuildBatchConfigT>(value); }
    template<typename BuildBatchConfigT = ProjectBuildBatchConfig>
    Project& WithBuildBatchConfig(BuildBatchConfigT&& value) { SetBuildBatchConfig(std::forward<BuildBatchConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of concurrent builds that are allowed for this
     * project.</p> <p>New builds are only started if the current number of builds is
     * less than or equal to this limit. If the current build count meets this limit,
     * new builds are throttled and are not run.</p>
     */
    inline int GetConcurrentBuildLimit() const { return m_concurrentBuildLimit; }
    inline bool ConcurrentBuildLimitHasBeenSet() const { return m_concurrentBuildLimitHasBeenSet; }
    inline void SetConcurrentBuildLimit(int value) { m_concurrentBuildLimitHasBeenSet = true; m_concurrentBuildLimit = value; }
    inline Project& WithConcurrentBuildLimit(int value) { SetConcurrentBuildLimit(value); return *this;}
    ///@}

    ///@{
    
    inline ProjectVisibilityType GetProjectVisibility() const { return m_projectVisibility; }
    inline bool ProjectVisibilityHasBeenSet() const { return m_projectVisibilityHasBeenSet; }
    inline void SetProjectVisibility(ProjectVisibilityType value) { m_projectVisibilityHasBeenSet = true; m_projectVisibility = value; }
    inline Project& WithProjectVisibility(ProjectVisibilityType value) { SetProjectVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the project identifier used with the public build APIs. </p>
     */
    inline const Aws::String& GetPublicProjectAlias() const { return m_publicProjectAlias; }
    inline bool PublicProjectAliasHasBeenSet() const { return m_publicProjectAliasHasBeenSet; }
    template<typename PublicProjectAliasT = Aws::String>
    void SetPublicProjectAlias(PublicProjectAliasT&& value) { m_publicProjectAliasHasBeenSet = true; m_publicProjectAlias = std::forward<PublicProjectAliasT>(value); }
    template<typename PublicProjectAliasT = Aws::String>
    Project& WithPublicProjectAlias(PublicProjectAliasT&& value) { SetPublicProjectAlias(std::forward<PublicProjectAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that enables CodeBuild to access the CloudWatch Logs
     * and Amazon S3 artifacts for the project's builds.</p>
     */
    inline const Aws::String& GetResourceAccessRole() const { return m_resourceAccessRole; }
    inline bool ResourceAccessRoleHasBeenSet() const { return m_resourceAccessRoleHasBeenSet; }
    template<typename ResourceAccessRoleT = Aws::String>
    void SetResourceAccessRole(ResourceAccessRoleT&& value) { m_resourceAccessRoleHasBeenSet = true; m_resourceAccessRole = std::forward<ResourceAccessRoleT>(value); }
    template<typename ResourceAccessRoleT = Aws::String>
    Project& WithResourceAccessRole(ResourceAccessRoleT&& value) { SetResourceAccessRole(std::forward<ResourceAccessRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of additional automatic retries after a failed build. For
     * example, if the auto-retry limit is set to 2, CodeBuild will call the
     * <code>RetryBuild</code> API to automatically retry your build for up to 2
     * additional times.</p>
     */
    inline int GetAutoRetryLimit() const { return m_autoRetryLimit; }
    inline bool AutoRetryLimitHasBeenSet() const { return m_autoRetryLimitHasBeenSet; }
    inline void SetAutoRetryLimit(int value) { m_autoRetryLimitHasBeenSet = true; m_autoRetryLimit = value; }
    inline Project& WithAutoRetryLimit(int value) { SetAutoRetryLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ProjectSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<ProjectSource> m_secondarySources;
    bool m_secondarySourcesHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;

    Aws::Vector<ProjectSourceVersion> m_secondarySourceVersions;
    bool m_secondarySourceVersionsHasBeenSet = false;

    ProjectArtifacts m_artifacts;
    bool m_artifactsHasBeenSet = false;

    Aws::Vector<ProjectArtifacts> m_secondaryArtifacts;
    bool m_secondaryArtifactsHasBeenSet = false;

    ProjectCache m_cache;
    bool m_cacheHasBeenSet = false;

    ProjectEnvironment m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    int m_timeoutInMinutes{0};
    bool m_timeoutInMinutesHasBeenSet = false;

    int m_queuedTimeoutInMinutes{0};
    bool m_queuedTimeoutInMinutesHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    Webhook m_webhook;
    bool m_webhookHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    ProjectBadge m_badge;
    bool m_badgeHasBeenSet = false;

    LogsConfig m_logsConfig;
    bool m_logsConfigHasBeenSet = false;

    Aws::Vector<ProjectFileSystemLocation> m_fileSystemLocations;
    bool m_fileSystemLocationsHasBeenSet = false;

    ProjectBuildBatchConfig m_buildBatchConfig;
    bool m_buildBatchConfigHasBeenSet = false;

    int m_concurrentBuildLimit{0};
    bool m_concurrentBuildLimitHasBeenSet = false;

    ProjectVisibilityType m_projectVisibility{ProjectVisibilityType::NOT_SET};
    bool m_projectVisibilityHasBeenSet = false;

    Aws::String m_publicProjectAlias;
    bool m_publicProjectAliasHasBeenSet = false;

    Aws::String m_resourceAccessRole;
    bool m_resourceAccessRoleHasBeenSet = false;

    int m_autoRetryLimit{0};
    bool m_autoRetryLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
