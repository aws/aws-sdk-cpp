/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/ProjectArtifacts.h>
#include <aws/codebuild/model/SourceType.h>
#include <aws/codebuild/model/SourceAuth.h>
#include <aws/codebuild/model/GitSubmodulesConfig.h>
#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/codebuild/model/ComputeType.h>
#include <aws/codebuild/model/ProjectCache.h>
#include <aws/codebuild/model/LogsConfig.h>
#include <aws/codebuild/model/RegistryCredential.h>
#include <aws/codebuild/model/ImagePullCredentialsType.h>
#include <aws/codebuild/model/ProjectBuildBatchConfig.h>
#include <aws/codebuild/model/ProjectSource.h>
#include <aws/codebuild/model/ProjectSourceVersion.h>
#include <aws/codebuild/model/EnvironmentVariable.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class StartBuildBatchRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API StartBuildBatchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBuildBatch"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    StartBuildBatchRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectSource</code> objects that override the secondary
     * sources defined in the batch build project.</p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySourcesOverride() const { return m_secondarySourcesOverride; }
    inline bool SecondarySourcesOverrideHasBeenSet() const { return m_secondarySourcesOverrideHasBeenSet; }
    template<typename SecondarySourcesOverrideT = Aws::Vector<ProjectSource>>
    void SetSecondarySourcesOverride(SecondarySourcesOverrideT&& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride = std::forward<SecondarySourcesOverrideT>(value); }
    template<typename SecondarySourcesOverrideT = Aws::Vector<ProjectSource>>
    StartBuildBatchRequest& WithSecondarySourcesOverride(SecondarySourcesOverrideT&& value) { SetSecondarySourcesOverride(std::forward<SecondarySourcesOverrideT>(value)); return *this;}
    template<typename SecondarySourcesOverrideT = ProjectSource>
    StartBuildBatchRequest& AddSecondarySourcesOverride(SecondarySourcesOverrideT&& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride.emplace_back(std::forward<SecondarySourcesOverrideT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectSourceVersion</code> objects that override the
     * secondary source versions in the batch build project.</p>
     */
    inline const Aws::Vector<ProjectSourceVersion>& GetSecondarySourcesVersionOverride() const { return m_secondarySourcesVersionOverride; }
    inline bool SecondarySourcesVersionOverrideHasBeenSet() const { return m_secondarySourcesVersionOverrideHasBeenSet; }
    template<typename SecondarySourcesVersionOverrideT = Aws::Vector<ProjectSourceVersion>>
    void SetSecondarySourcesVersionOverride(SecondarySourcesVersionOverrideT&& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride = std::forward<SecondarySourcesVersionOverrideT>(value); }
    template<typename SecondarySourcesVersionOverrideT = Aws::Vector<ProjectSourceVersion>>
    StartBuildBatchRequest& WithSecondarySourcesVersionOverride(SecondarySourcesVersionOverrideT&& value) { SetSecondarySourcesVersionOverride(std::forward<SecondarySourcesVersionOverrideT>(value)); return *this;}
    template<typename SecondarySourcesVersionOverrideT = ProjectSourceVersion>
    StartBuildBatchRequest& AddSecondarySourcesVersionOverride(SecondarySourcesVersionOverrideT&& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride.emplace_back(std::forward<SecondarySourcesVersionOverrideT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the batch build input to be built, for this build only. If not
     * specified, the latest version is used. If specified, the contents depends on the
     * source provider:</p> <dl> <dt>CodeCommit</dt> <dd> <p>The commit ID, branch, or
     * Git tag to use.</p> </dd> <dt>GitHub</dt> <dd> <p>The commit ID, pull request
     * ID, branch name, or tag name that corresponds to the version of the source code
     * you want to build. If a pull request ID is specified, it must use the format
     * <code>pr/pull-request-ID</code> (for example <code>pr/25</code>). If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </dd> <dt>Bitbucket</dt> <dd>
     * <p>The commit ID, branch name, or tag name that corresponds to the version of
     * the source code you want to build. If a branch name is specified, the branch's
     * HEAD commit ID is used. If not specified, the default branch's HEAD commit ID is
     * used.</p> </dd> <dt>Amazon S3</dt> <dd> <p>The version ID of the object that
     * represents the build input ZIP file to use.</p> </dd> </dl> <p>If
     * <code>sourceVersion</code> is specified at the project level, then this
     * <code>sourceVersion</code> (at the build level) takes precedence. </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>CodeBuild User Guide</i>. </p>
     */
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    StartBuildBatchRequest& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectArtifacts</code> objects that contains information
     * about the build output artifact overrides for the build project.</p>
     */
    inline const ProjectArtifacts& GetArtifactsOverride() const { return m_artifactsOverride; }
    inline bool ArtifactsOverrideHasBeenSet() const { return m_artifactsOverrideHasBeenSet; }
    template<typename ArtifactsOverrideT = ProjectArtifacts>
    void SetArtifactsOverride(ArtifactsOverrideT&& value) { m_artifactsOverrideHasBeenSet = true; m_artifactsOverride = std::forward<ArtifactsOverrideT>(value); }
    template<typename ArtifactsOverrideT = ProjectArtifacts>
    StartBuildBatchRequest& WithArtifactsOverride(ArtifactsOverrideT&& value) { SetArtifactsOverride(std::forward<ArtifactsOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectArtifacts</code> objects that override the secondary
     * artifacts defined in the batch build project.</p>
     */
    inline const Aws::Vector<ProjectArtifacts>& GetSecondaryArtifactsOverride() const { return m_secondaryArtifactsOverride; }
    inline bool SecondaryArtifactsOverrideHasBeenSet() const { return m_secondaryArtifactsOverrideHasBeenSet; }
    template<typename SecondaryArtifactsOverrideT = Aws::Vector<ProjectArtifacts>>
    void SetSecondaryArtifactsOverride(SecondaryArtifactsOverrideT&& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride = std::forward<SecondaryArtifactsOverrideT>(value); }
    template<typename SecondaryArtifactsOverrideT = Aws::Vector<ProjectArtifacts>>
    StartBuildBatchRequest& WithSecondaryArtifactsOverride(SecondaryArtifactsOverrideT&& value) { SetSecondaryArtifactsOverride(std::forward<SecondaryArtifactsOverrideT>(value)); return *this;}
    template<typename SecondaryArtifactsOverrideT = ProjectArtifacts>
    StartBuildBatchRequest& AddSecondaryArtifactsOverride(SecondaryArtifactsOverrideT&& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride.emplace_back(std::forward<SecondaryArtifactsOverrideT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>EnvironmentVariable</code> objects that override, or add
     * to, the environment variables defined in the batch build project.</p>
     */
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironmentVariablesOverride() const { return m_environmentVariablesOverride; }
    inline bool EnvironmentVariablesOverrideHasBeenSet() const { return m_environmentVariablesOverrideHasBeenSet; }
    template<typename EnvironmentVariablesOverrideT = Aws::Vector<EnvironmentVariable>>
    void SetEnvironmentVariablesOverride(EnvironmentVariablesOverrideT&& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride = std::forward<EnvironmentVariablesOverrideT>(value); }
    template<typename EnvironmentVariablesOverrideT = Aws::Vector<EnvironmentVariable>>
    StartBuildBatchRequest& WithEnvironmentVariablesOverride(EnvironmentVariablesOverrideT&& value) { SetEnvironmentVariablesOverride(std::forward<EnvironmentVariablesOverrideT>(value)); return *this;}
    template<typename EnvironmentVariablesOverrideT = EnvironmentVariable>
    StartBuildBatchRequest& AddEnvironmentVariablesOverride(EnvironmentVariablesOverrideT&& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride.emplace_back(std::forward<EnvironmentVariablesOverrideT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source input type that overrides the source input defined in the batch
     * build project.</p>
     */
    inline SourceType GetSourceTypeOverride() const { return m_sourceTypeOverride; }
    inline bool SourceTypeOverrideHasBeenSet() const { return m_sourceTypeOverrideHasBeenSet; }
    inline void SetSourceTypeOverride(SourceType value) { m_sourceTypeOverrideHasBeenSet = true; m_sourceTypeOverride = value; }
    inline StartBuildBatchRequest& WithSourceTypeOverride(SourceType value) { SetSourceTypeOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A location that overrides, for this batch build, the source location defined
     * in the batch build project.</p>
     */
    inline const Aws::String& GetSourceLocationOverride() const { return m_sourceLocationOverride; }
    inline bool SourceLocationOverrideHasBeenSet() const { return m_sourceLocationOverrideHasBeenSet; }
    template<typename SourceLocationOverrideT = Aws::String>
    void SetSourceLocationOverride(SourceLocationOverrideT&& value) { m_sourceLocationOverrideHasBeenSet = true; m_sourceLocationOverride = std::forward<SourceLocationOverrideT>(value); }
    template<typename SourceLocationOverrideT = Aws::String>
    StartBuildBatchRequest& WithSourceLocationOverride(SourceLocationOverrideT&& value) { SetSourceLocationOverride(std::forward<SourceLocationOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>SourceAuth</code> object that overrides the one defined in the batch
     * build project. This override applies only if the build project's source is
     * BitBucket or GitHub.</p>
     */
    inline const SourceAuth& GetSourceAuthOverride() const { return m_sourceAuthOverride; }
    inline bool SourceAuthOverrideHasBeenSet() const { return m_sourceAuthOverrideHasBeenSet; }
    template<typename SourceAuthOverrideT = SourceAuth>
    void SetSourceAuthOverride(SourceAuthOverrideT&& value) { m_sourceAuthOverrideHasBeenSet = true; m_sourceAuthOverride = std::forward<SourceAuthOverrideT>(value); }
    template<typename SourceAuthOverrideT = SourceAuth>
    StartBuildBatchRequest& WithSourceAuthOverride(SourceAuthOverrideT&& value) { SetSourceAuthOverride(std::forward<SourceAuthOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined depth of history, with a minimum value of 0, that overrides,
     * for this batch build only, any previous depth of history defined in the batch
     * build project.</p>
     */
    inline int GetGitCloneDepthOverride() const { return m_gitCloneDepthOverride; }
    inline bool GitCloneDepthOverrideHasBeenSet() const { return m_gitCloneDepthOverrideHasBeenSet; }
    inline void SetGitCloneDepthOverride(int value) { m_gitCloneDepthOverrideHasBeenSet = true; m_gitCloneDepthOverride = value; }
    inline StartBuildBatchRequest& WithGitCloneDepthOverride(int value) { SetGitCloneDepthOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>GitSubmodulesConfig</code> object that overrides the Git submodules
     * configuration for this batch build.</p>
     */
    inline const GitSubmodulesConfig& GetGitSubmodulesConfigOverride() const { return m_gitSubmodulesConfigOverride; }
    inline bool GitSubmodulesConfigOverrideHasBeenSet() const { return m_gitSubmodulesConfigOverrideHasBeenSet; }
    template<typename GitSubmodulesConfigOverrideT = GitSubmodulesConfig>
    void SetGitSubmodulesConfigOverride(GitSubmodulesConfigOverrideT&& value) { m_gitSubmodulesConfigOverrideHasBeenSet = true; m_gitSubmodulesConfigOverride = std::forward<GitSubmodulesConfigOverrideT>(value); }
    template<typename GitSubmodulesConfigOverrideT = GitSubmodulesConfig>
    StartBuildBatchRequest& WithGitSubmodulesConfigOverride(GitSubmodulesConfigOverrideT&& value) { SetGitSubmodulesConfigOverride(std::forward<GitSubmodulesConfigOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A buildspec file declaration that overrides, for this build only, the latest
     * one already defined in the build project.</p> <p>If this value is set, it can be
     * either an inline buildspec definition, the path to an alternate buildspec file
     * relative to the value of the built-in <code>CODEBUILD_SRC_DIR</code> environment
     * variable, or the path to an S3 bucket. The bucket must be in the same Amazon Web
     * Services Region as the build project. Specify the buildspec file using its ARN
     * (for example, <code>arn:aws:s3:::my-codebuild-sample2/buildspec.yml</code>). If
     * this value is not provided or is set to an empty string, the source code must
     * contain a buildspec file in its root directory. For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-spec-ref.html#build-spec-ref-name-storage">Buildspec
     * File Name and Storage Location</a>. </p>
     */
    inline const Aws::String& GetBuildspecOverride() const { return m_buildspecOverride; }
    inline bool BuildspecOverrideHasBeenSet() const { return m_buildspecOverrideHasBeenSet; }
    template<typename BuildspecOverrideT = Aws::String>
    void SetBuildspecOverride(BuildspecOverrideT&& value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride = std::forward<BuildspecOverrideT>(value); }
    template<typename BuildspecOverrideT = Aws::String>
    StartBuildBatchRequest& WithBuildspecOverride(BuildspecOverrideT&& value) { SetBuildspecOverride(std::forward<BuildspecOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable this flag to override the insecure SSL setting that is specified in
     * the batch build project. The insecure SSL setting determines whether to ignore
     * SSL warnings while connecting to the project source code. This override applies
     * only if the build's source is GitHub Enterprise.</p>
     */
    inline bool GetInsecureSslOverride() const { return m_insecureSslOverride; }
    inline bool InsecureSslOverrideHasBeenSet() const { return m_insecureSslOverrideHasBeenSet; }
    inline void SetInsecureSslOverride(bool value) { m_insecureSslOverrideHasBeenSet = true; m_insecureSslOverride = value; }
    inline StartBuildBatchRequest& WithInsecureSslOverride(bool value) { SetInsecureSslOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to report to your source provider the status of a
     * batch build's start and completion. If you use this option with a source
     * provider other than GitHub, GitHub Enterprise, or Bitbucket, an
     * <code>invalidInputException</code> is thrown. </p>  <p>The status of a
     * build triggered by a webhook is always reported to your source provider. </p>
     * 
     */
    inline bool GetReportBuildBatchStatusOverride() const { return m_reportBuildBatchStatusOverride; }
    inline bool ReportBuildBatchStatusOverrideHasBeenSet() const { return m_reportBuildBatchStatusOverrideHasBeenSet; }
    inline void SetReportBuildBatchStatusOverride(bool value) { m_reportBuildBatchStatusOverrideHasBeenSet = true; m_reportBuildBatchStatusOverride = value; }
    inline StartBuildBatchRequest& WithReportBuildBatchStatusOverride(bool value) { SetReportBuildBatchStatusOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container type for this batch build that overrides the one specified in the
     * batch build project.</p>
     */
    inline EnvironmentType GetEnvironmentTypeOverride() const { return m_environmentTypeOverride; }
    inline bool EnvironmentTypeOverrideHasBeenSet() const { return m_environmentTypeOverrideHasBeenSet; }
    inline void SetEnvironmentTypeOverride(EnvironmentType value) { m_environmentTypeOverrideHasBeenSet = true; m_environmentTypeOverride = value; }
    inline StartBuildBatchRequest& WithEnvironmentTypeOverride(EnvironmentType value) { SetEnvironmentTypeOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an image for this batch build that overrides the one specified in
     * the batch build project.</p>
     */
    inline const Aws::String& GetImageOverride() const { return m_imageOverride; }
    inline bool ImageOverrideHasBeenSet() const { return m_imageOverrideHasBeenSet; }
    template<typename ImageOverrideT = Aws::String>
    void SetImageOverride(ImageOverrideT&& value) { m_imageOverrideHasBeenSet = true; m_imageOverride = std::forward<ImageOverrideT>(value); }
    template<typename ImageOverrideT = Aws::String>
    StartBuildBatchRequest& WithImageOverride(ImageOverrideT&& value) { SetImageOverride(std::forward<ImageOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a compute type for this batch build that overrides the one
     * specified in the batch build project.</p>
     */
    inline ComputeType GetComputeTypeOverride() const { return m_computeTypeOverride; }
    inline bool ComputeTypeOverrideHasBeenSet() const { return m_computeTypeOverrideHasBeenSet; }
    inline void SetComputeTypeOverride(ComputeType value) { m_computeTypeOverrideHasBeenSet = true; m_computeTypeOverride = value; }
    inline StartBuildBatchRequest& WithComputeTypeOverride(ComputeType value) { SetComputeTypeOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a certificate for this batch build that overrides the one
     * specified in the batch build project.</p>
     */
    inline const Aws::String& GetCertificateOverride() const { return m_certificateOverride; }
    inline bool CertificateOverrideHasBeenSet() const { return m_certificateOverrideHasBeenSet; }
    template<typename CertificateOverrideT = Aws::String>
    void SetCertificateOverride(CertificateOverrideT&& value) { m_certificateOverrideHasBeenSet = true; m_certificateOverride = std::forward<CertificateOverrideT>(value); }
    template<typename CertificateOverrideT = Aws::String>
    StartBuildBatchRequest& WithCertificateOverride(CertificateOverrideT&& value) { SetCertificateOverride(std::forward<CertificateOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ProjectCache</code> object that specifies cache overrides.</p>
     */
    inline const ProjectCache& GetCacheOverride() const { return m_cacheOverride; }
    inline bool CacheOverrideHasBeenSet() const { return m_cacheOverrideHasBeenSet; }
    template<typename CacheOverrideT = ProjectCache>
    void SetCacheOverride(CacheOverrideT&& value) { m_cacheOverrideHasBeenSet = true; m_cacheOverride = std::forward<CacheOverrideT>(value); }
    template<typename CacheOverrideT = ProjectCache>
    StartBuildBatchRequest& WithCacheOverride(CacheOverrideT&& value) { SetCacheOverride(std::forward<CacheOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a service role for this batch build that overrides the one
     * specified in the batch build project.</p>
     */
    inline const Aws::String& GetServiceRoleOverride() const { return m_serviceRoleOverride; }
    inline bool ServiceRoleOverrideHasBeenSet() const { return m_serviceRoleOverrideHasBeenSet; }
    template<typename ServiceRoleOverrideT = Aws::String>
    void SetServiceRoleOverride(ServiceRoleOverrideT&& value) { m_serviceRoleOverrideHasBeenSet = true; m_serviceRoleOverride = std::forward<ServiceRoleOverrideT>(value); }
    template<typename ServiceRoleOverrideT = Aws::String>
    StartBuildBatchRequest& WithServiceRoleOverride(ServiceRoleOverrideT&& value) { SetServiceRoleOverride(std::forward<ServiceRoleOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable this flag to override privileged mode in the batch build project.</p>
     */
    inline bool GetPrivilegedModeOverride() const { return m_privilegedModeOverride; }
    inline bool PrivilegedModeOverrideHasBeenSet() const { return m_privilegedModeOverrideHasBeenSet; }
    inline void SetPrivilegedModeOverride(bool value) { m_privilegedModeOverrideHasBeenSet = true; m_privilegedModeOverride = value; }
    inline StartBuildBatchRequest& WithPrivilegedModeOverride(bool value) { SetPrivilegedModeOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overrides the build timeout specified in the batch build project.</p>
     */
    inline int GetBuildTimeoutInMinutesOverride() const { return m_buildTimeoutInMinutesOverride; }
    inline bool BuildTimeoutInMinutesOverrideHasBeenSet() const { return m_buildTimeoutInMinutesOverrideHasBeenSet; }
    inline void SetBuildTimeoutInMinutesOverride(int value) { m_buildTimeoutInMinutesOverrideHasBeenSet = true; m_buildTimeoutInMinutesOverride = value; }
    inline StartBuildBatchRequest& WithBuildTimeoutInMinutesOverride(int value) { SetBuildTimeoutInMinutesOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes a batch build is allowed to be queued before it times
     * out.</p>
     */
    inline int GetQueuedTimeoutInMinutesOverride() const { return m_queuedTimeoutInMinutesOverride; }
    inline bool QueuedTimeoutInMinutesOverrideHasBeenSet() const { return m_queuedTimeoutInMinutesOverrideHasBeenSet; }
    inline void SetQueuedTimeoutInMinutesOverride(int value) { m_queuedTimeoutInMinutesOverrideHasBeenSet = true; m_queuedTimeoutInMinutesOverride = value; }
    inline StartBuildBatchRequest& WithQueuedTimeoutInMinutesOverride(int value) { SetQueuedTimeoutInMinutesOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service customer master key (CMK) that overrides the one
     * specified in the batch build project. The CMK key encrypts the build output
     * artifacts.</p>  <p>You can use a cross-account KMS key to encrypt the
     * build output artifacts if your service role has permission to that key. </p>
     *  <p>You can specify either the Amazon Resource Name (ARN) of the CMK or,
     * if available, the CMK's alias (using the format
     * <code>alias/&lt;alias-name&gt;</code>).</p>
     */
    inline const Aws::String& GetEncryptionKeyOverride() const { return m_encryptionKeyOverride; }
    inline bool EncryptionKeyOverrideHasBeenSet() const { return m_encryptionKeyOverrideHasBeenSet; }
    template<typename EncryptionKeyOverrideT = Aws::String>
    void SetEncryptionKeyOverride(EncryptionKeyOverrideT&& value) { m_encryptionKeyOverrideHasBeenSet = true; m_encryptionKeyOverride = std::forward<EncryptionKeyOverrideT>(value); }
    template<typename EncryptionKeyOverrideT = Aws::String>
    StartBuildBatchRequest& WithEncryptionKeyOverride(EncryptionKeyOverrideT&& value) { SetEncryptionKeyOverride(std::forward<EncryptionKeyOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the <code>StartBuildBatch</code> request. The token is included in the
     * <code>StartBuildBatch</code> request and is valid for five minutes. If you
     * repeat the <code>StartBuildBatch</code> request with the same token, but change
     * a parameter, CodeBuild returns a parameter mismatch error.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    StartBuildBatchRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>LogsConfig</code> object that override the log settings defined in
     * the batch build project.</p>
     */
    inline const LogsConfig& GetLogsConfigOverride() const { return m_logsConfigOverride; }
    inline bool LogsConfigOverrideHasBeenSet() const { return m_logsConfigOverrideHasBeenSet; }
    template<typename LogsConfigOverrideT = LogsConfig>
    void SetLogsConfigOverride(LogsConfigOverrideT&& value) { m_logsConfigOverrideHasBeenSet = true; m_logsConfigOverride = std::forward<LogsConfigOverrideT>(value); }
    template<typename LogsConfigOverrideT = LogsConfig>
    StartBuildBatchRequest& WithLogsConfigOverride(LogsConfigOverrideT&& value) { SetLogsConfigOverride(std::forward<LogsConfigOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>RegistryCredential</code> object that overrides credentials for
     * access to a private registry.</p>
     */
    inline const RegistryCredential& GetRegistryCredentialOverride() const { return m_registryCredentialOverride; }
    inline bool RegistryCredentialOverrideHasBeenSet() const { return m_registryCredentialOverrideHasBeenSet; }
    template<typename RegistryCredentialOverrideT = RegistryCredential>
    void SetRegistryCredentialOverride(RegistryCredentialOverrideT&& value) { m_registryCredentialOverrideHasBeenSet = true; m_registryCredentialOverride = std::forward<RegistryCredentialOverrideT>(value); }
    template<typename RegistryCredentialOverrideT = RegistryCredential>
    StartBuildBatchRequest& WithRegistryCredentialOverride(RegistryCredentialOverrideT&& value) { SetRegistryCredentialOverride(std::forward<RegistryCredentialOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of credentials CodeBuild uses to pull images in your batch build.
     * There are two valid values: </p> <dl> <dt>CODEBUILD</dt> <dd> <p>Specifies that
     * CodeBuild uses its own credentials. This requires that you modify your ECR
     * repository policy to trust CodeBuild's service principal.</p> </dd>
     * <dt>SERVICE_ROLE</dt> <dd> <p>Specifies that CodeBuild uses your build project's
     * service role. </p> </dd> </dl> <p>When using a cross-account or private registry
     * image, you must use <code>SERVICE_ROLE</code> credentials. When using an
     * CodeBuild curated image, you must use <code>CODEBUILD</code> credentials. </p>
     */
    inline ImagePullCredentialsType GetImagePullCredentialsTypeOverride() const { return m_imagePullCredentialsTypeOverride; }
    inline bool ImagePullCredentialsTypeOverrideHasBeenSet() const { return m_imagePullCredentialsTypeOverrideHasBeenSet; }
    inline void SetImagePullCredentialsTypeOverride(ImagePullCredentialsType value) { m_imagePullCredentialsTypeOverrideHasBeenSet = true; m_imagePullCredentialsTypeOverride = value; }
    inline StartBuildBatchRequest& WithImagePullCredentialsTypeOverride(ImagePullCredentialsType value) { SetImagePullCredentialsTypeOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>BuildBatchConfigOverride</code> object that contains batch build
     * configuration overrides.</p>
     */
    inline const ProjectBuildBatchConfig& GetBuildBatchConfigOverride() const { return m_buildBatchConfigOverride; }
    inline bool BuildBatchConfigOverrideHasBeenSet() const { return m_buildBatchConfigOverrideHasBeenSet; }
    template<typename BuildBatchConfigOverrideT = ProjectBuildBatchConfig>
    void SetBuildBatchConfigOverride(BuildBatchConfigOverrideT&& value) { m_buildBatchConfigOverrideHasBeenSet = true; m_buildBatchConfigOverride = std::forward<BuildBatchConfigOverrideT>(value); }
    template<typename BuildBatchConfigOverrideT = ProjectBuildBatchConfig>
    StartBuildBatchRequest& WithBuildBatchConfigOverride(BuildBatchConfigOverrideT&& value) { SetBuildBatchConfigOverride(std::forward<BuildBatchConfigOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if session debugging is enabled for this batch build. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/session-manager.html">Viewing
     * a running build in Session Manager</a>. Batch session debugging is not supported
     * for matrix batch builds.</p>
     */
    inline bool GetDebugSessionEnabled() const { return m_debugSessionEnabled; }
    inline bool DebugSessionEnabledHasBeenSet() const { return m_debugSessionEnabledHasBeenSet; }
    inline void SetDebugSessionEnabled(bool value) { m_debugSessionEnabledHasBeenSet = true; m_debugSessionEnabled = value; }
    inline StartBuildBatchRequest& WithDebugSessionEnabled(bool value) { SetDebugSessionEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::Vector<ProjectSource> m_secondarySourcesOverride;
    bool m_secondarySourcesOverrideHasBeenSet = false;

    Aws::Vector<ProjectSourceVersion> m_secondarySourcesVersionOverride;
    bool m_secondarySourcesVersionOverrideHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;

    ProjectArtifacts m_artifactsOverride;
    bool m_artifactsOverrideHasBeenSet = false;

    Aws::Vector<ProjectArtifacts> m_secondaryArtifactsOverride;
    bool m_secondaryArtifactsOverrideHasBeenSet = false;

    Aws::Vector<EnvironmentVariable> m_environmentVariablesOverride;
    bool m_environmentVariablesOverrideHasBeenSet = false;

    SourceType m_sourceTypeOverride{SourceType::NOT_SET};
    bool m_sourceTypeOverrideHasBeenSet = false;

    Aws::String m_sourceLocationOverride;
    bool m_sourceLocationOverrideHasBeenSet = false;

    SourceAuth m_sourceAuthOverride;
    bool m_sourceAuthOverrideHasBeenSet = false;

    int m_gitCloneDepthOverride{0};
    bool m_gitCloneDepthOverrideHasBeenSet = false;

    GitSubmodulesConfig m_gitSubmodulesConfigOverride;
    bool m_gitSubmodulesConfigOverrideHasBeenSet = false;

    Aws::String m_buildspecOverride;
    bool m_buildspecOverrideHasBeenSet = false;

    bool m_insecureSslOverride{false};
    bool m_insecureSslOverrideHasBeenSet = false;

    bool m_reportBuildBatchStatusOverride{false};
    bool m_reportBuildBatchStatusOverrideHasBeenSet = false;

    EnvironmentType m_environmentTypeOverride{EnvironmentType::NOT_SET};
    bool m_environmentTypeOverrideHasBeenSet = false;

    Aws::String m_imageOverride;
    bool m_imageOverrideHasBeenSet = false;

    ComputeType m_computeTypeOverride{ComputeType::NOT_SET};
    bool m_computeTypeOverrideHasBeenSet = false;

    Aws::String m_certificateOverride;
    bool m_certificateOverrideHasBeenSet = false;

    ProjectCache m_cacheOverride;
    bool m_cacheOverrideHasBeenSet = false;

    Aws::String m_serviceRoleOverride;
    bool m_serviceRoleOverrideHasBeenSet = false;

    bool m_privilegedModeOverride{false};
    bool m_privilegedModeOverrideHasBeenSet = false;

    int m_buildTimeoutInMinutesOverride{0};
    bool m_buildTimeoutInMinutesOverrideHasBeenSet = false;

    int m_queuedTimeoutInMinutesOverride{0};
    bool m_queuedTimeoutInMinutesOverrideHasBeenSet = false;

    Aws::String m_encryptionKeyOverride;
    bool m_encryptionKeyOverrideHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    LogsConfig m_logsConfigOverride;
    bool m_logsConfigOverrideHasBeenSet = false;

    RegistryCredential m_registryCredentialOverride;
    bool m_registryCredentialOverrideHasBeenSet = false;

    ImagePullCredentialsType m_imagePullCredentialsTypeOverride{ImagePullCredentialsType::NOT_SET};
    bool m_imagePullCredentialsTypeOverrideHasBeenSet = false;

    ProjectBuildBatchConfig m_buildBatchConfigOverride;
    bool m_buildBatchConfigOverrideHasBeenSet = false;

    bool m_debugSessionEnabled{false};
    bool m_debugSessionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
