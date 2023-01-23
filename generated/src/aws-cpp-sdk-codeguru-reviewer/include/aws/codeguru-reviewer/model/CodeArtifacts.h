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
    AWS_CODEGURUREVIEWER_API CodeArtifacts();
    AWS_CODEGURUREVIEWER_API CodeArtifacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API CodeArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 object key for a source code .zip file. This is required for all code
     * reviews.</p>
     */
    inline const Aws::String& GetSourceCodeArtifactsObjectKey() const{ return m_sourceCodeArtifactsObjectKey; }

    /**
     * <p>The S3 object key for a source code .zip file. This is required for all code
     * reviews.</p>
     */
    inline bool SourceCodeArtifactsObjectKeyHasBeenSet() const { return m_sourceCodeArtifactsObjectKeyHasBeenSet; }

    /**
     * <p>The S3 object key for a source code .zip file. This is required for all code
     * reviews.</p>
     */
    inline void SetSourceCodeArtifactsObjectKey(const Aws::String& value) { m_sourceCodeArtifactsObjectKeyHasBeenSet = true; m_sourceCodeArtifactsObjectKey = value; }

    /**
     * <p>The S3 object key for a source code .zip file. This is required for all code
     * reviews.</p>
     */
    inline void SetSourceCodeArtifactsObjectKey(Aws::String&& value) { m_sourceCodeArtifactsObjectKeyHasBeenSet = true; m_sourceCodeArtifactsObjectKey = std::move(value); }

    /**
     * <p>The S3 object key for a source code .zip file. This is required for all code
     * reviews.</p>
     */
    inline void SetSourceCodeArtifactsObjectKey(const char* value) { m_sourceCodeArtifactsObjectKeyHasBeenSet = true; m_sourceCodeArtifactsObjectKey.assign(value); }

    /**
     * <p>The S3 object key for a source code .zip file. This is required for all code
     * reviews.</p>
     */
    inline CodeArtifacts& WithSourceCodeArtifactsObjectKey(const Aws::String& value) { SetSourceCodeArtifactsObjectKey(value); return *this;}

    /**
     * <p>The S3 object key for a source code .zip file. This is required for all code
     * reviews.</p>
     */
    inline CodeArtifacts& WithSourceCodeArtifactsObjectKey(Aws::String&& value) { SetSourceCodeArtifactsObjectKey(std::move(value)); return *this;}

    /**
     * <p>The S3 object key for a source code .zip file. This is required for all code
     * reviews.</p>
     */
    inline CodeArtifacts& WithSourceCodeArtifactsObjectKey(const char* value) { SetSourceCodeArtifactsObjectKey(value); return *this;}


    /**
     * <p>The S3 object key for a build artifacts .zip file that contains .jar or
     * .class files. This is required for a code review with security analysis. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/working-with-cicd.html">Create
     * code reviews with GitHub Actions</a> in the <i>Amazon CodeGuru Reviewer User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetBuildArtifactsObjectKey() const{ return m_buildArtifactsObjectKey; }

    /**
     * <p>The S3 object key for a build artifacts .zip file that contains .jar or
     * .class files. This is required for a code review with security analysis. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/working-with-cicd.html">Create
     * code reviews with GitHub Actions</a> in the <i>Amazon CodeGuru Reviewer User
     * Guide</i>.</p>
     */
    inline bool BuildArtifactsObjectKeyHasBeenSet() const { return m_buildArtifactsObjectKeyHasBeenSet; }

    /**
     * <p>The S3 object key for a build artifacts .zip file that contains .jar or
     * .class files. This is required for a code review with security analysis. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/working-with-cicd.html">Create
     * code reviews with GitHub Actions</a> in the <i>Amazon CodeGuru Reviewer User
     * Guide</i>.</p>
     */
    inline void SetBuildArtifactsObjectKey(const Aws::String& value) { m_buildArtifactsObjectKeyHasBeenSet = true; m_buildArtifactsObjectKey = value; }

    /**
     * <p>The S3 object key for a build artifacts .zip file that contains .jar or
     * .class files. This is required for a code review with security analysis. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/working-with-cicd.html">Create
     * code reviews with GitHub Actions</a> in the <i>Amazon CodeGuru Reviewer User
     * Guide</i>.</p>
     */
    inline void SetBuildArtifactsObjectKey(Aws::String&& value) { m_buildArtifactsObjectKeyHasBeenSet = true; m_buildArtifactsObjectKey = std::move(value); }

    /**
     * <p>The S3 object key for a build artifacts .zip file that contains .jar or
     * .class files. This is required for a code review with security analysis. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/working-with-cicd.html">Create
     * code reviews with GitHub Actions</a> in the <i>Amazon CodeGuru Reviewer User
     * Guide</i>.</p>
     */
    inline void SetBuildArtifactsObjectKey(const char* value) { m_buildArtifactsObjectKeyHasBeenSet = true; m_buildArtifactsObjectKey.assign(value); }

    /**
     * <p>The S3 object key for a build artifacts .zip file that contains .jar or
     * .class files. This is required for a code review with security analysis. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/working-with-cicd.html">Create
     * code reviews with GitHub Actions</a> in the <i>Amazon CodeGuru Reviewer User
     * Guide</i>.</p>
     */
    inline CodeArtifacts& WithBuildArtifactsObjectKey(const Aws::String& value) { SetBuildArtifactsObjectKey(value); return *this;}

    /**
     * <p>The S3 object key for a build artifacts .zip file that contains .jar or
     * .class files. This is required for a code review with security analysis. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/working-with-cicd.html">Create
     * code reviews with GitHub Actions</a> in the <i>Amazon CodeGuru Reviewer User
     * Guide</i>.</p>
     */
    inline CodeArtifacts& WithBuildArtifactsObjectKey(Aws::String&& value) { SetBuildArtifactsObjectKey(std::move(value)); return *this;}

    /**
     * <p>The S3 object key for a build artifacts .zip file that contains .jar or
     * .class files. This is required for a code review with security analysis. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/working-with-cicd.html">Create
     * code reviews with GitHub Actions</a> in the <i>Amazon CodeGuru Reviewer User
     * Guide</i>.</p>
     */
    inline CodeArtifacts& WithBuildArtifactsObjectKey(const char* value) { SetBuildArtifactsObjectKey(value); return *this;}

  private:

    Aws::String m_sourceCodeArtifactsObjectKey;
    bool m_sourceCodeArtifactsObjectKeyHasBeenSet = false;

    Aws::String m_buildArtifactsObjectKey;
    bool m_buildArtifactsObjectKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
