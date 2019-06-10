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
#include <aws/codebuild/model/ProjectSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/ProjectArtifacts.h>
#include <aws/codebuild/model/ProjectCache.h>
#include <aws/codebuild/model/ProjectEnvironment.h>
#include <aws/codebuild/model/VpcConfig.h>
#include <aws/codebuild/model/LogsConfig.h>
#include <aws/codebuild/model/ProjectSourceVersion.h>
#include <aws/codebuild/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class AWS_CODEBUILD_API UpdateProjectRequest : public CodeBuildRequest
  {
  public:
    UpdateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline UpdateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline UpdateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline UpdateProjectRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline UpdateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline UpdateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline UpdateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information to be changed about the build input source code for the build
     * project.</p>
     */
    inline const ProjectSource& GetSource() const{ return m_source; }

    /**
     * <p>Information to be changed about the build input source code for the build
     * project.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Information to be changed about the build input source code for the build
     * project.</p>
     */
    inline void SetSource(const ProjectSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information to be changed about the build input source code for the build
     * project.</p>
     */
    inline void SetSource(ProjectSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Information to be changed about the build input source code for the build
     * project.</p>
     */
    inline UpdateProjectRequest& WithSource(const ProjectSource& value) { SetSource(value); return *this;}

    /**
     * <p>Information to be changed about the build input source code for the build
     * project.</p>
     */
    inline UpdateProjectRequest& WithSource(ProjectSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySources() const{ return m_secondarySources; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline bool SecondarySourcesHasBeenSet() const { return m_secondarySourcesHasBeenSet; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline void SetSecondarySources(const Aws::Vector<ProjectSource>& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = value; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline void SetSecondarySources(Aws::Vector<ProjectSource>&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = std::move(value); }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline UpdateProjectRequest& WithSecondarySources(const Aws::Vector<ProjectSource>& value) { SetSecondarySources(value); return *this;}

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline UpdateProjectRequest& WithSecondarySources(Aws::Vector<ProjectSource>&& value) { SetSecondarySources(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline UpdateProjectRequest& AddSecondarySources(const ProjectSource& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(value); return *this; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline UpdateProjectRequest& AddSecondarySources(ProjectSource&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(std::move(value)); return *this; }


    /**
     * <p> A version of the build input to be built for this project. If not specified,
     * the latest version is used. If specified, it must be one of: </p> <ul> <li>
     * <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the
     * commit ID, pull request ID, branch name, or tag name that corresponds to the
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
     * is specified at the build level, then that version takes precedence over this
     * <code>sourceVersion</code> (at the project level). </p> <p> For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p> A version of the build input to be built for this project. If not specified,
     * the latest version is used. If specified, it must be one of: </p> <ul> <li>
     * <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the
     * commit ID, pull request ID, branch name, or tag name that corresponds to the
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
     * is specified at the build level, then that version takes precedence over this
     * <code>sourceVersion</code> (at the project level). </p> <p> For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }

    /**
     * <p> A version of the build input to be built for this project. If not specified,
     * the latest version is used. If specified, it must be one of: </p> <ul> <li>
     * <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the
     * commit ID, pull request ID, branch name, or tag name that corresponds to the
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
     * is specified at the build level, then that version takes precedence over this
     * <code>sourceVersion</code> (at the project level). </p> <p> For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p> A version of the build input to be built for this project. If not specified,
     * the latest version is used. If specified, it must be one of: </p> <ul> <li>
     * <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the
     * commit ID, pull request ID, branch name, or tag name that corresponds to the
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
     * is specified at the build level, then that version takes precedence over this
     * <code>sourceVersion</code> (at the project level). </p> <p> For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }

    /**
     * <p> A version of the build input to be built for this project. If not specified,
     * the latest version is used. If specified, it must be one of: </p> <ul> <li>
     * <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the
     * commit ID, pull request ID, branch name, or tag name that corresponds to the
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
     * is specified at the build level, then that version takes precedence over this
     * <code>sourceVersion</code> (at the project level). </p> <p> For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p> A version of the build input to be built for this project. If not specified,
     * the latest version is used. If specified, it must be one of: </p> <ul> <li>
     * <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the
     * commit ID, pull request ID, branch name, or tag name that corresponds to the
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
     * is specified at the build level, then that version takes precedence over this
     * <code>sourceVersion</code> (at the project level). </p> <p> For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline UpdateProjectRequest& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p> A version of the build input to be built for this project. If not specified,
     * the latest version is used. If specified, it must be one of: </p> <ul> <li>
     * <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the
     * commit ID, pull request ID, branch name, or tag name that corresponds to the
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
     * is specified at the build level, then that version takes precedence over this
     * <code>sourceVersion</code> (at the project level). </p> <p> For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline UpdateProjectRequest& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}

    /**
     * <p> A version of the build input to be built for this project. If not specified,
     * the latest version is used. If specified, it must be one of: </p> <ul> <li>
     * <p>For AWS CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the
     * commit ID, pull request ID, branch name, or tag name that corresponds to the
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
     * is specified at the build level, then that version takes precedence over this
     * <code>sourceVersion</code> (at the project level). </p> <p> For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline UpdateProjectRequest& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}


    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. If
     * <code>secondarySourceVersions</code> is specified at the build level, then they
     * take over these <code>secondarySourceVersions</code> (at the project level).
     * </p>
     */
    inline const Aws::Vector<ProjectSourceVersion>& GetSecondarySourceVersions() const{ return m_secondarySourceVersions; }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. If
     * <code>secondarySourceVersions</code> is specified at the build level, then they
     * take over these <code>secondarySourceVersions</code> (at the project level).
     * </p>
     */
    inline bool SecondarySourceVersionsHasBeenSet() const { return m_secondarySourceVersionsHasBeenSet; }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. If
     * <code>secondarySourceVersions</code> is specified at the build level, then they
     * take over these <code>secondarySourceVersions</code> (at the project level).
     * </p>
     */
    inline void SetSecondarySourceVersions(const Aws::Vector<ProjectSourceVersion>& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = value; }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. If
     * <code>secondarySourceVersions</code> is specified at the build level, then they
     * take over these <code>secondarySourceVersions</code> (at the project level).
     * </p>
     */
    inline void SetSecondarySourceVersions(Aws::Vector<ProjectSourceVersion>&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = std::move(value); }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. If
     * <code>secondarySourceVersions</code> is specified at the build level, then they
     * take over these <code>secondarySourceVersions</code> (at the project level).
     * </p>
     */
    inline UpdateProjectRequest& WithSecondarySourceVersions(const Aws::Vector<ProjectSourceVersion>& value) { SetSecondarySourceVersions(value); return *this;}

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. If
     * <code>secondarySourceVersions</code> is specified at the build level, then they
     * take over these <code>secondarySourceVersions</code> (at the project level).
     * </p>
     */
    inline UpdateProjectRequest& WithSecondarySourceVersions(Aws::Vector<ProjectSourceVersion>&& value) { SetSecondarySourceVersions(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. If
     * <code>secondarySourceVersions</code> is specified at the build level, then they
     * take over these <code>secondarySourceVersions</code> (at the project level).
     * </p>
     */
    inline UpdateProjectRequest& AddSecondarySourceVersions(const ProjectSourceVersion& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.push_back(value); return *this; }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. If
     * <code>secondarySourceVersions</code> is specified at the build level, then they
     * take over these <code>secondarySourceVersions</code> (at the project level).
     * </p>
     */
    inline UpdateProjectRequest& AddSecondarySourceVersions(ProjectSourceVersion&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>Information to be changed about the build output artifacts for the build
     * project.</p>
     */
    inline const ProjectArtifacts& GetArtifacts() const{ return m_artifacts; }

    /**
     * <p>Information to be changed about the build output artifacts for the build
     * project.</p>
     */
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }

    /**
     * <p>Information to be changed about the build output artifacts for the build
     * project.</p>
     */
    inline void SetArtifacts(const ProjectArtifacts& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }

    /**
     * <p>Information to be changed about the build output artifacts for the build
     * project.</p>
     */
    inline void SetArtifacts(ProjectArtifacts&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::move(value); }

    /**
     * <p>Information to be changed about the build output artifacts for the build
     * project.</p>
     */
    inline UpdateProjectRequest& WithArtifacts(const ProjectArtifacts& value) { SetArtifacts(value); return *this;}

    /**
     * <p>Information to be changed about the build output artifacts for the build
     * project.</p>
     */
    inline UpdateProjectRequest& WithArtifacts(ProjectArtifacts&& value) { SetArtifacts(std::move(value)); return *this;}


    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline const Aws::Vector<ProjectArtifacts>& GetSecondaryArtifacts() const{ return m_secondaryArtifacts; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline void SetSecondaryArtifacts(const Aws::Vector<ProjectArtifacts>& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = value; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline void SetSecondaryArtifacts(Aws::Vector<ProjectArtifacts>&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::move(value); }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline UpdateProjectRequest& WithSecondaryArtifacts(const Aws::Vector<ProjectArtifacts>& value) { SetSecondaryArtifacts(value); return *this;}

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline UpdateProjectRequest& WithSecondaryArtifacts(Aws::Vector<ProjectArtifacts>&& value) { SetSecondaryArtifacts(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline UpdateProjectRequest& AddSecondaryArtifacts(const ProjectArtifacts& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(value); return *this; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline UpdateProjectRequest& AddSecondaryArtifacts(ProjectArtifacts&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>Stores recently used information so that it can be quickly accessed at a
     * later time.</p>
     */
    inline const ProjectCache& GetCache() const{ return m_cache; }

    /**
     * <p>Stores recently used information so that it can be quickly accessed at a
     * later time.</p>
     */
    inline bool CacheHasBeenSet() const { return m_cacheHasBeenSet; }

    /**
     * <p>Stores recently used information so that it can be quickly accessed at a
     * later time.</p>
     */
    inline void SetCache(const ProjectCache& value) { m_cacheHasBeenSet = true; m_cache = value; }

    /**
     * <p>Stores recently used information so that it can be quickly accessed at a
     * later time.</p>
     */
    inline void SetCache(ProjectCache&& value) { m_cacheHasBeenSet = true; m_cache = std::move(value); }

    /**
     * <p>Stores recently used information so that it can be quickly accessed at a
     * later time.</p>
     */
    inline UpdateProjectRequest& WithCache(const ProjectCache& value) { SetCache(value); return *this;}

    /**
     * <p>Stores recently used information so that it can be quickly accessed at a
     * later time.</p>
     */
    inline UpdateProjectRequest& WithCache(ProjectCache&& value) { SetCache(std::move(value)); return *this;}


    /**
     * <p>Information to be changed about the build environment for the build
     * project.</p>
     */
    inline const ProjectEnvironment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Information to be changed about the build environment for the build
     * project.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>Information to be changed about the build environment for the build
     * project.</p>
     */
    inline void SetEnvironment(const ProjectEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Information to be changed about the build environment for the build
     * project.</p>
     */
    inline void SetEnvironment(ProjectEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>Information to be changed about the build environment for the build
     * project.</p>
     */
    inline UpdateProjectRequest& WithEnvironment(const ProjectEnvironment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Information to be changed about the build environment for the build
     * project.</p>
     */
    inline UpdateProjectRequest& WithEnvironment(ProjectEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline UpdateProjectRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline UpdateProjectRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline UpdateProjectRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>The replacement value in minutes, from 5 to 480 (8 hours), for AWS CodeBuild
     * to wait before timing out any related build that did not get marked as
     * completed.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

    /**
     * <p>The replacement value in minutes, from 5 to 480 (8 hours), for AWS CodeBuild
     * to wait before timing out any related build that did not get marked as
     * completed.</p>
     */
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }

    /**
     * <p>The replacement value in minutes, from 5 to 480 (8 hours), for AWS CodeBuild
     * to wait before timing out any related build that did not get marked as
     * completed.</p>
     */
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }

    /**
     * <p>The replacement value in minutes, from 5 to 480 (8 hours), for AWS CodeBuild
     * to wait before timing out any related build that did not get marked as
     * completed.</p>
     */
    inline UpdateProjectRequest& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}


    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline int GetQueuedTimeoutInMinutes() const{ return m_queuedTimeoutInMinutes; }

    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline bool QueuedTimeoutInMinutesHasBeenSet() const { return m_queuedTimeoutInMinutesHasBeenSet; }

    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline void SetQueuedTimeoutInMinutes(int value) { m_queuedTimeoutInMinutesHasBeenSet = true; m_queuedTimeoutInMinutes = value; }

    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline UpdateProjectRequest& WithQueuedTimeoutInMinutes(int value) { SetQueuedTimeoutInMinutes(value); return *this;}


    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline UpdateProjectRequest& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline UpdateProjectRequest& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline UpdateProjectRequest& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline UpdateProjectRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline UpdateProjectRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline UpdateProjectRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline UpdateProjectRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>VpcConfig enables AWS CodeBuild to access resources in an Amazon VPC.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>VpcConfig enables AWS CodeBuild to access resources in an Amazon VPC.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>VpcConfig enables AWS CodeBuild to access resources in an Amazon VPC.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>VpcConfig enables AWS CodeBuild to access resources in an Amazon VPC.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>VpcConfig enables AWS CodeBuild to access resources in an Amazon VPC.</p>
     */
    inline UpdateProjectRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>VpcConfig enables AWS CodeBuild to access resources in an Amazon VPC.</p>
     */
    inline UpdateProjectRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Set this to true to generate a publicly accessible URL for your project's
     * build badge.</p>
     */
    inline bool GetBadgeEnabled() const{ return m_badgeEnabled; }

    /**
     * <p>Set this to true to generate a publicly accessible URL for your project's
     * build badge.</p>
     */
    inline bool BadgeEnabledHasBeenSet() const { return m_badgeEnabledHasBeenSet; }

    /**
     * <p>Set this to true to generate a publicly accessible URL for your project's
     * build badge.</p>
     */
    inline void SetBadgeEnabled(bool value) { m_badgeEnabledHasBeenSet = true; m_badgeEnabled = value; }

    /**
     * <p>Set this to true to generate a publicly accessible URL for your project's
     * build badge.</p>
     */
    inline UpdateProjectRequest& WithBadgeEnabled(bool value) { SetBadgeEnabled(value); return *this;}


    /**
     * <p> Information about logs for the build project. A project can create logs in
     * Amazon CloudWatch Logs, logs in an S3 bucket, or both. </p>
     */
    inline const LogsConfig& GetLogsConfig() const{ return m_logsConfig; }

    /**
     * <p> Information about logs for the build project. A project can create logs in
     * Amazon CloudWatch Logs, logs in an S3 bucket, or both. </p>
     */
    inline bool LogsConfigHasBeenSet() const { return m_logsConfigHasBeenSet; }

    /**
     * <p> Information about logs for the build project. A project can create logs in
     * Amazon CloudWatch Logs, logs in an S3 bucket, or both. </p>
     */
    inline void SetLogsConfig(const LogsConfig& value) { m_logsConfigHasBeenSet = true; m_logsConfig = value; }

    /**
     * <p> Information about logs for the build project. A project can create logs in
     * Amazon CloudWatch Logs, logs in an S3 bucket, or both. </p>
     */
    inline void SetLogsConfig(LogsConfig&& value) { m_logsConfigHasBeenSet = true; m_logsConfig = std::move(value); }

    /**
     * <p> Information about logs for the build project. A project can create logs in
     * Amazon CloudWatch Logs, logs in an S3 bucket, or both. </p>
     */
    inline UpdateProjectRequest& WithLogsConfig(const LogsConfig& value) { SetLogsConfig(value); return *this;}

    /**
     * <p> Information about logs for the build project. A project can create logs in
     * Amazon CloudWatch Logs, logs in an S3 bucket, or both. </p>
     */
    inline UpdateProjectRequest& WithLogsConfig(LogsConfig&& value) { SetLogsConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ProjectSource m_source;
    bool m_sourceHasBeenSet;

    Aws::Vector<ProjectSource> m_secondarySources;
    bool m_secondarySourcesHasBeenSet;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet;

    Aws::Vector<ProjectSourceVersion> m_secondarySourceVersions;
    bool m_secondarySourceVersionsHasBeenSet;

    ProjectArtifacts m_artifacts;
    bool m_artifactsHasBeenSet;

    Aws::Vector<ProjectArtifacts> m_secondaryArtifacts;
    bool m_secondaryArtifactsHasBeenSet;

    ProjectCache m_cache;
    bool m_cacheHasBeenSet;

    ProjectEnvironment m_environment;
    bool m_environmentHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet;

    int m_queuedTimeoutInMinutes;
    bool m_queuedTimeoutInMinutesHasBeenSet;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    bool m_badgeEnabled;
    bool m_badgeEnabledHasBeenSet;

    LogsConfig m_logsConfig;
    bool m_logsConfigHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
