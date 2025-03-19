/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/SourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/GitSubmodulesConfig.h>
#include <aws/codebuild/model/SourceAuth.h>
#include <aws/codebuild/model/BuildStatusConfig.h>
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
   * <p>Information about the build input source code for the build
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectSource">AWS
   * API Reference</a></p>
   */
  class ProjectSource
  {
  public:
    AWS_CODEBUILD_API ProjectSource() = default;
    AWS_CODEBUILD_API ProjectSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProjectSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values include:</p> <ul> <li> <p> <code>BITBUCKET</code>: The source code is in
     * a Bitbucket repository.</p> </li> <li> <p> <code>CODECOMMIT</code>: The source
     * code is in an CodeCommit repository.</p> </li> <li> <p>
     * <code>CODEPIPELINE</code>: The source code settings are specified in the source
     * action of a pipeline in CodePipeline.</p> </li> <li> <p> <code>GITHUB</code>:
     * The source code is in a GitHub repository.</p> </li> <li> <p>
     * <code>GITHUB_ENTERPRISE</code>: The source code is in a GitHub Enterprise Server
     * repository.</p> </li> <li> <p> <code>GITLAB</code>: The source code is in a
     * GitLab repository.</p> </li> <li> <p> <code>GITLAB_SELF_MANAGED</code>: The
     * source code is in a self-managed GitLab repository.</p> </li> <li> <p>
     * <code>NO_SOURCE</code>: The project does not have input source code.</p> </li>
     * <li> <p> <code>S3</code>: The source code is in an Amazon S3 bucket.</p> </li>
     * </ul>
     */
    inline SourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ProjectSource& WithType(SourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in CodePipeline, <code>location</code> should not be
     * specified. If it is specified, CodePipeline ignores it. This is because
     * CodePipeline uses the settings in a pipeline's source action instead of this
     * value.</p> </li> <li> <p>For source code in an CodeCommit repository, the HTTPS
     * clone URL to the repository that contains the source code and the buildspec file
     * (for example,
     * <code>https://git-codecommit.&lt;region-ID&gt;.amazonaws.com/v1/repos/&lt;repo-name&gt;</code>).</p>
     * </li> <li> <p>For source code in an Amazon S3 input bucket, one of the
     * following. </p> <ul> <li> <p>The path to the ZIP file that contains the source
     * code (for example,
     * <code>&lt;bucket-name&gt;/&lt;path&gt;/&lt;object-name&gt;.zip</code>). </p>
     * </li> <li> <p>The path to the folder that contains the source code (for example,
     * <code>&lt;bucket-name&gt;/&lt;path-to-source-code&gt;/&lt;folder&gt;/</code>).
     * </p> </li> </ul> </li> <li> <p>For source code in a GitHub repository, the HTTPS
     * clone URL to the repository that contains the source and the buildspec file. You
     * must connect your Amazon Web Services account to your GitHub account. Use the
     * CodeBuild console to start creating a build project. When you use the console to
     * connect (or reconnect) with GitHub, on the GitHub <b>Authorize application</b>
     * page, for <b>Organization access</b>, choose <b>Request access</b> next to each
     * repository you want to allow CodeBuild to have access to, and then choose
     * <b>Authorize application</b>. (After you have connected to your GitHub account,
     * you do not need to finish creating the build project. You can leave the
     * CodeBuild console.) To instruct CodeBuild to use this connection, in the
     * <code>source</code> object, set the <code>auth</code> object's <code>type</code>
     * value to <code>OAUTH</code>.</p> </li> <li> <p>For source code in an GitLab or
     * self-managed GitLab repository, the HTTPS clone URL to the repository that
     * contains the source and the buildspec file. You must connect your Amazon Web
     * Services account to your GitLab account. Use the CodeBuild console to start
     * creating a build project. When you use the console to connect (or reconnect)
     * with GitLab, on the Connections <b>Authorize application</b> page, choose
     * <b>Authorize</b>. Then on the CodeConnections <b>Create GitLab connection</b>
     * page, choose <b>Connect to GitLab</b>. (After you have connected to your GitLab
     * account, you do not need to finish creating the build project. You can leave the
     * CodeBuild console.) To instruct CodeBuild to override the default connection and
     * use this connection instead, set the <code>auth</code> object's
     * <code>type</code> value to <code>CODECONNECTIONS</code> in the
     * <code>source</code> object.</p> </li> <li> <p>For source code in a Bitbucket
     * repository, the HTTPS clone URL to the repository that contains the source and
     * the buildspec file. You must connect your Amazon Web Services account to your
     * Bitbucket account. Use the CodeBuild console to start creating a build project.
     * When you use the console to connect (or reconnect) with Bitbucket, on the
     * Bitbucket <b>Confirm access to your account</b> page, choose <b>Grant
     * access</b>. (After you have connected to your Bitbucket account, you do not need
     * to finish creating the build project. You can leave the CodeBuild console.) To
     * instruct CodeBuild to use this connection, in the <code>source</code> object,
     * set the <code>auth</code> object's <code>type</code> value to
     * <code>OAUTH</code>.</p> </li> </ul> <p> If you specify <code>CODEPIPELINE</code>
     * for the <code>Type</code> property, don't specify this property. For all of the
     * other types, you must specify <code>Location</code>. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    ProjectSource& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Git clone depth for the build project.</p>
     */
    inline int GetGitCloneDepth() const { return m_gitCloneDepth; }
    inline bool GitCloneDepthHasBeenSet() const { return m_gitCloneDepthHasBeenSet; }
    inline void SetGitCloneDepth(int value) { m_gitCloneDepthHasBeenSet = true; m_gitCloneDepth = value; }
    inline ProjectSource& WithGitCloneDepth(int value) { SetGitCloneDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the Git submodules configuration for the build project.
     * </p>
     */
    inline const GitSubmodulesConfig& GetGitSubmodulesConfig() const { return m_gitSubmodulesConfig; }
    inline bool GitSubmodulesConfigHasBeenSet() const { return m_gitSubmodulesConfigHasBeenSet; }
    template<typename GitSubmodulesConfigT = GitSubmodulesConfig>
    void SetGitSubmodulesConfig(GitSubmodulesConfigT&& value) { m_gitSubmodulesConfigHasBeenSet = true; m_gitSubmodulesConfig = std::forward<GitSubmodulesConfigT>(value); }
    template<typename GitSubmodulesConfigT = GitSubmodulesConfig>
    ProjectSource& WithGitSubmodulesConfig(GitSubmodulesConfigT&& value) { SetGitSubmodulesConfig(std::forward<GitSubmodulesConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buildspec file declaration to use for the builds in this build
     * project.</p> <p> If this value is set, it can be either an inline buildspec
     * definition, the path to an alternate buildspec file relative to the value of the
     * built-in <code>CODEBUILD_SRC_DIR</code> environment variable, or the path to an
     * S3 bucket. The bucket must be in the same Amazon Web Services Region as the
     * build project. Specify the buildspec file using its ARN (for example,
     * <code>arn:aws:s3:::my-codebuild-sample2/buildspec.yml</code>). If this value is
     * not provided or is set to an empty string, the source code must contain a
     * buildspec file in its root directory. For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-spec-ref.html#build-spec-ref-name-storage">Buildspec
     * File Name and Storage Location</a>. </p>
     */
    inline const Aws::String& GetBuildspec() const { return m_buildspec; }
    inline bool BuildspecHasBeenSet() const { return m_buildspecHasBeenSet; }
    template<typename BuildspecT = Aws::String>
    void SetBuildspec(BuildspecT&& value) { m_buildspecHasBeenSet = true; m_buildspec = std::forward<BuildspecT>(value); }
    template<typename BuildspecT = Aws::String>
    ProjectSource& WithBuildspec(BuildspecT&& value) { SetBuildspec(std::forward<BuildspecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the authorization settings for CodeBuild to access the
     * source code to be built.</p>
     */
    inline const SourceAuth& GetAuth() const { return m_auth; }
    inline bool AuthHasBeenSet() const { return m_authHasBeenSet; }
    template<typename AuthT = SourceAuth>
    void SetAuth(AuthT&& value) { m_authHasBeenSet = true; m_auth = std::forward<AuthT>(value); }
    template<typename AuthT = SourceAuth>
    ProjectSource& WithAuth(AuthT&& value) { SetAuth(std::forward<AuthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Set to true to report the status of a build's start and finish to your
     * source provider. This option is valid only when your source provider is GitHub,
     * GitHub Enterprise, GitLab, GitLab Self Managed, GitLab, GitLab Self Managed, or
     * Bitbucket. If this is set and you use a different source provider, an
     * <code>invalidInputException</code> is thrown. </p> <p>To be able to report the
     * build status to the source provider, the user associated with the source
     * provider must have write access to the repo. If the user does not have write
     * access, the build status cannot be updated. For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/access-tokens.html">Source
     * provider access</a> in the <i>CodeBuild User Guide</i>.</p> <p>The status of a
     * build triggered by a webhook is always reported to your source provider. </p>
     * <p>If your project's builds are triggered by a webhook, you must push a new
     * commit to the repo for a change to this property to take effect.</p>
     */
    inline bool GetReportBuildStatus() const { return m_reportBuildStatus; }
    inline bool ReportBuildStatusHasBeenSet() const { return m_reportBuildStatusHasBeenSet; }
    inline void SetReportBuildStatus(bool value) { m_reportBuildStatusHasBeenSet = true; m_reportBuildStatus = value; }
    inline ProjectSource& WithReportBuildStatus(bool value) { SetReportBuildStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information that defines how the build project reports the build
     * status to the source provider. This option is only used when the source provider
     * is <code>GITHUB</code>, <code>GITHUB_ENTERPRISE</code>, or
     * <code>BITBUCKET</code>.</p>
     */
    inline const BuildStatusConfig& GetBuildStatusConfig() const { return m_buildStatusConfig; }
    inline bool BuildStatusConfigHasBeenSet() const { return m_buildStatusConfigHasBeenSet; }
    template<typename BuildStatusConfigT = BuildStatusConfig>
    void SetBuildStatusConfig(BuildStatusConfigT&& value) { m_buildStatusConfigHasBeenSet = true; m_buildStatusConfig = std::forward<BuildStatusConfigT>(value); }
    template<typename BuildStatusConfigT = BuildStatusConfig>
    ProjectSource& WithBuildStatusConfig(BuildStatusConfigT&& value) { SetBuildStatusConfig(std::forward<BuildStatusConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable this flag to ignore SSL warnings while connecting to the project
     * source code.</p>
     */
    inline bool GetInsecureSsl() const { return m_insecureSsl; }
    inline bool InsecureSslHasBeenSet() const { return m_insecureSslHasBeenSet; }
    inline void SetInsecureSsl(bool value) { m_insecureSslHasBeenSet = true; m_insecureSsl = value; }
    inline ProjectSource& WithInsecureSsl(bool value) { SetInsecureSsl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for this project source. The identifier can only contain
     * alphanumeric characters and underscores, and must be less than 128 characters in
     * length. </p>
     */
    inline const Aws::String& GetSourceIdentifier() const { return m_sourceIdentifier; }
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }
    template<typename SourceIdentifierT = Aws::String>
    void SetSourceIdentifier(SourceIdentifierT&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::forward<SourceIdentifierT>(value); }
    template<typename SourceIdentifierT = Aws::String>
    ProjectSource& WithSourceIdentifier(SourceIdentifierT&& value) { SetSourceIdentifier(std::forward<SourceIdentifierT>(value)); return *this;}
    ///@}
  private:

    SourceType m_type{SourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    int m_gitCloneDepth{0};
    bool m_gitCloneDepthHasBeenSet = false;

    GitSubmodulesConfig m_gitSubmodulesConfig;
    bool m_gitSubmodulesConfigHasBeenSet = false;

    Aws::String m_buildspec;
    bool m_buildspecHasBeenSet = false;

    SourceAuth m_auth;
    bool m_authHasBeenSet = false;

    bool m_reportBuildStatus{false};
    bool m_reportBuildStatusHasBeenSet = false;

    BuildStatusConfig m_buildStatusConfig;
    bool m_buildStatusConfigHasBeenSet = false;

    bool m_insecureSsl{false};
    bool m_insecureSslHasBeenSet = false;

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
