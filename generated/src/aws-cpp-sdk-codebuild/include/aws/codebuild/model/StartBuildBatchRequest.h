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
    AWS_CODEBUILD_API StartBuildBatchRequest();

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
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline StartBuildBatchRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline StartBuildBatchRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline StartBuildBatchRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectSource</code> objects that override the secondary
     * sources defined in the batch build project.</p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySourcesOverride() const{ return m_secondarySourcesOverride; }
    inline bool SecondarySourcesOverrideHasBeenSet() const { return m_secondarySourcesOverrideHasBeenSet; }
    inline void SetSecondarySourcesOverride(const Aws::Vector<ProjectSource>& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride = value; }
    inline void SetSecondarySourcesOverride(Aws::Vector<ProjectSource>&& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride = std::move(value); }
    inline StartBuildBatchRequest& WithSecondarySourcesOverride(const Aws::Vector<ProjectSource>& value) { SetSecondarySourcesOverride(value); return *this;}
    inline StartBuildBatchRequest& WithSecondarySourcesOverride(Aws::Vector<ProjectSource>&& value) { SetSecondarySourcesOverride(std::move(value)); return *this;}
    inline StartBuildBatchRequest& AddSecondarySourcesOverride(const ProjectSource& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride.push_back(value); return *this; }
    inline StartBuildBatchRequest& AddSecondarySourcesOverride(ProjectSource&& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectSourceVersion</code> objects that override the
     * secondary source versions in the batch build project.</p>
     */
    inline const Aws::Vector<ProjectSourceVersion>& GetSecondarySourcesVersionOverride() const{ return m_secondarySourcesVersionOverride; }
    inline bool SecondarySourcesVersionOverrideHasBeenSet() const { return m_secondarySourcesVersionOverrideHasBeenSet; }
    inline void SetSecondarySourcesVersionOverride(const Aws::Vector<ProjectSourceVersion>& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride = value; }
    inline void SetSecondarySourcesVersionOverride(Aws::Vector<ProjectSourceVersion>&& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride = std::move(value); }
    inline StartBuildBatchRequest& WithSecondarySourcesVersionOverride(const Aws::Vector<ProjectSourceVersion>& value) { SetSecondarySourcesVersionOverride(value); return *this;}
    inline StartBuildBatchRequest& WithSecondarySourcesVersionOverride(Aws::Vector<ProjectSourceVersion>&& value) { SetSecondarySourcesVersionOverride(std::move(value)); return *this;}
    inline StartBuildBatchRequest& AddSecondarySourcesVersionOverride(const ProjectSourceVersion& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride.push_back(value); return *this; }
    inline StartBuildBatchRequest& AddSecondarySourcesVersionOverride(ProjectSourceVersion&& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }
    inline StartBuildBatchRequest& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}
    inline StartBuildBatchRequest& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}
    inline StartBuildBatchRequest& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectArtifacts</code> objects that contains information
     * about the build output artifact overrides for the build project.</p>
     */
    inline const ProjectArtifacts& GetArtifactsOverride() const{ return m_artifactsOverride; }
    inline bool ArtifactsOverrideHasBeenSet() const { return m_artifactsOverrideHasBeenSet; }
    inline void SetArtifactsOverride(const ProjectArtifacts& value) { m_artifactsOverrideHasBeenSet = true; m_artifactsOverride = value; }
    inline void SetArtifactsOverride(ProjectArtifacts&& value) { m_artifactsOverrideHasBeenSet = true; m_artifactsOverride = std::move(value); }
    inline StartBuildBatchRequest& WithArtifactsOverride(const ProjectArtifacts& value) { SetArtifactsOverride(value); return *this;}
    inline StartBuildBatchRequest& WithArtifactsOverride(ProjectArtifacts&& value) { SetArtifactsOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectArtifacts</code> objects that override the secondary
     * artifacts defined in the batch build project.</p>
     */
    inline const Aws::Vector<ProjectArtifacts>& GetSecondaryArtifactsOverride() const{ return m_secondaryArtifactsOverride; }
    inline bool SecondaryArtifactsOverrideHasBeenSet() const { return m_secondaryArtifactsOverrideHasBeenSet; }
    inline void SetSecondaryArtifactsOverride(const Aws::Vector<ProjectArtifacts>& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride = value; }
    inline void SetSecondaryArtifactsOverride(Aws::Vector<ProjectArtifacts>&& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride = std::move(value); }
    inline StartBuildBatchRequest& WithSecondaryArtifactsOverride(const Aws::Vector<ProjectArtifacts>& value) { SetSecondaryArtifactsOverride(value); return *this;}
    inline StartBuildBatchRequest& WithSecondaryArtifactsOverride(Aws::Vector<ProjectArtifacts>&& value) { SetSecondaryArtifactsOverride(std::move(value)); return *this;}
    inline StartBuildBatchRequest& AddSecondaryArtifactsOverride(const ProjectArtifacts& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride.push_back(value); return *this; }
    inline StartBuildBatchRequest& AddSecondaryArtifactsOverride(ProjectArtifacts&& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>EnvironmentVariable</code> objects that override, or add
     * to, the environment variables defined in the batch build project.</p>
     */
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironmentVariablesOverride() const{ return m_environmentVariablesOverride; }
    inline bool EnvironmentVariablesOverrideHasBeenSet() const { return m_environmentVariablesOverrideHasBeenSet; }
    inline void SetEnvironmentVariablesOverride(const Aws::Vector<EnvironmentVariable>& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride = value; }
    inline void SetEnvironmentVariablesOverride(Aws::Vector<EnvironmentVariable>&& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride = std::move(value); }
    inline StartBuildBatchRequest& WithEnvironmentVariablesOverride(const Aws::Vector<EnvironmentVariable>& value) { SetEnvironmentVariablesOverride(value); return *this;}
    inline StartBuildBatchRequest& WithEnvironmentVariablesOverride(Aws::Vector<EnvironmentVariable>&& value) { SetEnvironmentVariablesOverride(std::move(value)); return *this;}
    inline StartBuildBatchRequest& AddEnvironmentVariablesOverride(const EnvironmentVariable& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride.push_back(value); return *this; }
    inline StartBuildBatchRequest& AddEnvironmentVariablesOverride(EnvironmentVariable&& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source input type that overrides the source input defined in the batch
     * build project.</p>
     */
    inline const SourceType& GetSourceTypeOverride() const{ return m_sourceTypeOverride; }
    inline bool SourceTypeOverrideHasBeenSet() const { return m_sourceTypeOverrideHasBeenSet; }
    inline void SetSourceTypeOverride(const SourceType& value) { m_sourceTypeOverrideHasBeenSet = true; m_sourceTypeOverride = value; }
    inline void SetSourceTypeOverride(SourceType&& value) { m_sourceTypeOverrideHasBeenSet = true; m_sourceTypeOverride = std::move(value); }
    inline StartBuildBatchRequest& WithSourceTypeOverride(const SourceType& value) { SetSourceTypeOverride(value); return *this;}
    inline StartBuildBatchRequest& WithSourceTypeOverride(SourceType&& value) { SetSourceTypeOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A location that overrides, for this batch build, the source location defined
     * in the batch build project.</p>
     */
    inline const Aws::String& GetSourceLocationOverride() const{ return m_sourceLocationOverride; }
    inline bool SourceLocationOverrideHasBeenSet() const { return m_sourceLocationOverrideHasBeenSet; }
    inline void SetSourceLocationOverride(const Aws::String& value) { m_sourceLocationOverrideHasBeenSet = true; m_sourceLocationOverride = value; }
    inline void SetSourceLocationOverride(Aws::String&& value) { m_sourceLocationOverrideHasBeenSet = true; m_sourceLocationOverride = std::move(value); }
    inline void SetSourceLocationOverride(const char* value) { m_sourceLocationOverrideHasBeenSet = true; m_sourceLocationOverride.assign(value); }
    inline StartBuildBatchRequest& WithSourceLocationOverride(const Aws::String& value) { SetSourceLocationOverride(value); return *this;}
    inline StartBuildBatchRequest& WithSourceLocationOverride(Aws::String&& value) { SetSourceLocationOverride(std::move(value)); return *this;}
    inline StartBuildBatchRequest& WithSourceLocationOverride(const char* value) { SetSourceLocationOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>SourceAuth</code> object that overrides the one defined in the batch
     * build project. This override applies only if the build project's source is
     * BitBucket or GitHub.</p>
     */
    inline const SourceAuth& GetSourceAuthOverride() const{ return m_sourceAuthOverride; }
    inline bool SourceAuthOverrideHasBeenSet() const { return m_sourceAuthOverrideHasBeenSet; }
    inline void SetSourceAuthOverride(const SourceAuth& value) { m_sourceAuthOverrideHasBeenSet = true; m_sourceAuthOverride = value; }
    inline void SetSourceAuthOverride(SourceAuth&& value) { m_sourceAuthOverrideHasBeenSet = true; m_sourceAuthOverride = std::move(value); }
    inline StartBuildBatchRequest& WithSourceAuthOverride(const SourceAuth& value) { SetSourceAuthOverride(value); return *this;}
    inline StartBuildBatchRequest& WithSourceAuthOverride(SourceAuth&& value) { SetSourceAuthOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined depth of history, with a minimum value of 0, that overrides,
     * for this batch build only, any previous depth of history defined in the batch
     * build project.</p>
     */
    inline int GetGitCloneDepthOverride() const{ return m_gitCloneDepthOverride; }
    inline bool GitCloneDepthOverrideHasBeenSet() const { return m_gitCloneDepthOverrideHasBeenSet; }
    inline void SetGitCloneDepthOverride(int value) { m_gitCloneDepthOverrideHasBeenSet = true; m_gitCloneDepthOverride = value; }
    inline StartBuildBatchRequest& WithGitCloneDepthOverride(int value) { SetGitCloneDepthOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>GitSubmodulesConfig</code> object that overrides the Git submodules
     * configuration for this batch build.</p>
     */
    inline const GitSubmodulesConfig& GetGitSubmodulesConfigOverride() const{ return m_gitSubmodulesConfigOverride; }
    inline bool GitSubmodulesConfigOverrideHasBeenSet() const { return m_gitSubmodulesConfigOverrideHasBeenSet; }
    inline void SetGitSubmodulesConfigOverride(const GitSubmodulesConfig& value) { m_gitSubmodulesConfigOverrideHasBeenSet = true; m_gitSubmodulesConfigOverride = value; }
    inline void SetGitSubmodulesConfigOverride(GitSubmodulesConfig&& value) { m_gitSubmodulesConfigOverrideHasBeenSet = true; m_gitSubmodulesConfigOverride = std::move(value); }
    inline StartBuildBatchRequest& WithGitSubmodulesConfigOverride(const GitSubmodulesConfig& value) { SetGitSubmodulesConfigOverride(value); return *this;}
    inline StartBuildBatchRequest& WithGitSubmodulesConfigOverride(GitSubmodulesConfig&& value) { SetGitSubmodulesConfigOverride(std::move(value)); return *this;}
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
    inline const Aws::String& GetBuildspecOverride() const{ return m_buildspecOverride; }
    inline bool BuildspecOverrideHasBeenSet() const { return m_buildspecOverrideHasBeenSet; }
    inline void SetBuildspecOverride(const Aws::String& value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride = value; }
    inline void SetBuildspecOverride(Aws::String&& value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride = std::move(value); }
    inline void SetBuildspecOverride(const char* value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride.assign(value); }
    inline StartBuildBatchRequest& WithBuildspecOverride(const Aws::String& value) { SetBuildspecOverride(value); return *this;}
    inline StartBuildBatchRequest& WithBuildspecOverride(Aws::String&& value) { SetBuildspecOverride(std::move(value)); return *this;}
    inline StartBuildBatchRequest& WithBuildspecOverride(const char* value) { SetBuildspecOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable this flag to override the insecure SSL setting that is specified in
     * the batch build project. The insecure SSL setting determines whether to ignore
     * SSL warnings while connecting to the project source code. This override applies
     * only if the build's source is GitHub Enterprise.</p>
     */
    inline bool GetInsecureSslOverride() const{ return m_insecureSslOverride; }
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
    inline bool GetReportBuildBatchStatusOverride() const{ return m_reportBuildBatchStatusOverride; }
    inline bool ReportBuildBatchStatusOverrideHasBeenSet() const { return m_reportBuildBatchStatusOverrideHasBeenSet; }
    inline void SetReportBuildBatchStatusOverride(bool value) { m_reportBuildBatchStatusOverrideHasBeenSet = true; m_reportBuildBatchStatusOverride = value; }
    inline StartBuildBatchRequest& WithReportBuildBatchStatusOverride(bool value) { SetReportBuildBatchStatusOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container type for this batch build that overrides the one specified in the
     * batch build project.</p>
     */
    inline const EnvironmentType& GetEnvironmentTypeOverride() const{ return m_environmentTypeOverride; }
    inline bool EnvironmentTypeOverrideHasBeenSet() const { return m_environmentTypeOverrideHasBeenSet; }
    inline void SetEnvironmentTypeOverride(const EnvironmentType& value) { m_environmentTypeOverrideHasBeenSet = true; m_environmentTypeOverride = value; }
    inline void SetEnvironmentTypeOverride(EnvironmentType&& value) { m_environmentTypeOverrideHasBeenSet = true; m_environmentTypeOverride = std::move(value); }
    inline StartBuildBatchRequest& WithEnvironmentTypeOverride(const EnvironmentType& value) { SetEnvironmentTypeOverride(value); return *this;}
    inline StartBuildBatchRequest& WithEnvironmentTypeOverride(EnvironmentType&& value) { SetEnvironmentTypeOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an image for this batch build that overrides the one specified in
     * the batch build project.</p>
     */
    inline const Aws::String& GetImageOverride() const{ return m_imageOverride; }
    inline bool ImageOverrideHasBeenSet() const { return m_imageOverrideHasBeenSet; }
    inline void SetImageOverride(const Aws::String& value) { m_imageOverrideHasBeenSet = true; m_imageOverride = value; }
    inline void SetImageOverride(Aws::String&& value) { m_imageOverrideHasBeenSet = true; m_imageOverride = std::move(value); }
    inline void SetImageOverride(const char* value) { m_imageOverrideHasBeenSet = true; m_imageOverride.assign(value); }
    inline StartBuildBatchRequest& WithImageOverride(const Aws::String& value) { SetImageOverride(value); return *this;}
    inline StartBuildBatchRequest& WithImageOverride(Aws::String&& value) { SetImageOverride(std::move(value)); return *this;}
    inline StartBuildBatchRequest& WithImageOverride(const char* value) { SetImageOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a compute type for this batch build that overrides the one
     * specified in the batch build project.</p>
     */
    inline const ComputeType& GetComputeTypeOverride() const{ return m_computeTypeOverride; }
    inline bool ComputeTypeOverrideHasBeenSet() const { return m_computeTypeOverrideHasBeenSet; }
    inline void SetComputeTypeOverride(const ComputeType& value) { m_computeTypeOverrideHasBeenSet = true; m_computeTypeOverride = value; }
    inline void SetComputeTypeOverride(ComputeType&& value) { m_computeTypeOverrideHasBeenSet = true; m_computeTypeOverride = std::move(value); }
    inline StartBuildBatchRequest& WithComputeTypeOverride(const ComputeType& value) { SetComputeTypeOverride(value); return *this;}
    inline StartBuildBatchRequest& WithComputeTypeOverride(ComputeType&& value) { SetComputeTypeOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a certificate for this batch build that overrides the one
     * specified in the batch build project.</p>
     */
    inline const Aws::String& GetCertificateOverride() const{ return m_certificateOverride; }
    inline bool CertificateOverrideHasBeenSet() const { return m_certificateOverrideHasBeenSet; }
    inline void SetCertificateOverride(const Aws::String& value) { m_certificateOverrideHasBeenSet = true; m_certificateOverride = value; }
    inline void SetCertificateOverride(Aws::String&& value) { m_certificateOverrideHasBeenSet = true; m_certificateOverride = std::move(value); }
    inline void SetCertificateOverride(const char* value) { m_certificateOverrideHasBeenSet = true; m_certificateOverride.assign(value); }
    inline StartBuildBatchRequest& WithCertificateOverride(const Aws::String& value) { SetCertificateOverride(value); return *this;}
    inline StartBuildBatchRequest& WithCertificateOverride(Aws::String&& value) { SetCertificateOverride(std::move(value)); return *this;}
    inline StartBuildBatchRequest& WithCertificateOverride(const char* value) { SetCertificateOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ProjectCache</code> object that specifies cache overrides.</p>
     */
    inline const ProjectCache& GetCacheOverride() const{ return m_cacheOverride; }
    inline bool CacheOverrideHasBeenSet() const { return m_cacheOverrideHasBeenSet; }
    inline void SetCacheOverride(const ProjectCache& value) { m_cacheOverrideHasBeenSet = true; m_cacheOverride = value; }
    inline void SetCacheOverride(ProjectCache&& value) { m_cacheOverrideHasBeenSet = true; m_cacheOverride = std::move(value); }
    inline StartBuildBatchRequest& WithCacheOverride(const ProjectCache& value) { SetCacheOverride(value); return *this;}
    inline StartBuildBatchRequest& WithCacheOverride(ProjectCache&& value) { SetCacheOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a service role for this batch build that overrides the one
     * specified in the batch build project.</p>
     */
    inline const Aws::String& GetServiceRoleOverride() const{ return m_serviceRoleOverride; }
    inline bool ServiceRoleOverrideHasBeenSet() const { return m_serviceRoleOverrideHasBeenSet; }
    inline void SetServiceRoleOverride(const Aws::String& value) { m_serviceRoleOverrideHasBeenSet = true; m_serviceRoleOverride = value; }
    inline void SetServiceRoleOverride(Aws::String&& value) { m_serviceRoleOverrideHasBeenSet = true; m_serviceRoleOverride = std::move(value); }
    inline void SetServiceRoleOverride(const char* value) { m_serviceRoleOverrideHasBeenSet = true; m_serviceRoleOverride.assign(value); }
    inline StartBuildBatchRequest& WithServiceRoleOverride(const Aws::String& value) { SetServiceRoleOverride(value); return *this;}
    inline StartBuildBatchRequest& WithServiceRoleOverride(Aws::String&& value) { SetServiceRoleOverride(std::move(value)); return *this;}
    inline StartBuildBatchRequest& WithServiceRoleOverride(const char* value) { SetServiceRoleOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable this flag to override privileged mode in the batch build project.</p>
     */
    inline bool GetPrivilegedModeOverride() const{ return m_privilegedModeOverride; }
    inline bool PrivilegedModeOverrideHasBeenSet() const { return m_privilegedModeOverrideHasBeenSet; }
    inline void SetPrivilegedModeOverride(bool value) { m_privilegedModeOverrideHasBeenSet = true; m_privilegedModeOverride = value; }
    inline StartBuildBatchRequest& WithPrivilegedModeOverride(bool value) { SetPrivilegedModeOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overrides the build timeout specified in the batch build project.</p>
     */
    inline int GetBuildTimeoutInMinutesOverride() const{ return m_buildTimeoutInMinutesOverride; }
    inline bool BuildTimeoutInMinutesOverrideHasBeenSet() const { return m_buildTimeoutInMinutesOverrideHasBeenSet; }
    inline void SetBuildTimeoutInMinutesOverride(int value) { m_buildTimeoutInMinutesOverrideHasBeenSet = true; m_buildTimeoutInMinutesOverride = value; }
    inline StartBuildBatchRequest& WithBuildTimeoutInMinutesOverride(int value) { SetBuildTimeoutInMinutesOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes a batch build is allowed to be queued before it times
     * out.</p>
     */
    inline int GetQueuedTimeoutInMinutesOverride() const{ return m_queuedTimeoutInMinutesOverride; }
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
    inline const Aws::String& GetEncryptionKeyOverride() const{ return m_encryptionKeyOverride; }
    inline bool EncryptionKeyOverrideHasBeenSet() const { return m_encryptionKeyOverrideHasBeenSet; }
    inline void SetEncryptionKeyOverride(const Aws::String& value) { m_encryptionKeyOverrideHasBeenSet = true; m_encryptionKeyOverride = value; }
    inline void SetEncryptionKeyOverride(Aws::String&& value) { m_encryptionKeyOverrideHasBeenSet = true; m_encryptionKeyOverride = std::move(value); }
    inline void SetEncryptionKeyOverride(const char* value) { m_encryptionKeyOverrideHasBeenSet = true; m_encryptionKeyOverride.assign(value); }
    inline StartBuildBatchRequest& WithEncryptionKeyOverride(const Aws::String& value) { SetEncryptionKeyOverride(value); return *this;}
    inline StartBuildBatchRequest& WithEncryptionKeyOverride(Aws::String&& value) { SetEncryptionKeyOverride(std::move(value)); return *this;}
    inline StartBuildBatchRequest& WithEncryptionKeyOverride(const char* value) { SetEncryptionKeyOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the <code>StartBuildBatch</code> request. The token is included in the
     * <code>StartBuildBatch</code> request and is valid for five minutes. If you
     * repeat the <code>StartBuildBatch</code> request with the same token, but change
     * a parameter, CodeBuild returns a parameter mismatch error.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline StartBuildBatchRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline StartBuildBatchRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline StartBuildBatchRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>LogsConfig</code> object that override the log settings defined in
     * the batch build project.</p>
     */
    inline const LogsConfig& GetLogsConfigOverride() const{ return m_logsConfigOverride; }
    inline bool LogsConfigOverrideHasBeenSet() const { return m_logsConfigOverrideHasBeenSet; }
    inline void SetLogsConfigOverride(const LogsConfig& value) { m_logsConfigOverrideHasBeenSet = true; m_logsConfigOverride = value; }
    inline void SetLogsConfigOverride(LogsConfig&& value) { m_logsConfigOverrideHasBeenSet = true; m_logsConfigOverride = std::move(value); }
    inline StartBuildBatchRequest& WithLogsConfigOverride(const LogsConfig& value) { SetLogsConfigOverride(value); return *this;}
    inline StartBuildBatchRequest& WithLogsConfigOverride(LogsConfig&& value) { SetLogsConfigOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>RegistryCredential</code> object that overrides credentials for
     * access to a private registry.</p>
     */
    inline const RegistryCredential& GetRegistryCredentialOverride() const{ return m_registryCredentialOverride; }
    inline bool RegistryCredentialOverrideHasBeenSet() const { return m_registryCredentialOverrideHasBeenSet; }
    inline void SetRegistryCredentialOverride(const RegistryCredential& value) { m_registryCredentialOverrideHasBeenSet = true; m_registryCredentialOverride = value; }
    inline void SetRegistryCredentialOverride(RegistryCredential&& value) { m_registryCredentialOverrideHasBeenSet = true; m_registryCredentialOverride = std::move(value); }
    inline StartBuildBatchRequest& WithRegistryCredentialOverride(const RegistryCredential& value) { SetRegistryCredentialOverride(value); return *this;}
    inline StartBuildBatchRequest& WithRegistryCredentialOverride(RegistryCredential&& value) { SetRegistryCredentialOverride(std::move(value)); return *this;}
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
    inline const ImagePullCredentialsType& GetImagePullCredentialsTypeOverride() const{ return m_imagePullCredentialsTypeOverride; }
    inline bool ImagePullCredentialsTypeOverrideHasBeenSet() const { return m_imagePullCredentialsTypeOverrideHasBeenSet; }
    inline void SetImagePullCredentialsTypeOverride(const ImagePullCredentialsType& value) { m_imagePullCredentialsTypeOverrideHasBeenSet = true; m_imagePullCredentialsTypeOverride = value; }
    inline void SetImagePullCredentialsTypeOverride(ImagePullCredentialsType&& value) { m_imagePullCredentialsTypeOverrideHasBeenSet = true; m_imagePullCredentialsTypeOverride = std::move(value); }
    inline StartBuildBatchRequest& WithImagePullCredentialsTypeOverride(const ImagePullCredentialsType& value) { SetImagePullCredentialsTypeOverride(value); return *this;}
    inline StartBuildBatchRequest& WithImagePullCredentialsTypeOverride(ImagePullCredentialsType&& value) { SetImagePullCredentialsTypeOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>BuildBatchConfigOverride</code> object that contains batch build
     * configuration overrides.</p>
     */
    inline const ProjectBuildBatchConfig& GetBuildBatchConfigOverride() const{ return m_buildBatchConfigOverride; }
    inline bool BuildBatchConfigOverrideHasBeenSet() const { return m_buildBatchConfigOverrideHasBeenSet; }
    inline void SetBuildBatchConfigOverride(const ProjectBuildBatchConfig& value) { m_buildBatchConfigOverrideHasBeenSet = true; m_buildBatchConfigOverride = value; }
    inline void SetBuildBatchConfigOverride(ProjectBuildBatchConfig&& value) { m_buildBatchConfigOverrideHasBeenSet = true; m_buildBatchConfigOverride = std::move(value); }
    inline StartBuildBatchRequest& WithBuildBatchConfigOverride(const ProjectBuildBatchConfig& value) { SetBuildBatchConfigOverride(value); return *this;}
    inline StartBuildBatchRequest& WithBuildBatchConfigOverride(ProjectBuildBatchConfig&& value) { SetBuildBatchConfigOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if session debugging is enabled for this batch build. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/session-manager.html">Viewing
     * a running build in Session Manager</a>. Batch session debugging is not supported
     * for matrix batch builds.</p>
     */
    inline bool GetDebugSessionEnabled() const{ return m_debugSessionEnabled; }
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

    SourceType m_sourceTypeOverride;
    bool m_sourceTypeOverrideHasBeenSet = false;

    Aws::String m_sourceLocationOverride;
    bool m_sourceLocationOverrideHasBeenSet = false;

    SourceAuth m_sourceAuthOverride;
    bool m_sourceAuthOverrideHasBeenSet = false;

    int m_gitCloneDepthOverride;
    bool m_gitCloneDepthOverrideHasBeenSet = false;

    GitSubmodulesConfig m_gitSubmodulesConfigOverride;
    bool m_gitSubmodulesConfigOverrideHasBeenSet = false;

    Aws::String m_buildspecOverride;
    bool m_buildspecOverrideHasBeenSet = false;

    bool m_insecureSslOverride;
    bool m_insecureSslOverrideHasBeenSet = false;

    bool m_reportBuildBatchStatusOverride;
    bool m_reportBuildBatchStatusOverrideHasBeenSet = false;

    EnvironmentType m_environmentTypeOverride;
    bool m_environmentTypeOverrideHasBeenSet = false;

    Aws::String m_imageOverride;
    bool m_imageOverrideHasBeenSet = false;

    ComputeType m_computeTypeOverride;
    bool m_computeTypeOverrideHasBeenSet = false;

    Aws::String m_certificateOverride;
    bool m_certificateOverrideHasBeenSet = false;

    ProjectCache m_cacheOverride;
    bool m_cacheOverrideHasBeenSet = false;

    Aws::String m_serviceRoleOverride;
    bool m_serviceRoleOverrideHasBeenSet = false;

    bool m_privilegedModeOverride;
    bool m_privilegedModeOverrideHasBeenSet = false;

    int m_buildTimeoutInMinutesOverride;
    bool m_buildTimeoutInMinutesOverrideHasBeenSet = false;

    int m_queuedTimeoutInMinutesOverride;
    bool m_queuedTimeoutInMinutesOverrideHasBeenSet = false;

    Aws::String m_encryptionKeyOverride;
    bool m_encryptionKeyOverrideHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    LogsConfig m_logsConfigOverride;
    bool m_logsConfigOverrideHasBeenSet = false;

    RegistryCredential m_registryCredentialOverride;
    bool m_registryCredentialOverrideHasBeenSet = false;

    ImagePullCredentialsType m_imagePullCredentialsTypeOverride;
    bool m_imagePullCredentialsTypeOverrideHasBeenSet = false;

    ProjectBuildBatchConfig m_buildBatchConfigOverride;
    bool m_buildBatchConfigOverrideHasBeenSet = false;

    bool m_debugSessionEnabled;
    bool m_debugSessionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
