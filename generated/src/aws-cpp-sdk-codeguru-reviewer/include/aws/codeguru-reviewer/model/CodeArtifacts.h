/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>Code artifacts are source code artifacts and build artifacts used in a
   * repository analysis or a pull request review.</p> <ul> <li> <p>Source code
   * artifacts are source code files in a Git repository that are compressed into a
   * .zip file.</p> </li> <li> <p>Build artifacts are .jar or .class files that are
   * compressed in a .zip file.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/CodeArtifacts">AWS
   * API Reference</a></p>
   */
  class CodeArtifacts
  {
  public:
    AWS_CODEGURUREVIEWER_API CodeArtifacts() = default;
    AWS_CODEGURUREVIEWER_API CodeArtifacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API CodeArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 object key for a source code .zip file. This is required for all code
     * reviews.</p>
     */
    inline const Aws::String& GetSourceCodeArtifactsObjectKey() const { return m_sourceCodeArtifactsObjectKey; }
    inline bool SourceCodeArtifactsObjectKeyHasBeenSet() const { return m_sourceCodeArtifactsObjectKeyHasBeenSet; }
    template<typename SourceCodeArtifactsObjectKeyT = Aws::String>
    void SetSourceCodeArtifactsObjectKey(SourceCodeArtifactsObjectKeyT&& value) { m_sourceCodeArtifactsObjectKeyHasBeenSet = true; m_sourceCodeArtifactsObjectKey = std::forward<SourceCodeArtifactsObjectKeyT>(value); }
    template<typename SourceCodeArtifactsObjectKeyT = Aws::String>
    CodeArtifacts& WithSourceCodeArtifactsObjectKey(SourceCodeArtifactsObjectKeyT&& value) { SetSourceCodeArtifactsObjectKey(std::forward<SourceCodeArtifactsObjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 object key for a build artifacts .zip file that contains .jar or
     * .class files. This is required for a code review with security analysis. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/working-with-cicd.html">Create
     * code reviews with GitHub Actions</a> in the <i>Amazon CodeGuru Reviewer User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetBuildArtifactsObjectKey() const { return m_buildArtifactsObjectKey; }
    inline bool BuildArtifactsObjectKeyHasBeenSet() const { return m_buildArtifactsObjectKeyHasBeenSet; }
    template<typename BuildArtifactsObjectKeyT = Aws::String>
    void SetBuildArtifactsObjectKey(BuildArtifactsObjectKeyT&& value) { m_buildArtifactsObjectKeyHasBeenSet = true; m_buildArtifactsObjectKey = std::forward<BuildArtifactsObjectKeyT>(value); }
    template<typename BuildArtifactsObjectKeyT = Aws::String>
    CodeArtifacts& WithBuildArtifactsObjectKey(BuildArtifactsObjectKeyT&& value) { SetBuildArtifactsObjectKey(std::forward<BuildArtifactsObjectKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceCodeArtifactsObjectKey;
    bool m_sourceCodeArtifactsObjectKeyHasBeenSet = false;

    Aws::String m_buildArtifactsObjectKey;
    bool m_buildArtifactsObjectKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
