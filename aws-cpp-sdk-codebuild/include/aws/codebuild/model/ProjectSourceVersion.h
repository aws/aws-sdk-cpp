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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> A source identifier and its corresponding version. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectSourceVersion">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API ProjectSourceVersion
  {
  public:
    ProjectSourceVersion();
    ProjectSourceVersion(Aws::Utils::Json::JsonView jsonValue);
    ProjectSourceVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier for a source in the build project.</p>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /**
     * <p>An identifier for a source in the build project.</p>
     */
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }

    /**
     * <p>An identifier for a source in the build project.</p>
     */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p>An identifier for a source in the build project.</p>
     */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::move(value); }

    /**
     * <p>An identifier for a source in the build project.</p>
     */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /**
     * <p>An identifier for a source in the build project.</p>
     */
    inline ProjectSourceVersion& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p>An identifier for a source in the build project.</p>
     */
    inline ProjectSourceVersion& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>An identifier for a source in the build project.</p>
     */
    inline ProjectSourceVersion& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}


    /**
     * <p>The source version for the corresponding source identifier. If specified,
     * must be one of:</p> <ul> <li> <p>For AWS CodeCommit: the commit ID to use.</p>
     * </li> <li> <p>For GitHub: the commit ID, pull request ID, branch name, or tag
     * name that corresponds to the version of the source code you want to build. If a
     * pull request ID is specified, it must use the format
     * <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Bitbucket: the
     * commit ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a branch name is specified, the branch's HEAD
     * commit ID is used. If not specified, the default branch's HEAD commit ID is
     * used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon S3): the
     * version ID of the object that represents the build input ZIP file to use.</p>
     * </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p>The source version for the corresponding source identifier. If specified,
     * must be one of:</p> <ul> <li> <p>For AWS CodeCommit: the commit ID to use.</p>
     * </li> <li> <p>For GitHub: the commit ID, pull request ID, branch name, or tag
     * name that corresponds to the version of the source code you want to build. If a
     * pull request ID is specified, it must use the format
     * <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Bitbucket: the
     * commit ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a branch name is specified, the branch's HEAD
     * commit ID is used. If not specified, the default branch's HEAD commit ID is
     * used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon S3): the
     * version ID of the object that represents the build input ZIP file to use.</p>
     * </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }

    /**
     * <p>The source version for the corresponding source identifier. If specified,
     * must be one of:</p> <ul> <li> <p>For AWS CodeCommit: the commit ID to use.</p>
     * </li> <li> <p>For GitHub: the commit ID, pull request ID, branch name, or tag
     * name that corresponds to the version of the source code you want to build. If a
     * pull request ID is specified, it must use the format
     * <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Bitbucket: the
     * commit ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a branch name is specified, the branch's HEAD
     * commit ID is used. If not specified, the default branch's HEAD commit ID is
     * used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon S3): the
     * version ID of the object that represents the build input ZIP file to use.</p>
     * </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>The source version for the corresponding source identifier. If specified,
     * must be one of:</p> <ul> <li> <p>For AWS CodeCommit: the commit ID to use.</p>
     * </li> <li> <p>For GitHub: the commit ID, pull request ID, branch name, or tag
     * name that corresponds to the version of the source code you want to build. If a
     * pull request ID is specified, it must use the format
     * <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Bitbucket: the
     * commit ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a branch name is specified, the branch's HEAD
     * commit ID is used. If not specified, the default branch's HEAD commit ID is
     * used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon S3): the
     * version ID of the object that represents the build input ZIP file to use.</p>
     * </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }

    /**
     * <p>The source version for the corresponding source identifier. If specified,
     * must be one of:</p> <ul> <li> <p>For AWS CodeCommit: the commit ID to use.</p>
     * </li> <li> <p>For GitHub: the commit ID, pull request ID, branch name, or tag
     * name that corresponds to the version of the source code you want to build. If a
     * pull request ID is specified, it must use the format
     * <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Bitbucket: the
     * commit ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a branch name is specified, the branch's HEAD
     * commit ID is used. If not specified, the default branch's HEAD commit ID is
     * used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon S3): the
     * version ID of the object that represents the build input ZIP file to use.</p>
     * </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p>The source version for the corresponding source identifier. If specified,
     * must be one of:</p> <ul> <li> <p>For AWS CodeCommit: the commit ID to use.</p>
     * </li> <li> <p>For GitHub: the commit ID, pull request ID, branch name, or tag
     * name that corresponds to the version of the source code you want to build. If a
     * pull request ID is specified, it must use the format
     * <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Bitbucket: the
     * commit ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a branch name is specified, the branch's HEAD
     * commit ID is used. If not specified, the default branch's HEAD commit ID is
     * used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon S3): the
     * version ID of the object that represents the build input ZIP file to use.</p>
     * </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline ProjectSourceVersion& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>The source version for the corresponding source identifier. If specified,
     * must be one of:</p> <ul> <li> <p>For AWS CodeCommit: the commit ID to use.</p>
     * </li> <li> <p>For GitHub: the commit ID, pull request ID, branch name, or tag
     * name that corresponds to the version of the source code you want to build. If a
     * pull request ID is specified, it must use the format
     * <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Bitbucket: the
     * commit ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a branch name is specified, the branch's HEAD
     * commit ID is used. If not specified, the default branch's HEAD commit ID is
     * used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon S3): the
     * version ID of the object that represents the build input ZIP file to use.</p>
     * </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline ProjectSourceVersion& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}

    /**
     * <p>The source version for the corresponding source identifier. If specified,
     * must be one of:</p> <ul> <li> <p>For AWS CodeCommit: the commit ID to use.</p>
     * </li> <li> <p>For GitHub: the commit ID, pull request ID, branch name, or tag
     * name that corresponds to the version of the source code you want to build. If a
     * pull request ID is specified, it must use the format
     * <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For Bitbucket: the
     * commit ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a branch name is specified, the branch's HEAD
     * commit ID is used. If not specified, the default branch's HEAD commit ID is
     * used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon S3): the
     * version ID of the object that represents the build input ZIP file to use.</p>
     * </li> </ul> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline ProjectSourceVersion& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}

  private:

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
