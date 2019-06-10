/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEBUILD_API StartBuildRequest : public CodeBuildRequest
  {
  public:
    StartBuildRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBuild"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the AWS CodeBuild build project to start running a build.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the AWS CodeBuild build project to start running a build.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the AWS CodeBuild build project to start running a build.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the AWS CodeBuild build project to start running a build.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the AWS CodeBuild build project to start running a build.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the AWS CodeBuild build project to start running a build.</p>
     */
    inline StartBuildRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the AWS CodeBuild build project to start running a build.</p>
     */
    inline StartBuildRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS CodeBuild build project to start running a build.</p>
     */
    inline StartBuildRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySourcesOverride() const{ return m_secondarySourcesOverride; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline bool SecondarySourcesOverrideHasBeenSet() const { return m_secondarySourcesOverrideHasBeenSet; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline void SetSecondarySourcesOverride(const Aws::Vector<ProjectSource>& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride = value; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline void SetSecondarySourcesOverride(Aws::Vector<ProjectSource>&& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride = std::move(value); }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline StartBuildRequest& WithSecondarySourcesOverride(const Aws::Vector<ProjectSource>& value) { SetSecondarySourcesOverride(value); return *this;}

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline StartBuildRequest& WithSecondarySourcesOverride(Aws::Vector<ProjectSource>&& value) { SetSecondarySourcesOverride(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline StartBuildRequest& AddSecondarySourcesOverride(const ProjectSource& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride.push_back(value); return *this; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline StartBuildRequest& AddSecondarySourcesOverride(ProjectSource&& value) { m_secondarySourcesOverrideHasBeenSet = true; m_secondarySourcesOverride.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects that specify one or
     * more versions of the project's secondary sources to be used for this build only.
     * </p>
     */
    inline const Aws::Vector<ProjectSourceVersion>& GetSecondarySourcesVersionOverride() const{ return m_secondarySourcesVersionOverride; }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects that specify one or
     * more versions of the project's secondary sources to be used for this build only.
     * </p>
     */
    inline bool SecondarySourcesVersionOverrideHasBeenSet() const { return m_secondarySourcesVersionOverrideHasBeenSet; }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects that specify one or
     * more versions of the project's secondary sources to be used for this build only.
     * </p>
     */
    inline void SetSecondarySourcesVersionOverride(const Aws::Vector<ProjectSourceVersion>& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride = value; }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects that specify one or
     * more versions of the project's secondary sources to be used for this build only.
     * </p>
     */
    inline void SetSecondarySourcesVersionOverride(Aws::Vector<ProjectSourceVersion>&& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride = std::move(value); }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects that specify one or
     * more versions of the project's secondary sources to be used for this build only.
     * </p>
     */
    inline StartBuildRequest& WithSecondarySourcesVersionOverride(const Aws::Vector<ProjectSourceVersion>& value) { SetSecondarySourcesVersionOverride(value); return *this;}

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects that specify one or
     * more versions of the project's secondary sources to be used for this build only.
     * </p>
     */
    inline StartBuildRequest& WithSecondarySourcesVersionOverride(Aws::Vector<ProjectSourceVersion>&& value) { SetSecondarySourcesVersionOverride(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects that specify one or
     * more versions of the project's secondary sources to be used for this build only.
     * </p>
     */
    inline StartBuildRequest& AddSecondarySourcesVersionOverride(const ProjectSourceVersion& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride.push_back(value); return *this; }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects that specify one or
     * more versions of the project's secondary sources to be used for this build only.
     * </p>
     */
    inline StartBuildRequest& AddSecondarySourcesVersionOverride(ProjectSourceVersion&& value) { m_secondarySourcesVersionOverrideHasBeenSet = true; m_secondarySourcesVersionOverride.push_back(std::move(value)); return *this; }


    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version is used. If specified, must be one of:</p> <ul>
     * <li> <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub:
     * the commit ID, pull request ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a pull request ID is specified,
     * it must use the format <code>pr/pull-request-ID</code> (for example
     * <code>pr/25</code>). If a branch name is specified, the branch's HEAD commit ID
     * is used. If not specified, the default branch's HEAD commit ID is used.</p>
     * </li> <li> <p>For Bitbucket: the commit ID, branch name, or tag name that
     * corresponds to the version of the source code you want to build. If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Amazon Simple
     * Storage Service (Amazon S3): the version ID of the object that represents the
     * build input ZIP file to use.</p> </li> </ul> <p> If <code>sourceVersion</code>
     * is specified at the project level, then this <code>sourceVersion</code> (at the
     * build level) takes precedence. </p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version is used. If specified, must be one of:</p> <ul>
     * <li> <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub:
     * the commit ID, pull request ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a pull request ID is specified,
     * it must use the format <code>pr/pull-request-ID</code> (for example
     * <code>pr/25</code>). If a branch name is specified, the branch's HEAD commit ID
     * is used. If not specified, the default branch's HEAD commit ID is used.</p>
     * </li> <li> <p>For Bitbucket: the commit ID, branch name, or tag name that
     * corresponds to the version of the source code you want to build. If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Amazon Simple
     * Storage Service (Amazon S3): the version ID of the object that represents the
     * build input ZIP file to use.</p> </li> </ul> <p> If <code>sourceVersion</code>
     * is specified at the project level, then this <code>sourceVersion</code> (at the
     * build level) takes precedence. </p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version is used. If specified, must be one of:</p> <ul>
     * <li> <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub:
     * the commit ID, pull request ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a pull request ID is specified,
     * it must use the format <code>pr/pull-request-ID</code> (for example
     * <code>pr/25</code>). If a branch name is specified, the branch's HEAD commit ID
     * is used. If not specified, the default branch's HEAD commit ID is used.</p>
     * </li> <li> <p>For Bitbucket: the commit ID, branch name, or tag name that
     * corresponds to the version of the source code you want to build. If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Amazon Simple
     * Storage Service (Amazon S3): the version ID of the object that represents the
     * build input ZIP file to use.</p> </li> </ul> <p> If <code>sourceVersion</code>
     * is specified at the project level, then this <code>sourceVersion</code> (at the
     * build level) takes precedence. </p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version is used. If specified, must be one of:</p> <ul>
     * <li> <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub:
     * the commit ID, pull request ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a pull request ID is specified,
     * it must use the format <code>pr/pull-request-ID</code> (for example
     * <code>pr/25</code>). If a branch name is specified, the branch's HEAD commit ID
     * is used. If not specified, the default branch's HEAD commit ID is used.</p>
     * </li> <li> <p>For Bitbucket: the commit ID, branch name, or tag name that
     * corresponds to the version of the source code you want to build. If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Amazon Simple
     * Storage Service (Amazon S3): the version ID of the object that represents the
     * build input ZIP file to use.</p> </li> </ul> <p> If <code>sourceVersion</code>
     * is specified at the project level, then this <code>sourceVersion</code> (at the
     * build level) takes precedence. </p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version is used. If specified, must be one of:</p> <ul>
     * <li> <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub:
     * the commit ID, pull request ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a pull request ID is specified,
     * it must use the format <code>pr/pull-request-ID</code> (for example
     * <code>pr/25</code>). If a branch name is specified, the branch's HEAD commit ID
     * is used. If not specified, the default branch's HEAD commit ID is used.</p>
     * </li> <li> <p>For Bitbucket: the commit ID, branch name, or tag name that
     * corresponds to the version of the source code you want to build. If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Amazon Simple
     * Storage Service (Amazon S3): the version ID of the object that represents the
     * build input ZIP file to use.</p> </li> </ul> <p> If <code>sourceVersion</code>
     * is specified at the project level, then this <code>sourceVersion</code> (at the
     * build level) takes precedence. </p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version is used. If specified, must be one of:</p> <ul>
     * <li> <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub:
     * the commit ID, pull request ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a pull request ID is specified,
     * it must use the format <code>pr/pull-request-ID</code> (for example
     * <code>pr/25</code>). If a branch name is specified, the branch's HEAD commit ID
     * is used. If not specified, the default branch's HEAD commit ID is used.</p>
     * </li> <li> <p>For Bitbucket: the commit ID, branch name, or tag name that
     * corresponds to the version of the source code you want to build. If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Amazon Simple
     * Storage Service (Amazon S3): the version ID of the object that represents the
     * build input ZIP file to use.</p> </li> </ul> <p> If <code>sourceVersion</code>
     * is specified at the project level, then this <code>sourceVersion</code> (at the
     * build level) takes precedence. </p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline StartBuildRequest& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version is used. If specified, must be one of:</p> <ul>
     * <li> <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub:
     * the commit ID, pull request ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a pull request ID is specified,
     * it must use the format <code>pr/pull-request-ID</code> (for example
     * <code>pr/25</code>). If a branch name is specified, the branch's HEAD commit ID
     * is used. If not specified, the default branch's HEAD commit ID is used.</p>
     * </li> <li> <p>For Bitbucket: the commit ID, branch name, or tag name that
     * corresponds to the version of the source code you want to build. If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Amazon Simple
     * Storage Service (Amazon S3): the version ID of the object that represents the
     * build input ZIP file to use.</p> </li> </ul> <p> If <code>sourceVersion</code>
     * is specified at the project level, then this <code>sourceVersion</code> (at the
     * build level) takes precedence. </p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline StartBuildRequest& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version is used. If specified, must be one of:</p> <ul>
     * <li> <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub:
     * the commit ID, pull request ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a pull request ID is specified,
     * it must use the format <code>pr/pull-request-ID</code> (for example
     * <code>pr/25</code>). If a branch name is specified, the branch's HEAD commit ID
     * is used. If not specified, the default branch's HEAD commit ID is used.</p>
     * </li> <li> <p>For Bitbucket: the commit ID, branch name, or tag name that
     * corresponds to the version of the source code you want to build. If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Amazon Simple
     * Storage Service (Amazon S3): the version ID of the object that represents the
     * build input ZIP file to use.</p> </li> </ul> <p> If <code>sourceVersion</code>
     * is specified at the project level, then this <code>sourceVersion</code> (at the
     * build level) takes precedence. </p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline StartBuildRequest& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}


    /**
     * <p>Build output artifact settings that override, for this build only, the latest
     * ones already defined in the build project.</p>
     */
    inline const ProjectArtifacts& GetArtifactsOverride() const{ return m_artifactsOverride; }

    /**
     * <p>Build output artifact settings that override, for this build only, the latest
     * ones already defined in the build project.</p>
     */
    inline bool ArtifactsOverrideHasBeenSet() const { return m_artifactsOverrideHasBeenSet; }

    /**
     * <p>Build output artifact settings that override, for this build only, the latest
     * ones already defined in the build project.</p>
     */
    inline void SetArtifactsOverride(const ProjectArtifacts& value) { m_artifactsOverrideHasBeenSet = true; m_artifactsOverride = value; }

    /**
     * <p>Build output artifact settings that override, for this build only, the latest
     * ones already defined in the build project.</p>
     */
    inline void SetArtifactsOverride(ProjectArtifacts&& value) { m_artifactsOverrideHasBeenSet = true; m_artifactsOverride = std::move(value); }

    /**
     * <p>Build output artifact settings that override, for this build only, the latest
     * ones already defined in the build project.</p>
     */
    inline StartBuildRequest& WithArtifactsOverride(const ProjectArtifacts& value) { SetArtifactsOverride(value); return *this;}

    /**
     * <p>Build output artifact settings that override, for this build only, the latest
     * ones already defined in the build project.</p>
     */
    inline StartBuildRequest& WithArtifactsOverride(ProjectArtifacts&& value) { SetArtifactsOverride(std::move(value)); return *this;}


    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline const Aws::Vector<ProjectArtifacts>& GetSecondaryArtifactsOverride() const{ return m_secondaryArtifactsOverride; }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline bool SecondaryArtifactsOverrideHasBeenSet() const { return m_secondaryArtifactsOverrideHasBeenSet; }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline void SetSecondaryArtifactsOverride(const Aws::Vector<ProjectArtifacts>& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride = value; }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline void SetSecondaryArtifactsOverride(Aws::Vector<ProjectArtifacts>&& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride = std::move(value); }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline StartBuildRequest& WithSecondaryArtifactsOverride(const Aws::Vector<ProjectArtifacts>& value) { SetSecondaryArtifactsOverride(value); return *this;}

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline StartBuildRequest& WithSecondaryArtifactsOverride(Aws::Vector<ProjectArtifacts>&& value) { SetSecondaryArtifactsOverride(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline StartBuildRequest& AddSecondaryArtifactsOverride(const ProjectArtifacts& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride.push_back(value); return *this; }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline StartBuildRequest& AddSecondaryArtifactsOverride(ProjectArtifacts&& value) { m_secondaryArtifactsOverrideHasBeenSet = true; m_secondaryArtifactsOverride.push_back(std::move(value)); return *this; }


    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironmentVariablesOverride() const{ return m_environmentVariablesOverride; }

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline bool EnvironmentVariablesOverrideHasBeenSet() const { return m_environmentVariablesOverrideHasBeenSet; }

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline void SetEnvironmentVariablesOverride(const Aws::Vector<EnvironmentVariable>& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride = value; }

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline void SetEnvironmentVariablesOverride(Aws::Vector<EnvironmentVariable>&& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride = std::move(value); }

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline StartBuildRequest& WithEnvironmentVariablesOverride(const Aws::Vector<EnvironmentVariable>& value) { SetEnvironmentVariablesOverride(value); return *this;}

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline StartBuildRequest& WithEnvironmentVariablesOverride(Aws::Vector<EnvironmentVariable>&& value) { SetEnvironmentVariablesOverride(std::move(value)); return *this;}

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline StartBuildRequest& AddEnvironmentVariablesOverride(const EnvironmentVariable& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride.push_back(value); return *this; }

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline StartBuildRequest& AddEnvironmentVariablesOverride(EnvironmentVariable&& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride.push_back(std::move(value)); return *this; }


    /**
     * <p>A source input type, for this build, that overrides the source input defined
     * in the build project.</p>
     */
    inline const SourceType& GetSourceTypeOverride() const{ return m_sourceTypeOverride; }

    /**
     * <p>A source input type, for this build, that overrides the source input defined
     * in the build project.</p>
     */
    inline bool SourceTypeOverrideHasBeenSet() const { return m_sourceTypeOverrideHasBeenSet; }

    /**
     * <p>A source input type, for this build, that overrides the source input defined
     * in the build project.</p>
     */
    inline void SetSourceTypeOverride(const SourceType& value) { m_sourceTypeOverrideHasBeenSet = true; m_sourceTypeOverride = value; }

    /**
     * <p>A source input type, for this build, that overrides the source input defined
     * in the build project.</p>
     */
    inline void SetSourceTypeOverride(SourceType&& value) { m_sourceTypeOverrideHasBeenSet = true; m_sourceTypeOverride = std::move(value); }

    /**
     * <p>A source input type, for this build, that overrides the source input defined
     * in the build project.</p>
     */
    inline StartBuildRequest& WithSourceTypeOverride(const SourceType& value) { SetSourceTypeOverride(value); return *this;}

    /**
     * <p>A source input type, for this build, that overrides the source input defined
     * in the build project.</p>
     */
    inline StartBuildRequest& WithSourceTypeOverride(SourceType&& value) { SetSourceTypeOverride(std::move(value)); return *this;}


    /**
     * <p>A location that overrides, for this build, the source location for the one
     * defined in the build project.</p>
     */
    inline const Aws::String& GetSourceLocationOverride() const{ return m_sourceLocationOverride; }

    /**
     * <p>A location that overrides, for this build, the source location for the one
     * defined in the build project.</p>
     */
    inline bool SourceLocationOverrideHasBeenSet() const { return m_sourceLocationOverrideHasBeenSet; }

    /**
     * <p>A location that overrides, for this build, the source location for the one
     * defined in the build project.</p>
     */
    inline void SetSourceLocationOverride(const Aws::String& value) { m_sourceLocationOverrideHasBeenSet = true; m_sourceLocationOverride = value; }

    /**
     * <p>A location that overrides, for this build, the source location for the one
     * defined in the build project.</p>
     */
    inline void SetSourceLocationOverride(Aws::String&& value) { m_sourceLocationOverrideHasBeenSet = true; m_sourceLocationOverride = std::move(value); }

    /**
     * <p>A location that overrides, for this build, the source location for the one
     * defined in the build project.</p>
     */
    inline void SetSourceLocationOverride(const char* value) { m_sourceLocationOverrideHasBeenSet = true; m_sourceLocationOverride.assign(value); }

    /**
     * <p>A location that overrides, for this build, the source location for the one
     * defined in the build project.</p>
     */
    inline StartBuildRequest& WithSourceLocationOverride(const Aws::String& value) { SetSourceLocationOverride(value); return *this;}

    /**
     * <p>A location that overrides, for this build, the source location for the one
     * defined in the build project.</p>
     */
    inline StartBuildRequest& WithSourceLocationOverride(Aws::String&& value) { SetSourceLocationOverride(std::move(value)); return *this;}

    /**
     * <p>A location that overrides, for this build, the source location for the one
     * defined in the build project.</p>
     */
    inline StartBuildRequest& WithSourceLocationOverride(const char* value) { SetSourceLocationOverride(value); return *this;}


    /**
     * <p>An authorization type for this build that overrides the one defined in the
     * build project. This override applies only if the build project's source is
     * BitBucket or GitHub.</p>
     */
    inline const SourceAuth& GetSourceAuthOverride() const{ return m_sourceAuthOverride; }

    /**
     * <p>An authorization type for this build that overrides the one defined in the
     * build project. This override applies only if the build project's source is
     * BitBucket or GitHub.</p>
     */
    inline bool SourceAuthOverrideHasBeenSet() const { return m_sourceAuthOverrideHasBeenSet; }

    /**
     * <p>An authorization type for this build that overrides the one defined in the
     * build project. This override applies only if the build project's source is
     * BitBucket or GitHub.</p>
     */
    inline void SetSourceAuthOverride(const SourceAuth& value) { m_sourceAuthOverrideHasBeenSet = true; m_sourceAuthOverride = value; }

    /**
     * <p>An authorization type for this build that overrides the one defined in the
     * build project. This override applies only if the build project's source is
     * BitBucket or GitHub.</p>
     */
    inline void SetSourceAuthOverride(SourceAuth&& value) { m_sourceAuthOverrideHasBeenSet = true; m_sourceAuthOverride = std::move(value); }

    /**
     * <p>An authorization type for this build that overrides the one defined in the
     * build project. This override applies only if the build project's source is
     * BitBucket or GitHub.</p>
     */
    inline StartBuildRequest& WithSourceAuthOverride(const SourceAuth& value) { SetSourceAuthOverride(value); return *this;}

    /**
     * <p>An authorization type for this build that overrides the one defined in the
     * build project. This override applies only if the build project's source is
     * BitBucket or GitHub.</p>
     */
    inline StartBuildRequest& WithSourceAuthOverride(SourceAuth&& value) { SetSourceAuthOverride(std::move(value)); return *this;}


    /**
     * <p>The user-defined depth of history, with a minimum value of 0, that overrides,
     * for this build only, any previous depth of history defined in the build
     * project.</p>
     */
    inline int GetGitCloneDepthOverride() const{ return m_gitCloneDepthOverride; }

    /**
     * <p>The user-defined depth of history, with a minimum value of 0, that overrides,
     * for this build only, any previous depth of history defined in the build
     * project.</p>
     */
    inline bool GitCloneDepthOverrideHasBeenSet() const { return m_gitCloneDepthOverrideHasBeenSet; }

    /**
     * <p>The user-defined depth of history, with a minimum value of 0, that overrides,
     * for this build only, any previous depth of history defined in the build
     * project.</p>
     */
    inline void SetGitCloneDepthOverride(int value) { m_gitCloneDepthOverrideHasBeenSet = true; m_gitCloneDepthOverride = value; }

    /**
     * <p>The user-defined depth of history, with a minimum value of 0, that overrides,
     * for this build only, any previous depth of history defined in the build
     * project.</p>
     */
    inline StartBuildRequest& WithGitCloneDepthOverride(int value) { SetGitCloneDepthOverride(value); return *this;}


    /**
     * <p> Information about the Git submodules configuration for this build of an AWS
     * CodeBuild build project. </p>
     */
    inline const GitSubmodulesConfig& GetGitSubmodulesConfigOverride() const{ return m_gitSubmodulesConfigOverride; }

    /**
     * <p> Information about the Git submodules configuration for this build of an AWS
     * CodeBuild build project. </p>
     */
    inline bool GitSubmodulesConfigOverrideHasBeenSet() const { return m_gitSubmodulesConfigOverrideHasBeenSet; }

    /**
     * <p> Information about the Git submodules configuration for this build of an AWS
     * CodeBuild build project. </p>
     */
    inline void SetGitSubmodulesConfigOverride(const GitSubmodulesConfig& value) { m_gitSubmodulesConfigOverrideHasBeenSet = true; m_gitSubmodulesConfigOverride = value; }

    /**
     * <p> Information about the Git submodules configuration for this build of an AWS
     * CodeBuild build project. </p>
     */
    inline void SetGitSubmodulesConfigOverride(GitSubmodulesConfig&& value) { m_gitSubmodulesConfigOverrideHasBeenSet = true; m_gitSubmodulesConfigOverride = std::move(value); }

    /**
     * <p> Information about the Git submodules configuration for this build of an AWS
     * CodeBuild build project. </p>
     */
    inline StartBuildRequest& WithGitSubmodulesConfigOverride(const GitSubmodulesConfig& value) { SetGitSubmodulesConfigOverride(value); return *this;}

    /**
     * <p> Information about the Git submodules configuration for this build of an AWS
     * CodeBuild build project. </p>
     */
    inline StartBuildRequest& WithGitSubmodulesConfigOverride(GitSubmodulesConfig&& value) { SetGitSubmodulesConfigOverride(std::move(value)); return *this;}


    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline const Aws::String& GetBuildspecOverride() const{ return m_buildspecOverride; }

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline bool BuildspecOverrideHasBeenSet() const { return m_buildspecOverrideHasBeenSet; }

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline void SetBuildspecOverride(const Aws::String& value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride = value; }

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline void SetBuildspecOverride(Aws::String&& value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride = std::move(value); }

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline void SetBuildspecOverride(const char* value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride.assign(value); }

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline StartBuildRequest& WithBuildspecOverride(const Aws::String& value) { SetBuildspecOverride(value); return *this;}

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline StartBuildRequest& WithBuildspecOverride(Aws::String&& value) { SetBuildspecOverride(std::move(value)); return *this;}

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline StartBuildRequest& WithBuildspecOverride(const char* value) { SetBuildspecOverride(value); return *this;}


    /**
     * <p>Enable this flag to override the insecure SSL setting that is specified in
     * the build project. The insecure SSL setting determines whether to ignore SSL
     * warnings while connecting to the project source code. This override applies only
     * if the build's source is GitHub Enterprise.</p>
     */
    inline bool GetInsecureSslOverride() const{ return m_insecureSslOverride; }

    /**
     * <p>Enable this flag to override the insecure SSL setting that is specified in
     * the build project. The insecure SSL setting determines whether to ignore SSL
     * warnings while connecting to the project source code. This override applies only
     * if the build's source is GitHub Enterprise.</p>
     */
    inline bool InsecureSslOverrideHasBeenSet() const { return m_insecureSslOverrideHasBeenSet; }

    /**
     * <p>Enable this flag to override the insecure SSL setting that is specified in
     * the build project. The insecure SSL setting determines whether to ignore SSL
     * warnings while connecting to the project source code. This override applies only
     * if the build's source is GitHub Enterprise.</p>
     */
    inline void SetInsecureSslOverride(bool value) { m_insecureSslOverrideHasBeenSet = true; m_insecureSslOverride = value; }

    /**
     * <p>Enable this flag to override the insecure SSL setting that is specified in
     * the build project. The insecure SSL setting determines whether to ignore SSL
     * warnings while connecting to the project source code. This override applies only
     * if the build's source is GitHub Enterprise.</p>
     */
    inline StartBuildRequest& WithInsecureSslOverride(bool value) { SetInsecureSslOverride(value); return *this;}


    /**
     * <p> Set to true to report to your source provider the status of a build's start
     * and completion. If you use this option with a source provider other than GitHub,
     * GitHub Enterprise, or Bitbucket, an invalidInputException is thrown. </p>
     */
    inline bool GetReportBuildStatusOverride() const{ return m_reportBuildStatusOverride; }

    /**
     * <p> Set to true to report to your source provider the status of a build's start
     * and completion. If you use this option with a source provider other than GitHub,
     * GitHub Enterprise, or Bitbucket, an invalidInputException is thrown. </p>
     */
    inline bool ReportBuildStatusOverrideHasBeenSet() const { return m_reportBuildStatusOverrideHasBeenSet; }

    /**
     * <p> Set to true to report to your source provider the status of a build's start
     * and completion. If you use this option with a source provider other than GitHub,
     * GitHub Enterprise, or Bitbucket, an invalidInputException is thrown. </p>
     */
    inline void SetReportBuildStatusOverride(bool value) { m_reportBuildStatusOverrideHasBeenSet = true; m_reportBuildStatusOverride = value; }

    /**
     * <p> Set to true to report to your source provider the status of a build's start
     * and completion. If you use this option with a source provider other than GitHub,
     * GitHub Enterprise, or Bitbucket, an invalidInputException is thrown. </p>
     */
    inline StartBuildRequest& WithReportBuildStatusOverride(bool value) { SetReportBuildStatusOverride(value); return *this;}


    /**
     * <p>A container type for this build that overrides the one specified in the build
     * project.</p>
     */
    inline const EnvironmentType& GetEnvironmentTypeOverride() const{ return m_environmentTypeOverride; }

    /**
     * <p>A container type for this build that overrides the one specified in the build
     * project.</p>
     */
    inline bool EnvironmentTypeOverrideHasBeenSet() const { return m_environmentTypeOverrideHasBeenSet; }

    /**
     * <p>A container type for this build that overrides the one specified in the build
     * project.</p>
     */
    inline void SetEnvironmentTypeOverride(const EnvironmentType& value) { m_environmentTypeOverrideHasBeenSet = true; m_environmentTypeOverride = value; }

    /**
     * <p>A container type for this build that overrides the one specified in the build
     * project.</p>
     */
    inline void SetEnvironmentTypeOverride(EnvironmentType&& value) { m_environmentTypeOverrideHasBeenSet = true; m_environmentTypeOverride = std::move(value); }

    /**
     * <p>A container type for this build that overrides the one specified in the build
     * project.</p>
     */
    inline StartBuildRequest& WithEnvironmentTypeOverride(const EnvironmentType& value) { SetEnvironmentTypeOverride(value); return *this;}

    /**
     * <p>A container type for this build that overrides the one specified in the build
     * project.</p>
     */
    inline StartBuildRequest& WithEnvironmentTypeOverride(EnvironmentType&& value) { SetEnvironmentTypeOverride(std::move(value)); return *this;}


    /**
     * <p>The name of an image for this build that overrides the one specified in the
     * build project.</p>
     */
    inline const Aws::String& GetImageOverride() const{ return m_imageOverride; }

    /**
     * <p>The name of an image for this build that overrides the one specified in the
     * build project.</p>
     */
    inline bool ImageOverrideHasBeenSet() const { return m_imageOverrideHasBeenSet; }

    /**
     * <p>The name of an image for this build that overrides the one specified in the
     * build project.</p>
     */
    inline void SetImageOverride(const Aws::String& value) { m_imageOverrideHasBeenSet = true; m_imageOverride = value; }

    /**
     * <p>The name of an image for this build that overrides the one specified in the
     * build project.</p>
     */
    inline void SetImageOverride(Aws::String&& value) { m_imageOverrideHasBeenSet = true; m_imageOverride = std::move(value); }

    /**
     * <p>The name of an image for this build that overrides the one specified in the
     * build project.</p>
     */
    inline void SetImageOverride(const char* value) { m_imageOverrideHasBeenSet = true; m_imageOverride.assign(value); }

    /**
     * <p>The name of an image for this build that overrides the one specified in the
     * build project.</p>
     */
    inline StartBuildRequest& WithImageOverride(const Aws::String& value) { SetImageOverride(value); return *this;}

    /**
     * <p>The name of an image for this build that overrides the one specified in the
     * build project.</p>
     */
    inline StartBuildRequest& WithImageOverride(Aws::String&& value) { SetImageOverride(std::move(value)); return *this;}

    /**
     * <p>The name of an image for this build that overrides the one specified in the
     * build project.</p>
     */
    inline StartBuildRequest& WithImageOverride(const char* value) { SetImageOverride(value); return *this;}


    /**
     * <p>The name of a compute type for this build that overrides the one specified in
     * the build project.</p>
     */
    inline const ComputeType& GetComputeTypeOverride() const{ return m_computeTypeOverride; }

    /**
     * <p>The name of a compute type for this build that overrides the one specified in
     * the build project.</p>
     */
    inline bool ComputeTypeOverrideHasBeenSet() const { return m_computeTypeOverrideHasBeenSet; }

    /**
     * <p>The name of a compute type for this build that overrides the one specified in
     * the build project.</p>
     */
    inline void SetComputeTypeOverride(const ComputeType& value) { m_computeTypeOverrideHasBeenSet = true; m_computeTypeOverride = value; }

    /**
     * <p>The name of a compute type for this build that overrides the one specified in
     * the build project.</p>
     */
    inline void SetComputeTypeOverride(ComputeType&& value) { m_computeTypeOverrideHasBeenSet = true; m_computeTypeOverride = std::move(value); }

    /**
     * <p>The name of a compute type for this build that overrides the one specified in
     * the build project.</p>
     */
    inline StartBuildRequest& WithComputeTypeOverride(const ComputeType& value) { SetComputeTypeOverride(value); return *this;}

    /**
     * <p>The name of a compute type for this build that overrides the one specified in
     * the build project.</p>
     */
    inline StartBuildRequest& WithComputeTypeOverride(ComputeType&& value) { SetComputeTypeOverride(std::move(value)); return *this;}


    /**
     * <p>The name of a certificate for this build that overrides the one specified in
     * the build project.</p>
     */
    inline const Aws::String& GetCertificateOverride() const{ return m_certificateOverride; }

    /**
     * <p>The name of a certificate for this build that overrides the one specified in
     * the build project.</p>
     */
    inline bool CertificateOverrideHasBeenSet() const { return m_certificateOverrideHasBeenSet; }

    /**
     * <p>The name of a certificate for this build that overrides the one specified in
     * the build project.</p>
     */
    inline void SetCertificateOverride(const Aws::String& value) { m_certificateOverrideHasBeenSet = true; m_certificateOverride = value; }

    /**
     * <p>The name of a certificate for this build that overrides the one specified in
     * the build project.</p>
     */
    inline void SetCertificateOverride(Aws::String&& value) { m_certificateOverrideHasBeenSet = true; m_certificateOverride = std::move(value); }

    /**
     * <p>The name of a certificate for this build that overrides the one specified in
     * the build project.</p>
     */
    inline void SetCertificateOverride(const char* value) { m_certificateOverrideHasBeenSet = true; m_certificateOverride.assign(value); }

    /**
     * <p>The name of a certificate for this build that overrides the one specified in
     * the build project.</p>
     */
    inline StartBuildRequest& WithCertificateOverride(const Aws::String& value) { SetCertificateOverride(value); return *this;}

    /**
     * <p>The name of a certificate for this build that overrides the one specified in
     * the build project.</p>
     */
    inline StartBuildRequest& WithCertificateOverride(Aws::String&& value) { SetCertificateOverride(std::move(value)); return *this;}

    /**
     * <p>The name of a certificate for this build that overrides the one specified in
     * the build project.</p>
     */
    inline StartBuildRequest& WithCertificateOverride(const char* value) { SetCertificateOverride(value); return *this;}


    /**
     * <p>A ProjectCache object specified for this build that overrides the one defined
     * in the build project.</p>
     */
    inline const ProjectCache& GetCacheOverride() const{ return m_cacheOverride; }

    /**
     * <p>A ProjectCache object specified for this build that overrides the one defined
     * in the build project.</p>
     */
    inline bool CacheOverrideHasBeenSet() const { return m_cacheOverrideHasBeenSet; }

    /**
     * <p>A ProjectCache object specified for this build that overrides the one defined
     * in the build project.</p>
     */
    inline void SetCacheOverride(const ProjectCache& value) { m_cacheOverrideHasBeenSet = true; m_cacheOverride = value; }

    /**
     * <p>A ProjectCache object specified for this build that overrides the one defined
     * in the build project.</p>
     */
    inline void SetCacheOverride(ProjectCache&& value) { m_cacheOverrideHasBeenSet = true; m_cacheOverride = std::move(value); }

    /**
     * <p>A ProjectCache object specified for this build that overrides the one defined
     * in the build project.</p>
     */
    inline StartBuildRequest& WithCacheOverride(const ProjectCache& value) { SetCacheOverride(value); return *this;}

    /**
     * <p>A ProjectCache object specified for this build that overrides the one defined
     * in the build project.</p>
     */
    inline StartBuildRequest& WithCacheOverride(ProjectCache&& value) { SetCacheOverride(std::move(value)); return *this;}


    /**
     * <p>The name of a service role for this build that overrides the one specified in
     * the build project.</p>
     */
    inline const Aws::String& GetServiceRoleOverride() const{ return m_serviceRoleOverride; }

    /**
     * <p>The name of a service role for this build that overrides the one specified in
     * the build project.</p>
     */
    inline bool ServiceRoleOverrideHasBeenSet() const { return m_serviceRoleOverrideHasBeenSet; }

    /**
     * <p>The name of a service role for this build that overrides the one specified in
     * the build project.</p>
     */
    inline void SetServiceRoleOverride(const Aws::String& value) { m_serviceRoleOverrideHasBeenSet = true; m_serviceRoleOverride = value; }

    /**
     * <p>The name of a service role for this build that overrides the one specified in
     * the build project.</p>
     */
    inline void SetServiceRoleOverride(Aws::String&& value) { m_serviceRoleOverrideHasBeenSet = true; m_serviceRoleOverride = std::move(value); }

    /**
     * <p>The name of a service role for this build that overrides the one specified in
     * the build project.</p>
     */
    inline void SetServiceRoleOverride(const char* value) { m_serviceRoleOverrideHasBeenSet = true; m_serviceRoleOverride.assign(value); }

    /**
     * <p>The name of a service role for this build that overrides the one specified in
     * the build project.</p>
     */
    inline StartBuildRequest& WithServiceRoleOverride(const Aws::String& value) { SetServiceRoleOverride(value); return *this;}

    /**
     * <p>The name of a service role for this build that overrides the one specified in
     * the build project.</p>
     */
    inline StartBuildRequest& WithServiceRoleOverride(Aws::String&& value) { SetServiceRoleOverride(std::move(value)); return *this;}

    /**
     * <p>The name of a service role for this build that overrides the one specified in
     * the build project.</p>
     */
    inline StartBuildRequest& WithServiceRoleOverride(const char* value) { SetServiceRoleOverride(value); return *this;}


    /**
     * <p>Enable this flag to override privileged mode in the build project.</p>
     */
    inline bool GetPrivilegedModeOverride() const{ return m_privilegedModeOverride; }

    /**
     * <p>Enable this flag to override privileged mode in the build project.</p>
     */
    inline bool PrivilegedModeOverrideHasBeenSet() const { return m_privilegedModeOverrideHasBeenSet; }

    /**
     * <p>Enable this flag to override privileged mode in the build project.</p>
     */
    inline void SetPrivilegedModeOverride(bool value) { m_privilegedModeOverrideHasBeenSet = true; m_privilegedModeOverride = value; }

    /**
     * <p>Enable this flag to override privileged mode in the build project.</p>
     */
    inline StartBuildRequest& WithPrivilegedModeOverride(bool value) { SetPrivilegedModeOverride(value); return *this;}


    /**
     * <p>The number of build timeout minutes, from 5 to 480 (8 hours), that overrides,
     * for this build only, the latest setting already defined in the build
     * project.</p>
     */
    inline int GetTimeoutInMinutesOverride() const{ return m_timeoutInMinutesOverride; }

    /**
     * <p>The number of build timeout minutes, from 5 to 480 (8 hours), that overrides,
     * for this build only, the latest setting already defined in the build
     * project.</p>
     */
    inline bool TimeoutInMinutesOverrideHasBeenSet() const { return m_timeoutInMinutesOverrideHasBeenSet; }

    /**
     * <p>The number of build timeout minutes, from 5 to 480 (8 hours), that overrides,
     * for this build only, the latest setting already defined in the build
     * project.</p>
     */
    inline void SetTimeoutInMinutesOverride(int value) { m_timeoutInMinutesOverrideHasBeenSet = true; m_timeoutInMinutesOverride = value; }

    /**
     * <p>The number of build timeout minutes, from 5 to 480 (8 hours), that overrides,
     * for this build only, the latest setting already defined in the build
     * project.</p>
     */
    inline StartBuildRequest& WithTimeoutInMinutesOverride(int value) { SetTimeoutInMinutesOverride(value); return *this;}


    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline int GetQueuedTimeoutInMinutesOverride() const{ return m_queuedTimeoutInMinutesOverride; }

    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline bool QueuedTimeoutInMinutesOverrideHasBeenSet() const { return m_queuedTimeoutInMinutesOverrideHasBeenSet; }

    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline void SetQueuedTimeoutInMinutesOverride(int value) { m_queuedTimeoutInMinutesOverrideHasBeenSet = true; m_queuedTimeoutInMinutesOverride = value; }

    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline StartBuildRequest& WithQueuedTimeoutInMinutesOverride(int value) { SetQueuedTimeoutInMinutesOverride(value); return *this;}


    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the StartBuild request. The token is included in the StartBuild request and is
     * valid for 12 hours. If you repeat the StartBuild request with the same token,
     * but change a parameter, AWS CodeBuild returns a parameter mismatch error. </p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the StartBuild request. The token is included in the StartBuild request and is
     * valid for 12 hours. If you repeat the StartBuild request with the same token,
     * but change a parameter, AWS CodeBuild returns a parameter mismatch error. </p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the StartBuild request. The token is included in the StartBuild request and is
     * valid for 12 hours. If you repeat the StartBuild request with the same token,
     * but change a parameter, AWS CodeBuild returns a parameter mismatch error. </p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the StartBuild request. The token is included in the StartBuild request and is
     * valid for 12 hours. If you repeat the StartBuild request with the same token,
     * but change a parameter, AWS CodeBuild returns a parameter mismatch error. </p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the StartBuild request. The token is included in the StartBuild request and is
     * valid for 12 hours. If you repeat the StartBuild request with the same token,
     * but change a parameter, AWS CodeBuild returns a parameter mismatch error. </p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the StartBuild request. The token is included in the StartBuild request and is
     * valid for 12 hours. If you repeat the StartBuild request with the same token,
     * but change a parameter, AWS CodeBuild returns a parameter mismatch error. </p>
     */
    inline StartBuildRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the StartBuild request. The token is included in the StartBuild request and is
     * valid for 12 hours. If you repeat the StartBuild request with the same token,
     * but change a parameter, AWS CodeBuild returns a parameter mismatch error. </p>
     */
    inline StartBuildRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the StartBuild request. The token is included in the StartBuild request and is
     * valid for 12 hours. If you repeat the StartBuild request with the same token,
     * but change a parameter, AWS CodeBuild returns a parameter mismatch error. </p>
     */
    inline StartBuildRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p> Log settings for this build that override the log settings defined in the
     * build project. </p>
     */
    inline const LogsConfig& GetLogsConfigOverride() const{ return m_logsConfigOverride; }

    /**
     * <p> Log settings for this build that override the log settings defined in the
     * build project. </p>
     */
    inline bool LogsConfigOverrideHasBeenSet() const { return m_logsConfigOverrideHasBeenSet; }

    /**
     * <p> Log settings for this build that override the log settings defined in the
     * build project. </p>
     */
    inline void SetLogsConfigOverride(const LogsConfig& value) { m_logsConfigOverrideHasBeenSet = true; m_logsConfigOverride = value; }

    /**
     * <p> Log settings for this build that override the log settings defined in the
     * build project. </p>
     */
    inline void SetLogsConfigOverride(LogsConfig&& value) { m_logsConfigOverrideHasBeenSet = true; m_logsConfigOverride = std::move(value); }

    /**
     * <p> Log settings for this build that override the log settings defined in the
     * build project. </p>
     */
    inline StartBuildRequest& WithLogsConfigOverride(const LogsConfig& value) { SetLogsConfigOverride(value); return *this;}

    /**
     * <p> Log settings for this build that override the log settings defined in the
     * build project. </p>
     */
    inline StartBuildRequest& WithLogsConfigOverride(LogsConfig&& value) { SetLogsConfigOverride(std::move(value)); return *this;}


    /**
     * <p> The credentials for access to a private registry. </p>
     */
    inline const RegistryCredential& GetRegistryCredentialOverride() const{ return m_registryCredentialOverride; }

    /**
     * <p> The credentials for access to a private registry. </p>
     */
    inline bool RegistryCredentialOverrideHasBeenSet() const { return m_registryCredentialOverrideHasBeenSet; }

    /**
     * <p> The credentials for access to a private registry. </p>
     */
    inline void SetRegistryCredentialOverride(const RegistryCredential& value) { m_registryCredentialOverrideHasBeenSet = true; m_registryCredentialOverride = value; }

    /**
     * <p> The credentials for access to a private registry. </p>
     */
    inline void SetRegistryCredentialOverride(RegistryCredential&& value) { m_registryCredentialOverrideHasBeenSet = true; m_registryCredentialOverride = std::move(value); }

    /**
     * <p> The credentials for access to a private registry. </p>
     */
    inline StartBuildRequest& WithRegistryCredentialOverride(const RegistryCredential& value) { SetRegistryCredentialOverride(value); return *this;}

    /**
     * <p> The credentials for access to a private registry. </p>
     */
    inline StartBuildRequest& WithRegistryCredentialOverride(RegistryCredential&& value) { SetRegistryCredentialOverride(std::move(value)); return *this;}


    /**
     * <p> The type of credentials AWS CodeBuild uses to pull images in your build.
     * There are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies
     * that AWS CodeBuild uses its own credentials. This requires that you modify your
     * ECR repository policy to trust AWS CodeBuild's service principal.</p> </li> <li>
     * <p> <code>SERVICE_ROLE</code> specifies that AWS CodeBuild uses your build
     * project's service role. </p> </li> </ul> <p> When using a cross-account or
     * private registry image, you must use SERVICE_ROLE credentials. When using an AWS
     * CodeBuild curated image, you must use CODEBUILD credentials. </p>
     */
    inline const ImagePullCredentialsType& GetImagePullCredentialsTypeOverride() const{ return m_imagePullCredentialsTypeOverride; }

    /**
     * <p> The type of credentials AWS CodeBuild uses to pull images in your build.
     * There are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies
     * that AWS CodeBuild uses its own credentials. This requires that you modify your
     * ECR repository policy to trust AWS CodeBuild's service principal.</p> </li> <li>
     * <p> <code>SERVICE_ROLE</code> specifies that AWS CodeBuild uses your build
     * project's service role. </p> </li> </ul> <p> When using a cross-account or
     * private registry image, you must use SERVICE_ROLE credentials. When using an AWS
     * CodeBuild curated image, you must use CODEBUILD credentials. </p>
     */
    inline bool ImagePullCredentialsTypeOverrideHasBeenSet() const { return m_imagePullCredentialsTypeOverrideHasBeenSet; }

    /**
     * <p> The type of credentials AWS CodeBuild uses to pull images in your build.
     * There are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies
     * that AWS CodeBuild uses its own credentials. This requires that you modify your
     * ECR repository policy to trust AWS CodeBuild's service principal.</p> </li> <li>
     * <p> <code>SERVICE_ROLE</code> specifies that AWS CodeBuild uses your build
     * project's service role. </p> </li> </ul> <p> When using a cross-account or
     * private registry image, you must use SERVICE_ROLE credentials. When using an AWS
     * CodeBuild curated image, you must use CODEBUILD credentials. </p>
     */
    inline void SetImagePullCredentialsTypeOverride(const ImagePullCredentialsType& value) { m_imagePullCredentialsTypeOverrideHasBeenSet = true; m_imagePullCredentialsTypeOverride = value; }

    /**
     * <p> The type of credentials AWS CodeBuild uses to pull images in your build.
     * There are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies
     * that AWS CodeBuild uses its own credentials. This requires that you modify your
     * ECR repository policy to trust AWS CodeBuild's service principal.</p> </li> <li>
     * <p> <code>SERVICE_ROLE</code> specifies that AWS CodeBuild uses your build
     * project's service role. </p> </li> </ul> <p> When using a cross-account or
     * private registry image, you must use SERVICE_ROLE credentials. When using an AWS
     * CodeBuild curated image, you must use CODEBUILD credentials. </p>
     */
    inline void SetImagePullCredentialsTypeOverride(ImagePullCredentialsType&& value) { m_imagePullCredentialsTypeOverrideHasBeenSet = true; m_imagePullCredentialsTypeOverride = std::move(value); }

    /**
     * <p> The type of credentials AWS CodeBuild uses to pull images in your build.
     * There are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies
     * that AWS CodeBuild uses its own credentials. This requires that you modify your
     * ECR repository policy to trust AWS CodeBuild's service principal.</p> </li> <li>
     * <p> <code>SERVICE_ROLE</code> specifies that AWS CodeBuild uses your build
     * project's service role. </p> </li> </ul> <p> When using a cross-account or
     * private registry image, you must use SERVICE_ROLE credentials. When using an AWS
     * CodeBuild curated image, you must use CODEBUILD credentials. </p>
     */
    inline StartBuildRequest& WithImagePullCredentialsTypeOverride(const ImagePullCredentialsType& value) { SetImagePullCredentialsTypeOverride(value); return *this;}

    /**
     * <p> The type of credentials AWS CodeBuild uses to pull images in your build.
     * There are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies
     * that AWS CodeBuild uses its own credentials. This requires that you modify your
     * ECR repository policy to trust AWS CodeBuild's service principal.</p> </li> <li>
     * <p> <code>SERVICE_ROLE</code> specifies that AWS CodeBuild uses your build
     * project's service role. </p> </li> </ul> <p> When using a cross-account or
     * private registry image, you must use SERVICE_ROLE credentials. When using an AWS
     * CodeBuild curated image, you must use CODEBUILD credentials. </p>
     */
    inline StartBuildRequest& WithImagePullCredentialsTypeOverride(ImagePullCredentialsType&& value) { SetImagePullCredentialsTypeOverride(std::move(value)); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;

    Aws::Vector<ProjectSource> m_secondarySourcesOverride;
    bool m_secondarySourcesOverrideHasBeenSet;

    Aws::Vector<ProjectSourceVersion> m_secondarySourcesVersionOverride;
    bool m_secondarySourcesVersionOverrideHasBeenSet;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet;

    ProjectArtifacts m_artifactsOverride;
    bool m_artifactsOverrideHasBeenSet;

    Aws::Vector<ProjectArtifacts> m_secondaryArtifactsOverride;
    bool m_secondaryArtifactsOverrideHasBeenSet;

    Aws::Vector<EnvironmentVariable> m_environmentVariablesOverride;
    bool m_environmentVariablesOverrideHasBeenSet;

    SourceType m_sourceTypeOverride;
    bool m_sourceTypeOverrideHasBeenSet;

    Aws::String m_sourceLocationOverride;
    bool m_sourceLocationOverrideHasBeenSet;

    SourceAuth m_sourceAuthOverride;
    bool m_sourceAuthOverrideHasBeenSet;

    int m_gitCloneDepthOverride;
    bool m_gitCloneDepthOverrideHasBeenSet;

    GitSubmodulesConfig m_gitSubmodulesConfigOverride;
    bool m_gitSubmodulesConfigOverrideHasBeenSet;

    Aws::String m_buildspecOverride;
    bool m_buildspecOverrideHasBeenSet;

    bool m_insecureSslOverride;
    bool m_insecureSslOverrideHasBeenSet;

    bool m_reportBuildStatusOverride;
    bool m_reportBuildStatusOverrideHasBeenSet;

    EnvironmentType m_environmentTypeOverride;
    bool m_environmentTypeOverrideHasBeenSet;

    Aws::String m_imageOverride;
    bool m_imageOverrideHasBeenSet;

    ComputeType m_computeTypeOverride;
    bool m_computeTypeOverrideHasBeenSet;

    Aws::String m_certificateOverride;
    bool m_certificateOverrideHasBeenSet;

    ProjectCache m_cacheOverride;
    bool m_cacheOverrideHasBeenSet;

    Aws::String m_serviceRoleOverride;
    bool m_serviceRoleOverrideHasBeenSet;

    bool m_privilegedModeOverride;
    bool m_privilegedModeOverrideHasBeenSet;

    int m_timeoutInMinutesOverride;
    bool m_timeoutInMinutesOverrideHasBeenSet;

    int m_queuedTimeoutInMinutesOverride;
    bool m_queuedTimeoutInMinutesOverrideHasBeenSet;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;

    LogsConfig m_logsConfigOverride;
    bool m_logsConfigOverrideHasBeenSet;

    RegistryCredential m_registryCredentialOverride;
    bool m_registryCredentialOverrideHasBeenSet;

    ImagePullCredentialsType m_imagePullCredentialsTypeOverride;
    bool m_imagePullCredentialsTypeOverrideHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
