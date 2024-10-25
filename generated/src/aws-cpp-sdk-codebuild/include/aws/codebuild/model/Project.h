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
    AWS_CODEBUILD_API Project();
    AWS_CODEBUILD_API Project(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Project& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the build project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Project& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Project& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Project& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Project& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Project& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Project& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Project& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Project& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Project& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline const ProjectSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const ProjectSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(ProjectSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline Project& WithSource(const ProjectSource& value) { SetSource(value); return *this;}
    inline Project& WithSource(ProjectSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectSource</code> objects. </p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySources() const{ return m_secondarySources; }
    inline bool SecondarySourcesHasBeenSet() const { return m_secondarySourcesHasBeenSet; }
    inline void SetSecondarySources(const Aws::Vector<ProjectSource>& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = value; }
    inline void SetSecondarySources(Aws::Vector<ProjectSource>&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = std::move(value); }
    inline Project& WithSecondarySources(const Aws::Vector<ProjectSource>& value) { SetSecondarySources(value); return *this;}
    inline Project& WithSecondarySources(Aws::Vector<ProjectSource>&& value) { SetSecondarySources(std::move(value)); return *this;}
    inline Project& AddSecondarySources(const ProjectSource& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(value); return *this; }
    inline Project& AddSecondarySources(ProjectSource&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }
    inline Project& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}
    inline Project& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}
    inline Project& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectSourceVersion</code> objects. If
     * <code>secondarySourceVersions</code> is specified at the build level, then they
     * take over these <code>secondarySourceVersions</code> (at the project level).
     * </p>
     */
    inline const Aws::Vector<ProjectSourceVersion>& GetSecondarySourceVersions() const{ return m_secondarySourceVersions; }
    inline bool SecondarySourceVersionsHasBeenSet() const { return m_secondarySourceVersionsHasBeenSet; }
    inline void SetSecondarySourceVersions(const Aws::Vector<ProjectSourceVersion>& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = value; }
    inline void SetSecondarySourceVersions(Aws::Vector<ProjectSourceVersion>&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = std::move(value); }
    inline Project& WithSecondarySourceVersions(const Aws::Vector<ProjectSourceVersion>& value) { SetSecondarySourceVersions(value); return *this;}
    inline Project& WithSecondarySourceVersions(Aws::Vector<ProjectSourceVersion>&& value) { SetSecondarySourceVersions(std::move(value)); return *this;}
    inline Project& AddSecondarySourceVersions(const ProjectSourceVersion& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.push_back(value); return *this; }
    inline Project& AddSecondarySourceVersions(ProjectSourceVersion&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the build output artifacts for the build project.</p>
     */
    inline const ProjectArtifacts& GetArtifacts() const{ return m_artifacts; }
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }
    inline void SetArtifacts(const ProjectArtifacts& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }
    inline void SetArtifacts(ProjectArtifacts&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::move(value); }
    inline Project& WithArtifacts(const ProjectArtifacts& value) { SetArtifacts(value); return *this;}
    inline Project& WithArtifacts(ProjectArtifacts&& value) { SetArtifacts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline const Aws::Vector<ProjectArtifacts>& GetSecondaryArtifacts() const{ return m_secondaryArtifacts; }
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }
    inline void SetSecondaryArtifacts(const Aws::Vector<ProjectArtifacts>& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = value; }
    inline void SetSecondaryArtifacts(Aws::Vector<ProjectArtifacts>&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::move(value); }
    inline Project& WithSecondaryArtifacts(const Aws::Vector<ProjectArtifacts>& value) { SetSecondaryArtifacts(value); return *this;}
    inline Project& WithSecondaryArtifacts(Aws::Vector<ProjectArtifacts>&& value) { SetSecondaryArtifacts(std::move(value)); return *this;}
    inline Project& AddSecondaryArtifacts(const ProjectArtifacts& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(value); return *this; }
    inline Project& AddSecondaryArtifacts(ProjectArtifacts&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the cache for the build project.</p>
     */
    inline const ProjectCache& GetCache() const{ return m_cache; }
    inline bool CacheHasBeenSet() const { return m_cacheHasBeenSet; }
    inline void SetCache(const ProjectCache& value) { m_cacheHasBeenSet = true; m_cache = value; }
    inline void SetCache(ProjectCache&& value) { m_cacheHasBeenSet = true; m_cache = std::move(value); }
    inline Project& WithCache(const ProjectCache& value) { SetCache(value); return *this;}
    inline Project& WithCache(ProjectCache&& value) { SetCache(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline const ProjectEnvironment& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const ProjectEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(ProjectEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline Project& WithEnvironment(const ProjectEnvironment& value) { SetEnvironment(value); return *this;}
    inline Project& WithEnvironment(ProjectEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that enables CodeBuild to interact with dependent
     * Amazon Web Services services on behalf of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline Project& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline Project& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline Project& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long, in minutes, from 5 to 2160 (36 hours), for CodeBuild to wait before
     * timing out any related build that did not get marked as completed. The default
     * is 60 minutes.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline Project& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline int GetQueuedTimeoutInMinutes() const{ return m_queuedTimeoutInMinutes; }
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
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }
    inline Project& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}
    inline Project& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}
    inline Project& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag key and value pairs associated with this build project.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Project& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Project& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Project& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Project& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the build project was created, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline Project& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline Project& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the build project's settings were last modified, expressed in Unix time
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline Project& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline Project& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in CodeBuild.</p>
     */
    inline const Webhook& GetWebhook() const{ return m_webhook; }
    inline bool WebhookHasBeenSet() const { return m_webhookHasBeenSet; }
    inline void SetWebhook(const Webhook& value) { m_webhookHasBeenSet = true; m_webhook = value; }
    inline void SetWebhook(Webhook&& value) { m_webhookHasBeenSet = true; m_webhook = std::move(value); }
    inline Project& WithWebhook(const Webhook& value) { SetWebhook(value); return *this;}
    inline Project& WithWebhook(Webhook&& value) { SetWebhook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VPC configuration that CodeBuild accesses.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline Project& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline Project& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build badge for the build project.</p>
     */
    inline const ProjectBadge& GetBadge() const{ return m_badge; }
    inline bool BadgeHasBeenSet() const { return m_badgeHasBeenSet; }
    inline void SetBadge(const ProjectBadge& value) { m_badgeHasBeenSet = true; m_badge = value; }
    inline void SetBadge(ProjectBadge&& value) { m_badgeHasBeenSet = true; m_badge = std::move(value); }
    inline Project& WithBadge(const ProjectBadge& value) { SetBadge(value); return *this;}
    inline Project& WithBadge(ProjectBadge&& value) { SetBadge(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about logs for the build project. A project can create logs in
     * CloudWatch Logs, an S3 bucket, or both. </p>
     */
    inline const LogsConfig& GetLogsConfig() const{ return m_logsConfig; }
    inline bool LogsConfigHasBeenSet() const { return m_logsConfigHasBeenSet; }
    inline void SetLogsConfig(const LogsConfig& value) { m_logsConfigHasBeenSet = true; m_logsConfig = value; }
    inline void SetLogsConfig(LogsConfig&& value) { m_logsConfigHasBeenSet = true; m_logsConfig = std::move(value); }
    inline Project& WithLogsConfig(const LogsConfig& value) { SetLogsConfig(value); return *this;}
    inline Project& WithLogsConfig(LogsConfig&& value) { SetLogsConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectFileSystemLocation</code> objects for a CodeBuild
     * build project. A <code>ProjectFileSystemLocation</code> object specifies the
     * <code>identifier</code>, <code>location</code>, <code>mountOptions</code>,
     * <code>mountPoint</code>, and <code>type</code> of a file system created using
     * Amazon Elastic File System. </p>
     */
    inline const Aws::Vector<ProjectFileSystemLocation>& GetFileSystemLocations() const{ return m_fileSystemLocations; }
    inline bool FileSystemLocationsHasBeenSet() const { return m_fileSystemLocationsHasBeenSet; }
    inline void SetFileSystemLocations(const Aws::Vector<ProjectFileSystemLocation>& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations = value; }
    inline void SetFileSystemLocations(Aws::Vector<ProjectFileSystemLocation>&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations = std::move(value); }
    inline Project& WithFileSystemLocations(const Aws::Vector<ProjectFileSystemLocation>& value) { SetFileSystemLocations(value); return *this;}
    inline Project& WithFileSystemLocations(Aws::Vector<ProjectFileSystemLocation>&& value) { SetFileSystemLocations(std::move(value)); return *this;}
    inline Project& AddFileSystemLocations(const ProjectFileSystemLocation& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.push_back(value); return *this; }
    inline Project& AddFileSystemLocations(ProjectFileSystemLocation&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <a>ProjectBuildBatchConfig</a> object that defines the batch build options
     * for the project.</p>
     */
    inline const ProjectBuildBatchConfig& GetBuildBatchConfig() const{ return m_buildBatchConfig; }
    inline bool BuildBatchConfigHasBeenSet() const { return m_buildBatchConfigHasBeenSet; }
    inline void SetBuildBatchConfig(const ProjectBuildBatchConfig& value) { m_buildBatchConfigHasBeenSet = true; m_buildBatchConfig = value; }
    inline void SetBuildBatchConfig(ProjectBuildBatchConfig&& value) { m_buildBatchConfigHasBeenSet = true; m_buildBatchConfig = std::move(value); }
    inline Project& WithBuildBatchConfig(const ProjectBuildBatchConfig& value) { SetBuildBatchConfig(value); return *this;}
    inline Project& WithBuildBatchConfig(ProjectBuildBatchConfig&& value) { SetBuildBatchConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of concurrent builds that are allowed for this
     * project.</p> <p>New builds are only started if the current number of builds is
     * less than or equal to this limit. If the current build count meets this limit,
     * new builds are throttled and are not run.</p>
     */
    inline int GetConcurrentBuildLimit() const{ return m_concurrentBuildLimit; }
    inline bool ConcurrentBuildLimitHasBeenSet() const { return m_concurrentBuildLimitHasBeenSet; }
    inline void SetConcurrentBuildLimit(int value) { m_concurrentBuildLimitHasBeenSet = true; m_concurrentBuildLimit = value; }
    inline Project& WithConcurrentBuildLimit(int value) { SetConcurrentBuildLimit(value); return *this;}
    ///@}

    ///@{
    
    inline const ProjectVisibilityType& GetProjectVisibility() const{ return m_projectVisibility; }
    inline bool ProjectVisibilityHasBeenSet() const { return m_projectVisibilityHasBeenSet; }
    inline void SetProjectVisibility(const ProjectVisibilityType& value) { m_projectVisibilityHasBeenSet = true; m_projectVisibility = value; }
    inline void SetProjectVisibility(ProjectVisibilityType&& value) { m_projectVisibilityHasBeenSet = true; m_projectVisibility = std::move(value); }
    inline Project& WithProjectVisibility(const ProjectVisibilityType& value) { SetProjectVisibility(value); return *this;}
    inline Project& WithProjectVisibility(ProjectVisibilityType&& value) { SetProjectVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the project identifier used with the public build APIs. </p>
     */
    inline const Aws::String& GetPublicProjectAlias() const{ return m_publicProjectAlias; }
    inline bool PublicProjectAliasHasBeenSet() const { return m_publicProjectAliasHasBeenSet; }
    inline void SetPublicProjectAlias(const Aws::String& value) { m_publicProjectAliasHasBeenSet = true; m_publicProjectAlias = value; }
    inline void SetPublicProjectAlias(Aws::String&& value) { m_publicProjectAliasHasBeenSet = true; m_publicProjectAlias = std::move(value); }
    inline void SetPublicProjectAlias(const char* value) { m_publicProjectAliasHasBeenSet = true; m_publicProjectAlias.assign(value); }
    inline Project& WithPublicProjectAlias(const Aws::String& value) { SetPublicProjectAlias(value); return *this;}
    inline Project& WithPublicProjectAlias(Aws::String&& value) { SetPublicProjectAlias(std::move(value)); return *this;}
    inline Project& WithPublicProjectAlias(const char* value) { SetPublicProjectAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that enables CodeBuild to access the CloudWatch Logs
     * and Amazon S3 artifacts for the project's builds.</p>
     */
    inline const Aws::String& GetResourceAccessRole() const{ return m_resourceAccessRole; }
    inline bool ResourceAccessRoleHasBeenSet() const { return m_resourceAccessRoleHasBeenSet; }
    inline void SetResourceAccessRole(const Aws::String& value) { m_resourceAccessRoleHasBeenSet = true; m_resourceAccessRole = value; }
    inline void SetResourceAccessRole(Aws::String&& value) { m_resourceAccessRoleHasBeenSet = true; m_resourceAccessRole = std::move(value); }
    inline void SetResourceAccessRole(const char* value) { m_resourceAccessRoleHasBeenSet = true; m_resourceAccessRole.assign(value); }
    inline Project& WithResourceAccessRole(const Aws::String& value) { SetResourceAccessRole(value); return *this;}
    inline Project& WithResourceAccessRole(Aws::String&& value) { SetResourceAccessRole(std::move(value)); return *this;}
    inline Project& WithResourceAccessRole(const char* value) { SetResourceAccessRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of additional automatic retries after a failed build. For
     * example, if the auto-retry limit is set to 2, CodeBuild will call the
     * <code>RetryBuild</code> API to automatically retry your build for up to 2
     * additional times.</p>
     */
    inline int GetAutoRetryLimit() const{ return m_autoRetryLimit; }
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

    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet = false;

    int m_queuedTimeoutInMinutes;
    bool m_queuedTimeoutInMinutesHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
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

    int m_concurrentBuildLimit;
    bool m_concurrentBuildLimitHasBeenSet = false;

    ProjectVisibilityType m_projectVisibility;
    bool m_projectVisibilityHasBeenSet = false;

    Aws::String m_publicProjectAlias;
    bool m_publicProjectAliasHasBeenSet = false;

    Aws::String m_resourceAccessRole;
    bool m_resourceAccessRoleHasBeenSet = false;

    int m_autoRetryLimit;
    bool m_autoRetryLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
