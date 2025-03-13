/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ProjectSourceVersion
  {
  public:
    AWS_CODEBUILD_API ProjectSourceVersion() = default;
    AWS_CODEBUILD_API ProjectSourceVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProjectSourceVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for a source in the build project. The identifier can only
     * contain alphanumeric characters and underscores, and must be less than 128
     * characters in length. </p>
     */
    inline const Aws::String& GetSourceIdentifier() const { return m_sourceIdentifier; }
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }
    template<typename SourceIdentifierT = Aws::String>
    void SetSourceIdentifier(SourceIdentifierT&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::forward<SourceIdentifierT>(value); }
    template<typename SourceIdentifierT = Aws::String>
    ProjectSourceVersion& WithSourceIdentifier(SourceIdentifierT&& value) { SetSourceIdentifier(std::forward<SourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source version for the corresponding source identifier. If specified,
     * must be one of:</p> <ul> <li> <p>For CodeCommit: the commit ID, branch, or Git
     * tag to use.</p> </li> <li> <p>For GitHub: the commit ID, pull request ID, branch
     * name, or tag name that corresponds to the version of the source code you want to
     * build. If a pull request ID is specified, it must use the format
     * <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If a branch
     * name is specified, the branch's HEAD commit ID is used. If not specified, the
     * default branch's HEAD commit ID is used.</p> </li> <li> <p>For GitLab: the
     * commit ID, branch, or Git tag to use.</p> </li> <li> <p>For Bitbucket: the
     * commit ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a branch name is specified, the branch's HEAD
     * commit ID is used. If not specified, the default branch's HEAD commit ID is
     * used.</p> </li> <li> <p>For Amazon S3: the version ID of the object that
     * represents the build input ZIP file to use.</p> </li> </ul> <p> For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>CodeBuild User Guide</i>. </p>
     */
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    ProjectSourceVersion& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
