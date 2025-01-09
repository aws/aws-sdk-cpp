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
#include <aws/codebuild/model/BuildStatusConfig.h>
#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/codebuild/model/ComputeType.h>
#include <aws/codebuild/model/ProjectCache.h>
#include <aws/codebuild/model/LogsConfig.h>
#include <aws/codebuild/model/RegistryCredential.h>
#include <aws/codebuild/model/ImagePullCredentialsType.h>
#include <aws/codebuild/model/ProjectFleet.h>
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
  class StartBuildRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API StartBuildRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBuild"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the CodeBuild build project to start running a build.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline StartBuildRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline StartBuildRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline StartBuildRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySourcesOverride() const{ return m_secondarySourcesOverride; }
    inline bool SecondarySourcesOverrideHasBeenSet() const { return m_secondarySourcesOverrideHasBeenSet; }
    inline void SetSecondarySourcesOverride(const Aws::Vector<ProjectSource>& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride = value; }
    inline void SetSecondarySourcesOverride(Aws::Vector<ProjectSource>&& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride = std::move(value); }
    inline StartBuildRequest& WithSecondarySourcesOverride(const Aws::Vector<ProjectSource>& value) { SetSecondarySourcesOverride(value); return *this;}
    inline StartBuildRequest& WithSecondarySourcesOverride(Aws::Vector<ProjectSource>&& value) { SetSecondarySourcesOverride(std::move(value)); return *this;}
    inline StartBuildRequest& AddSecondarySourcesOverride(const ProjectSource& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride.push_back(value); return *this; }
    inline StartBuildRequest& AddSecondarySourcesOverride(ProjectSource&& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects that specify one or
     * more versions of the project's secondary sources to be used for this build only.
     * </p>
     */
    inline const Aws::Vector<ProjectSourceVersion>& GetSecondarySourcesVersionOverride() const{ return m_secondarySourcesVersionOverride; }
    inline bool SecondarySourcesVersionOverrideHasBeenSet() const { return m_secondarySourcesVersionOverrideHasBeenSet; }
    inline void SetSecondarySourcesVersionOverride(const Aws::Vector<ProjectSourceVersion>& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride = value; }
    inline void SetSecondarySourcesVersionOverride(Aws::Vector<ProjectSourceVersion>&& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride = std::move(value); }
    inline StartBuildRequest& WithSecondarySourcesVersionOverride(const Aws::Vector<ProjectSourceVersion>& value) { SetSecondarySourcesVersionOverride(value); return *this;}
    inline StartBuildRequest& WithSecondarySourcesVersionOverride(Aws::Vector<ProjectSourceVersion>&& value) { SetSecondarySourcesVersionOverride(std::move(value)); return *this;}
    inline StartBuildRequest& AddSecondarySourcesVersionOverride(const ProjectSourceVersion& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride.push_back(value); return *this; }
    inline StartBuildRequest& AddSecondarySourcesVersionOverride(ProjectSourceVersion&& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the build input to be built, for this build only. If not
     * specified, the latest version is used. If specified, the contents depends on the
     * source provider:</p> <dl> <dt>CodeCommit</dt> <dd> <p>The commit ID, branch, or
     * Git tag to use.</p> </dd> <dt>GitHub</dt> <dd> <p>The commit ID, pull request
     * ID, branch name, or tag name that corresponds to the version of the source code
     * you want to build. If a pull request ID is specified, it must use the format
     * <code>pr/pull-request-ID</code> (for example <code>pr/25</code>). If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </dd> <dt>GitLab</dt> <dd> <p>The
     * commit ID, branch, or Git tag to use.</p> </dd> <dt>Bitbucket</dt> <dd> <p>The
     * commit ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a branch name is specified, the branch's HEAD
     * commit ID is used. If not specified, the default branch's HEAD commit ID is
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
    inline StartBuildRequest& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}
    inline StartBuildRequest& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}
    inline StartBuildRequest& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Build output artifact settings that override, for this build only, the latest
     * ones already defined in the build project.</p>
     */
    inline const ProjectArtifacts& GetArtifactsOverride() const{ return m_artifactsOverride; }
    inline bool ArtifactsOverrideHasBeenSet() const { return m_artifactsOverrideHasBeenSet; }
    inline void SetArtifactsOverride(const ProjectArtifacts& value) { m_artifactsOverrideHasBeenSet = true; m_artifactsOverride = value; }
    inline void SetArtifactsOverride(ProjectArtifacts&& value) { m_artifactsOverrideHasBeenSet = true; m_artifactsOverride = std::move(value); }
    inline StartBuildRequest& WithArtifactsOverride(const ProjectArtifacts& value) { SetArtifactsOverride(value); return *this;}
    inline StartBuildRequest& WithArtifactsOverride(ProjectArtifacts&& value) { SetArtifactsOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline const Aws::Vector<ProjectArtifacts>& GetSecondaryArtifactsOverride() const{ return m_secondaryArtifactsOverride; }
    inline bool SecondaryArtifactsOverrideHasBeenSet() const { return m_secondaryArtifactsOverrideHasBeenSet; }
    inline void SetSecondaryArtifactsOverride(const Aws::Vector<ProjectArtifacts>& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride = value; }
    inline void SetSecondaryArtifactsOverride(Aws::Vector<ProjectArtifacts>&& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride = std::move(value); }
    inline StartBuildRequest& WithSecondaryArtifactsOverride(const Aws::Vector<ProjectArtifacts>& value) { SetSecondaryArtifactsOverride(value); return *this;}
    inline StartBuildRequest& WithSecondaryArtifactsOverride(Aws::Vector<ProjectArtifacts>&& value) { SetSecondaryArtifactsOverride(std::move(value)); return *this;}
    inline StartBuildRequest& AddSecondaryArtifactsOverride(const ProjectArtifacts& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride.push_back(value); return *this; }
    inline StartBuildRequest& AddSecondaryArtifactsOverride(ProjectArtifacts&& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironmentVariablesOverride() const{ return m_environmentVariablesOverride; }
    inline bool EnvironmentVariablesOverrideHasBeenSet() const { return m_environmentVariablesOverrideHasBeenSet; }
    inline void SetEnvironmentVariablesOverride(const Aws::Vector<EnvironmentVariable>& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride = value; }
    inline void SetEnvironmentVariablesOverride(Aws::Vector<EnvironmentVariable>&& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride = std::move(value); }
    inline StartBuildRequest& WithEnvironmentVariablesOverride(const Aws::Vector<EnvironmentVariable>& value) { SetEnvironmentVariablesOverride(value); return *this;}
    inline StartBuildRequest& WithEnvironmentVariablesOverride(Aws::Vector<EnvironmentVariable>&& value) { SetEnvironmentVariablesOverride(std::move(value)); return *this;}
    inline StartBuildRequest& AddEnvironmentVariablesOverride(const EnvironmentVariable& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride.push_back(value); return *this; }
    inline StartBuildRequest& AddEnvironmentVariablesOverride(EnvironmentVariable&& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A source input type, for this build, that overrides the source input defined
     * in the build project.</p>
     */
    inline const SourceType& GetSourceTypeOverride() const{ return m_sourceTypeOverride; }
    inline bool SourceTypeOverrideHasBeenSet() const { return m_sourceTypeOverrideHasBeenSet; }
    inline void SetSourceTypeOverride(const SourceType& value) { m_sourceTypeOverrideHasBeenSet = true; m_sourceTypeOverride = value; }
    inline void SetSourceTypeOverride(SourceType&& value) { m_sourceTypeOverrideHasBeenSet = true; m_sourceTypeOverride = std::move(value); }
    inline StartBuildRequest& WithSourceTypeOverride(const SourceType& value) { SetSourceTypeOverride(value); return *this;}
    inline StartBuildRequest& WithSourceTypeOverride(SourceType&& value) { SetSourceTypeOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A location that overrides, for this build, the source location for the one
     * defined in the build project.</p>
     */
    inline const Aws::String& GetSourceLocationOverride() const{ return m_sourceLocationOverride; }
    inline bool SourceLocationOverrideHasBeenSet() const { return m_sourceLocationOverrideHasBeenSet; }
    inline void SetSourceLocationOverride(const Aws::String& value) { m_sourceLocationOverrideHasBeenSet = true; m_sourceLocationOverride = value; }
    inline void SetSourceLocationOverride(Aws::String&& value) { m_sourceLocationOverrideHasBeenSet = true; m_sourceLocationOverride = std::move(value); }
    inline void SetSourceLocationOverride(const char* value) { m_sourceLocationOverrideHasBeenSet = true; m_sourceLocationOverride.assign(value); }
    inline StartBuildRequest& WithSourceLocationOverride(const Aws::String& value) { SetSourceLocationOverride(value); return *this;}
    inline StartBuildRequest& WithSourceLocationOverride(Aws::String&& value) { SetSourceLocationOverride(std::move(value)); return *this;}
    inline StartBuildRequest& WithSourceLocationOverride(const char* value) { SetSourceLocationOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An authorization type for this build that overrides the one defined in the
     * build project. This override applies only if the build project's source is
     * BitBucket, GitHub, GitLab, or GitLab Self Managed.</p>
     */
    inline const SourceAuth& GetSourceAuthOverride() const{ return m_sourceAuthOverride; }
    inline bool SourceAuthOverrideHasBeenSet() const { return m_sourceAuthOverrideHasBeenSet; }
    inline void SetSourceAuthOverride(const SourceAuth& value) { m_sourceAuthOverrideHasBeenSet = true; m_sourceAuthOverride = value; }
    inline void SetSourceAuthOverride(SourceAuth&& value) { m_sourceAuthOverrideHasBeenSet = true; m_sourceAuthOverride = std::move(value); }
    inline StartBuildRequest& WithSourceAuthOverride(const SourceAuth& value) { SetSourceAuthOverride(value); return *this;}
    inline StartBuildRequest& WithSourceAuthOverride(SourceAuth&& value) { SetSourceAuthOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined depth of history, with a minimum value of 0, that overrides,
     * for this build only, any previous depth of history defined in the build
     * project.</p>
     */
    inline int GetGitCloneDepthOverride() const{ return m_gitCloneDepthOverride; }
    inline bool GitCloneDepthOverrideHasBeenSet() const { return m_gitCloneDepthOverrideHasBeenSet; }
    inline void SetGitCloneDepthOverride(int value) { m_gitCloneDepthOverrideHasBeenSet = true; m_gitCloneDepthOverride = value; }
    inline StartBuildRequest& WithGitCloneDepthOverride(int value) { SetGitCloneDepthOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the Git submodules configuration for this build of an
     * CodeBuild build project. </p>
     */
    inline const GitSubmodulesConfig& GetGitSubmodulesConfigOverride() const{ return m_gitSubmodulesConfigOverride; }
    inline bool GitSubmodulesConfigOverrideHasBeenSet() const { return m_gitSubmodulesConfigOverrideHasBeenSet; }
    inline void SetGitSubmodulesConfigOverride(const GitSubmodulesConfig& value) { m_gitSubmodulesConfigOverrideHasBeenSet = true; m_gitSubmodulesConfigOverride = value; }
    inline void SetGitSubmodulesConfigOverride(GitSubmodulesConfig&& value) { m_gitSubmodulesConfigOverrideHasBeenSet = true; m_gitSubmodulesConfigOverride = std::move(value); }
    inline StartBuildRequest& WithGitSubmodulesConfigOverride(const GitSubmodulesConfig& value) { SetGitSubmodulesConfigOverride(value); return *this;}
    inline StartBuildRequest& WithGitSubmodulesConfigOverride(GitSubmodulesConfig&& value) { SetGitSubmodulesConfigOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A buildspec file declaration that overrides the latest one defined in the
     * build project, for this build only. The buildspec defined on the project is not
     * changed.</p> <p>If this value is set, it can be either an inline buildspec
     * definition, the path to an alternate buildspec file relative to the value of the
     * built-in <code>CODEBUILD_SRC_DIR</code> environment variable, or the path to an
     * S3 bucket. The bucket must be in the same Amazon Web Services Region as the
     * build project. Specify the buildspec file using its ARN (for example,
     * <code>arn:aws:s3:::my-codebuild-sample2/buildspec.yml</code>). If this value is
     * not provided or is set to an empty string, the source code must contain a
     * buildspec file in its root directory. For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-spec-ref.html#build-spec-ref-name-storage">Buildspec
     * File Name and Storage Location</a>.</p>  <p>Since this property allows you
     * to change the build commands that will run in the container, you should note
     * that an IAM principal with the ability to call this API and set this parameter
     * can override the default settings. Moreover, we encourage that you use a
     * trustworthy buildspec location like a file in your source repository or a Amazon
     * S3 bucket.</p> 
     */
    inline const Aws::String& GetBuildspecOverride() const{ return m_buildspecOverride; }
    inline bool BuildspecOverrideHasBeenSet() const { return m_buildspecOverrideHasBeenSet; }
    inline void SetBuildspecOverride(const Aws::String& value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride = value; }
    inline void SetBuildspecOverride(Aws::String&& value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride = std::move(value); }
    inline void SetBuildspecOverride(const char* value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride.assign(value); }
    inline StartBuildRequest& WithBuildspecOverride(const Aws::String& value) { SetBuildspecOverride(value); return *this;}
    inline StartBuildRequest& WithBuildspecOverride(Aws::String&& value) { SetBuildspecOverride(std::move(value)); return *this;}
    inline StartBuildRequest& WithBuildspecOverride(const char* value) { SetBuildspecOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable this flag to override the insecure SSL setting that is specified in
     * the build project. The insecure SSL setting determines whether to ignore SSL
     * warnings while connecting to the project source code. This override applies only
     * if the build's source is GitHub Enterprise.</p>
     */
    inline bool GetInsecureSslOverride() const{ return m_insecureSslOverride; }
    inline bool InsecureSslOverrideHasBeenSet() const { return m_insecureSslOverrideHasBeenSet; }
    inline void SetInsecureSslOverride(bool value) { m_insecureSslOverrideHasBeenSet = true; m_insecureSslOverride = value; }
    inline StartBuildRequest& WithInsecureSslOverride(bool value) { SetInsecureSslOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Set to true to report to your source provider the status of a build's start
     * and completion. If you use this option with a source provider other than GitHub,
     * GitHub Enterprise, GitLab, GitLab Self Managed, or Bitbucket, an
     * <code>invalidInputException</code> is thrown. </p> <p>To be able to report the
     * build status to the source provider, the user associated with the source
     * provider must have write access to the repo. If the user does not have write
     * access, the build status cannot be updated. For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/access-tokens.html">Source
     * provider access</a> in the <i>CodeBuild User Guide</i>.</p>  <p> The
     * status of a build triggered by a webhook is always reported to your source
     * provider. </p> 
     */
    inline bool GetReportBuildStatusOverride() const{ return m_reportBuildStatusOverride; }
    inline bool ReportBuildStatusOverrideHasBeenSet() const { return m_reportBuildStatusOverrideHasBeenSet; }
    inline void SetReportBuildStatusOverride(bool value) { m_reportBuildStatusOverrideHasBeenSet = true; m_reportBuildStatusOverride = value; }
    inline StartBuildRequest& WithReportBuildStatusOverride(bool value) { SetReportBuildStatusOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information that defines how the build project reports the build
     * status to the source provider. This option is only used when the source provider
     * is <code>GITHUB</code>, <code>GITHUB_ENTERPRISE</code>, or
     * <code>BITBUCKET</code>.</p>
     */
    inline const BuildStatusConfig& GetBuildStatusConfigOverride() const{ return m_buildStatusConfigOverride; }
    inline bool BuildStatusConfigOverrideHasBeenSet() const { return m_buildStatusConfigOverrideHasBeenSet; }
    inline void SetBuildStatusConfigOverride(const BuildStatusConfig& value) { m_buildStatusConfigOverrideHasBeenSet = true; m_buildStatusConfigOverride = value; }
    inline void SetBuildStatusConfigOverride(BuildStatusConfig&& value) { m_buildStatusConfigOverrideHasBeenSet = true; m_buildStatusConfigOverride = std::move(value); }
    inline StartBuildRequest& WithBuildStatusConfigOverride(const BuildStatusConfig& value) { SetBuildStatusConfigOverride(value); return *this;}
    inline StartBuildRequest& WithBuildStatusConfigOverride(BuildStatusConfig&& value) { SetBuildStatusConfigOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container type for this build that overrides the one specified in the build
     * project.</p>
     */
    inline const EnvironmentType& GetEnvironmentTypeOverride() const{ return m_environmentTypeOverride; }
    inline bool EnvironmentTypeOverrideHasBeenSet() const { return m_environmentTypeOverrideHasBeenSet; }
    inline void SetEnvironmentTypeOverride(const EnvironmentType& value) { m_environmentTypeOverrideHasBeenSet = true; m_environmentTypeOverride = value; }
    inline void SetEnvironmentTypeOverride(EnvironmentType&& value) { m_environmentTypeOverrideHasBeenSet = true; m_environmentTypeOverride = std::move(value); }
    inline StartBuildRequest& WithEnvironmentTypeOverride(const EnvironmentType& value) { SetEnvironmentTypeOverride(value); return *this;}
    inline StartBuildRequest& WithEnvironmentTypeOverride(EnvironmentType&& value) { SetEnvironmentTypeOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an image for this build that overrides the one specified in the
     * build project.</p>
     */
    inline const Aws::String& GetImageOverride() const{ return m_imageOverride; }
    inline bool ImageOverrideHasBeenSet() const { return m_imageOverrideHasBeenSet; }
    inline void SetImageOverride(const Aws::String& value) { m_imageOverrideHasBeenSet = true; m_imageOverride = value; }
    inline void SetImageOverride(Aws::String&& value) { m_imageOverrideHasBeenSet = true; m_imageOverride = std::move(value); }
    inline void SetImageOverride(const char* value) { m_imageOverrideHasBeenSet = true; m_imageOverride.assign(value); }
    inline StartBuildRequest& WithImageOverride(const Aws::String& value) { SetImageOverride(value); return *this;}
    inline StartBuildRequest& WithImageOverride(Aws::String&& value) { SetImageOverride(std::move(value)); return *this;}
    inline StartBuildRequest& WithImageOverride(const char* value) { SetImageOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a compute type for this build that overrides the one specified in
     * the build project.</p>
     */
    inline const ComputeType& GetComputeTypeOverride() const{ return m_computeTypeOverride; }
    inline bool ComputeTypeOverrideHasBeenSet() const { return m_computeTypeOverrideHasBeenSet; }
    inline void SetComputeTypeOverride(const ComputeType& value) { m_computeTypeOverrideHasBeenSet = true; m_computeTypeOverride = value; }
    inline void SetComputeTypeOverride(ComputeType&& value) { m_computeTypeOverrideHasBeenSet = true; m_computeTypeOverride = std::move(value); }
    inline StartBuildRequest& WithComputeTypeOverride(const ComputeType& value) { SetComputeTypeOverride(value); return *this;}
    inline StartBuildRequest& WithComputeTypeOverride(ComputeType&& value) { SetComputeTypeOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a certificate for this build that overrides the one specified in
     * the build project.</p>
     */
    inline const Aws::String& GetCertificateOverride() const{ return m_certificateOverride; }
    inline bool CertificateOverrideHasBeenSet() const { return m_certificateOverrideHasBeenSet; }
    inline void SetCertificateOverride(const Aws::String& value) { m_certificateOverrideHasBeenSet = true; m_certificateOverride = value; }
    inline void SetCertificateOverride(Aws::String&& value) { m_certificateOverrideHasBeenSet = true; m_certificateOverride = std::move(value); }
    inline void SetCertificateOverride(const char* value) { m_certificateOverrideHasBeenSet = true; m_certificateOverride.assign(value); }
    inline StartBuildRequest& WithCertificateOverride(const Aws::String& value) { SetCertificateOverride(value); return *this;}
    inline StartBuildRequest& WithCertificateOverride(Aws::String&& value) { SetCertificateOverride(std::move(value)); return *this;}
    inline StartBuildRequest& WithCertificateOverride(const char* value) { SetCertificateOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A ProjectCache object specified for this build that overrides the one defined
     * in the build project.</p>
     */
    inline const ProjectCache& GetCacheOverride() const{ return m_cacheOverride; }
    inline bool CacheOverrideHasBeenSet() const { return m_cacheOverrideHasBeenSet; }
    inline void SetCacheOverride(const ProjectCache& value) { m_cacheOverrideHasBeenSet = true; m_cacheOverride = value; }
    inline void SetCacheOverride(ProjectCache&& value) { m_cacheOverrideHasBeenSet = true; m_cacheOverride = std::move(value); }
    inline StartBuildRequest& WithCacheOverride(const ProjectCache& value) { SetCacheOverride(value); return *this;}
    inline StartBuildRequest& WithCacheOverride(ProjectCache&& value) { SetCacheOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a service role for this build that overrides the one specified in
     * the build project.</p>
     */
    inline const Aws::String& GetServiceRoleOverride() const{ return m_serviceRoleOverride; }
    inline bool ServiceRoleOverrideHasBeenSet() const { return m_serviceRoleOverrideHasBeenSet; }
    inline void SetServiceRoleOverride(const Aws::String& value) { m_serviceRoleOverrideHasBeenSet = true; m_serviceRoleOverride = value; }
    inline void SetServiceRoleOverride(Aws::String&& value) { m_serviceRoleOverrideHasBeenSet = true; m_serviceRoleOverride = std::move(value); }
    inline void SetServiceRoleOverride(const char* value) { m_serviceRoleOverrideHasBeenSet = true; m_serviceRoleOverride.assign(value); }
    inline StartBuildRequest& WithServiceRoleOverride(const Aws::String& value) { SetServiceRoleOverride(value); return *this;}
    inline StartBuildRequest& WithServiceRoleOverride(Aws::String&& value) { SetServiceRoleOverride(std::move(value)); return *this;}
    inline StartBuildRequest& WithServiceRoleOverride(const char* value) { SetServiceRoleOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable this flag to override privileged mode in the build project.</p>
     */
    inline bool GetPrivilegedModeOverride() const{ return m_privilegedModeOverride; }
    inline bool PrivilegedModeOverrideHasBeenSet() const { return m_privilegedModeOverrideHasBeenSet; }
    inline void SetPrivilegedModeOverride(bool value) { m_privilegedModeOverrideHasBeenSet = true; m_privilegedModeOverride = value; }
    inline StartBuildRequest& WithPrivilegedModeOverride(bool value) { SetPrivilegedModeOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of build timeout minutes, from 5 to 2160 (36 hours), that
     * overrides, for this build only, the latest setting already defined in the build
     * project.</p>
     */
    inline int GetTimeoutInMinutesOverride() const{ return m_timeoutInMinutesOverride; }
    inline bool TimeoutInMinutesOverrideHasBeenSet() const { return m_timeoutInMinutesOverrideHasBeenSet; }
    inline void SetTimeoutInMinutesOverride(int value) { m_timeoutInMinutesOverrideHasBeenSet = true; m_timeoutInMinutesOverride = value; }
    inline StartBuildRequest& WithTimeoutInMinutesOverride(int value) { SetTimeoutInMinutesOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline int GetQueuedTimeoutInMinutesOverride() const{ return m_queuedTimeoutInMinutesOverride; }
    inline bool QueuedTimeoutInMinutesOverrideHasBeenSet() const { return m_queuedTimeoutInMinutesOverrideHasBeenSet; }
    inline void SetQueuedTimeoutInMinutesOverride(int value) { m_queuedTimeoutInMinutesOverrideHasBeenSet = true; m_queuedTimeoutInMinutesOverride = value; }
    inline StartBuildRequest& WithQueuedTimeoutInMinutesOverride(int value) { SetQueuedTimeoutInMinutesOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service customer master key (CMK) that overrides the one
     * specified in the build project. The CMK key encrypts the build output
     * artifacts.</p>  <p> You can use a cross-account KMS key to encrypt the
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
    inline StartBuildRequest& WithEncryptionKeyOverride(const Aws::String& value) { SetEncryptionKeyOverride(value); return *this;}
    inline StartBuildRequest& WithEncryptionKeyOverride(Aws::String&& value) { SetEncryptionKeyOverride(std::move(value)); return *this;}
    inline StartBuildRequest& WithEncryptionKeyOverride(const char* value) { SetEncryptionKeyOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the StartBuild request. The token is included in the StartBuild request and is
     * valid for 5 minutes. If you repeat the StartBuild request with the same token,
     * but change a parameter, CodeBuild returns a parameter mismatch error. </p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline StartBuildRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline StartBuildRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline StartBuildRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Log settings for this build that override the log settings defined in the
     * build project. </p>
     */
    inline const LogsConfig& GetLogsConfigOverride() const{ return m_logsConfigOverride; }
    inline bool LogsConfigOverrideHasBeenSet() const { return m_logsConfigOverrideHasBeenSet; }
    inline void SetLogsConfigOverride(const LogsConfig& value) { m_logsConfigOverrideHasBeenSet = true; m_logsConfigOverride = value; }
    inline void SetLogsConfigOverride(LogsConfig&& value) { m_logsConfigOverrideHasBeenSet = true; m_logsConfigOverride = std::move(value); }
    inline StartBuildRequest& WithLogsConfigOverride(const LogsConfig& value) { SetLogsConfigOverride(value); return *this;}
    inline StartBuildRequest& WithLogsConfigOverride(LogsConfig&& value) { SetLogsConfigOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The credentials for access to a private registry. </p>
     */
    inline const RegistryCredential& GetRegistryCredentialOverride() const{ return m_registryCredentialOverride; }
    inline bool RegistryCredentialOverrideHasBeenSet() const { return m_registryCredentialOverrideHasBeenSet; }
    inline void SetRegistryCredentialOverride(const RegistryCredential& value) { m_registryCredentialOverrideHasBeenSet = true; m_registryCredentialOverride = value; }
    inline void SetRegistryCredentialOverride(RegistryCredential&& value) { m_registryCredentialOverrideHasBeenSet = true; m_registryCredentialOverride = std::move(value); }
    inline StartBuildRequest& WithRegistryCredentialOverride(const RegistryCredential& value) { SetRegistryCredentialOverride(value); return *this;}
    inline StartBuildRequest& WithRegistryCredentialOverride(RegistryCredential&& value) { SetRegistryCredentialOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of credentials CodeBuild uses to pull images in your build. There
     * are two valid values: </p> <dl> <dt>CODEBUILD</dt> <dd> <p>Specifies that
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
    inline StartBuildRequest& WithImagePullCredentialsTypeOverride(const ImagePullCredentialsType& value) { SetImagePullCredentialsTypeOverride(value); return *this;}
    inline StartBuildRequest& WithImagePullCredentialsTypeOverride(ImagePullCredentialsType&& value) { SetImagePullCredentialsTypeOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if session debugging is enabled for this build. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/session-manager.html">Viewing
     * a running build in Session Manager</a>.</p>
     */
    inline bool GetDebugSessionEnabled() const{ return m_debugSessionEnabled; }
    inline bool DebugSessionEnabledHasBeenSet() const { return m_debugSessionEnabledHasBeenSet; }
    inline void SetDebugSessionEnabled(bool value) { m_debugSessionEnabledHasBeenSet = true; m_debugSessionEnabled = value; }
    inline StartBuildRequest& WithDebugSessionEnabled(bool value) { SetDebugSessionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A ProjectFleet object specified for this build that overrides the one defined
     * in the build project.</p>
     */
    inline const ProjectFleet& GetFleetOverride() const{ return m_fleetOverride; }
    inline bool FleetOverrideHasBeenSet() const { return m_fleetOverrideHasBeenSet; }
    inline void SetFleetOverride(const ProjectFleet& value) { m_fleetOverrideHasBeenSet = true; m_fleetOverride = value; }
    inline void SetFleetOverride(ProjectFleet&& value) { m_fleetOverrideHasBeenSet = true; m_fleetOverride = std::move(value); }
    inline StartBuildRequest& WithFleetOverride(const ProjectFleet& value) { SetFleetOverride(value); return *this;}
    inline StartBuildRequest& WithFleetOverride(ProjectFleet&& value) { SetFleetOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of additional automatic retries after a failed build. For
     * example, if the auto-retry limit is set to 2, CodeBuild will call the
     * <code>RetryBuild</code> API to automatically retry your build for up to 2
     * additional times.</p>
     */
    inline int GetAutoRetryLimitOverride() const{ return m_autoRetryLimitOverride; }
    inline bool AutoRetryLimitOverrideHasBeenSet() const { return m_autoRetryLimitOverrideHasBeenSet; }
    inline void SetAutoRetryLimitOverride(int value) { m_autoRetryLimitOverrideHasBeenSet = true; m_autoRetryLimitOverride = value; }
    inline StartBuildRequest& WithAutoRetryLimitOverride(int value) { SetAutoRetryLimitOverride(value); return *this;}
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

    bool m_reportBuildStatusOverride;
    bool m_reportBuildStatusOverrideHasBeenSet = false;

    BuildStatusConfig m_buildStatusConfigOverride;
    bool m_buildStatusConfigOverrideHasBeenSet = false;

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

    int m_timeoutInMinutesOverride;
    bool m_timeoutInMinutesOverrideHasBeenSet = false;

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

    bool m_debugSessionEnabled;
    bool m_debugSessionEnabledHasBeenSet = false;

    ProjectFleet m_fleetOverride;
    bool m_fleetOverrideHasBeenSet = false;

    int m_autoRetryLimitOverride;
    bool m_autoRetryLimitOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
