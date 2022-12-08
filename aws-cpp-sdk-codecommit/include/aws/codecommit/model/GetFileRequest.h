/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class GetFileRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API GetFileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFile"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline GetFileRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline GetFileRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline GetFileRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The fully quaified reference that identifies the commit that contains the
     * file. For example, you can specify a full commit ID, a tag, a branch name, or a
     * reference such as refs/heads/master. If none is provided, the head commit is
     * used.</p>
     */
    inline const Aws::String& GetCommitSpecifier() const{ return m_commitSpecifier; }

    /**
     * <p>The fully quaified reference that identifies the commit that contains the
     * file. For example, you can specify a full commit ID, a tag, a branch name, or a
     * reference such as refs/heads/master. If none is provided, the head commit is
     * used.</p>
     */
    inline bool CommitSpecifierHasBeenSet() const { return m_commitSpecifierHasBeenSet; }

    /**
     * <p>The fully quaified reference that identifies the commit that contains the
     * file. For example, you can specify a full commit ID, a tag, a branch name, or a
     * reference such as refs/heads/master. If none is provided, the head commit is
     * used.</p>
     */
    inline void SetCommitSpecifier(const Aws::String& value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier = value; }

    /**
     * <p>The fully quaified reference that identifies the commit that contains the
     * file. For example, you can specify a full commit ID, a tag, a branch name, or a
     * reference such as refs/heads/master. If none is provided, the head commit is
     * used.</p>
     */
    inline void SetCommitSpecifier(Aws::String&& value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier = std::move(value); }

    /**
     * <p>The fully quaified reference that identifies the commit that contains the
     * file. For example, you can specify a full commit ID, a tag, a branch name, or a
     * reference such as refs/heads/master. If none is provided, the head commit is
     * used.</p>
     */
    inline void SetCommitSpecifier(const char* value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier.assign(value); }

    /**
     * <p>The fully quaified reference that identifies the commit that contains the
     * file. For example, you can specify a full commit ID, a tag, a branch name, or a
     * reference such as refs/heads/master. If none is provided, the head commit is
     * used.</p>
     */
    inline GetFileRequest& WithCommitSpecifier(const Aws::String& value) { SetCommitSpecifier(value); return *this;}

    /**
     * <p>The fully quaified reference that identifies the commit that contains the
     * file. For example, you can specify a full commit ID, a tag, a branch name, or a
     * reference such as refs/heads/master. If none is provided, the head commit is
     * used.</p>
     */
    inline GetFileRequest& WithCommitSpecifier(Aws::String&& value) { SetCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>The fully quaified reference that identifies the commit that contains the
     * file. For example, you can specify a full commit ID, a tag, a branch name, or a
     * reference such as refs/heads/master. If none is provided, the head commit is
     * used.</p>
     */
    inline GetFileRequest& WithCommitSpecifier(const char* value) { SetCommitSpecifier(value); return *this;}


    /**
     * <p>The fully qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The fully qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The fully qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The fully qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The fully qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The fully qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline GetFileRequest& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The fully qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline GetFileRequest& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The fully qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline GetFileRequest& WithFilePath(const char* value) { SetFilePath(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_commitSpecifier;
    bool m_commitSpecifierHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
