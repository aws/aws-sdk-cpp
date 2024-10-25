/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ProjectSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/ProjectArtifacts.h>
#include <aws/codebuild/model/ProjectCache.h>
#include <aws/codebuild/model/ProjectEnvironment.h>
#include <aws/codebuild/model/VpcConfig.h>
#include <aws/codebuild/model/LogsConfig.h>
#include <aws/codebuild/model/ProjectBuildBatchConfig.h>
#include <aws/codebuild/model/ProjectSourceVersion.h>
#include <aws/codebuild/model/Tag.h>
#include <aws/codebuild/model/ProjectFileSystemLocation.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class UpdateProjectRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API UpdateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the build project.</p>  <p>You cannot change a build
     * project's name.</p> 
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information to be changed about the build input source code for the build
     * project.</p>
     */
    inline const ProjectSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const ProjectSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(ProjectSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline UpdateProjectRequest& WithSource(const ProjectSource& value) { SetSource(value); return *this;}
    inline UpdateProjectRequest& WithSource(ProjectSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySources() const{ return m_secondarySources; }
    inline bool SecondarySourcesHasBeenSet() const { return m_secondarySourcesHasBeenSet; }
    inline void SetSecondarySources(const Aws::Vector<ProjectSource>& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = value; }
    inline void SetSecondarySources(Aws::Vector<ProjectSource>&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = std::move(value); }
    inline UpdateProjectRequest& WithSecondarySources(const Aws::Vector<ProjectSource>& value) { SetSecondarySources(value); return *this;}
    inline UpdateProjectRequest& WithSecondarySources(Aws::Vector<ProjectSource>&& value) { SetSecondarySources(std::move(value)); return *this;}
    inline UpdateProjectRequest& AddSecondarySources(const ProjectSource& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(value); return *this; }
    inline UpdateProjectRequest& AddSecondarySources(ProjectSource&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A version of the build input to be built for this project. If not specified,
     * the latest version is used. If specified, it must be one of: </p> <ul> <li>
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
     * use.</p> </li> </ul> <p> If <code>sourceVersion</code> is specified at the build
     * level, then that version takes precedence over this <code>sourceVersion</code>
     * (at the project level). </p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>CodeBuild User Guide</i>. </p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }
    inline UpdateProjectRequest& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}
    inline UpdateProjectRequest& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. If
     * <code>secondarySourceVersions</code> is specified at the build level, then they
     * take over these <code>secondarySourceVersions</code> (at the project level).
     * </p>
     */
    inline const Aws::Vector<ProjectSourceVersion>& GetSecondarySourceVersions() const{ return m_secondarySourceVersions; }
    inline bool SecondarySourceVersionsHasBeenSet() const { return m_secondarySourceVersionsHasBeenSet; }
    inline void SetSecondarySourceVersions(const Aws::Vector<ProjectSourceVersion>& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = value; }
    inline void SetSecondarySourceVersions(Aws::Vector<ProjectSourceVersion>&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = std::move(value); }
    inline UpdateProjectRequest& WithSecondarySourceVersions(const Aws::Vector<ProjectSourceVersion>& value) { SetSecondarySourceVersions(value); return *this;}
    inline UpdateProjectRequest& WithSecondarySourceVersions(Aws::Vector<ProjectSourceVersion>&& value) { SetSecondarySourceVersions(std::move(value)); return *this;}
    inline UpdateProjectRequest& AddSecondarySourceVersions(const ProjectSourceVersion& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.push_back(value); return *this; }
    inline UpdateProjectRequest& AddSecondarySourceVersions(ProjectSourceVersion&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information to be changed about the build output artifacts for the build
     * project.</p>
     */
    inline const ProjectArtifacts& GetArtifacts() const{ return m_artifacts; }
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }
    inline void SetArtifacts(const ProjectArtifacts& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }
    inline void SetArtifacts(ProjectArtifacts&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::move(value); }
    inline UpdateProjectRequest& WithArtifacts(const ProjectArtifacts& value) { SetArtifacts(value); return *this;}
    inline UpdateProjectRequest& WithArtifacts(ProjectArtifacts&& value) { SetArtifacts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectArtifact</code> objects. </p>
     */
    inline const Aws::Vector<ProjectArtifacts>& GetSecondaryArtifacts() const{ return m_secondaryArtifacts; }
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }
    inline void SetSecondaryArtifacts(const Aws::Vector<ProjectArtifacts>& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = value; }
    inline void SetSecondaryArtifacts(Aws::Vector<ProjectArtifacts>&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::move(value); }
    inline UpdateProjectRequest& WithSecondaryArtifacts(const Aws::Vector<ProjectArtifacts>& value) { SetSecondaryArtifacts(value); return *this;}
    inline UpdateProjectRequest& WithSecondaryArtifacts(Aws::Vector<ProjectArtifacts>&& value) { SetSecondaryArtifacts(std::move(value)); return *this;}
    inline UpdateProjectRequest& AddSecondaryArtifacts(const ProjectArtifacts& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(value); return *this; }
    inline UpdateProjectRequest& AddSecondaryArtifacts(ProjectArtifacts&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Stores recently used information so that it can be quickly accessed at a
     * later time.</p>
     */
    inline const ProjectCache& GetCache() const{ return m_cache; }
    inline bool CacheHasBeenSet() const { return m_cacheHasBeenSet; }
    inline void SetCache(const ProjectCache& value) { m_cacheHasBeenSet = true; m_cache = value; }
    inline void SetCache(ProjectCache&& value) { m_cacheHasBeenSet = true; m_cache = std::move(value); }
    inline UpdateProjectRequest& WithCache(const ProjectCache& value) { SetCache(value); return *this;}
    inline UpdateProjectRequest& WithCache(ProjectCache&& value) { SetCache(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information to be changed about the build environment for the build
     * project.</p>
     */
    inline const ProjectEnvironment& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const ProjectEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(ProjectEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline UpdateProjectRequest& WithEnvironment(const ProjectEnvironment& value) { SetEnvironment(value); return *this;}
    inline UpdateProjectRequest& WithEnvironment(ProjectEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replacement ARN of the IAM role that enables CodeBuild to interact with
     * dependent Amazon Web Services services on behalf of the Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline UpdateProjectRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline UpdateProjectRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replacement value in minutes, from 5 to 2160 (36 hours), for CodeBuild to
     * wait before timing out any related build that did not get marked as
     * completed.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline UpdateProjectRequest& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline int GetQueuedTimeoutInMinutes() const{ return m_queuedTimeoutInMinutes; }
    inline bool QueuedTimeoutInMinutesHasBeenSet() const { return m_queuedTimeoutInMinutesHasBeenSet; }
    inline void SetQueuedTimeoutInMinutes(int value) { m_queuedTimeoutInMinutesHasBeenSet = true; m_queuedTimeoutInMinutes = value; }
    inline UpdateProjectRequest& WithQueuedTimeoutInMinutes(int value) { SetQueuedTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service customer master key (CMK) to be used for
     * encrypting the build output artifacts.</p>  <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p>  <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/&lt;alias-name&gt;</code>). </p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }
    inline UpdateProjectRequest& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}
    inline UpdateProjectRequest& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An updated list of tag key and value pairs associated with this build
     * project.</p> <p>These tags are available for use by Amazon Web Services services
     * that support CodeBuild build project tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline UpdateProjectRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline UpdateProjectRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateProjectRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline UpdateProjectRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>VpcConfig enables CodeBuild to access resources in an Amazon VPC.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline UpdateProjectRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline UpdateProjectRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this to true to generate a publicly accessible URL for your project's
     * build badge.</p>
     */
    inline bool GetBadgeEnabled() const{ return m_badgeEnabled; }
    inline bool BadgeEnabledHasBeenSet() const { return m_badgeEnabledHasBeenSet; }
    inline void SetBadgeEnabled(bool value) { m_badgeEnabledHasBeenSet = true; m_badgeEnabled = value; }
    inline UpdateProjectRequest& WithBadgeEnabled(bool value) { SetBadgeEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about logs for the build project. A project can create logs in
     * CloudWatch Logs, logs in an S3 bucket, or both. </p>
     */
    inline const LogsConfig& GetLogsConfig() const{ return m_logsConfig; }
    inline bool LogsConfigHasBeenSet() const { return m_logsConfigHasBeenSet; }
    inline void SetLogsConfig(const LogsConfig& value) { m_logsConfigHasBeenSet = true; m_logsConfig = value; }
    inline void SetLogsConfig(LogsConfig&& value) { m_logsConfigHasBeenSet = true; m_logsConfig = std::move(value); }
    inline UpdateProjectRequest& WithLogsConfig(const LogsConfig& value) { SetLogsConfig(value); return *this;}
    inline UpdateProjectRequest& WithLogsConfig(LogsConfig&& value) { SetLogsConfig(std::move(value)); return *this;}
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
    inline UpdateProjectRequest& WithFileSystemLocations(const Aws::Vector<ProjectFileSystemLocation>& value) { SetFileSystemLocations(value); return *this;}
    inline UpdateProjectRequest& WithFileSystemLocations(Aws::Vector<ProjectFileSystemLocation>&& value) { SetFileSystemLocations(std::move(value)); return *this;}
    inline UpdateProjectRequest& AddFileSystemLocations(const ProjectFileSystemLocation& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.push_back(value); return *this; }
    inline UpdateProjectRequest& AddFileSystemLocations(ProjectFileSystemLocation&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ProjectBuildBatchConfig& GetBuildBatchConfig() const{ return m_buildBatchConfig; }
    inline bool BuildBatchConfigHasBeenSet() const { return m_buildBatchConfigHasBeenSet; }
    inline void SetBuildBatchConfig(const ProjectBuildBatchConfig& value) { m_buildBatchConfigHasBeenSet = true; m_buildBatchConfig = value; }
    inline void SetBuildBatchConfig(ProjectBuildBatchConfig&& value) { m_buildBatchConfigHasBeenSet = true; m_buildBatchConfig = std::move(value); }
    inline UpdateProjectRequest& WithBuildBatchConfig(const ProjectBuildBatchConfig& value) { SetBuildBatchConfig(value); return *this;}
    inline UpdateProjectRequest& WithBuildBatchConfig(ProjectBuildBatchConfig&& value) { SetBuildBatchConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of concurrent builds that are allowed for this
     * project.</p> <p>New builds are only started if the current number of builds is
     * less than or equal to this limit. If the current build count meets this limit,
     * new builds are throttled and are not run.</p> <p>To remove this limit, set this
     * value to -1.</p>
     */
    inline int GetConcurrentBuildLimit() const{ return m_concurrentBuildLimit; }
    inline bool ConcurrentBuildLimitHasBeenSet() const { return m_concurrentBuildLimitHasBeenSet; }
    inline void SetConcurrentBuildLimit(int value) { m_concurrentBuildLimitHasBeenSet = true; m_concurrentBuildLimit = value; }
    inline UpdateProjectRequest& WithConcurrentBuildLimit(int value) { SetConcurrentBuildLimit(value); return *this;}
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
    inline UpdateProjectRequest& WithAutoRetryLimit(int value) { SetAutoRetryLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    bool m_badgeEnabled;
    bool m_badgeEnabledHasBeenSet = false;

    LogsConfig m_logsConfig;
    bool m_logsConfigHasBeenSet = false;

    Aws::Vector<ProjectFileSystemLocation> m_fileSystemLocations;
    bool m_fileSystemLocationsHasBeenSet = false;

    ProjectBuildBatchConfig m_buildBatchConfig;
    bool m_buildBatchConfigHasBeenSet = false;

    int m_concurrentBuildLimit;
    bool m_concurrentBuildLimitHasBeenSet = false;

    int m_autoRetryLimit;
    bool m_autoRetryLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
